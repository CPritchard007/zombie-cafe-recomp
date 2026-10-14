/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001539a4 GameStateGatya::CheckTickWait */

/* GameStateGatya::CheckTickWait(int) */

bool GameStateGatya::CheckTickWait(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  
  uVar1 = __floatsisf(in_r1);
  uVar1 = __divsf3(uVar1,DAT_001539d0);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0xe80));
  iVar2 = DAT_001539d4;
  *(undefined4 *)(param_1 + 0xe80) = uVar1;
  iVar2 = __aeabi_fcmpgt(uVar1,*(undefined4 *)(param_1 + iVar2));
  return iVar2 != 0;
}


