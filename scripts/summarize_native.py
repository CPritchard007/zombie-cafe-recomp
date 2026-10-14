#!/usr/bin/env python3
"""Summarize Ghidra export completeness and warnings; never imply source recovery."""
import collections,csv,json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
base=ROOT/'recovered/native/functions'
rows=list(csv.DictReader((base/'functions.tsv').open(),delimiter='\t'))
failures=[r for r in rows if r['status']!='ok']
warnings=[]
classes=collections.Counter()
for row in rows:
    text=(base/row['file']).read_text()
    if 'WARNING:' in text: warnings.append(dict(address=row['address'],name=row['name'],file=row['file']))
    if '::' in row['name']:classes[row['name'].rsplit('::',1)[0]]+=1
log=(ROOT/'reports/ghidra.log').read_text()
symbols=[line.split(maxsplit=2) for line in (ROOT/'reports/native-symbols.txt').read_text().splitlines()]
code={int(addr,16):name for addr,kind,name in symbols if kind in ('T','W')}
exported={int(r['address'],16)-0x10000 for r in rows}
missing=[dict(elf_address=f'{addr:08x}',name=name) for addr,name in sorted(code.items()) if addr not in exported]
summary=dict(recipe_deserializer_spot_check='SPOT CHECK PASSED:' in log,
    exported_code_symbol_addresses=len(code),missing_exported_code_addresses=missing,
    export_complete='EXPORT COMPLETE:' in log,function_count=len(rows),
    successful=sum(r['status']=='ok' for r in rows),failed=len(failures),
    files_with_pseudocode_warnings=len(warnings),failures=failures,
    warning_files=warnings,classes=dict(classes.most_common()),
    note='Successful export means the decompiler produced pseudocode; it does not guarantee correct or compilable code. Ghidra addresses include a 0x10000 relocation relative to original ELF symbols.')
(ROOT/'reports/native-summary.json').write_text(json.dumps(summary,indent=2)+'\n')
print({k:v for k,v in summary.items() if k not in ('failures','warning_files','classes','note','missing_exported_code_addresses')})
