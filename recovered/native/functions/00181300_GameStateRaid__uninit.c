/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181300 GameStateRaid::uninit */

/* GameStateRaid::uninit() */

void __thiscall GameStateRaid::uninit(GameStateRaid *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CharacterData *pCVar4;
  Character *pCVar5;
  CafeObject *pCVar6;
  Cafe *this_00;
  ServingCounter *this_01;
  FoodStack *pFVar7;
  int local_24;
  
  iVar3 = DAT_001815ac;
  iVar2 = *(int *)(*(int *)(this + 0xc) + DAT_001815a4);
  *(undefined4 *)(iVar2 + DAT_001815a8) = 0;
  *(undefined4 *)(iVar2 + 0x788) = 0;
  *(undefined4 *)(iVar2 + 0x778) = 0;
  *(undefined4 *)(iVar2 + DAT_001815b0) = 0;
  L_PrintLog((char *)(iVar3 + 0x181326),(char *)(DAT_001815b4 + 0x18132c));
  while (-1 < *(int *)(this + 0x124)) {
    do {
      this_01 = *(ServingCounter **)(this + 300);
    } while (this_01 == (ServingCounter *)0x0);
    pFVar7 = (FoodStack *)
             Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x120),0);
    ServingCounter::addFood(this_01,pFVar7);
  }
  if (this[100] == (GameStateRaid)0x0) {
    saveData(this);
  }
  if (*(int *)(this + 0xf8) != 0) {
    CharacterInstance::prepareForSave();
    pCVar4 = (CharacterData *)**(undefined4 **)(*(int *)(this + 0xf8) + 0x8c);
    if (pCVar4 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar4);
      operator_delete(pCVar4);
    }
    pCVar5 = *(Character **)(*(int *)(this + 0xf8) + 0x8c);
    if (pCVar5 != (Character *)0x0) {
      Character::~Character(pCVar5);
      operator_delete(pCVar5);
    }
  }
  while (-1 < *(int *)(this + 0x124)) {
    do {
      pFVar7 = (FoodStack *)**(undefined4 **)(this + 0x128);
    } while (pFVar7 == (FoodStack *)0x0);
    FoodStack::~FoodStack(pFVar7);
    operator_delete(pFVar7);
  }
  iVar3 = *(int *)(this + 0xbc);
  for (iVar2 = 0; iVar2 < iVar3 + 1; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(this + 0xc0));
    CharacterInstance::prepareForSave();
    pCVar5 = *(Character **)(iVar1 + 0x8c);
    if (pCVar5 != (Character *)0x0) {
      Character::~Character(pCVar5);
      operator_delete(pCVar5);
    }
  }
  iVar3 = *(int *)(this + 200);
  for (iVar2 = 0; iVar2 < iVar3 + 1; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(this + 0xcc));
    CharacterInstance::prepareForSave();
    pCVar4 = (CharacterData *)**(undefined4 **)(iVar1 + 0x8c);
    if (pCVar4 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar4);
      operator_delete(pCVar4);
    }
    pCVar5 = *(Character **)(iVar1 + 0x8c);
    if (pCVar5 != (Character *)0x0) {
      Character::~Character(pCVar5);
      operator_delete(pCVar5);
    }
  }
  iVar3 = *(int *)(this + 0x100);
  for (iVar2 = 0; iVar2 < iVar3 + 1; iVar2 = iVar2 + 1) {
    pCVar6 = *(CafeObject **)(iVar2 * 4 + *(int *)(this + 0x104));
    Cafe::removeCafeObject(*(Cafe **)(this + 0x78),pCVar6);
    pCVar5 = *(Character **)(pCVar6 + 0x8c);
    pCVar4 = *(CharacterData **)pCVar5;
    iVar1 = (**(code **)(*(int *)pCVar6 + 0x20))(pCVar6);
    (**(code **)(*(int *)pCVar6 + 4))(pCVar6);
    Character::~Character(pCVar5);
    operator_delete(pCVar5);
    if (((iVar1 == 3) || (iVar1 != 1)) && (pCVar4 != (CharacterData *)0x0)) {
      CharacterData::~CharacterData(pCVar4);
      operator_delete(pCVar4);
    }
  }
  if (*(int **)(this + 0x16c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x16c) + 4))();
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int **)(this + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x170) + 4))();
    *(undefined4 *)(this + 0x170) = 0;
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int **)(this + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x164) + 4))();
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
  }
  if (*(int **)(this + 0x168) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x168) + 4))();
  }
  if (*(int **)(this + 0x14c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14c) + 4))();
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
  }
  if (*(int **)(this + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x140) + 4))();
  }
  if (*(int **)(this + 0x13c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x13c) + 4))();
  }
  if (*(int **)(this + 0x138) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x138) + 4))();
  }
  if (*(int **)(this + 0x134) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x134) + 4))();
  }
  if (*(int **)(this + 0x150) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x150) + 4))();
  }
  for (local_24 = 0; local_24 < *(int *)(this + 0xd0); local_24 = local_24 + 1) {
    iVar3 = local_24 * 4;
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001816c4 + 8) + iVar3) + 0x44) =
         (char)*(undefined4 *)(*(int *)(this + 0xdc) + iVar3);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001816c4 + 8) + iVar3) + 0x48) =
         *(undefined4 *)(*(int *)(this + 0xe8) + iVar3);
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001816c4 + 8) + iVar3) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(this + 0xf4) + iVar3);
  }
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  this_00 = *(Cafe **)(this + 0x78);
  if (this_00 != (Cafe *)0x0) {
    Cafe::~Cafe(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001816c8) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001816c8),*(CImage ***)(this + 0x7c));
  }
  if (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x80));
  }
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadFurnitureImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),true);
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
    *(undefined4 *)(this + 0x20) = 0;
  }
  EnemyLayouts::unload();
  *(undefined4 *)(*(int *)(this + 0xc) + 0x7e8) = 0;
  return;
}


