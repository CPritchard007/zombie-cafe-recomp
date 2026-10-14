/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b6fec GameStateEventRaid3::uninit */

/* GameStateEventRaid3::uninit() */

void __thiscall GameStateEventRaid3::uninit(GameStateEventRaid3 *this)

{
  int *piVar1;
  undefined4 uVar2;
  CharacterData *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CafeObject *pCVar8;
  Cafe *this_00;
  undefined4 uVar9;
  Character *pCVar10;
  int local_24;
  
  iVar6 = *(int *)(*(int *)(this + 0xc) + DAT_001b7314);
  *(undefined4 *)(iVar6 + DAT_001b7318) = 0;
  *(undefined4 *)(iVar6 + 0x788) = 0;
  *(undefined4 *)(iVar6 + 0x778) = 0;
  *(undefined4 *)(iVar6 + DAT_001b731c) = 0;
  while (-1 < *(int *)(this + 0x120)) {
    pCVar8 = (CafeObject *)
             Vector<CharacterInstance*>::removeElementAt
                       ((Vector<CharacterInstance*> *)(this + 0x11c),0);
    pCVar10 = *(Character **)(pCVar8 + 0x8c);
    pCVar3 = *(CharacterData **)pCVar10;
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x84) + 0x20),pCVar8);
    (**(code **)(*(int *)pCVar8 + 4))(pCVar8);
    Character::~Character(pCVar10);
    operator_delete(pCVar10);
    if (pCVar3 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar3);
      operator_delete(pCVar3);
    }
  }
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  iVar6 = *(int *)(this + 0x138);
  for (local_24 = 0; local_24 < iVar6 + 1; local_24 = local_24 + 1) {
    pCVar8 = *(CafeObject **)(local_24 * 4 + *(int *)(this + 0x13c));
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x84) + 0x20),pCVar8);
    pCVar10 = *(Character **)(pCVar8 + 0x8c);
    pCVar3 = *(CharacterData **)pCVar10;
    (**(code **)(*(int *)pCVar8 + 4))(pCVar8);
    Character::~Character(pCVar10);
    operator_delete(pCVar10);
    if (pCVar3 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar3);
      operator_delete(pCVar3);
    }
  }
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  this_00 = *(Cafe **)(this + 0x84);
  if (this_00 != (Cafe *)0x0) {
    Cafe::~Cafe(this_00);
    operator_delete(this_00);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
  }
  piVar1 = *(int **)(this + 0xc4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0xc4) = 0;
  }
  if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  iVar6 = 0;
  while( true ) {
    iVar5 = *(int *)(this + 0xc) + DAT_001b7320;
    if (*(int *)(iVar5 + 4) + 1 <= iVar6) break;
    iVar7 = iVar6 * 4;
    *(char *)(*(int *)(*(int *)(iVar5 + 8) + iVar7) + 0x44) =
         (char)*(undefined4 *)(*(int *)(this + 0xf4) + iVar7);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b7320 + 8) + iVar7) + 0x48) =
         *(undefined4 *)(*(int *)(this + 0x100) + iVar7);
    *(char *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b7320 + 8) + iVar7) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(this + 0x10c) + iVar7);
    iVar4 = *(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b7320 + 8) + iVar7);
    uVar9 = *(undefined4 *)(*(int *)(this + 0x118) + iVar7);
    uVar2 = Character::getMaxEnergy();
    iVar5 = __aeabi_fcmplt(uVar9,0);
    if (iVar5 == 0) {
      iVar5 = __aeabi_fcmpgt(uVar9,uVar2);
      if (iVar5 != 0) {
        uVar9 = uVar2;
      }
    }
    else {
      uVar9 = 0;
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar4 + 0x40) = uVar9;
  }
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b7324),*(CImage ***)(this + 0x90));
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),*(CImage ***)(this + 0x94));
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),true);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),true);
  colosseumLayouts::unload();
  *(undefined4 *)(*(int *)(this + 0xc) + 0x7e8) = 0;
  return;
}


