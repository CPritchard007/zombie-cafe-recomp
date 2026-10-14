/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb558 CCSpinner::Remainder */

/* CCSpinner::Remainder(void*) */

undefined4 CCSpinner::Remainder(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)((int)param_1 + 0x20);
  iVar1 = __aeabi_fcmpgt(uVar3,0);
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmplt(uVar3,0);
    if (iVar1 == 0) {
      return 0;
    }
    __addsf3(uVar3,DAT_002bb59c);
    iVar1 = __fixsfsi();
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = __fixsfsi(uVar3);
  }
  uVar2 = __floatsisf(iVar1);
  uVar3 = __subsf3(uVar3,uVar2);
  return uVar3;
}


