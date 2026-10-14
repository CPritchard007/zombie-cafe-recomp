#!/usr/bin/env python3
"""Export every furniture sprite, character form, UI region and native toon track."""
from pathlib import Path
import json,shutil,struct
from PIL import Image
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'web/dist/assets/original';OUT.mkdir(parents=True,exist_ok=True)
def atlas(name):return json.loads((ROOT/'recovered/web-assets/atlases'/name).read_text())['entries']
def dump(name,obj):(OUT/name).write_text(json.dumps(obj,separators=(',',':'),ensure_ascii=False)+'\n')
for stem,source in [('title','menutitleimages.png'),('ui','ingameUiImages.png'),('menu','menuimages.png'),('dialog','dialogImages.png')]:
 offset={'title':'menuTitle','ui':'ingameUi','menu':'menu','dialog':'dialog'}[stem]
 entries=atlas(offset+'Offsets.bin.mid.json');im=Image.open(ROOT/'recovered/apk/assets/images'/source)
 folder=OUT/stem;folder.mkdir(exist_ok=True)
 for e in entries:im.crop((e['x'],e['y'],e['x']+e['width'],e['y']+e['height'])).save(folder/f"{e['index']}.png")
 dump(stem+'.json',entries)
shutil.copy(ROOT/'recovered/apk/assets/images/loading.png',OUT/'loading.png')
shutil.copy(ROOT/'recovered/apk/assets/images/Default-72A.png',OUT/'splash.png')
manifest={}
for sheet in range(3):
 suffix=str(sheet+1) if sheet else '';im=Image.open(ROOT/f'recovered/web-assets/textures/furniture{suffix}.png')
 shutil.copy(ROOT/f'recovered/web-assets/textures/furniture{suffix}.png',OUT/f'furniture-sheet-{sheet}.png')
 folder=OUT/'furniture';folder.mkdir(exist_ok=True)
 for e in atlas(f'furnitureOffsets{suffix}.bin.mid.json'):
  key=f"{sheet}-{e['index']}";im.crop((e['x'],e['y'],e['x']+e['width'],e['y']+e['height'])).save(folder/f'{key}.png');manifest[key]={**e,'url':f'assets/original/furniture/{key}.png'}
dump('furniture-sprites.json',manifest)
shutil.copy(ROOT/'recovered/web-assets/data/furniture.json',OUT/'furniture-data.json')
forms=[];parts=[]
for sheet in range(5):
 suffix=str(sheet+1) if sheet else '';b=(ROOT/f'recovered/apk/assets/data/characterArt{suffix}.bin.mid').read_bytes();count=b[0];p=1;names=[]
 while True:
  n=struct.unpack_from('>H',b,p)[0];p+=2
  if not n:break
  names.append(b[p:p+n].decode());p+=n
 assert p==len(b)
 entries=atlas(f'characterOffsets{suffix}.bin.mid.json');assert len(entries)==len(names)*count
 parts.append([[e['x'],e['y'],e['width'],e['height'],*e['extra']] for e in entries])
 for i,name in enumerate(names):forms.append({'id':f'{sheet}:{i}','name':name,'sheet':sheet,'base':i*count,'parts':count})
 shutil.copy(ROOT/f'recovered/web-assets/textures/characterParts{suffix}.png',OUT/f'characters-{sheet}.png')
dump('characters.json',{'forms':forms,'atlases':parts})
animations={}
for path in sorted((ROOT/'recovered/apk/assets/data/animation').glob('*.bin.mid')):
 b=path.read_bytes();header=struct.unpack_from('<11I',b);n=header[2];orders=header[4];p=44
 nodes=[struct.unpack_from('<12f4i',b,p+i*64) for i in range(n)];p+=n*64
 order_headers=[struct.unpack_from('<fI',b,p+i*8) for i in range(orders)];p+=orders*8
 layers=[]
 for h in order_headers:layers.append({'frame':h[0],'order':list(struct.unpack_from('<'+str(n)+'I',b,p))});p+=n*4
 tracks_headers=[struct.unpack_from('<2I',b,p+i*8) for i in range(n)];p+=n*8;tracks=[]
 for h in tracks_headers:
  tracks.append([list(struct.unpack_from('<6fIi',b,p+i*32)) for i in range(h[0])]);p+=h[0]*32
 assert p==len(b),(path,p,len(b))
 animations[path.name.removesuffix('.bin.mid')]={'fps':header[1],'frames':header[7],'parents':[v[12] if i else -1 for i,v in enumerate(nodes)],'layers':layers,'tracks':tracks}
dump('animations.json',animations)
print('Exported',len(manifest),'furniture sprites,',len(forms),'character forms and',len(animations),'native animations')
