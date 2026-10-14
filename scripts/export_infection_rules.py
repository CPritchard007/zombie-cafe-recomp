"""Extract infection prices, forms and worker caps from the APK's data."""
import json,re,struct
from pathlib import Path
root=Path(__file__).resolve().parents[1]
b=(root/'recovered/apk/assets/data/constants.bin.mid').read_bytes()
s=(root/'recovered/native/functions/000e2af4_Constants__load.c').read_text();s=s[s.index('  Cafe_TILE_COUNT_X ='):s.index('  ZombieCafe_enemyReopenDurations =')]
p=389;values={};count=None;array=None
for line in s.splitlines():
 if 'operator_new__' in line:
  m=re.search(r'(\w+) = .*operator_new__',line)
  if m:array=m[1]
 m=re.search(r'(?:(\w+) = )?DataInputStream::read(Int|Short|Byte|Float|UTF|Long)\(',line)
 if not m:continue
 name,kind=m.groups()
 if kind=='UTF':n=struct.unpack_from('>H',b,p)[0];p+=2+n;continue
 fmt={'Int':'>i','Short':'>h','Byte':'>B','Float':'<f','Long':'>q'}[kind];size=struct.calcsize(fmt)
 if name and name.startswith(('iVar','uVar')):
  if count is None:
   assert kind=='Short',(name,kind,p)
   count=struct.unpack_from('>h',b,p)[0];p+=2
   assert 0<=count<1000,(name,p,count)
  else:
   items=[struct.unpack_from(fmt,b,p+i*size)[0] for i in range(count)]
   if array:values[array]={'offset':p,'value':items}
   p+=count*size;count=None;array=None
 else:values[name]={'offset':p,'value':struct.unpack_from(fmt,b,p)[0]};p+=size
print({k:v for k,v in values.items() if k in ['ZombieCafe_zombieCaps','ZombieCafe_MAX_LEVEL','GameStateCafe_INSTANT_INFECT','InfectTask_ZOMBIE_START_ENERGY']})
forms=json.loads((root/'web/dist/assets/original/characters.json').read_text())['forms'];byname={f['name']:f['id'] for f in forms}
rows=json.loads((root/'reports/customer-records.json').read_text())['records']
rules=[dict(id=r['id'],cost=r['int'],currency='toxin' if r['bytes'][0] else 'coins',form=byname.get((r['name2'] or r['art'])+'-zombie'),bodyForm=byname.get(r['art']+'-zombie')) for r in rows]
assert all(r['cost']>=0 for r in rules)
caps=values['ZombieCafe_zombieCaps']['value'];assert len(caps)>20 and all(1<=n<=32 for n in caps)
(root/'web/dist/infection-rules.js').write_text('// Generated from original APK data by scripts/export_infection_rules.py.\nexport const ZOMBIE_CAPS='+json.dumps(caps)+';\nexport const INFECTION_RULES='+json.dumps(rules,separators=(',',':'))+';\n')
