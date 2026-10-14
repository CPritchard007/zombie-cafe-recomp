#!/usr/bin/env python3
from pathlib import Path
import json,re
root=Path(__file__).resolve().parents[1]/'web/dist'
def runtime_file(path):
 return path.is_file() and not any(part.startswith('.') for part in path.relative_to(root).parts)

core={'./','./index.html','./assets/recipes.json','./assets/original/furniture-data.json','./assets/thunder.ttf','./site.webmanifest'}
core.update('./'+str(p.relative_to(root)) for p in (root/'assets/metadata').glob('*') if runtime_file(p) and p.name!='icon-source.png')
core.update('./'+p.name for p in root.iterdir() if runtime_file(p) and p.suffix in ('.js','.css') and p.name!='sw.js')
core.update('./'+str(p.relative_to(root)) for p in (root/'assets/startup').glob('*') if runtime_file(p))
for p in [root/'index.html',*root.glob('*.css')]:
 text=p.read_text()
 core.update('./'+url for url in re.findall(r'(?:src=[\"\']|url\([\"\']?)(assets/[^\"\'\)]+)',text) if not url.endswith('.ogg'))
core.update('./assets/original/furniture/0-'+str(i)+'.png' for i in [45,66,83,84,105,116,117,118,119,121,122,123,267,274,280,285,301,322,*range(138,163)])
(root/'offline-core.json').write_text(json.dumps(sorted(core),indent=2)+'\n')
files=['./']+['./'+str(p.relative_to(root)) for p in sorted(root.rglob('*')) if runtime_file(p) and p.name not in ('sw.js','offline-assets.json')]
(root/'offline-assets.json').write_text(json.dumps(files,indent=2)+'\n')
print('Offline manifest:',len(files),'files')
