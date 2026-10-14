#!/usr/bin/env python3
"""Export APK assets to browser-friendly PNG and JSON; preserve raw inputs."""
import hashlib, json, struct, zlib
from pathlib import Path
from PIL import Image
ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT / 'recovered/apk'
OUT = ROOT / 'recovered/web-assets'

def write_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, ensure_ascii=False) + '\n')

def main():
    inventory=[]
    for p in sorted(SRC.rglob('*')):
        if not p.is_file(): continue
        b=p.read_bytes()
        item=dict(path=str(p.relative_to(SRC)), bytes=len(b), sha256=hashlib.sha256(b).hexdigest())
        if b.startswith(b'\x89PNG'):
            with Image.open(p) as im: item['dimensions']=list(im.size)
        inventory.append(item)
    write_json(ROOT/'reports/apk-inventory.json',inventory)
    text_source=SRC/'assets/data/strings.bin.mid'
    text_bytes=text_source.read_bytes()
    text_bytes.decode('utf-8')  # Validate text without changing escapes or line endings.
    (OUT/'data').mkdir(parents=True,exist_ok=True)
    (OUT/'data/strings.txt').write_bytes(text_bytes)
    textures=[]
    for p in sorted((SRC/'assets/images').glob('*.cct.mid')):
        b=p.read_bytes()
        magic,fmt,w,h,a,c,size=struct.unpack('<4s6I',b[:28])
        assert magic==b'CCTX' and fmt==2 and a==0 and c==0, p
        assert size==len(b)-28, p
        raw=zlib.decompress(b[28:]); assert len(raw)==w*h*2, p
        # OpenGL GL_UNSIGNED_SHORT_4_4_4_4: R in high nibble, A in low nibble.
        rgba=bytearray(w*h*4)
        lo,hi=raw[0::2],raw[1::2]
        high=bytes((v>>4)*17 for v in range(256))
        low=bytes((v&15)*17 for v in range(256))
        rgba[0::4]=hi.translate(high); rgba[1::4]=hi.translate(low)
        rgba[2::4]=lo.translate(high); rgba[3::4]=lo.translate(low)
        target=OUT/'textures'/(p.name.removesuffix('.cct.mid')+'.png')
        target.parent.mkdir(parents=True,exist_ok=True)
        Image.frombytes('RGBA',(w,h),bytes(rgba)).save(target)
        textures.append(dict(source=str(p.relative_to(SRC)),png=str(target.relative_to(OUT)),width=w,height=h,format='RGBA4444'))
    write_json(OUT/'textures.json',textures)
    atlases=[]
    for p in sorted((SRC/'assets/images').glob('*Offsets*')):
        b=p.read_bytes(); version,count=struct.unpack_from('>BH',b); offset=3; entries=[]
        assert version in (1,2), p
        for i in range(count):
            name=None
            if version==2:
                n=struct.unpack_from('>H',b,offset)[0];offset+=2
                name=b[offset:offset+n].decode('utf-8');offset+=n
            vals=struct.unpack_from('>4H',b,offset);offset+=8
            entry=dict(index=i,x=vals[0],y=vals[1],width=vals[2],height=vals[3])
            if name is not None:
                extra=struct.unpack_from('>4h',b,offset);offset+=8
                entry.update(name=name,extra=list(extra))
            entries.append(entry)
        assert offset==len(b),(p,offset,len(b))
        dest='atlases/'+p.name+'.json'
        write_json(OUT/dest,dict(source=str(p.relative_to(SRC)),version=version,count=count,entries=entries,
            note='extra fields are preserved signed shorts; see native atlas loader for semantics.'))
        atlases.append(dict(source=p.name,json=dest,count=count,version=version))
    write_json(OUT/'atlases.json',atlases)
    print(f'Inventoried {len(inventory)} files; decoded {len(textures)} textures and {len(atlases)} atlas files.')
if __name__=='__main__': main()
