/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a1320 GameStateEventRaid::uninit */

/* GameStateEventRaid::uninit() */

void GameStateEventRaid::uninit(void)

{
  int in_r0;
  CharacterData *pCVar1;
  int iVar2;
  int iVar3;
  CafeObject *pCVar4;
  Cafe *this;
  Character *pCVar5;
  int iVar6;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  int local_24;
  
  iVar2 = *(int *)(*(int *)(in_r0 + 0xc) + DAT_001a15e4);
  *(undefined4 *)(iVar2 + DAT_001a15e8) = 0;
  *(undefined4 *)(iVar2 + 0x788) = 0;
  *(undefined4 *)(iVar2 + 0x778) = 0;
  *(undefined4 *)(iVar2 + DAT_001a15ec) = 0;
  iVar2 = *(int *)(in_r0 + 0x100);
  for (iVar6 = 0; iVar6 < iVar2 + 1; iVar6 = iVar6 + 1) {
    iVar3 = *(int *)(iVar6 * 4 + *(int *)(in_r0 + 0x104));
    pCVar1 = (CharacterData *)**(undefined4 **)(iVar3 + 0x8c);
    if (pCVar1 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar1);
      operator_delete(pCVar1);
      in_s0 = extraout_s0;
    }
    pCVar5 = *(Character **)(iVar3 + 0x8c);
    if (pCVar5 != (Character *)0x0) {
      Character::~Character(pCVar5);
      operator_delete(pCVar5);
      in_s0 = extraout_s0_00;
    }
  }
  while (-1 < *(int *)(in_r0 + 0xf4)) {
    pCVar4 = (CafeObject *)
             Vector<CharacterInstance*>::removeElementAt
                       ((Vector<CharacterInstance*> *)(in_r0 + 0xf0),0);
    pCVar5 = *(Character **)(pCVar4 + 0x8c);
    pCVar1 = *(CharacterData **)pCVar5;
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 0x5c) + 0x20),pCVar4);
    (**(code **)(*(int *)pCVar4 + 4))(pCVar4);
    Character::~Character(pCVar5);
    operator_delete(pCVar5);
    in_s0 = extraout_s0_01;
    if (pCVar1 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar1);
      operator_delete(pCVar1);
      in_s0 = extraout_s0_02;
    }
  }
  *(undefined4 *)(in_r0 + 0xf4) = 0xffffffff;
  iVar2 = *(int *)(in_r0 + 0x10c);
  for (local_24 = 0; local_24 < iVar2 + 1; local_24 = local_24 + 1) {
    pCVar4 = *(CafeObject **)(local_24 * 4 + *(int *)(in_r0 + 0x110));
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 0x5c) + 0x20),pCVar4);
    pCVar5 = *(Character **)(pCVar4 + 0x8c);
    pCVar1 = *(CharacterData **)pCVar5;
    (**(code **)(*(int *)pCVar4 + 4))(pCVar4);
    Character::~Character(pCVar5);
    operator_delete(pCVar5);
    in_s0 = extraout_s0_03;
    if (pCVar1 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar1);
      operator_delete(pCVar1);
      in_s0 = extraout_s0_04;
    }
  }
  *(undefined4 *)(in_r0 + 0x10c) = 0xffffffff;
  this = *(Cafe **)(in_r0 + 0x5c);
  if (this != (Cafe *)0x0) {
    Cafe::~Cafe(this);
    operator_delete(this);
    in_s0 = extraout_s0_05;
  }
  if (*(int **)(in_r0 + 0x80) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x80) + 4))();
  }
  if (*(int **)(in_r0 + 0x84) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x84) + 4))();
  }
  if (*(int **)(in_r0 + 0x78) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x78) + 4))();
  }
  if (*(int **)(in_r0 + 0x74) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x74) + 4))();
  }
  if (*(int **)(in_r0 + 0x7c) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x7c) + 4))();
  }
  if (*(int **)(in_r0 + 0x70) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x70) + 4))();
  }
  if (*(int **)(in_r0 + 0x90) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x90) + 4))();
  }
  if (*(int **)(in_r0 + 0x94) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x94) + 4))();
  }
  pCVar5 = *(Character **)(in_r0 + 0x98);
  if (pCVar5 != (Character *)0x0) {
    Character::~Character(pCVar5);
    operator_delete(pCVar5);
    in_s0 = extraout_s0_06;
  }
  if (*(int **)(in_r0 + 0x88) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x88) + 4))();
  }
  if (*(int **)(in_r0 + 0x60) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x60) + 4))();
  }
  if (*(int **)(in_r0 + 100) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 100) + 4))();
  }
  if (*(int **)(in_r0 + 0x14) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x14) + 4))();
  }
  if (*(int **)(in_r0 + 0x9c) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x9c) + 4))();
  }
  iVar2 = 0;
  while( true ) {
    iVar6 = *(int *)(in_r0 + 0xc) + DAT_001a15f0;
    if (*(int *)(iVar6 + 4) + 1 <= iVar2) break;
    iVar3 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(char *)(*(int *)(*(int *)(iVar6 + 8) + iVar3) + 0x44) =
         (char)*(undefined4 *)(*(int *)(in_r0 + 200) + iVar3);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_r0 + 0xc) + DAT_001a15f0 + 8) + iVar3) + 0x48) =
         *(undefined4 *)(*(int *)(in_r0 + 0xd4) + iVar3);
    *(char *)(*(int *)(*(int *)(*(int *)(in_r0 + 0xc) + DAT_001a15f0 + 8) + iVar3) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(in_r0 + 0xe0) + iVar3);
    in_s0 = (float)Character::setCurrentEnergy
                             (*(Character **)
                               (*(int *)(*(int *)(in_r0 + 0xc) + DAT_001a15f0 + 8) + iVar3),in_s0);
  }
  *(undefined4 *)(in_r0 + 0xc4) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xd0) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xdc) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xe8) = 0xffffffff;
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_001a15f4),*(CImage ***)(in_r0 + 0x68));
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0),*(CImage ***)(in_r0 + 0x6c));
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  colosseumLayouts::unload();
  *(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x7e8) = 0;
  return;
}


