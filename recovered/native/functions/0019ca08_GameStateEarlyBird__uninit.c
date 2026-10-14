/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ca08 GameStateEarlyBird::uninit */

/* GameStateEarlyBird::uninit() */

void __thiscall GameStateEarlyBird::uninit(GameStateEarlyBird *this)

{
  int *piVar1;
  int iVar2;
  FontManager *pFVar3;
  GameStateEarlyBird *pGVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_124;
  char acStack_11c [256];
  int local_1c;
  
  iVar7 = DAT_0019cd3c + 0x19ca14;
  local_1c = **(int **)(iVar7 + DAT_0019cd40);
  unSelectCharacter(this);
  if (*(int **)(this + 900) != (int *)0x0) {
    (**(code **)(**(int **)(this + 900) + 4))();
  }
  if (*(int **)(this + 0x374) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x374) + 4))();
  }
  if (*(int **)(this + 0x378) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x378) + 4))();
  }
  if (*(int **)(this + 0x37c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x37c) + 4))();
  }
  if (*(int **)(this + 0x380) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x380) + 4))();
  }
  if (*(int **)(this + 0x388) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x388) + 4))();
  }
  if (*(int **)(this + 0x38c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x364) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x364) + 100) + 4))();
  }
  if (*(int **)(this + 0x364) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x364) + 4))();
  }
  if (*(int **)(this + 0x368) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x368) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x38) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x38) + 100) + 4))();
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x3c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x3c) + 100) + 4))();
  }
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x40) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x40) + 100) + 4))();
  }
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x44) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x44) + 100) + 4))();
  }
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))();
  }
  local_124 = 8;
  pGVar4 = this;
  do {
    if (*(int **)(*(int *)(pGVar4 + 0x48) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(pGVar4 + 0x48) + 100) + 4))();
    }
    if (*(int **)(pGVar4 + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar4 + 0x48) + 4))();
    }
    if (*(int **)(*(int *)(pGVar4 + 0x68) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(pGVar4 + 0x68) + 100) + 4))();
    }
    if (*(int **)(pGVar4 + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar4 + 0x68) + 4))();
    }
    piVar1 = *(int **)(*(int *)(pGVar4 + 0x88) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(pGVar4 + 0x88);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(pGVar4 + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar4 + 0xa8) + 4))();
    }
    piVar1 = *(int **)(*(int *)(pGVar4 + 200) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(pGVar4 + 200);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    pGVar4 = pGVar4 + 4;
    local_124 = local_124 + -1;
  } while (local_124 != 0);
  if (*(int **)(*(int *)(this + 0xe8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xe8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xec) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xec) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xec) + 4))();
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 4))();
  }
  pGVar4 = this + 0xf8;
  if (*(int *)pGVar4 != 0) {
    L_PrintLog((char *)(DAT_0019cd44 + 0x19cc1c),(char *)(DAT_0019cd48 + 0x19cc1e));
    piVar1 = *(int **)(iVar7 + DAT_0019cd4c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar4);
    if (*(int **)pGVar4 != (int *)0x0) {
      (**(code **)(**(int **)pGVar4 + 4))();
    }
    *(undefined4 *)(this + 0xf8) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019cd50 + 0x19cc4c),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_0019cd54 + 0x19cc58),acStack_11c);
  }
  pGVar4 = this + 0xfc;
  if (*(int *)pGVar4 != 0) {
    L_PrintLog((char *)(DAT_0019cd58 + 0x19cc6c),(char *)(DAT_0019cd5c + 0x19cc6e));
    piVar1 = *(int **)(iVar7 + DAT_0019cd4c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar4);
    if (*(int **)pGVar4 != (int *)0x0) {
      (**(code **)(**(int **)pGVar4 + 4))();
    }
    *(undefined4 *)(this + 0xfc) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019cd60 + 0x19cc9c),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_0019cd64 + 0x19cca8),acStack_11c);
  }
  if (*(int *)(this + 0x100) != 0) {
    L_PrintLog((char *)(DAT_0019cd68 + 0x19ccbc),(char *)(DAT_0019cd6c + 0x19ccbe));
    piVar1 = *(int **)(iVar7 + DAT_0019cd4c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x100));
    if (*(int **)(this + 0x100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x100) + 4))();
    }
    *(undefined4 *)(this + 0x100) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019cd70 + 0x19ccec),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_0019cd74 + 0x19ccf8),acStack_11c);
  }
  pGVar4 = this + 0xf4;
  if (*(int *)pGVar4 != 0) {
    L_PrintLog((char *)(DAT_0019cd78 + 0x19cd0c),(char *)(DAT_0019cd7c + 0x19cd0e));
    piVar1 = *(int **)(iVar7 + DAT_0019cd4c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar4);
    if (*(int **)pGVar4 != (int *)0x0) {
      (**(code **)(**(int **)pGVar4 + 4))();
    }
    *(undefined4 *)(this + 0xf4) = 0;
    sprintf(acStack_11c,(char *)((int)&DAT_0019cd3c + DAT_0019cd80),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_0019cdf8 + 0x19cd92),acStack_11c);
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  releaseCharacterAll(this);
  puVar6 = *(undefined4 **)(iVar7 + DAT_0019cdfc);
  iVar5 = DAT_0019ce00 + 0x19cdb0;
  pFVar3 = (FontManager *)*puVar6;
  iVar2 = SmDev();
  FontManager::delFont(pFVar3,*(int *)(iVar5 + iVar2 * 4 + 0x60));
  pFVar3 = (FontManager *)*puVar6;
  iVar2 = SmDev();
  FontManager::delFont(pFVar3,*(int *)(iVar5 + iVar2 * 4 + 0x78));
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c != **(int **)(iVar7 + DAT_0019ce04)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


