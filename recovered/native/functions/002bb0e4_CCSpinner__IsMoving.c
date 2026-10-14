/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb0e4 CCSpinner::IsMoving */

/* CCSpinner::IsMoving(void*) */

byte CCSpinner::IsMoving(void *param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = __aeabi_fcmpeq(*(undefined4 *)((int)param_1 + 0x24),0);
  bVar2 = 1;
  if (iVar1 != 0) {
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)((int)param_1 + 0x1c),0);
    bVar2 = -(iVar1 == 0) & 1;
  }
  return bVar2;
}


