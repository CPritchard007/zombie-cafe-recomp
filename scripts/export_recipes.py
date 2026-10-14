#!/usr/bin/env python3
"""Decode foodData using native Recipe::deserialize at 0x00228f3a."""
import json, struct
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
b=(ROOT/'recovered/apk/assets/data/foodData.bin.mid').read_bytes()
count=b[0]; offset=1; rows=[]
for i in range(count):
    n=struct.unpack_from('>H',b,offset)[0]; offset+=2
    name=b[offset:offset+n].decode('utf-8'); offset+=n
    values=struct.unpack_from('>hbhhhhhbb',b,offset); offset+=15
    cost,level,minutes,servings,price,xp,image_id,flag1,flag2=values
    rows.append(dict(id=i,name=name,baseCost=cost,field_0x16=level,cookMinutes=minutes,
                     baseServings=servings,baseSellPrice=price,baseXp=xp,
                     field_0x14=image_id,field_0x17=flag1,field_0x18=flag2))
assert offset==len(b),(offset,len(b))
out=ROOT/'recovered/web-assets/data/recipes.json';out.parent.mkdir(parents=True,exist_ok=True)
out.write_text(json.dumps(dict(source='assets/data/foodData.bin.mid',count=count,
    note='Base values, before recipe variant modifiers. Unknown field semantics retained as struct offsets. field_0x16 appears to be unlock level and field_0x14 an image index; confirm at call sites.',
    recipes=rows),indent=2,ensure_ascii=False)+'\n')
print(f'Decoded {count} recipes; consumed all {len(b)} bytes.')
