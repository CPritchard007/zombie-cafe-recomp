/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bdb54 GameStateEventRaid3Menu::uninit */

/* GameStateEventRaid3Menu::uninit() */

void __thiscall GameStateEventRaid3Menu::uninit(GameStateEventRaid3Menu *this)

{
  int *piVar1;
  int iVar2;
  GameStateEventRaid3Menu *pGVar3;
  FontManager *this_00;
  int iVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_001bde84 + 0x1bdb60;
  local_1c = **(int **)(iVar4 + DAT_001bde88);
  if (*(int **)(*(int *)(this + 0x18) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x18) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x24) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x24) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x1c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x1c) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x28) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x28) + 100) + 4))();
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
  }
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))();
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))();
  }
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 4))();
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
  piVar1 = *(int **)(this + 0xb4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xb4) = 0;
  }
  piVar1 = *(int **)(this + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xa4) = 0;
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int *)(this + 100) != 0) {
    piVar1 = *(int **)(*(int *)(this + 100) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
  }
  pGVar3 = this + 0x90;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001bde8c + 0x1bdcbe),(char *)(DAT_001bde90 + 0x1bdcc0));
    piVar1 = *(int **)(iVar4 + DAT_001bde94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
    sprintf(acStack_11c,(char *)(DAT_001bde98 + 0x1bdcee),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001bde9c + 0x1bdcfa),acStack_11c);
  }
  pGVar3 = this + 0x94;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001bdea0 + 0x1bdd0e),(char *)(DAT_001bdea4 + 0x1bdd10));
    piVar1 = *(int **)(iVar4 + DAT_001bde94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
    sprintf(acStack_11c,(char *)(DAT_001bdea8 + 0x1bdd3e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001bdeac + 0x1bdd4a),acStack_11c);
  }
  pGVar3 = this + 0x98;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001bdeb0 + 0x1bdd5e),(char *)(DAT_001bdeb4 + 0x1bdd60));
    piVar1 = *(int **)(iVar4 + DAT_001bde94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
    sprintf(acStack_11c,(char *)(DAT_001bdeb8 + 0x1bdd8e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001bdebc + 0x1bdd9a),acStack_11c);
  }
  pGVar3 = this + 0x9c;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001bdec0 + 0x1bddae),(char *)(DAT_001bdec4 + 0x1bddb0));
    piVar1 = *(int **)(iVar4 + DAT_001bde94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x9c) = 0;
    sprintf(acStack_11c,(char *)(DAT_001bdec8 + 0x1bddde),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001bdecc + 0x1bddea),acStack_11c);
  }
  pGVar3 = this + 0xa0;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001bded0 + 0x1bddfe),(char *)(DAT_001bded4 + 0x1bde00));
    piVar1 = *(int **)(iVar4 + DAT_001bde94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xa0) = 0;
    sprintf(acStack_11c,(char *)(DAT_001bded8 + 0x1bde2e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001bdedc + 0x1bde3a),acStack_11c);
  }
  pGVar3 = this + 0xb0;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001bdee0 + 0x1bde4e),(char *)(DAT_001bdee4 + 0x1bde50));
    piVar1 = *(int **)(iVar4 + DAT_001bde94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
    sprintf(acStack_11c,(char *)(DAT_001bdee8 + 0x1bde7e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001be208 + 0x1bdef4),acStack_11c);
  }
  pGVar3 = this + 0xa8;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001be20c + 0x1bdf08),(char *)(DAT_001be210 + 0x1bdf0a));
    piVar1 = *(int **)(iVar4 + DAT_001be214);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xa8) = 0;
    sprintf(acStack_11c,(char *)(DAT_001be218 + 0x1bdf38),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001be21c + 0x1bdf44),acStack_11c);
  }
  pGVar3 = this + 0xac;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001be220 + 0x1bdf58),(char *)(DAT_001be224 + 0x1bdf5a));
    piVar1 = *(int **)(iVar4 + DAT_001be214);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xac) = 0;
    sprintf(acStack_11c,(char *)(DAT_001be228 + 0x1bdf88),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001be22c + 0x1bdf94),acStack_11c);
  }
  if (*(int *)(this + 0x68) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x68) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 0x6c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x6c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x70) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x74) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
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
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x40) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x44) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x44) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x44) + 4))();
    }
    *(undefined4 *)(this + 0x44) = 0;
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
  if (*(int *)(this + 0x78) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x78) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x7c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x7c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x80) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x84) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
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
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar4 + DAT_001be230);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_001be234 + iVar2 * 4 + 0x1be1f2));
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001be238) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001be238),*(CImage ***)(this + 0x34));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x30));
  }
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c != **(int **)(iVar4 + DAT_001be23c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


