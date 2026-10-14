/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023da48 ZombieCafe::unloadZombieCollectionImages */

/* ZombieCafe::unloadZombieCollectionImages(bool) */

void __thiscall ZombieCafe::unloadZombieCollectionImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  char acStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0023dad8;
  piVar4 = *(int **)(DAT_0023dad4 + 0x23da54);
  local_1c = *piVar4;
  if ((*(CImage **)(this + DAT_0023dad8) == (CImage *)0x0) ||
     ((iVar2 = CImage::canDelete(*(CImage **)(this + DAT_0023dad8)), iVar2 == 0 && (!param_1)))) {
    L_PrintLog((char *)(DAT_0023dae4 + 0x23dabe),(char *)(DAT_0023dae8 + 0x23dac0));
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + iVar1));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023dadc + 0x23da7e),uVar3);
    L_PrintLog((char *)(DAT_0023dae0 + 0x23da8a),acStack_5c);
    fVar5 = (float)CImage::forceDelete(*(CImage **)(this + iVar1));
    if (*(int **)(this + iVar1) != (int *)0x0) {
      fVar5 = (float)(**(code **)(**(int **)(this + iVar1) + 4))();
      *(undefined4 *)(this + DAT_0023dad8) = 0;
    }
    stopMusic(fVar5);
    unloadMusic(this,0);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


