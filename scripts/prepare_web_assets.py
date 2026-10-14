#!/usr/bin/env python3
"""Package a small, traceable subset of recovered art for the web client."""
from pathlib import Path
import json, shutil
from PIL import Image
ROOT=Path(__file__).resolve().parents[1]; OUT=ROOT/'web/dist/assets'
OUT.mkdir(parents=True,exist_ok=True)
def atlas(n): return json.loads((ROOT/'recovered/web-assets/atlases'/n).read_text())['entries']
furn=atlas('furnitureOffsets.bin.mid.json'); src=Image.open(ROOT/'recovered/web-assets/textures/furniture.png')
ids=[0,2,5,9,29,81,82,84,92,107,114,122,124,186,263,271,274,275,278,285,288,301,322,330,331,334,343,344,363,375]
manifest={}
for i in ids:
 e=furn[i]; p=OUT/'furniture'/f'{i}.png';p.parent.mkdir(exist_ok=True)
 src.crop((e['x'],e['y'],e['x']+e['width'],e['y']+e['height'])).save(p)
 manifest[str(i)]={**e,'url':f'assets/furniture/{i}.png'}
(OUT/'furniture.json').write_text(json.dumps(manifest))
recipes=json.loads((ROOT/'recovered/web-assets/data/recipes.json').read_text())['recipes']
ra=atlas('recipeOffsets.bin.mid.json');rs=Image.open(ROOT/'recovered/web-assets/textures/recipeImages.png')
for r in recipes:
 idx=r['field_0x14'];e=ra[idx];p=OUT/'recipes'/f'{idx}.png';p.parent.mkdir(exist_ok=True)
 rs.crop((e['x'],e['y'],e['x']+e['width'],e['y']+e['height'])).save(p)
(OUT/'recipes.json').write_text(json.dumps(recipes,ensure_ascii=False))
# Temporary web character rigs composed from original parts, not decoded native animations.
ca=atlas('characterOffsets.bin.mid.json');cs=Image.open(ROOT/'recovered/web-assets/textures/characterParts.png')
for variant,base in enumerate([0,54,108,162]):
 im=Image.new('RGBA',(100,145))
 for index,x,y in [(24,40,99),(25,42,116),(19,55,100),(20,56,117),(21,41,88),(22,33,67),(23,29,87),(26,40,58),(17,62,65),(18,65,84),(16,15,7)]:
  e=ca[base+index];crop=cs.crop((e['x'],e['y'],e['x']+e['width'],e['y']+e['height']));im.alpha_composite(crop,(x,y))
 im.save(OUT/f'guest-{variant}.png')
shutil.copy(ROOT/'recovered/apk/assets/images/zombieChef2.png',OUT/'chef.png')
shutil.copy(ROOT/'recovered/apk/assets/data/A Love of Thunder.ttf',OUT/'thunder.ttf')
shutil.copy(ROOT/'recovered/apk/assets/Music/Zombie Theme V1.ogg',OUT/'theme.ogg')
(OUT/'provenance.json').write_text(json.dumps({'source':'ZombieCafe-JP-English-v0.1.apk','furniture':'furniture.cct.mid and furnitureOffsets.bin.mid','recipes':'foodData.bin.mid and recipeImages.cct.mid','characters':'Original character parts assembled in temporary web rigs. Native animation is not yet ported.','rights':'Original assets belong to their respective owners.'},indent=2))
print(f'Prepared {len(ids)} furniture sprites, {len(recipes)} recipes and 4 temporary character rigs.')
