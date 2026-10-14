/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240a20 ZombieCafe::setPurchasingFlag */

/* ZombieCafe::setPurchasingFlag(bool) */

void __thiscall ZombieCafe::setPurchasingFlag(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_94 [128];
  int local_14;
  
  piVar2 = *(int **)(DAT_00240a78 + 0x240a2c);
  local_14 = *piVar2;
  memset(acStack_94,0,0x80);
  if (param_1) {
    iVar1 = DAT_00240a7c + 0x240a44;
  }
  else {
    iVar1 = DAT_00240a80 + 0x240a4a;
  }
  snprintf(acStack_94,0x7f,(char *)(DAT_00240a84 + 0x240a52),iVar1);
  L_PrintLog((char *)(DAT_00240a88 + 0x240a5c),acStack_94);
  *(bool *)*(undefined4 *)(DAT_00240a8c + 0x240a66) = param_1;
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


