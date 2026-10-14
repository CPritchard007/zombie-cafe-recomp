/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb3d6 CCSpinner::NormalizeIndex */

/* CCSpinner::NormalizeIndex(void*, int) */

undefined4 CCSpinner::NormalizeIndex(void *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_1;
  uVar1 = 0;
  if (0 < iVar2) {
    for (; param_2 < 0; param_2 = param_2 + iVar2) {
    }
    __aeabi_idivmod(param_2,iVar2);
    uVar1 = extraout_r1;
  }
  return uVar1;
}


