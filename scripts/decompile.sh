#!/bin/sh
set -eu
cd "$(dirname "$0")/.."
mkdir -p .tools/jadx-config .tools/jadx-cache .tools/jadx-tmp reports
python3 - <<'EXTRACT'
from pathlib import Path
import zipfile
with zipfile.ZipFile('ZombieCafe-JP-English-v0.1.apk') as apk:
    target=Path('recovered/apk').resolve()
    for entry in apk.infolist():
        if not (target/entry.filename).resolve().is_relative_to(target):
            raise ValueError('Unsafe archive entry: '+entry.filename)
    apk.extractall(target)
EXTRACT
java -jar .tools/apktool.jar d -f -p .tools/apktool-framework -o recovered/android ZombieCafe-JP-English-v0.1.apk > reports/apktool.log 2>&1
JADX_CONFIG_DIR="$PWD/.tools/jadx-config" JADX_CACHE_DIR="$PWD/.tools/jadx-cache" JADX_TMP_DIR="$PWD/.tools/jadx-tmp" .tools/jadx/bin/jadx -d recovered/java recovered/apk/classes.dex > reports/jadx.log 2>&1
