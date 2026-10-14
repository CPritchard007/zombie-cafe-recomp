/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6d88 png_write_sig */

void png_write_sig(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar1 = DAT_002e6de8;
  piVar3 = *(int **)(DAT_002e6de0 + 0x2e6d94);
  local_1c = *piVar3;
  memcpy(auStack_24,(void *)(DAT_002e6de4 + 0x2e6d9e),8);
  *(undefined4 *)(param_1 + 900) = 0x12;
  uVar2 = (uint)*(byte *)(param_1 + iVar1);
  png_write_data(param_1,auStack_24 + uVar2,8 - uVar2);
  if (*(byte *)(param_1 + iVar1) < 3) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x1000;
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


