/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e560 ZombieCafe::unloadMapImages */

/* ZombieCafe::unloadMapImages(bool) */

void __thiscall ZombieCafe::unloadMapImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char acStack_5c [64];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0023e5e0 + 0x23e56c);
  local_1c = *piVar3;
  if ((*(CImage **)(this + 0x7f8) == (CImage *)0x0) ||
     ((iVar1 = CImage::canDelete(*(CImage **)(this + 0x7f8)), iVar1 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023e5ec + 0x23e5ca),(char *)(DAT_0023e5f0 + 0x23e5cc));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x7f8));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e5e4 + 0x23e598),uVar2);
    L_PrintLog((char *)(DAT_0023e5e8 + 0x23e5a4),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + 0x7f8));
    if (*(int **)(this + 0x7f8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7f8) + 4))();
      *(undefined4 *)(this + 0x7f8) = 0;
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


