/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d59dc png_sig_cmp */

void png_sig_cmp(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002d5a3c + 0x2d59e8);
  local_1c = *piVar2;
  memcpy(auStack_24,(void *)(DAT_002d5a40 + 0x2d5a0e),8);
  if (param_3 < 9) {
    if (param_3 != 0) goto LAB_002d5a0a;
  }
  else {
    param_3 = 8;
LAB_002d5a0a:
    if (param_2 < 8) {
      if (8 < param_3 + param_2) {
        param_3 = 8 - param_2;
      }
      iVar1 = memcmp((void *)(param_1 + param_2),auStack_24 + param_2,param_3);
      goto LAB_002d5a2a;
    }
  }
  iVar1 = -1;
LAB_002d5a2a:
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


