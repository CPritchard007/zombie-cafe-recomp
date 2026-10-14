/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cf15c GameStateChangeHard::uninit */

/* GameStateChangeHard::uninit() */

void __thiscall GameStateChangeHard::uninit(GameStateChangeHard *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FontManager *this_00;
  char acStack_114 [256];
  int local_14;
  
  iVar3 = DAT_001cf478 + 0x1cf168;
  local_14 = **(int **)(iVar3 + DAT_001cf47c);
  piVar1 = *(int **)(this + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xa4) = 0;
  }
  piVar1 = *(int **)(this + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0x90) = 0;
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int *)(this + 0x24) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x24) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x24) + 4))();
    }
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x28) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x28) + 4))();
    }
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x2c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2c) + 4))();
    }
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_001cf480 + 0x1cf25a),(char *)(DAT_001cf484 + 0x1cf25c));
    piVar1 = *(int **)(iVar3 + DAT_001cf488);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf48c + 0x1cf286),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf490 + 0x1cf292),acStack_114);
  }
  if (*(int *)(this + 0x38) != 0) {
    L_PrintLog((char *)(DAT_001cf494 + 0x1cf2a2),(char *)(DAT_001cf498 + 0x1cf2a4));
    piVar1 = *(int **)(iVar3 + DAT_001cf488);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x38));
    if (*(int **)(this + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x38) + 4))();
    }
    *(undefined4 *)(this + 0x38) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf49c + 0x1cf2ce),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf4a0 + 0x1cf2da),acStack_114);
  }
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_001cf4a4 + 0x1cf2ea),(char *)(DAT_001cf4a8 + 0x1cf2ec));
    piVar1 = *(int **)(iVar3 + DAT_001cf488);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf4ac + 0x1cf316),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf4b0 + 0x1cf322),acStack_114);
  }
  if (*(int *)(this + 0x3c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x3c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x3c) + 4))();
    }
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (*(int *)(this + 0x44) != 0) {
    L_PrintLog((char *)(DAT_001cf4b4 + 0x1cf354),(char *)(DAT_001cf4b8 + 0x1cf356));
    piVar1 = *(int **)(iVar3 + DAT_001cf488);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x44));
    if (*(int **)(this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x44) + 4))();
    }
    *(undefined4 *)(this + 0x44) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf4bc + 0x1cf380),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf4c0 + 0x1cf38c),acStack_114);
  }
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x40) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x48) != 0) {
    L_PrintLog((char *)(DAT_001cf4c4 + 0x1cf3be),(char *)(DAT_001cf4c8 + 0x1cf3c0));
    piVar1 = *(int **)(iVar3 + DAT_001cf488);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x48));
    if (*(int **)(this + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x48) + 4))();
    }
    *(undefined4 *)(this + 0x48) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf4cc + 0x1cf3ea),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf4d0 + 0x1cf3f6),acStack_114);
  }
  if (*(int **)(*(int *)(this + 0x4c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x4c) + 100) + 4))();
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))();
  }
  if (*(int *)(this + 0x54) != 0) {
    L_PrintLog((char *)(DAT_001cf4d4 + 0x1cf420),(char *)(DAT_001cf4d8 + 0x1cf422));
    piVar1 = *(int **)(iVar3 + DAT_001cf488);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x54));
    if (*(int **)(this + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x54) + 4))();
    }
    *(undefined4 *)(this + 0x54) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf4dc + 0x1cf44c),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf4e0 + 0x1cf458),acStack_114);
  }
  if (*(int **)(*(int *)(this + 0x50) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x50) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 4))();
  }
  if (*(int *)(this + 0x58) != 0) {
    L_PrintLog((char *)(DAT_001cf680 + 0x1cf4f2),(char *)(DAT_001cf684 + 0x1cf4f4));
    piVar1 = *(int **)(iVar3 + DAT_001cf688);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x58));
    if (*(int **)(this + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x58) + 4))();
    }
    *(undefined4 *)(this + 0x58) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf68c + 0x1cf51e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf690 + 0x1cf52a),acStack_114);
  }
  if (*(int **)(*(int *)(this + 0x5c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x5c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x5c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x60) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x60) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int *)(this + 100) != 0) {
    L_PrintLog((char *)(DAT_001cf694 + 0x1cf56e),(char *)(DAT_001cf698 + 0x1cf570));
    piVar1 = *(int **)(iVar3 + DAT_001cf688);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 100));
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
    *(undefined4 *)(this + 100) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf69c + 0x1cf59a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf6a0 + 0x1cf5a6),acStack_114);
  }
  if (*(int **)(*(int *)(this + 0x68) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int *)(this + 0x6c) != 0) {
    L_PrintLog((char *)(DAT_001cf6a4 + 0x1cf5d0),(char *)(DAT_001cf6a8 + 0x1cf5d2));
    piVar1 = *(int **)(iVar3 + DAT_001cf688);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x6c));
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
    sprintf(acStack_114,(char *)(DAT_001cf6ac + 0x1cf5fc),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001cf6b0 + 0x1cf608),acStack_114);
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_001cf6b4);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_001cf6b8 + iVar2 * 4 + 0x1cf670));
  piVar1 = (int *)**(int **)(iVar3 + DAT_001cf6bc);
  if (piVar1 != (int *)0x0) {
    **(int **)(iVar3 + DAT_001cf6bc) = 0;
    (**(code **)(*piVar1 + 4))();
  }
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),true);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),true);
  if (local_14 != **(int **)(iVar3 + DAT_001cf6c0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


