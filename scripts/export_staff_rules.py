#!/usr/bin/env python3
"""Extract verified staff handoff constant after the previously decoded starter resources."""
import json,struct
from pathlib import Path
root=Path(__file__).resolve().parents[1]
b=(root/'recovered/apk/assets/data/constants.bin.mid').read_bytes()
# Constants::load: 17 resource IDs at 6368, then dirty wall/floor bytes,
# RestTask_ZZZ_INTERVAL (int), ServeTask_SERVE_TIME (short).
assert struct.unpack_from('>3i',b,6368)==(16,15,3)
assert tuple(b[6436:6438])==(138,145)
rest,serve=struct.unpack_from('>ih',b,6438)
result={'RestTask_ZZZ_INTERVAL':{'offset':6438,'value':rest},'ServeTask_SERVE_TIME':{'offset':6442,'value':serve}}
(root/'reports/staff-constants.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps(result,indent=2))
