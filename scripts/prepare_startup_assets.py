#!/usr/bin/env python3
"""Pack only live café characters/clips; keep the full collection available on demand."""
from pathlib import Path
import json
from PIL import Image
root=Path(__file__).resolve().parents[1]/'web/dist/assets'
source=root/'original';out=root/'startup';out.mkdir(exist_ok=True)
catalog=json.loads((source/'characters.json').read_text());animations=json.loads((source/'animations.json').read_text())
names=['generic-human','oldman-human','businessman-human','chef-zombie'];forms=[];entries=[];tiles=[];x=y=row=0
sheets={}
for name in names:
 form=next(f for f in catalog['forms'] if f['name']==name);forms.append({**form,'sheet':0,'base':len(entries)})
 if form['sheet'] not in sheets:sheets[form['sheet']]=Image.open(source/f"characters-{form['sheet']}.png").convert('RGBA')
 for entry in catalog['atlases'][form['sheet']][form['base']:form['base']+form['parts']]:
  sx,sy,w,h,*anchor=entry
  if x+w>512:x=0;y+=row+2;row=0
  entries.append([x,y,w,h,*anchor]);tiles.append((sheets[form['sheet']].crop((sx,sy,sx+w,sy+h)),(x,y)));x+=w+2;row=max(row,h)
image=Image.new('RGBA',(512,y+row))
for tile,position in tiles:image.paste(tile,position)
image.save(out/'characters.png',optimize=True)
(out/'characters.json').write_text(json.dumps({'forms':forms,'atlases':[entries]},separators=(',',':'))+'\n')
clips={mode+direction:animations[mode+direction] for mode in ['idle','walk','sit','eat','carry','serve'] for direction in ['SW','NW']}
(out/'animations.json').write_text(json.dumps(clips,separators=(',',':'))+'\n')
print('Starter character bundle:',sum(p.stat().st_size for p in out.iterdir()),'bytes; 4 forms, 12 clips, 1 small texture')
