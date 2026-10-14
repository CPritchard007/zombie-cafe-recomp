/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b221c GameStateEventRaid2Menu::uninit */

/* GameStateEventRaid2Menu::uninit() */

void __thiscall GameStateEventRaid2Menu::uninit(GameStateEventRaid2Menu *this)

{
  int *piVar1;
  int iVar2;
  GameStateEventRaid2Menu *pGVar3;
  FontManager *this_00;
  int iVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_001b253c + 0x1b2228;
  local_1c = **(int **)(iVar4 + DAT_001b2540);
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
  if (*(int **)(this + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x5c) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
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
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x78) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 4))();
  }
  if (*(int *)(this + 0x7c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x7c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 4))();
  }
  pGVar3 = this + 0xcc;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b2544 + 0x1b23ca),(char *)(DAT_001b2548 + 0x1b23cc));
    piVar1 = *(int **)(iVar4 + DAT_001b254c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xcc) = 0;
    sprintf(acStack_11c,(char *)(DAT_001b2550 + 0x1b23fa),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b2554 + 0x1b2406),acStack_11c);
  }
  pGVar3 = this + 0xd0;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b2558 + 0x1b241a),(char *)(DAT_001b255c + 0x1b241c));
    piVar1 = *(int **)(iVar4 + DAT_001b254c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xd0) = 0;
    sprintf(acStack_11c,(char *)(DAT_001b2560 + 0x1b244a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b2564 + 0x1b2456),acStack_11c);
  }
  pGVar3 = this + 0xd4;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b2568 + 0x1b246a),(char *)(DAT_001b256c + 0x1b246c));
    piVar1 = *(int **)(iVar4 + DAT_001b254c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xd4) = 0;
    sprintf(acStack_11c,(char *)(DAT_001b2570 + 0x1b249a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b2574 + 0x1b24a6),acStack_11c);
  }
  pGVar3 = this + 0xd8;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b2578 + 0x1b24ba),(char *)(DAT_001b257c + 0x1b24bc));
    piVar1 = *(int **)(iVar4 + DAT_001b254c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xd8) = 0;
    sprintf(acStack_11c,(char *)(DAT_001b2580 + 0x1b24ea),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b2584 + 0x1b24f6),acStack_11c);
  }
  pGVar3 = this + 0xe0;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b2588 + 0x1b250a),(char *)(DAT_001b258c + 0x1b250c));
    piVar1 = *(int **)(iVar4 + DAT_001b254c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xe0) = 0;
    sprintf(acStack_11c,&UNK_001b253a + DAT_001b2590,*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b28bc + 0x1b25a2),acStack_11c);
  }
  pGVar3 = this + 0xdc;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b28c0 + 0x1b25b6),(char *)(DAT_001b28c4 + 0x1b25b8));
    piVar1 = *(int **)(iVar4 + DAT_001b28c8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xdc) = 0;
    sprintf(acStack_11c,(char *)(DAT_001b28cc + 0x1b25e6),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b28d0 + 0x1b25f2),acStack_11c);
  }
  pGVar3 = this + 0xe4;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001b28d4 + 0x1b2606),(char *)(DAT_001b28d8 + 0x1b2608));
    piVar1 = *(int **)(iVar4 + DAT_001b28c8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0xe4) = 0;
    sprintf(acStack_11c,(char *)(DAT_001b28dc + 0x1b2636),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001b28e0 + 0x1b2642),acStack_11c);
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
  if (*(int *)(this + 0x98) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x98) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x98) + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int *)(this + 0x9c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x9c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9c) + 4))();
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int *)(this + 0xa0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xa0) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa0) + 4))();
    }
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int *)(this + 0xa4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xa4) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa4) + 4))();
    }
    *(undefined4 *)(this + 0xa4) = 0;
  }
  if (*(int *)(this + 0x4c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x4c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x4c) + 4))();
    }
    *(undefined4 *)(this + 0x4c) = 0;
  }
  if (*(int *)(this + 0x50) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x50) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x50) + 4))();
    }
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x54) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x54) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x54) + 4))();
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x58) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x58) + 4))();
    }
    *(undefined4 *)(this + 0x58) = 0;
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
  if (*(int *)(this + 0xa8) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xa8) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa8) + 4))();
    }
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int *)(this + 0xac) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xac) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*(int *)(this + 0xb0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xb0) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
  }
  if (*(int *)(this + 0xb4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xb4) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb4) + 4))();
    }
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(int *)(this + 0xb8) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xb8) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb8) + 4))();
    }
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if (*(int *)(this + 0xbc) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xbc) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xbc) + 4))();
    }
    *(undefined4 *)(this + 0xbc) = 0;
  }
  if (*(int *)(this + 0xc0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xc0) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xc0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc0) + 4))();
    }
    *(undefined4 *)(this + 0xc0) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x20) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x20) + 4))();
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x88) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
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
  if (*(int *)(this + 0x80) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x80) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0xc4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xc4) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc4) + 4))();
    }
    *(undefined4 *)(this + 0xc4) = 0;
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar4 + DAT_001b2b0c);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)((int)&DAT_001b2b18 + DAT_001b2b10 + iVar2 * 4 + 2));
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b2b14) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b2b14),*(CImage ***)(this + 0x48));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x44));
  }
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c != **(int **)(iVar4 + DAT_001b2b18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


