/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024121c ZombieCafe::GetLotteryRandom */

/* ZombieCafe::GetLotteryRandom() */

void __thiscall ZombieCafe::GetLotteryRandom(ZombieCafe *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char acStack_114 [256];
  int local_14;
  
  iVar1 = DAT_00241278;
  piVar3 = *(int **)(DAT_00241274 + 0x241228);
  local_14 = *piVar3;
  snprintf(acStack_114,0x100,(char *)(DAT_0024127c + 0x241234),*(undefined4 *)(this + DAT_00241278))
  ;
  L_PrintLog((char *)(DAT_00241280 + 0x241246),acStack_114);
  if (0x15 < *(uint *)(this + iVar1)) {
    *(undefined4 *)(this + iVar1) = 0;
  }
  uVar2 = *(int *)(this + (*(int *)(this + iVar1) + 0x1cc) * 4) >> 0x1f;
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(int *)(this + (*(int *)(this + iVar1) + 0x1cc) * 4) + uVar2 ^ uVar2);
  }
  return;
}


