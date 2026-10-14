/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4d88 GameStatePrizeMenu::uninit */

/* GameStatePrizeMenu::uninit() */

void __thiscall GameStatePrizeMenu::uninit(GameStatePrizeMenu *this)

{
  int *piVar1;
  int iVar2;
  Cafe *this_00;
  void *pvVar3;
  FontManager *this_01;
  
  this_00 = *(Cafe **)(this + 0x14);
  if (this_00 != (Cafe *)0x0) {
    Cafe::~Cafe(this_00);
    operator_delete(this_00);
  }
  if (*(int **)(*(int *)(this + 0x20) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x20) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x24) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x24) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x28) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x28) + 100) + 4))();
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
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
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))();
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
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x40) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
  }
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 4))();
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
  }
  pvVar3 = *(void **)(this + 0x70);
  if (pvVar3 != (void *)0x0) {
    String::~String((String *)((int)pvVar3 + 0x10));
    operator_delete(pvVar3);
    *(undefined4 *)(this + 0x70) = 0;
  }
  this_01 = (FontManager *)**(undefined4 **)(DAT_001c4eec + 0x1c4e82);
  iVar2 = SmDev();
  FontManager::delFont(this_01,*(int *)((int)&DAT_001c4ef0 + DAT_001c4ef0 + iVar2 * 4));
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c4ef4) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c4ef4),*(CImage ***)(this + 0x30));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x2c));
  }
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadPrizeMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),false);
  return;
}


