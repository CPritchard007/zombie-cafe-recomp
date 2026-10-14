/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00197b50 GameStateDoJo::uninit */

/* GameStateDoJo::uninit() */

void __thiscall GameStateDoJo::uninit(GameStateDoJo *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  GameStateDoJo *pGVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  FontManager *pFVar9;
  int iVar10;
  char acStack_11c [256];
  int local_1c;
  
  iVar8 = DAT_00197e7c + 0x197b5c;
  local_1c = **(int **)(iVar8 + DAT_00197e80);
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_00197e84) = 0;
  unSelectCharacter(SUB41(this,0));
  if (*(int **)(this + 0x710) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x710) + 4))();
  }
  if (*(int **)(this + 0x700) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x700) + 4))();
  }
  if (*(int **)(this + DAT_00197e88) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00197e88) + 4))();
  }
  if (*(int **)(this + 0x708) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x708) + 4))();
  }
  if (*(int **)(this + DAT_00197e8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00197e8c) + 4))();
  }
  if (*(int **)(this + DAT_00197e90) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00197e90) + 4))();
  }
  if (*(int **)(this + 0x718) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x718) + 4))();
  }
  iVar2 = DAT_00197e94;
  if (*(int **)(*(int *)(this + DAT_00197e94) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + DAT_00197e94) + 100) + 4))();
  }
  if (*(int **)(this + iVar2) != (int *)0x0) {
    (**(code **)(**(int **)(this + iVar2) + 4))();
  }
  if (*(int **)(this + 0x6f8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6f8) + 4))();
  }
  if (*(int *)(this + 0xd4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xd4) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xd4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xd4) + 4))();
    }
    *(undefined4 *)(this + 0xd4) = 0;
  }
  if (*(int *)(this + 0xd8) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xd8) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xd8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xd8) + 4))();
    }
    *(undefined4 *)(this + 0xd8) = 0;
  }
  if (*(int *)(this + 0xdc) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xdc) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xdc) + 4))();
    }
    *(undefined4 *)(this + 0xdc) = 0;
  }
  if (*(int **)(*(int *)(this + 0x8c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 100) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x90) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 100) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x94) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x94) + 100) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
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
  if (*(int **)(*(int *)(this + 0xb4) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb4) + 100) + 4))();
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb0) + 100) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xbc) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xbc) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xd0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xd0) + 100) + 4))();
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xc0) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xc0) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  pGVar5 = this + 200;
  if (*(int *)pGVar5 != 0) {
    L_PrintLog((char *)(DAT_00198014 + 0x197edc),(char *)(DAT_00198018 + 0x197ede));
    piVar1 = *(int **)(iVar8 + DAT_0019801c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar5);
    if (*(int **)pGVar5 != (int *)0x0) {
      (**(code **)(**(int **)pGVar5 + 4))();
    }
    *(undefined4 *)(this + 200) = 0;
    sprintf(acStack_11c,(char *)(DAT_00198020 + 0x197f0c),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_00198024 + 0x197f18),acStack_11c);
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  releaseCharacterAll(this);
  puVar6 = *(undefined4 **)(iVar8 + DAT_00198028);
  pFVar9 = (FontManager *)*puVar6;
  iVar2 = SmDev();
  FontManager::delFont(pFVar9,*(int *)(DAT_0019802c + iVar2 * 4 + 0x197fae));
  pFVar9 = (FontManager *)*puVar6;
  iVar2 = SmDev();
  iVar10 = 0;
  FontManager::delFont(pFVar9,*(int *)(DAT_00198030 + iVar2 * 4 + 0x197f5e));
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  while( true ) {
    if (*(int *)(*(int *)(this + 0xc) + DAT_00198034 + 4) + 1 <= iVar10) break;
    iVar2 = iVar10 * 4;
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00198034 + 8) + iVar2) + 0x44) =
         (char)*(undefined4 *)(*(int *)(this + 0x3c) + iVar2);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00198034 + 8) + iVar2) + 0x48) =
         *(undefined4 *)(*(int *)(this + 0x48) + iVar2);
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00198034 + 8) + iVar2) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(this + 0x54) + iVar2);
    iVar4 = *(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00198034 + 8) + iVar2);
    uVar7 = *(undefined4 *)(*(int *)(this + 0x60) + iVar2);
    uVar3 = Character::getMaxEnergy();
    iVar2 = __aeabi_fcmplt(uVar7,0);
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmpgt(uVar7,uVar3);
      if (iVar2 != 0) {
        uVar7 = uVar3;
      }
    }
    else {
      uVar7 = 0;
    }
    iVar10 = iVar10 + 1;
    *(undefined4 *)(iVar4 + 0x40) = uVar7;
  }
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  if (local_1c != **(int **)(iVar8 + DAT_00198038)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


