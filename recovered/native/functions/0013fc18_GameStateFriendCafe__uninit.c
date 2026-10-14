/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013fc18 GameStateFriendCafe::uninit */

/* GameStateFriendCafe::uninit() */

undefined8 __thiscall GameStateFriendCafe::uninit(GameStateFriendCafe *this)

{
  int iVar1;
  int iVar2;
  CafeObject *pCVar3;
  Character *pCVar4;
  void *pvVar5;
  Cafe *this_00;
  int iVar6;
  GameStateFriendCafe *local_20;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + DAT_0013ff00);
  *(undefined4 *)(iVar1 + DAT_0013ff04) = 0;
  *(undefined4 *)(iVar1 + 0x788) = 0;
  *(undefined4 *)(iVar1 + 0x778) = 0;
  *(undefined4 *)(iVar1 + DAT_0013ff08) = 0;
  if (*(void **)(this + 0x1e4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1e4));
  }
  while (*(int *)(this + 0x13c) != -1) {
    iVar1 = Vector<CharacterInstance*>::removeElementAt
                      ((Vector<CharacterInstance*> *)(this + 0x138),0);
    CharacterInstance::prepareForSave();
    pCVar4 = *(Character **)(iVar1 + 0x8c);
    if (pCVar4 != (Character *)0x0) {
      Character::~Character(pCVar4);
      operator_delete(pCVar4);
    }
  }
  while (*(int *)(this + 0x130) != -1) {
    iVar1 = Vector<CharacterInstance*>::removeElementAt
                      ((Vector<CharacterInstance*> *)(this + 300),0);
    CharacterInstance::prepareForSave();
    pCVar4 = *(Character **)(iVar1 + 0x8c);
    if (pCVar4 != (Character *)0x0) {
      Character::~Character(pCVar4);
      operator_delete(pCVar4);
    }
  }
  iVar1 = *(int *)(this + 0x148);
  local_20 = this;
  for (iVar6 = 0; iVar6 < iVar1 + 1; iVar6 = iVar6 + 1) {
    pCVar3 = *(CafeObject **)(iVar6 * 4 + *(int *)(this + 0x14c));
    Cafe::removeCafeObject(*(Cafe **)(this + 0x34),pCVar3);
    local_20 = *(GameStateFriendCafe **)(pCVar3 + 0x8c);
    (**(code **)(*(int *)pCVar3 + 4))(pCVar3);
    if (local_20 != (GameStateFriendCafe *)0x0) {
      Character::~Character((Character *)local_20);
      operator_delete(local_20);
    }
  }
  pCVar4 = *(Character **)(this + 0xbc);
  if (pCVar4 != (Character *)0x0) {
    Character::~Character(pCVar4);
    operator_delete(pCVar4);
  }
  if (*(int **)(this + 0x1d8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1d8) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(void **)(this + 0x20c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20c));
  }
  if (*(int **)(this + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c4) + 4))();
  }
  if (*(int **)(this + 0x1b4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b4) + 4))();
  }
  if (*(int **)(this + 0x1bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1bc) + 4))();
  }
  pvVar5 = *(void **)(this + 0x1b8);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar5 + 8));
    }
    operator_delete(pvVar5);
  }
  if (*(int **)(this + 0x19c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x19c) + 4))();
  }
  if (*(int **)(this + 0x1c8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c8) + 4))();
  }
  if (*(int **)(this + 0x1b0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b0) + 4))();
  }
  if (*(int **)(this + 0x1ac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1ac) + 4))();
  }
  if (*(int **)(this + 0x1cc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1cc) + 4))();
  }
  if (*(int **)(this + 0x1d0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1d0) + 4))();
  }
  if (*(int **)(this + 0x1c0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c0) + 4))();
  }
  if (*(int **)(this + 0x1a4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1a4) + 4))();
  }
  if (*(int **)(this + 0x1a8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1a8) + 4))();
  }
  this_00 = *(Cafe **)(this + 0x34);
  if (this_00 != (Cafe *)0x0) {
    Cafe::~Cafe(this_00);
    operator_delete(this_00);
  }
  iVar6 = 0;
  *(undefined4 *)(*(int *)(this + 0xc) + 0x7e8) = 0;
  if (this[0xc3] != (GameStateFriendCafe)0x0) {
    for (; iVar6 < *(int *)(*(int *)(this + 0xc) + DAT_0013ff0c + 4) + 1; iVar6 = iVar6 + 1) {
      iVar2 = iVar6 * 4;
      *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0013ff0c + 8) + iVar2) + 0x44) =
           (char)*(undefined4 *)(*(int *)(this + 0x168) + iVar2);
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0013ff0c + 8) + iVar2) + 0x48) =
           *(undefined4 *)(*(int *)(this + 0x174) + iVar2);
      *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0013ff0c + 8) + iVar2) + 0x4c) =
           (char)*(undefined4 *)(*(int *)(this + 0x180) + iVar2);
    }
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013ff10) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013ff10),*(CImage ***)(this + 400));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x194));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013ff14) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013ff14),*(CImage ***)(this + 0x198));
  }
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadFurnitureImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),true);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),true);
  return CONCAT44(iVar1 + 1,local_20);
}


