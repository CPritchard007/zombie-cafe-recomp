#!/usr/bin/env python3
"""Decode packaged furniture records using FurnitureData::FurnitureData's read order."""
import json,struct
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
class Reader:
 def __init__(self,b):self.b=b;self.p=0
 def take(self,f):
  v=struct.unpack_from(f,self.b,self.p);self.p+=struct.calcsize(f);return v[0] if len(v)==1 else list(v)
 def text(self):
  n=self.take('>H');v=self.b[self.p:self.p+n].decode('utf8');self.p+=n;return v
r=Reader((ROOT/'recovered/apk/assets/data/furnitureData.bin.mid').read_bytes());count=r.take('>I');items=[]
fields=[('price','>i'),('premium','>?'),('width','>B'),('depth','>B'),('sprites','>4h'),('type','>B'),('field_45','>b'),('field_48','>i'),('field_4c','>4h'),('field_54','<f'),('field_58','>i'),('sheet','>B'),('field_60','<f'),('description','text'),('field_6c','<f'),('field_70','>?'),('field_74','<f'),('field_78','>B'),('field_79','>B'),('field_7c','<f')]
for i in range(count):
 item={'id':i,'field_28':r.take('>B'),'name':r.text()}
 for key,fmt in fields:item[key]=r.text() if fmt=='text' else r.take(fmt)
 items.append(item)
assert r.p==len(r.b),(r.p,len(r.b))
p=ROOT/'recovered/web-assets/data/furniture.json';p.write_text(json.dumps({'source':'furnitureData.bin.mid','count':count,'items':items},ensure_ascii=False,indent=2)+'\n')
print('Decoded',count,'furniture records;',r.p,'bytes, exact EOF')
from collections import Counter
print('Types:',Counter(i['type'] for i in items));print('Sheets:',Counter(i['sheet'] for i in items))
for i in items[:20]:print(i['id'],i['name'],i['price'],i['type'],i['sheet'],i['sprites'])
