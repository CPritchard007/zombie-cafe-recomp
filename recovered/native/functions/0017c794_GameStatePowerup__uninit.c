/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017c794 GameStatePowerup::uninit */

/* GameStatePowerup::uninit() */

void __thiscall GameStatePowerup::uninit(GameStatePowerup *this)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  GameStatePowerup *pGVar4;
  int iVar5;
  Character *this_00;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  FontManager *pFVar9;
  int iVar10;
  char acStack_11c [256];
  int local_1c;
  
  iVar10 = DAT_0017cac0 + 0x17c7a0;
  local_1c = **(int **)(iVar10 + DAT_0017cac4);
  unSelectCharacter(this);
  if (*(int **)(this + DAT_0017cac8) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0017cac8) + 4))();
  }
  if (*(int **)(this + DAT_0017cacc) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0017cacc) + 4))();
  }
  if (*(int **)(this + 0x528) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x528) + 4))();
    *(undefined4 *)(this + 0x528) = 0;
  }
  if (*(int **)(this + 0x510) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x510) + 4))();
  }
  if (*(int **)(this + DAT_0017cad0) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0017cad0) + 4))();
  }
  if (*(int **)(this + 0x518) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x518) + 4))();
  }
  if (*(int **)(this + 0x520) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x520) + 4))();
  }
  if (*(int **)(this + DAT_0017cad4) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0017cad4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x98) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x98) + 100) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x9c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x9c) + 100) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa0) + 100) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa4) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa4) + 100) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  iVar8 = 0;
  do {
    piVar1 = *(int **)(*(int *)(this + iVar8 + 0xb4) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(this + iVar8 + 0xb4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar8 = iVar8 + 4;
  } while (iVar8 != 0x28);
  if (*(int **)(*(int *)(this + 0xb0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb0) + 100) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  pGVar4 = this + 0xf8;
  if (*(int *)pGVar4 != 0) {
    L_PrintLog((char *)(DAT_0017cad8 + 0x17c908),(char *)(DAT_0017cadc + 0x17c90a));
    piVar1 = *(int **)(iVar10 + DAT_0017cae0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar4);
    if (*(int **)pGVar4 != (int *)0x0) {
      (**(code **)(**(int **)pGVar4 + 4))();
    }
    *(undefined4 *)(this + 0xf8) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017cae4 + 0x17c938),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_0017cae8 + 0x17c944),acStack_11c);
  }
  if (*(int *)(this + 0x104) != 0) {
    L_PrintLog((char *)(DAT_0017caec + 0x17c958),(char *)(DAT_0017caf0 + 0x17c95a));
    piVar1 = *(int **)(iVar10 + DAT_0017cae0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x104));
    if (*(int **)(this + 0x104) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x104) + 4))();
    }
    *(undefined4 *)(this + 0x104) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017caf4 + 0x17c988),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_0017caf8 + 0x17c994),acStack_11c);
  }
  if (*(int **)(*(int *)(this + 0x500) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x500) + 100) + 4))();
  }
  if (*(int **)(this + 0x500) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x500) + 4))();
  }
  iVar8 = DAT_0017cafc;
  if (*(int *)(this + DAT_0017cafc) != 0) {
    piVar1 = *(int **)(*(int *)(this + DAT_0017cafc) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + iVar8) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar8) + 4))();
    }
    *(undefined4 *)(this + iVar8) = 0;
  }
  if (*(int *)(this + 0x508) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x508) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x508) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x508) + 4))();
    }
    *(undefined4 *)(this + 0x508) = 0;
  }
  if (*(int **)(*(int *)(this + 0xec) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xec) + 100) + 4))();
  }
  if (*(int **)(this + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xec) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa8) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 100) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xac) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xac) + 100) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xf4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xf4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 4))();
  }
  if (*(int *)(this + 0x100) != 0) {
    (**(code **)(**(int **)(this + 0xfc) + 0x34))();
    if (*(int **)(this + 0x100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x100) + 4))();
    }
    *(undefined4 *)(this + 0x100) = 0;
  }
  if (*(int **)(*(int *)(this + 0xfc) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xfc) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xf0) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xf0) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xe4) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xe4) + 100) + 4))();
  }
  if (*(int **)(this + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe4) + 4))();
  }
  if (*(int *)(this + 0x108) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x108) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x108) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x108) + 4))();
    }
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (*(int *)(this + 0x10c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x10c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x10c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x10c) + 4))();
    }
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (*(int *)(this + 0x110) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x110) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x110) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x110) + 4))();
    }
    *(undefined4 *)(this + 0x110) = 0;
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
    *(undefined4 *)(this + 0x14) = 0;
  }
  iVar8 = 0;
  do {
    iVar5 = iVar8 + 1;
    releaseCharacter(this,iVar8);
    iVar8 = iVar5;
  } while (iVar5 != 0xde);
  if (*(int **)(this + 0x490) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x490) + 4))();
  }
  iVar8 = DAT_0017cd44;
  if (*(int *)(this + DAT_0017cd44) != 0) {
    this_00 = *(Character **)(*(int *)(this + DAT_0017cd44) + 0x8c);
    if (this_00 != (Character *)0x0) {
      Character::~Character(this_00);
      operator_delete(this_00);
    }
    if (*(int **)(this + iVar8) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar8) + 4))();
    }
  }
  iVar8 = 0;
  while( true ) {
    if (*(int *)(*(int *)(this + 0xc) + DAT_0017cd48 + 4) + 1 <= iVar8) break;
    iVar5 = iVar8 * 4;
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017cd48 + 8) + iVar5) + 0x44) =
         (char)*(undefined4 *)(*(int *)(this + 0x44) + iVar5);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017cd48 + 8) + iVar5) + 0x48) =
         *(undefined4 *)(*(int *)(this + 0x50) + iVar5);
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017cd48 + 8) + iVar5) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(this + 0x5c) + iVar5);
    iVar3 = *(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017cd48 + 8) + iVar5);
    uVar6 = *(undefined4 *)(*(int *)(this + 0x68) + iVar5);
    uVar2 = Character::getMaxEnergy();
    iVar5 = __aeabi_fcmplt(uVar6,0);
    if (iVar5 == 0) {
      iVar5 = __aeabi_fcmpgt(uVar6,uVar2);
      if (iVar5 != 0) {
        uVar6 = uVar2;
      }
    }
    else {
      uVar6 = 0;
    }
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar3 + 0x40) = uVar6;
  }
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  if (*(int **)(this + 0x498) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x498) + 4))();
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
  }
  puVar7 = *(undefined4 **)(iVar10 + DAT_0017cd4c);
  pFVar9 = (FontManager *)*puVar7;
  iVar8 = SmDev();
  FontManager::delFont(pFVar9,*(int *)(_INIT_39 + DAT_0017cd50 + iVar8 * 4));
  pFVar9 = (FontManager *)*puVar7;
  iVar8 = SmDev();
  FontManager::delFont(pFVar9,*(int *)(iVar8 * 4 + DAT_0017cd54 + 0x17cd0a));
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c != **(int **)(iVar10 + DAT_0017cd58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


