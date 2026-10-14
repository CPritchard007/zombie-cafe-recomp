#!/usr/bin/env python3
"""Inventory endpoint literals and native references without contacting any service."""
import re,struct,json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];data=(ROOT/'recovered/apk/lib/armeabi/libZombieCafeAndroid.so').read_bytes()
phoff=struct.unpack_from('<I',data,28)[0];entsize,num=struct.unpack_from('<HH',data,42);segments=[]
for i in range(num):
 typ,off,va,pa,filesz,memsz,flags,align=struct.unpack_from('<8I',data,phoff+i*entsize)
 if typ==1:segments.append((va,off,filesz))
def read_va(va,n):
 for base,off,size in segments:
  if base<=va and va+n<=base+size:return data[off+va-base:off+va-base+n]
 return b''
def string_at(va):
 b=read_va(va,1)
 if not b:return None
 for base,off,size in segments:
  if base<=va<base+size:
   start=off+va-base;end=data.find(b'\0',start,min(start+2048,len(data)))
   if end<0:return None
   try:return data[start:end].decode('utf8')
   except UnicodeDecodeError:return None
literal_map={}
for match in re.finditer(rb'[\x20-\x7e]{5,}',data):
 s=match.group().decode()
 if re.search(r'https?://|%s/[^ ]*\.(?:php|asp)',s):
  literal_map[s]={'literal':s,'elf_file_offset':hex(match.start()),'references':[]}
for p in (ROOT/'recovered/native/functions').glob('*.c'):
 text=p.read_text()
 for dat,base in re.findall(r'DAT_([0-9a-f]+)\s*\+\s*(0x[0-9a-f]+)',text):
  raw=read_va(int(dat,16)-0x10000,4)
  if len(raw)!=4:continue
  target=(struct.unpack('<I',raw)[0]+int(base,16)-0x10000)&0xffffffff;s=string_at(target)
  if s in literal_map:
   ref=str(p.relative_to(ROOT))
   if ref not in literal_map[s]['references']:literal_map[s]['references'].append(ref)
# Inventory only URL structures; embedded publisher auth material is intentionally excluded.
result=list(literal_map.values())
(ROOT/'reports/backend/endpoint-inventory.json').write_text(json.dumps(result,indent=2)+'\n')
for r in result:
 if '.php' in r['literal'] and ('%s/' in r['literal'] or any(x in r['literal'] for x in ('getGameInfo','getEntry','getServerTime','getCurrentEvent'))):print(r['literal'][:250], '\n ',','.join(Path(x).name for x in r['references'])[:300])
print('Total endpoint/URL literals:',len(result))
