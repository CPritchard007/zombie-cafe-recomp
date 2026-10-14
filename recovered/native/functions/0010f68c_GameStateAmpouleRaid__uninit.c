/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010f68c GameStateAmpouleRaid::uninit */

/* GameStateAmpouleRaid::uninit() */

void GameStateAmpouleRaid::uninit(void)

{
  int in_r0;
  int *piVar1;
  CharacterData *pCVar2;
  int iVar3;
  int iVar4;
  CafeObject *pCVar5;
  Cafe *this;
  Character *pCVar6;
  int iVar7;
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
  
  iVar3 = *(int *)(*(int *)(in_r0 + 0xc) + DAT_0010f990);
  *(undefined4 *)(iVar3 + DAT_0010f994) = 0;
  *(undefined4 *)(iVar3 + 0x788) = 0;
  *(undefined4 *)(iVar3 + 0x778) = 0;
  *(undefined4 *)(iVar3 + DAT_0010f998) = 0;
  iVar3 = *(int *)(in_r0 + 0x104);
  for (iVar7 = 0; iVar7 < iVar3 + 1; iVar7 = iVar7 + 1) {
    iVar4 = *(int *)(iVar7 * 4 + *(int *)(in_r0 + 0x108));
    pCVar2 = (CharacterData *)**(undefined4 **)(iVar4 + 0x8c);
    if (pCVar2 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar2);
      operator_delete(pCVar2);
      in_s0 = extraout_s0;
    }
    pCVar6 = *(Character **)(iVar4 + 0x8c);
    if (pCVar6 != (Character *)0x0) {
      Character::~Character(pCVar6);
      operator_delete(pCVar6);
      in_s0 = extraout_s0_00;
    }
  }
  while (-1 < *(int *)(in_r0 + 0xf8)) {
    pCVar5 = (CafeObject *)
             Vector<CharacterInstance*>::removeElementAt
                       ((Vector<CharacterInstance*> *)(in_r0 + 0xf4),0);
    pCVar6 = *(Character **)(pCVar5 + 0x8c);
    pCVar2 = *(CharacterData **)pCVar6;
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 100) + 0x20),pCVar5);
    (**(code **)(*(int *)pCVar5 + 4))(pCVar5);
    Character::~Character(pCVar6);
    operator_delete(pCVar6);
    in_s0 = extraout_s0_01;
    if (pCVar2 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar2);
      operator_delete(pCVar2);
      in_s0 = extraout_s0_02;
    }
  }
  *(undefined4 *)(in_r0 + 0xf8) = 0xffffffff;
  iVar3 = *(int *)(in_r0 + 0x110);
  for (local_24 = 0; local_24 < iVar3 + 1; local_24 = local_24 + 1) {
    pCVar5 = *(CafeObject **)(local_24 * 4 + *(int *)(in_r0 + 0x114));
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 100) + 0x20),pCVar5);
    pCVar6 = *(Character **)(pCVar5 + 0x8c);
    pCVar2 = *(CharacterData **)pCVar6;
    (**(code **)(*(int *)pCVar5 + 4))(pCVar5);
    Character::~Character(pCVar6);
    operator_delete(pCVar6);
    in_s0 = extraout_s0_03;
    if (pCVar2 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar2);
      operator_delete(pCVar2);
      in_s0 = extraout_s0_04;
    }
  }
  *(undefined4 *)(in_r0 + 0x110) = 0xffffffff;
  this = *(Cafe **)(in_r0 + 100);
  if (this != (Cafe *)0x0) {
    Cafe::~Cafe(this);
    operator_delete(this);
    *(undefined4 *)(in_r0 + 100) = 0;
    in_s0 = extraout_s0_05;
  }
  piVar1 = *(int **)(in_r0 + 0x88);
  if (piVar1 != (int *)0x0) {
    in_s0 = (float)(**(code **)(*piVar1 + 4))();
    *(int *)(in_r0 + 0x88) = 0;
  }
  piVar1 = *(int **)(in_r0 + 0x8c);
  if (piVar1 != (int *)0x0) {
    in_s0 = (float)(**(code **)(*piVar1 + 4))();
    *(int *)(in_r0 + 0x8c) = 0;
  }
  if (*(int **)(in_r0 + 0x18) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x18) + 4))();
    *(undefined4 *)(in_r0 + 0x18) = 0;
  }
  if (*(int **)(in_r0 + 0x80) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x80) + 4))();
    *(undefined4 *)(in_r0 + 0x80) = 0;
  }
  if (*(int **)(in_r0 + 0x7c) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x7c) + 4))();
    *(undefined4 *)(in_r0 + 0x7c) = 0;
  }
  if (*(int **)(in_r0 + 0x84) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x84) + 4))();
    *(undefined4 *)(in_r0 + 0x84) = 0;
  }
  if (*(int **)(in_r0 + 0x78) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x78) + 4))();
    *(undefined4 *)(in_r0 + 0x78) = 0;
  }
  piVar1 = *(int **)(in_r0 + 0x98);
  if (piVar1 != (int *)0x0) {
    in_s0 = (float)(**(code **)(*piVar1 + 4))();
    *(int *)(in_r0 + 0x98) = 0;
  }
  pCVar6 = *(Character **)(in_r0 + 0x9c);
  if (pCVar6 != (Character *)0x0) {
    Character::~Character(pCVar6);
    operator_delete(pCVar6);
    *(undefined4 *)(in_r0 + 0x9c) = 0;
    in_s0 = extraout_s0_06;
  }
  piVar1 = *(int **)(in_r0 + 0x90);
  if (piVar1 != (int *)0x0) {
    in_s0 = (float)(**(code **)(*piVar1 + 4))();
    *(int *)(in_r0 + 0x90) = 0;
  }
  if (*(int **)(in_r0 + 0x68) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x68) + 4))();
    *(undefined4 *)(in_r0 + 0x68) = 0;
  }
  if (*(int **)(in_r0 + 0x6c) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x6c) + 4))();
    *(undefined4 *)(in_r0 + 0x6c) = 0;
  }
  if (*(int **)(in_r0 + 0x14) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x14) + 4))();
    *(undefined4 *)(in_r0 + 0x14) = 0;
  }
  piVar1 = *(int **)(in_r0 + 0xa0);
  if (piVar1 != (int *)0x0) {
    in_s0 = (float)(**(code **)(*piVar1 + 4))();
    *(int *)(in_r0 + 0xa0) = 0;
  }
  iVar3 = 0;
  while( true ) {
    iVar7 = *(int *)(in_r0 + 0xc) + DAT_0010f99c;
    if (*(int *)(iVar7 + 4) + 1 <= iVar3) break;
    iVar4 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(char *)(*(int *)(*(int *)(iVar7 + 8) + iVar4) + 0x44) =
         (char)*(undefined4 *)(*(int *)(in_r0 + 0xcc) + iVar4);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_r0 + 0xc) + DAT_0010f99c + 8) + iVar4) + 0x48) =
         *(undefined4 *)(*(int *)(in_r0 + 0xd8) + iVar4);
    *(char *)(*(int *)(*(int *)(*(int *)(in_r0 + 0xc) + DAT_0010f99c + 8) + iVar4) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(in_r0 + 0xe4) + iVar4);
    in_s0 = (float)Character::setCurrentEnergy
                             (*(Character **)
                               (*(int *)(*(int *)(in_r0 + 0xc) + DAT_0010f99c + 8) + iVar4),in_s0);
  }
  *(undefined4 *)(in_r0 + 200) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xd4) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xe0) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xec) = 0xffffffff;
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_0010f9a0),*(CImage ***)(in_r0 + 0x70));
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0),*(CImage ***)(in_r0 + 0x74));
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  colosseumLayouts::unload();
  *(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x7e8) = 0;
  return;
}


