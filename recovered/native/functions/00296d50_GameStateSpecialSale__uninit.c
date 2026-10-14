/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00296d50 GameStateSpecialSale::uninit */

/* GameStateSpecialSale::uninit() */

void __thiscall GameStateSpecialSale::uninit(GameStateSpecialSale *this)

{
  int *piVar1;
  int *piVar2;
  GameStateSpecialSale *pGVar3;
  int iVar4;
  Cafe *this_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  FontManager *pFVar8;
  float fVar9;
  char acStack_11c [256];
  int local_1c;
  
  iVar6 = DAT_0029706c + 0x296d5c;
  piVar2 = *(int **)(iVar6 + DAT_00297070);
  local_1c = *piVar2;
  L_PrintLog((char *)(DAT_00297074 + 0x296d6a),(char *)(DAT_00297078 + 0x296d68));
  fVar9 = (float)unSelectInstance(this);
  ZombieCafe::stopMusic(fVar9);
  ZombieCafe::unloadMusic(*(ZombieCafe **)(this + 0xc),0);
  if (*(int **)(this + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x448) + 4))();
  }
  if (*(int **)(this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x438) + 4))();
  }
  if (*(int **)(this + DAT_0029707c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0029707c) + 4))();
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 4))();
  }
  if (*(int **)(this + DAT_00297080) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00297080) + 4))();
  }
  if (*(int **)(this + DAT_00297084) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00297084) + 4))();
  }
  if (*(int **)(this + 0x450) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x450) + 4))();
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
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_00297088 + 0x296e8a),(char *)(DAT_0029708c + 0x296e8c));
    piVar1 = *(int **)(iVar6 + DAT_00297090);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_00297094 + 0x296eba),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00297098 + 0x296ec6),acStack_11c);
  }
  pGVar3 = this + 0x88;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_0029709c + 0x296eda),(char *)(DAT_002970a0 + 0x296edc));
    piVar1 = *(int **)(iVar6 + DAT_00297090);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
    if (*(int **)pGVar3 != (int *)0x0) {
      (**(code **)(**(int **)pGVar3 + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_002970a4 + 0x296f0a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_002970a8 + 0x296f16),acStack_11c);
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
  if (*(int *)(this + 100) != 0) {
    piVar1 = *(int **)(*(int *)(this + 100) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    L_PrintLog((char *)(DAT_002970ac + 0x296fae),(char *)(DAT_002970b0 + 0x296fb0));
    piVar1 = *(int **)(iVar6 + DAT_00297090);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x68));
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
    sprintf(acStack_11c,(char *)(DAT_002970b4 + 0x296fda),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_002970b8 + 0x296fe6),acStack_11c);
  }
  if (*(int *)(this + 0x6c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x6c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x70) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    L_PrintLog((char *)(DAT_002970bc + 0x29703a),(char *)(DAT_002970c0 + 0x29703c));
    piVar1 = *(int **)(iVar6 + DAT_00297090);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x74));
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
    sprintf(acStack_11c,(char *)(DAT_002970c4 + 0x297066),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00297204 + 0x2970d0),acStack_11c);
  }
  if (*(int *)(this + 0x7c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x7c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    L_PrintLog((char *)(DAT_00297208 + 0x297104),(char *)(DAT_0029720c + 0x297106));
    piVar1 = *(int **)(iVar6 + DAT_00297210);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x80));
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
    sprintf(acStack_11c,(char *)(DAT_00297214 + 0x297132),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00297218 + 0x29713e),acStack_11c);
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x78) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
    *(undefined4 *)(this + 0x18) = 0;
  }
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    releaseInstance(this,iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 100);
  this_00 = *(Cafe **)(this + 0x8c);
  if (this_00 != (Cafe *)0x0) {
    Cafe::~Cafe(this_00);
    operator_delete(this_00);
  }
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),false);
  puVar7 = *(undefined4 **)(iVar6 + DAT_0029721c);
  iVar5 = DAT_00297220 + 0x2971aa;
  pFVar8 = (FontManager *)*puVar7;
  iVar6 = SmDev();
  FontManager::delFont(pFVar8,*(int *)(iVar5 + iVar6 * 4 + 0x2c));
  pFVar8 = (FontManager *)*puVar7;
  iVar6 = SmDev();
  FontManager::delFont(pFVar8,*(int *)(iVar5 + iVar6 * 4 + 0x44));
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  L_PrintLog((char *)(DAT_00297224 + 0x2971ec),(char *)(DAT_00297228 + 0x2971ee));
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


