/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00207140 CapcomMath::sin */

/* CapcomMath::sin(int) */

int CapcomMath::sin(int param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  
  if (param_1 < 0) {
    __aeabi_idivmod(-param_1,0x168);
    iVar1 = -*(int *)(extraout_r1_00 * 4 + DAT_00207174 + 0x20716a);
  }
  else {
    __aeabi_idivmod(param_1,0x168);
    iVar1 = *(int *)(extraout_r1 * 4 + DAT_00207170 + 0x207156);
  }
  return iVar1;
}


