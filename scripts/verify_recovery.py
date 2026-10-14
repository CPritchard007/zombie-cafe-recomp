#!/usr/bin/env python3
"""Check actual recovered artifacts against the source APK."""
import hashlib, json, zipfile
from pathlib import Path
from PIL import Image
ROOT=Path(__file__).resolve().parents[1]
original=ROOT/'ZombieCafe-JP-English-v0.1.apk'
with zipfile.ZipFile(original) as z, zipfile.ZipFile(ROOT/'recovered/ZombieCafe-rebuilt-debug.apk') as rebuilt:
    entries=[n for n in z.namelist() if not n.endswith('/')]
    assert z.testzip() is None
    assert rebuilt.testzip() is None
    for name in entries:
        assert (ROOT/'recovered/apk'/name).read_bytes()==z.read(name),name
    preserved=[n for n in entries if n.startswith(('assets/','lib/'))]
    for name in preserved:
        assert rebuilt.read(name)==z.read(name),name
base=ROOT/'recovered/web-assets'
textures=json.loads((base/'textures.json').read_text())
for t in textures:
    with Image.open(base/t['png']) as image:
        assert image.size==(t['width'],t['height'])
        image.verify()
atlases=json.loads((base/'atlases.json').read_text())
for a in atlases:
    data=json.loads((base/a['json']).read_text())
    assert len(data['entries'])==data['count']==a['count']
recipes=json.loads((base/'data/recipes.json').read_text())
assert len(recipes['recipes'])==recipes['count']==234
report=dict(original_apk_sha256=hashlib.sha256(original.read_bytes()).hexdigest(),
    original_entries=len(entries),java_files=len(list((ROOT/'recovered/java').rglob('*.java'))),
    smali_files=len(list((ROOT/'recovered/android').rglob('*.smali'))),
    preserved_assets_and_libraries=len(preserved),mismatches=[],
    png_integrity_checks=len(textures),atlas_count_checks=len(atlases),recipe_count=recipes['count'],
    runtime_tested=False)
(ROOT/'reports/recovery-validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
