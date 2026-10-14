/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018c4e0 GameStateRoulette::uninit */

/* GameStateRoulette::uninit() */

void __thiscall GameStateRoulette::uninit(GameStateRoulette *this)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  FontManager *pFVar4;
  char *pcVar5;
  Cafe *this_00;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char acStack_11c [256];
  int local_1c;
  
  iVar7 = DAT_0018c80c + 0x18c4ec;
  pcVar5 = (char *)(DAT_0018c814 + 0x18c4f2);
  local_1c = **(int **)(iVar7 + DAT_0018c810);
  L_PrintLog(pcVar5,(char *)(DAT_0018c818 + 0x18c4fa));
  uVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + DAT_0018c81c));
  sprintf(acStack_11c,(char *)(DAT_0018c820 + 0x18c514),uVar1);
  L_PrintLog(pcVar5,acStack_11c);
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0018c824) = 0;
  unSelectCharacter(this);
  unSelectFurniture(this);
  if (*(int **)(this + DAT_0018c828) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0018c828) + 4))();
  }
  if (*(int **)(this + DAT_0018c82c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0018c82c) + 4))();
  }
  if (*(int **)(this + DAT_0018c830) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0018c830) + 4))();
  }
  if (*(int **)(this + 0xe40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe40) + 4))();
  }
  if (*(int **)(this + DAT_0018c834) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0018c834) + 4))();
  }
  if (*(int **)(this + DAT_0018c838) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0018c838) + 4))();
  }
  if (*(int **)(this + 0xe50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe50) + 4))();
  }
  if (*(int *)(this + 0x74) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x74) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  iVar3 = DAT_0018c83c;
  if (*(int **)(*(int *)(this + DAT_0018c83c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + DAT_0018c83c) + 100) + 4))();
  }
  if (*(int **)(this + iVar3) != (int *)0x0) {
    (**(code **)(**(int **)(this + iVar3) + 4))();
  }
  if (*(int **)(this + 0xe30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe30) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x48) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x48) + 100) + 4))();
  }
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x4c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x4c) + 100) + 4))();
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x50) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x50) + 100) + 4))();
  }
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x54) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x54) + 100) + 4))();
  }
  if (*(int **)(this + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x54) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x58) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x58) + 100) + 4))();
  }
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 4))();
  }
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x5c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x5c) + 100) + 4))();
  }
  if (*(int **)(this + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x5c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x60) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x60) + 100) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x80) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x80) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x78) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
  }
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x8c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 100) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  if (this[DAT_0018c840] != (GameStateRoulette)0x0) {
    this_00 = *(Cafe **)(this + 0xe20);
    if (this_00 != (Cafe *)0x0) {
      Cafe::~Cafe(this_00);
      operator_delete(this_00);
    }
    ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),false);
    ZombieCafe::unloadFurnitureImages(*(ZombieCafe **)(this + 0xc),false);
  }
  releaseCharacterAll(this);
  releaseFurnitureAll(this);
  puVar8 = *(undefined4 **)(iVar7 + DAT_0018c844);
  iVar6 = DAT_0018c848 + 0x18c7f8;
  pFVar4 = (FontManager *)*puVar8;
  iVar3 = SmDev();
  FontManager::delFont(pFVar4,*(int *)(iVar6 + iVar3 * 4 + 0x24));
  pFVar4 = (FontManager *)*puVar8;
  iVar3 = SmDev();
  FontManager::delFont(pFVar4,*(int *)(iVar6 + iVar3 * 4 + 0x3c));
  iVar3 = DAT_0018c8c8;
  uVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + DAT_0018c8c4));
  sprintf(acStack_11c,(char *)(DAT_0018c8cc + 0x18c874),uVar1);
  L_PrintLog((char *)(iVar3 + 0x18c872),acStack_11c);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  uVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + DAT_0018c8d0));
  sprintf(acStack_11c,(char *)(DAT_0018c8d4 + 0x18c89c),uVar1);
  L_PrintLog((char *)(iVar3 + 0x18c872),acStack_11c);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),true);
  if (local_1c != **(int **)(iVar7 + DAT_0018c8d8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


