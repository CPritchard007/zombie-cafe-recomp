"""Export metadata images from original APK artwork, with no generated imagery."""
from pathlib import Path
from PIL import Image
import shutil
root=Path(__file__).resolve().parents[1]
out=root/'web/dist/assets/metadata'
out.mkdir(exist_ok=True)
source=root/'recovered/android/res/drawable/game_icon.png'
shutil.copy2(source,out/'original-app-icon.png')
with Image.open(source) as icon:
 for size,name in [(32,'original-favicon-32.png'),(180,'original-apple-touch-icon.png'),(192,'original-icon-192.png'),(512,'original-icon-512.png')]:
  icon.resize((size,size),Image.Resampling.LANCZOS).save(out/name)
# Match the game's title-stage layout: logo at 43% x / 2% y, width 54%.
with Image.open(root/'web/dist/assets/original/title/0.png') as source:
 title=source.convert('RGBA')
with Image.open(root/'web/dist/assets/original/title/2.png') as source:
 logo=source.convert('RGBA');w=round(title.width*.54)
 logo=logo.resize((w,round(logo.height*w/logo.width)),Image.Resampling.LANCZOS)
 title.alpha_composite(logo,(round(title.width*.43),round(title.height*.02)))
# Preserve the whole original 4:3 screen within the social preview, without cropping.
preview=Image.new('RGB',(1200,630),(22,54,60))
title=title.resize((840,630),Image.Resampling.LANCZOS)
preview.paste(title,(180,0),title)
preview.save(out/'original-title-preview.png',optimize=True)
