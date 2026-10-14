/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb3b4 CCSpinner::ClosestIndex */

/* CCSpinner::ClosestIndex(void*) */

int CCSpinner::ClosestIndex(void *param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  
  iVar1 = FUN_002bafd2(*(undefined4 *)((int)param_1 + 0x20));
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_1;
  if (iVar2 != 0) {
    for (; iVar1 < 0; iVar1 = iVar1 + iVar2) {
    }
    __aeabi_idivmod(iVar1,iVar2);
    iVar1 = extraout_r1;
  }
  return iVar1;
}


