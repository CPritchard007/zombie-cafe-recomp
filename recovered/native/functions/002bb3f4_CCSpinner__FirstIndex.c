/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb3f4 CCSpinner::FirstIndex */

/* CCSpinner::FirstIndex(void*) */

int CCSpinner::FirstIndex(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((int)param_1 + 0x20);
  iVar1 = __aeabi_fcmpge(uVar2,0);
  if (iVar1 == 0) {
    __addsf3(uVar2,DAT_002bb41c);
    iVar1 = __fixsfsi();
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = __fixsfsi(uVar2);
  }
  return iVar1;
}


