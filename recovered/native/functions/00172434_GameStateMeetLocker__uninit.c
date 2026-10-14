/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00172434 GameStateMeetLocker::uninit */

/* GameStateMeetLocker::uninit() */

void __thiscall GameStateMeetLocker::uninit(GameStateMeetLocker *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  FontManager *pFVar5;
  
  unSelectCharacter(this);
  if (*(int **)(this + DAT_00172724) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00172724) + 4))();
  }
  if (*(int **)(this + DAT_00172728) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00172728) + 4))();
  }
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 4))();
  }
  if (*(int **)(this + DAT_0017272c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0017272c) + 4))();
  }
  if (*(int **)(this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x438) + 4))();
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 4))();
  }
  if (*(int **)(this + DAT_00172730) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00172730) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x410) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x410) + 100) + 4))();
  }
  if (*(int **)(this + 0x410) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x410) + 4))();
  }
  if (*(int **)(this + DAT_00172734) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00172734) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x418) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x418) + 100) + 4))();
  }
  if (*(int **)(this + 0x418) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x418) + 4))();
  }
  if (*(int **)(this + DAT_00172738) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00172738) + 4))();
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
  iVar4 = 0;
  do {
    if (*(int **)(*(int *)(this + iVar4 + 0x58) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + iVar4 + 0x58) + 100) + 4))();
    }
    if (*(int **)(this + iVar4 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar4 + 0x58) + 4))();
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x28);
  if (*(int **)(*(int *)(this + 0x90) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x98) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x98) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa0) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa0) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x8c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int *)(this + 0xb0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xb0) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
  }
  if (*(int *)(this + 0xb4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xb4) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb4) + 4))();
    }
    *(undefined4 *)(this + 0xb4) = 0;
  }
  iVar4 = DAT_0017273c;
  if (*(int *)(this + DAT_0017273c) != 0) {
    piVar1 = *(int **)(*(int *)(this + DAT_0017273c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + iVar4) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar4) + 4))();
    }
    *(undefined4 *)(this + iVar4) = 0;
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 1;
    releaseCharacter(this,iVar4);
    iVar4 = iVar2;
  } while (iVar2 != 0xd2);
  puVar3 = *(undefined4 **)(DAT_00172740 + 0x1726e2);
  iVar2 = DAT_00172744 + 0x1726e6;
  pFVar5 = (FontManager *)*puVar3;
  iVar4 = SmDev();
  FontManager::delFont(pFVar5,*(int *)(iVar2 + iVar4 * 4 + 0x20));
  pFVar5 = (FontManager *)*puVar3;
  iVar4 = SmDev();
  FontManager::delFont(pFVar5,*(int *)(iVar2 + iVar4 * 4 + 0x38));
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  return;
}


