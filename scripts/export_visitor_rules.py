#!/usr/bin/env python3
"""Read the contiguous constants range using the recovered Constants::load field order."""
import json,re,struct
from pathlib import Path
root=Path(__file__).resolve().parents[1]
b=(root/'recovered/apk/assets/data/constants.bin.mid').read_bytes()
s=(root/'recovered/native/functions/000e2af4_Constants__load.c').read_text()
s=s[s.index('  Cafe_TILE_COUNT_X ='):s.index('  GameStateCafe_FRIEND_TOXIN_NUM_LEVELS =')]
p=389;count=None;values={}
for line in s.splitlines():
 m=re.search(r'(?:(\w+) = )?DataInputStream::read(Int|Short|Byte|Float|UTF)\(',line)
 if not m:continue
 name,kind=m.groups()
 if kind=='UTF':
  n=struct.unpack_from('>H',b,p)[0];p+=2+n;continue
 fmt={'Int':'i','Short':'h','Byte':'B','Float':'f'}[kind];size=struct.calcsize(fmt)
 if name and name.startswith(('iVar','uVar')):
  if count is None:
   assert kind=='Short';count=struct.unpack_from('>h',b,p)[0];p+=2
   assert 0<=count<1000
  else:p+=count*size;count=None
 else:
  values[name]={'offset':p,'value':struct.unpack_from(('<' if kind=='Float' else '>')+fmt,b,p)[0]};p+=size
assert values['CafeTile_TYPE_SIDEWALK']['value']==117
assert values['CafeWall_DOOR_CLOSED']['value']==122
out={k:v for k,v in values.items() if k.startswith(('EatTask_','GameStateCafe_')) and any(w in k for w in ('CUSTOMER','RATING','EAT_TIME')) or k.startswith('EatTask_')}
(root/'reports/visitor-constants.json').write_text(json.dumps(out,indent=2)+'\n')
print(json.dumps(out,indent=2))
