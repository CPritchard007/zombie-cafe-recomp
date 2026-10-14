/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190ba8 GameStateSurvivalMenu::uninit */

/* GameStateSurvivalMenu::uninit() */

void __thiscall GameStateSurvivalMenu::uninit(GameStateSurvivalMenu *this)

{
  int *piVar1;
  int iVar2;
  GameStateSurvivalMenu *pGVar3;
  FontManager *this_00;
  int iVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_00190ec4 + 0x190bb4;
  local_1c = **(int **)(iVar4 + DAT_00190ec8);
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
  if (*(int **)(*(int *)(this + 0x28) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x28) + 100) + 4))();
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
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))();
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
  if (*(int *)(this + 0x3c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x3c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x3c) + 4))();
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
  if (*(int *)(this + 0x48) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x48) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x48) + 4))();
    }
  }
  if (*(int *)(this + 0x4c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x4c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x4c) + 4))();
    }
  }
  if (*(int *)(this + 0x50) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x50) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x50) + 4))();
    }
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_00190ecc + 0x190d5a),(char *)(DAT_00190ed0 + 0x190d5c));
    piVar1 = *(int **)(iVar4 + DAT_00190ed4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_00190ed8 + 0x190d8a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00190edc + 0x190d96),acStack_11c);
  }
  pGVar3 = this + 0x88;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_00190ee0 + 0x190daa),(char *)(DAT_00190ee4 + 0x190dac));
    piVar1 = *(int **)(iVar4 + DAT_00190ed4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_00190ee8 + 0x190dda),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00190eec + 0x190de6),acStack_11c);
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_00190ef0 + 0x190e02),(char *)(DAT_00190ef4 + 0x190e04));
    piVar1 = *(int **)(iVar4 + DAT_00190ed4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_00190ef8 + 0x190e2e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00190efc + 0x190e3a),acStack_11c);
  }
  if (*(int *)(this + 0x7c) != 0) {
    L_PrintLog((char *)(DAT_00190f00 + 0x190e4a),(char *)(DAT_00190f04 + 0x190e4c));
    piVar1 = *(int **)(iVar4 + DAT_00190ed4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x7c));
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00190f08 + 0x190e76),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00190f0c + 0x190e82),acStack_11c);
  }
  if (*(int *)(this + 0x80) != 0) {
    L_PrintLog((char *)(DAT_00190f10 + 0x190e94),(char *)(DAT_00190f14 + 0x190e96));
    piVar1 = *(int **)(iVar4 + DAT_00190ed4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x80));
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
    sprintf(acStack_11c,&UNK_00190ec2 + DAT_00190f18,*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00190fec + 0x190f2a),acStack_11c);
  }
  pGVar3 = this + 0x8c;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_00190ff0 + 0x190f3e),(char *)(DAT_00190ff4 + 0x190f40));
    piVar1 = *(int **)(iVar4 + DAT_00190ff8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00190ffc + 0x190f6e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00191000 + 0x190f7a),acStack_11c);
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar4 + DAT_00191004);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_00191008 + iVar2 * 4 + 0x190fa2));
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019100c) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019100c),*(CImage ***)(this + 0x30));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x2c));
  }
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c != **(int **)(iVar4 + DAT_00191010)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


