/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d4d8 ZombieCafe::unloadMenuImages */

/* ZombieCafe::unloadMenuImages(bool) */

void __thiscall ZombieCafe::unloadMenuImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  char acStack_5c [64];
  int local_1c;
  
  iVar3 = DAT_0023d5c4;
  piVar4 = *(int **)(DAT_0023d5c0 + 0x23d4e4);
  local_1c = *piVar4;
  if ((*(CImage **)(this + DAT_0023d5c4) == (CImage *)0x0) ||
     ((iVar1 = CImage::canDelete(*(CImage **)(this + DAT_0023d5c4)), iVar1 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023d5d8 + 0x23d59c),(char *)(DAT_0023d5dc + 0x23d59e));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + iVar3));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023d5c8 + 0x23d50e),uVar2);
    L_PrintLog((char *)(DAT_0023d5cc + 0x23d51a),acStack_5c);
    fVar5 = (float)CImage::forceDelete(*(CImage **)(this + iVar3));
    if (*(int **)(this + iVar3) != (int *)0x0) {
      fVar5 = (float)(**(code **)(**(int **)(this + iVar3) + 4))();
      *(undefined4 *)(this + DAT_0023d5c4) = 0;
    }
    stopMusic(fVar5);
    unloadMusic(this,0);
  }
  if ((*(CImage **)(this + 0x800) == (CImage *)0x0) ||
     ((iVar3 = CImage::canDelete(*(CImage **)(this + 0x800)), iVar3 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023d5e0 + 0x23d5aa),(char *)(DAT_0023d5e4 + 0x23d5ac));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x800));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023d5d0 + 0x23d56a),uVar2);
    L_PrintLog((char *)(DAT_0023d5d4 + 0x23d576),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + 0x800));
    if (*(int **)(this + 0x800) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x800) + 4))();
      *(undefined4 *)(this + 0x800) = 0;
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


