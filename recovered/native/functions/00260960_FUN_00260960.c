/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260960 FUN_00260960 */

void FUN_00260960(byte *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  byte local_28 [12];
  int local_1c;
  
  piVar1 = *(int **)(DAT_002609e0 + 0x26096c);
  local_1c = *piVar1;
  uVar2 = param_4 & 0xff000000;
  if ((param_4 & 0xff000000) == 0) {
    do {
      uVar4 = uVar2;
      local_28[uVar4] = (byte)param_3 | 0x80;
      param_3 = param_3 >> 7 | param_4 << 0x19;
      param_4 = param_4 >> 7;
      uVar2 = uVar4 + 1;
    } while (param_3 != 0 || param_4 != 0);
    local_28[0] = local_28[0] & 0x7f;
    do {
      *param_1 = local_28[uVar4];
      param_1 = param_1 + 1;
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  else {
    param_1[8] = (byte)param_3;
    uVar2 = param_3 >> 8 | param_4 << 0x18;
    param_4 = param_4 >> 8;
    iVar3 = 7;
    do {
      param_1[iVar3] = (byte)uVar2 | 0x80;
      uVar2 = uVar2 >> 7 | param_4 << 0x19;
      param_4 = param_4 >> 7;
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar5);
    uVar2 = 9;
  }
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


