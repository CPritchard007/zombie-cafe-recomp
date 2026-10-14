/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00138108 GameStateColosseum::uninit */

/* GameStateColosseum::uninit() */

void GameStateColosseum::uninit(void)

{
  int in_r0;
  int *piVar1;
  CharacterData *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CafeObject *pCVar6;
  Cafe *this;
  Character *pCVar7;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  int local_24;
  
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + DAT_001383e0);
  *(undefined4 *)(iVar4 + DAT_001383e4) = 0;
  *(undefined4 *)(iVar4 + 0x788) = 0;
  *(undefined4 *)(iVar4 + 0x778) = 0;
  *(undefined4 *)(iVar4 + DAT_001383e8) = 0;
  while (-1 < *(int *)(in_r0 + 0x10c)) {
    pCVar6 = (CafeObject *)
             Vector<CharacterInstance*>::removeElementAt
                       ((Vector<CharacterInstance*> *)(in_r0 + 0x108),0);
    pCVar7 = *(Character **)(pCVar6 + 0x8c);
    pCVar2 = *(CharacterData **)pCVar7;
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 0x70) + 0x20),pCVar6);
    (**(code **)(*(int *)pCVar6 + 4))(pCVar6);
    Character::~Character(pCVar7);
    operator_delete(pCVar7);
    in_s0 = extraout_s0;
    if (pCVar2 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar2);
      operator_delete(pCVar2);
      in_s0 = extraout_s0_00;
    }
  }
  *(undefined4 *)(in_r0 + 0x10c) = 0xffffffff;
  iVar4 = *(int *)(in_r0 + 0x124);
  for (local_24 = 0; local_24 < iVar4 + 1; local_24 = local_24 + 1) {
    pCVar6 = *(CafeObject **)(local_24 * 4 + *(int *)(in_r0 + 0x128));
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 0x70) + 0x20),pCVar6);
    pCVar7 = *(Character **)(pCVar6 + 0x8c);
    pCVar2 = *(CharacterData **)pCVar7;
    (**(code **)(*(int *)pCVar6 + 4))(pCVar6);
    Character::~Character(pCVar7);
    operator_delete(pCVar7);
    in_s0 = extraout_s0_01;
    if (pCVar2 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(pCVar2);
      operator_delete(pCVar2);
      in_s0 = extraout_s0_02;
    }
  }
  *(undefined4 *)(in_r0 + 0x124) = 0xffffffff;
  this = *(Cafe **)(in_r0 + 0x70);
  if (this != (Cafe *)0x0) {
    Cafe::~Cafe(this);
    operator_delete(this);
    in_s0 = extraout_s0_03;
  }
  if (*(int **)(in_r0 + 0x94) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x94) + 4))();
  }
  if (*(int **)(in_r0 + 0x98) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x98) + 4))();
  }
  if (*(int **)(in_r0 + 0x8c) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x8c) + 4))();
  }
  if (*(int **)(in_r0 + 0x88) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x88) + 4))();
  }
  if (*(int **)(in_r0 + 0x90) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x90) + 4))();
  }
  if (*(int **)(in_r0 + 0x84) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x84) + 4))();
  }
  if (*(int **)(in_r0 + 0x9c) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x9c) + 4))();
  }
  if (*(int **)(in_r0 + 0x74) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x74) + 4))();
  }
  if (*(int **)(in_r0 + 0x78) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x78) + 4))();
  }
  if (*(int **)(in_r0 + 0x14) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0x14) + 4))();
  }
  if (*(int **)(in_r0 + 0xb0) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0xb0) + 4))();
  }
  if (*(int **)(in_r0 + 0xb4) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0xb4) + 4))();
  }
  piVar1 = *(int **)(*(int *)(in_r0 + 100) + 100);
  if (piVar1 != (int *)0x0) {
    in_s0 = (float)(**(code **)(*piVar1 + 4))();
  }
  if (*(int **)(in_r0 + 100) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 100) + 4))();
  }
  if (*(int **)(in_r0 + 0xac) != (int *)0x0) {
    in_s0 = (float)(**(code **)(**(int **)(in_r0 + 0xac) + 4))();
  }
  iVar4 = 0;
  while( true ) {
    iVar3 = *(int *)(in_r0 + 0xc) + DAT_001383ec;
    if (*(int *)(iVar3 + 4) + 1 <= iVar4) break;
    iVar5 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(char *)(*(int *)(*(int *)(iVar3 + 8) + iVar5) + 0x44) =
         (char)*(undefined4 *)(*(int *)(in_r0 + 0xe0) + iVar5);
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_r0 + 0xc) + DAT_001383ec + 8) + iVar5) + 0x48) =
         *(undefined4 *)(*(int *)(in_r0 + 0xec) + iVar5);
    *(char *)(*(int *)(*(int *)(*(int *)(in_r0 + 0xc) + DAT_001383ec + 8) + iVar5) + 0x4c) =
         (char)*(undefined4 *)(*(int *)(in_r0 + 0xf8) + iVar5);
    in_s0 = (float)Character::setCurrentEnergy
                             (*(Character **)
                               (*(int *)(*(int *)(in_r0 + 0xc) + DAT_001383ec + 8) + iVar5),in_s0);
  }
  *(undefined4 *)(in_r0 + 0xdc) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xe8) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xf4) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0x100) = 0xffffffff;
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_001383f0),*(CImage ***)(in_r0 + 0x7c));
  PackedImage::destroyImages
            (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0),*(CImage ***)(in_r0 + 0x80));
  if (*(int **)(in_r0 + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x68) + 4))();
  }
  if (*(int **)(in_r0 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0xb8) + 4))();
  }
  if (*(int **)(in_r0 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0xbc) + 4))();
  }
  if (*(int **)(in_r0 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x6c) + 4))();
  }
  if (*(int **)(in_r0 + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0xc0) + 4))();
  }
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  colosseumLayouts::unload();
  *(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x7e8) = 0;
  return;
}


