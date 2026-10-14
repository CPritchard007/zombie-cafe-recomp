/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023dd5c ZombieCafe::unloadShopImages */

/* ZombieCafe::unloadShopImages(bool) */

void __thiscall ZombieCafe::unloadShopImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char acStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0023dddc;
  piVar4 = *(int **)(DAT_0023ddd8 + 0x23dd68);
  local_1c = *piVar4;
  if ((*(CImage **)(this + DAT_0023dddc) == (CImage *)0x0) ||
     ((iVar2 = CImage::canDelete(*(CImage **)(this + DAT_0023dddc)), iVar2 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023dde8 + 0x23ddc2),(char *)(DAT_0023ddec + 0x23ddc4));
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + iVar1));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023dde0 + 0x23dd92),uVar3);
    L_PrintLog((char *)(DAT_0023dde4 + 0x23dd9e),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + iVar1));
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
      *(undefined4 *)(this + DAT_0023dddc) = 0;
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


