/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e128 ZombieCafe::unloadFurnitureImages */

/* ZombieCafe::unloadFurnitureImages(bool) */

void __thiscall ZombieCafe::unloadFurnitureImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack_5c [64];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0023e280 + 0x23e134);
  local_1c = *piVar4;
  L_PrintLog((char *)(DAT_0023e284 + 0x23e140),(char *)(DAT_0023e288 + 0x23e142));
  iVar3 = DAT_0023e28c;
  if ((*(CImage **)(this + DAT_0023e28c) == (CImage *)0x0) ||
     ((iVar1 = CImage::canDelete(*(CImage **)(this + DAT_0023e28c)), iVar1 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023e2bc + 0x23e250),(char *)(DAT_0023e2c0 + 0x23e252));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + iVar3));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e290 + 0x23e170),uVar2);
    L_PrintLog((char *)(DAT_0023e294 + 0x23e17c),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + iVar3));
    if (*(int **)(this + iVar3) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar3) + 4))();
      *(undefined4 *)(this + DAT_0023e28c) = 0;
    }
  }
  iVar3 = DAT_0023e2a0;
  L_PrintLog((char *)(DAT_0023e298 + 0x23e1a0),(char *)(DAT_0023e29c + 0x23e1a2));
  if ((*(CImage **)(this + iVar3) == (CImage *)0x0) ||
     ((iVar1 = CImage::canDelete(*(CImage **)(this + iVar3)), iVar1 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023e2c4 + 0x23e25e),(char *)(DAT_0023e2c8 + 0x23e260));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + iVar3));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e2a4 + 0x23e1c6),uVar2);
    L_PrintLog((char *)(DAT_0023e2a8 + 0x23e1d2),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + iVar3));
    if (*(int **)(this + iVar3) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar3) + 4))();
      *(undefined4 *)(this + DAT_0023e2a0) = 0;
    }
  }
  L_PrintLog((char *)(DAT_0023e2ac + 0x23e1f6),(char *)(DAT_0023e2b0 + 0x23e1f8));
  if ((*(CImage **)(this + 0x820) == (CImage *)0x0) ||
     ((iVar3 = CImage::canDelete(*(CImage **)(this + 0x820)), iVar3 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023e2cc + 0x23e26c),(char *)(DAT_0023e2d0 + 0x23e26e));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x820));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e2b4 + 0x23e21e),uVar2);
    L_PrintLog((char *)(DAT_0023e2b8 + 0x23e22a),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + 0x820));
    if (*(int **)(this + 0x820) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x820) + 4))();
      *(undefined4 *)(this + 0x820) = 0;
    }
  }
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


