/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d850 ZombieCafe::unloadDialogImages */

/* ZombieCafe::unloadDialogImages(bool) */

void __thiscall ZombieCafe::unloadDialogImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char acStack_5c [64];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0023d8d0 + 0x23d85c);
  local_1c = *piVar3;
  if ((*(CImage **)(this + 0x7f0) == (CImage *)0x0) ||
     ((iVar1 = CImage::canDelete(*(CImage **)(this + 0x7f0)), iVar1 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023d8dc + 0x23d8ba),(char *)(DAT_0023d8e0 + 0x23d8bc));
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x7f0));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023d8d4 + 0x23d888),uVar2);
    L_PrintLog((char *)(DAT_0023d8d8 + 0x23d894),acStack_5c);
    CImage::forceDelete(*(CImage **)(this + 0x7f0));
    if (*(int **)(this + 0x7f0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7f0) + 4))();
      *(undefined4 *)(this + 0x7f0) = 0;
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


