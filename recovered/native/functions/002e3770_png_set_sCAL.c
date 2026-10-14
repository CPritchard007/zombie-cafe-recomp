/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3770 png_set_sCAL */

void png_set_sCAL(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002e3810 + 0x2e377c);
  local_1c = *piVar2;
  iVar1 = __aeabi_dcmple(param_5,param_6,DAT_002e3808,DAT_002e380c);
  if (iVar1 == 0) {
    iVar1 = __aeabi_dcmple(param_7,param_8,DAT_002e3808,DAT_002e380c);
    if (iVar1 == 0) {
      png_ascii_from_fp(param_1,auStack_44,0x12,param_6,param_5,param_6,5);
      png_ascii_from_fp(param_1,auStack_30,0x12,param_8,param_7,param_8,5);
      png_set_sCAL_s(param_1,param_2,param_3,auStack_44,auStack_30);
      goto LAB_002e37f2;
    }
    iVar1 = DAT_002e3818 + 0x2e37b2;
  }
  else {
    iVar1 = DAT_002e3814 + 0x2e379c;
  }
  png_warning(param_1,iVar1);
LAB_002e37f2:
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


