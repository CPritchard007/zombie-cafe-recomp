/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e404 ZombieCafe::unloadRecipeImages */

/* ZombieCafe::unloadRecipeImages(bool) */

void __thiscall ZombieCafe::unloadRecipeImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char acStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0023e484;
  piVar4 = *(int **)(DAT_0023e480 + 0x23e410);
  local_1c = *piVar4;
  if ((*(CImage **)(this + DAT_0023e484) == (CImage *)0x0) ||
     ((iVar2 = CImage::canDelete(*(CImage **)(this + DAT_0023e484)), iVar2 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023e490 + 0x23e46a),(char *)(DAT_0023e494 + 0x23e46c));
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + iVar1));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e488 + 0x23e43a),uVar3);
    L_PrintLog((char *)(DAT_0023e48c + 0x23e446),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + iVar1));
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
      *(undefined4 *)(this + DAT_0023e484) = 0;
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


