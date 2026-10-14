/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d8e4 ZombieCafe::unloadInGameImages */

/* ZombieCafe::unloadInGameImages(bool) */

void __thiscall ZombieCafe::unloadInGameImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char acStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0023d96c;
  piVar4 = *(int **)(DAT_0023d968 + 0x23d8f0);
  local_1c = *piVar4;
  if ((*(CImage **)(this + DAT_0023d96c) == (CImage *)0x0) ||
     ((iVar2 = CImage::canDelete(*(CImage **)(this + DAT_0023d96c)), iVar2 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023d978 + 0x23d95a),(char *)(DAT_0023d97c + 0x23d95c));
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + iVar1));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023d970 + 0x23d91a),uVar3);
    L_PrintLog((char *)(DAT_0023d974 + 0x23d926),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + iVar1));
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
      *(undefined4 *)(this + DAT_0023d96c) = 0;
    }
  }
  unloadDialogImages(this,param_1);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


