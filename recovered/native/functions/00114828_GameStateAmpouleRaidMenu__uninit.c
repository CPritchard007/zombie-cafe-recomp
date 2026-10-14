/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00114828 GameStateAmpouleRaidMenu::uninit */

/* GameStateAmpouleRaidMenu::uninit() */

void __thiscall GameStateAmpouleRaidMenu::uninit(GameStateAmpouleRaidMenu *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FontManager *this_00;
  char acStack_114 [256];
  int local_14;
  
  iVar3 = DAT_00114b48 + 0x114834;
  local_14 = **(int **)(iVar3 + DAT_00114b4c);
  if (*(int **)(*(int *)(this + 0x18) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x18) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x20) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x20) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x1c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x1c) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x24) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x24) + 100) + 4))();
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
  }
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
  }
  if (*(int *)(this + 0x3c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x3c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x3c) + 4))();
    }
  }
  if (*(int *)(this + 0x38) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x38) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x38) + 4))();
    }
  }
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x40) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
  }
  if (*(int *)(this + 0x44) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x44) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x44) + 4))();
    }
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_00114b50 + 0x11495a),(char *)(DAT_00114b54 + 0x11495c));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_114,(char *)(DAT_00114b5c + 0x114986),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114b60 + 0x114992),acStack_114);
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int *)(this + 0x5c) != 0) {
    L_PrintLog((char *)(DAT_00114b64 + 0x1149b2),(char *)(DAT_00114b68 + 0x1149b4));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x5c));
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))();
    }
    *(undefined4 *)(this + 0x5c) = 0;
    sprintf(acStack_114,(char *)(DAT_00114b6c + 0x1149de),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114b70 + 0x1149ea),acStack_114);
  }
  if (*(int *)(this + 0x60) != 0) {
    L_PrintLog((char *)(DAT_00114b74 + 0x1149fa),(char *)(DAT_00114b78 + 0x1149fc));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x60));
    if (*(int **)(this + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x60) + 4))();
    }
    *(undefined4 *)(this + 0x60) = 0;
    sprintf(acStack_114,(char *)(DAT_00114b7c + 0x114a26),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114b80 + 0x114a32),acStack_114);
  }
  if (*(int *)(this + 100) != 0) {
    L_PrintLog((char *)(DAT_00114b84 + 0x114a42),(char *)(DAT_00114b88 + 0x114a44));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 100));
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
    *(undefined4 *)(this + 100) = 0;
    sprintf(acStack_114,(char *)(DAT_00114b8c + 0x114a6e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114b90 + 0x114a7a),acStack_114);
  }
  if (*(int *)(this + 0x68) != 0) {
    L_PrintLog((char *)(DAT_00114b94 + 0x114a8a),(char *)(DAT_00114b98 + 0x114a8c));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x68));
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
    sprintf(acStack_114,(char *)(DAT_00114b9c + 0x114ab6),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114ba0 + 0x114ac2),acStack_114);
  }
  if (*(int *)(this + 0x6c) != 0) {
    L_PrintLog((char *)(DAT_00114ba4 + 0x114ad2),(char *)(DAT_00114ba8 + 0x114ad4));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x6c));
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
    sprintf(acStack_114,(char *)(DAT_00114bac + 0x114afe),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114bb0 + 0x114b0a),acStack_114);
  }
  if (*(int *)(this + 0x70) != 0) {
    L_PrintLog((char *)(DAT_00114bb4 + 0x114b1a),(char *)(DAT_00114bb8 + 0x114b1c));
    piVar1 = *(int **)(iVar3 + DAT_00114b58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x70));
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
    sprintf(acStack_114,&UNK_00114b46 + DAT_00114bbc,*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114d1c + 0x114bce),acStack_114);
  }
  if (*(int *)(this + 0x74) != 0) {
    L_PrintLog((char *)(DAT_00114d20 + 0x114bde),(char *)(DAT_00114d24 + 0x114be0));
    piVar1 = *(int **)(iVar3 + DAT_00114d28);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x74));
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
    sprintf(acStack_114,(char *)(DAT_00114d2c + 0x114c0a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00114d30 + 0x114c16),acStack_114);
  }
  if (*(int *)(this + 0x4c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x4c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x4c) + 4))();
    }
    *(undefined4 *)(this + 0x4c) = 0;
  }
  if (*(int *)(this + 0x50) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x50) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x50) + 4))();
    }
    *(undefined4 *)(this + 0x50) = 0;
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
  if (*(int *)(this + 0x48) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x48) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x48) + 4))();
    }
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_00114d34);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_00114d38 + iVar2 * 4 + 0x114d0e));
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00114d3c) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00114d3c),*(CImage ***)(this + 0x2c));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x28));
  }
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_14 != **(int **)(iVar3 + DAT_00114d40)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


