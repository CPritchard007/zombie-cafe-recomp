/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3820 png_set_sCAL_fixed */

void png_set_sCAL_fixed(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       int param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002e3884 + 0x2e382c);
  local_1c = *piVar2;
  if (param_4 < 1) {
    iVar1 = DAT_002e3888 + 0x2e3840;
  }
  else {
    if (0 < param_5) {
      png_ascii_from_fixed(param_1,auStack_44,0x12);
      png_ascii_from_fixed(param_1,auStack_30,0x12,param_5);
      png_set_sCAL_s(param_1,param_2,param_3,auStack_44,auStack_30);
      goto LAB_002e3874;
    }
    iVar1 = DAT_002e388c + 0x2e384a;
  }
  png_warning(param_1,iVar1);
LAB_002e3874:
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


