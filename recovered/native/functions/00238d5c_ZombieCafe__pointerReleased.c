/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238d5c ZombieCafe::pointerReleased */

/* ZombieCafe::pointerReleased(long*, int) */

void __thiscall ZombieCafe::pointerReleased(ZombieCafe *this,long *param_1,int param_2)

{
  int *piVar1;
  char acStack_114 [256];
  int local_14;
  
  piVar1 = *(int **)(DAT_00238da8 + 0x238d68);
  local_14 = *piVar1;
  snprintf(acStack_114,0x100,(char *)(DAT_00238dac + 0x238d80),param_2,*param_1 >> 0x10,
           (int)(short)*param_1);
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + DAT_00238db0) = 0;
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


