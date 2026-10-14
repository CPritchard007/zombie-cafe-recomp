/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a7b78 GameStateEventRaidMenu::uninit */

/* GameStateEventRaidMenu::uninit() */

void __thiscall GameStateEventRaidMenu::uninit(GameStateEventRaidMenu *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FontManager *this_00;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_001a7e98 + 0x1a7b84;
  local_1c = **(int **)(iVar3 + DAT_001a7e9c);
  if (*(int *)(this + 0x18) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x18) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x18) + 4))();
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x20) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x20) + 4))();
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x1c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c) + 4))();
    }
    *(undefined4 *)(this + 0x1c) = 0;
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
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))();
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))();
    *(undefined4 *)(this + 0x4c) = 0;
  }
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 4))();
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x58) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x58) + 4))();
    }
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x54) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x54) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x54) + 4))();
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x5c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))();
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x60) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x60) + 4))();
    }
    *(undefined4 *)(this + 0x60) = 0;
  }
  piVar1 = *(int **)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int **)(this + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_001a7ea0 + 0x1a7d04),(char *)(DAT_001a7ea4 + 0x1a7d06));
    piVar1 = *(int **)(iVar3 + DAT_001a7ea8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a7eac + 0x1a7d34),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a7eb0 + 0x1a7d40),acStack_11c);
  }
  piVar1 = *(int **)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    L_PrintLog((char *)(DAT_001a7eb4 + 0x1a7d64),(char *)(DAT_001a7eb8 + 0x1a7d66));
    piVar1 = *(int **)(iVar3 + DAT_001a7ea8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x68));
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a7ebc + 0x1a7d90),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a7ec0 + 0x1a7d9c),acStack_11c);
  }
  if (*(int *)(this + 0x6c) != 0) {
    L_PrintLog((char *)(DAT_001a7ec4 + 0x1a7dac),(char *)(DAT_001a7ec8 + 0x1a7dae));
    piVar1 = *(int **)(iVar3 + DAT_001a7ea8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x6c));
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a7ecc + 0x1a7dd8),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a7ed0 + 0x1a7de4),acStack_11c);
  }
  if (*(int *)(this + 0x70) != 0) {
    L_PrintLog((char *)(DAT_001a7ed4 + 0x1a7df4),(char *)(DAT_001a7ed8 + 0x1a7df6));
    piVar1 = *(int **)(iVar3 + DAT_001a7ea8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x70));
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a7edc + 0x1a7e20),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a7ee0 + 0x1a7e2c),acStack_11c);
  }
  if (*(int *)(this + 0x74) != 0) {
    L_PrintLog((char *)(DAT_001a7ee4 + 0x1a7e3c),(char *)(DAT_001a7ee8 + 0x1a7e3e));
    piVar1 = *(int **)(iVar3 + DAT_001a7ea8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x74));
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a7eec + 0x1a7e68),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a7ef0 + 0x1a7e74),acStack_11c);
  }
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_001a7ef4 + 0x1a7e84),(char *)(DAT_001a7ef8 + 0x1a7e86));
    piVar1 = *(int **)(iVar3 + DAT_001a7ea8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a81bc + 0x1a7f16),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a81c0 + 0x1a7f22),acStack_11c);
  }
  if (*(int *)(this + 0x7c) != 0) {
    L_PrintLog((char *)(DAT_001a81c4 + 0x1a7f32),(char *)(DAT_001a81c8 + 0x1a7f34));
    piVar1 = *(int **)(iVar3 + DAT_001a81cc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x7c));
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a81d0 + 0x1a7f5e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a81d4 + 0x1a7f6a),acStack_11c);
  }
  if (*(int *)(this + 0x80) != 0) {
    L_PrintLog((char *)(DAT_001a81d8 + 0x1a7f7c),(char *)(DAT_001a81dc + 0x1a7f7e));
    piVar1 = *(int **)(iVar3 + DAT_001a81cc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x80));
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
    sprintf(acStack_11c,(char *)(DAT_001a81e0 + 0x1a7faa),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001a81e4 + 0x1a7fb6),acStack_11c);
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
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x30) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x34) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x34) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x38) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x38) + 4))();
    }
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x8c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(int *)(this + 0x90) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x90) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x90) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x90) + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
  }
  if (*(int *)(this + 0x94) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x94) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x94) + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x88) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
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
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
    *(undefined4 *)(this + 0x14) = 0;
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_001a81e8);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_001a81ec + iVar2 * 4 + 0x1a8196));
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a81f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a81f0),*(CImage ***)(this + 0x44));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x40));
  }
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c != **(int **)(iVar3 + DAT_001a81f4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


