/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c9de8 GameStateZukan::uninit */

/* GameStateZukan::uninit() */

void __thiscall GameStateZukan::uninit(GameStateZukan *this)

{
  int *piVar1;
  int iVar2;
  FontManager *this_00;
  
  releaseSelectCharacter(this);
  iVar2 = 0;
  do {
    if (*(int **)(this + iVar2 + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar2 + 0x8c) + 4))();
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x24);
  iVar2 = 0;
  do {
    if (*(int **)(this + iVar2 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar2 + 0x38) + 4))();
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x1c);
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
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x24) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x24) + 4))();
    }
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x20) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x20) + 4))();
    }
    *(undefined4 *)(this + 0x20) = 0;
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
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 4))();
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int **)(this + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x5c) + 4))();
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
    *(undefined4 *)(this + 0x60) = 0;
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
  if (*(int *)(this + 100) != 0) {
    piVar1 = *(int **)(*(int *)(this + 100) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
    *(undefined4 *)(this + 100) = 0;
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
  if (*(int *)(this + 0xc4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xc4) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc4) + 4))();
    }
    *(undefined4 *)(this + 0xc4) = 0;
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
    *(undefined4 *)(this + 0x1c) = 0;
  }
  this_00 = (FontManager *)**(undefined4 **)(DAT_001c9fe8 + 0x1c9fc0);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_001c9fec + iVar2 * 4 + 0x1c9fe2));
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  return;
}


