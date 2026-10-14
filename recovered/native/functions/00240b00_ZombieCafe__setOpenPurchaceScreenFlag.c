/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240b00 ZombieCafe::setOpenPurchaceScreenFlag */

/* ZombieCafe::setOpenPurchaceScreenFlag(bool) */

void __thiscall ZombieCafe::setOpenPurchaceScreenFlag(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_94 [128];
  int local_14;
  
  piVar2 = *(int **)(DAT_00240b58 + 0x240b0c);
  local_14 = *piVar2;
  memset(acStack_94,0,0x80);
  if (param_1) {
    iVar1 = DAT_00240b5c + 0x240b24;
  }
  else {
    iVar1 = DAT_00240b60 + 0x240b2a;
  }
  snprintf(acStack_94,0x7f,(char *)(DAT_00240b64 + 0x240b32),iVar1);
  L_PrintLog((char *)(DAT_00240b68 + 0x240b3c),acStack_94);
  *(bool *)*(undefined4 *)(DAT_00240b6c + 0x240b46) = param_1;
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


