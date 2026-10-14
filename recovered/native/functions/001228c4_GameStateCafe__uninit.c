/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001228c4 GameStateCafe::uninit */

/* GameStateCafe::uninit() */

undefined8 GameStateCafe::uninit(void)

{
  int iVar1;
  GameStateCafe *in_r0;
  undefined4 uVar2;
  int iVar3;
  OutputStream *pOVar4;
  char *pcVar5;
  String *this;
  int *piVar6;
  undefined4 in_r1;
  int iVar7;
  char *pcVar8;
  CapcomLinkedList<short> *pCVar9;
  Cafe *this_00;
  code *pcVar10;
  Character *pCVar11;
  GameStateCafe *pGStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(DAT_00122b4c + 0x1228d0);
  pGStack_20 = in_r0;
  uStack_1c = in_r1;
  L_PrintLog(pcVar8,(char *)(DAT_00122b50 + 0x1228d4));
  iVar3 = DAT_00122b58;
  L_PrintLog(pcVar8,(char *)(DAT_00122b54 + 0x1228e0));
  iVar7 = *(int *)(*(int *)(in_r0 + 0xc) + iVar3);
  *(undefined4 *)(iVar7 + DAT_00122b5c) = 0;
  *(undefined4 *)(iVar7 + 0x788) = 0;
  *(undefined4 *)(iVar7 + 0x778) = 0;
  *(undefined4 *)(iVar7 + DAT_00122b60) = 0;
  prepareForSave(in_r0);
  (**(code **)(*(int *)in_r0 + 0x3c))(in_r0);
  undoEdits(in_r0);
  if (*(int *)(in_r0 + 0x40) != 0) {
    if (in_r0[DAT_00122b64] == (GameStateCafe)0x1) {
      *(undefined2 *)(*(int *)(in_r0 + 0x40) + 0x2c) = *(undefined2 *)(in_r0 + 0x162);
      piVar6 = *(int **)(in_r0 + 0x40);
      pcVar10 = *(code **)(*piVar6 + 0xc);
      uVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(in_r0 + 0x14),(int)(short)piVar6[0xb]);
      (*pcVar10)(piVar6,uVar2);
      Cafe::addFurniture(*(Cafe **)(in_r0 + 0x14),*(Furniture **)(in_r0 + 0x40));
    }
    else if (in_r0[DAT_00122b64] == (GameStateCafe)0x2) {
      Cafe::addWallDecor(*(CafeWall **)(in_r0 + 0x14),*(Furniture **)(in_r0 + 0x48));
    }
    *(undefined4 *)(in_r0 + 0x40) = 0;
  }
  iVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(in_r0 + 0xc) + iVar3),'\x16');
  if (iVar3 == 0) {
    resetPlayerCafe();
    ZombieCafe::resetSaveData(*(ZombieCafe **)(in_r0 + 0xc));
  }
  else {
    pcVar8 = (char *)(DAT_00122b68 + 0x122970);
    L_PrintLog(pcVar8,(char *)(DAT_00122b6c + 0x122972));
    if (*(int *)(*(int *)(in_r0 + 0xc) + 0x4a8) == 0 && *(int *)(*(int *)(in_r0 + 0xc) + 0x4ac) == 0
       ) {
      L_PrintLog(pcVar8,(char *)(DAT_00122b70 + 0x12298e));
      ZombieCafe::save();
      String::String((String *)&pGStack_20,(char *)(DAT_00122b74 + 0x12299e));
      pOVar4 = (OutputStream *)operator_new(0x14);
      SaveDataOutputStream::SaveDataOutputStream
                ((SaveDataOutputStream *)pOVar4,(String *)&pGStack_20);
      String::~String((String *)&pGStack_20);
      Cafe::serialize(*(Cafe **)(in_r0 + 0x14),pOVar4);
      (**(code **)(*(int *)pOVar4 + 8))(pOVar4);
      (**(code **)(*(int *)pOVar4 + 4))(pOVar4);
      saveServerData(in_r0);
      ZombieCafe::saveGameState(*(ZombieCafe **)(in_r0 + 0xc),false);
    }
  }
  L_PrintLog((char *)(DAT_00122b78 + 0x1229f0),(char *)(DAT_00122b7c + 0x1229f2));
  pCVar9 = *(CapcomLinkedList<short> **)(in_r0 + 0x158);
  if (pCVar9 != (CapcomLinkedList<short> *)0x0) {
    CapcomLinkedList<short>::~CapcomLinkedList(pCVar9);
    operator_delete(pCVar9);
    *(undefined4 *)(in_r0 + 0x158) = 0;
  }
  L_PrintLog((char *)(DAT_00122b80 + 0x122a16),(char *)(DAT_00122b84 + 0x122a18));
  pCVar9 = *(CapcomLinkedList<short> **)(in_r0 + 0x15c);
  if (pCVar9 != (CapcomLinkedList<short> *)0x0) {
    CapcomLinkedList<short>::~CapcomLinkedList(pCVar9);
    operator_delete(pCVar9);
    *(undefined4 *)(in_r0 + 0x15c) = 0;
  }
  iVar3 = DAT_00122b90;
  L_PrintLog((char *)(DAT_00122b88 + 0x122a3c),(char *)(DAT_00122b8c + 0x122a3e));
  pcVar8 = (char *)(iVar3 + 0x122a44);
  while (*(int *)(in_r0 + 0x2c) != -1) {
    iVar3 = **(int **)(in_r0 + 0x30);
    Vector<CharacterInstance*>::removeElementAt((Vector<CharacterInstance*> *)(in_r0 + 0x28),0);
    piVar6 = (int *)(iVar3 + 0x8c);
    if ((*piVar6 != 0) && (*(char *)(*piVar6 + 4) != '\x01')) {
      L_PrintLog(pcVar8,(char *)(DAT_00122b94 + 0x122a6a));
      pcVar5 = (char *)String::getBytes((String *)(*piVar6 + 8));
      L_PrintLog(pcVar8,pcVar5);
      free(pcVar5);
      pcVar5 = (char *)String::getBytes((String *)(*(int *)*piVar6 + DAT_00122b98));
      L_PrintLog(pcVar8,pcVar5);
      free(pcVar5);
      L_PrintLog(pcVar8,(char *)(DAT_00122b9c + 0x122aa8));
      pCVar11 = (Character *)*piVar6;
      if (pCVar11 != (Character *)0x0) {
        Character::~Character(pCVar11);
        operator_delete(pCVar11);
        *piVar6 = 0;
      }
      L_PrintLog((char *)(DAT_00122ba0 + 0x122ac8),(char *)(DAT_00122ba4 + 0x122aca));
    }
  }
  L_PrintLog((char *)(DAT_00122ba8 + 0x122adc),(char *)(DAT_00122bac + 0x122ade));
  iVar7 = *(int *)(in_r0 + 0x38);
  for (iVar3 = 0; iVar3 < iVar7 + 1; iVar3 = iVar3 + 1) {
    piVar6 = *(int **)(iVar3 * 4 + *(int *)(in_r0 + 0x3c));
    pCVar11 = (Character *)piVar6[0x23];
    (**(code **)(*piVar6 + 4))();
    if (pCVar11 != (Character *)0x0) {
      Character::~Character(pCVar11);
      operator_delete(pCVar11);
    }
  }
  L_PrintLog((char *)(DAT_00122bb0 + 0x122b18),(char *)(DAT_00122bb4 + 0x122b1a));
  iVar7 = *(int *)(in_r0 + 0x70);
  for (iVar3 = 0; iVar1 = DAT_00122bc0, iVar3 < iVar7 + 1; iVar3 = iVar3 + 1) {
    piVar6 = *(int **)(iVar3 * 4 + *(int *)(in_r0 + 0x74));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
  }
  L_PrintLog((char *)(DAT_00122bb8 + 0x122b42),(char *)(DAT_00122bbc + 0x122b44));
  while (-1 < *(int *)(in_r0 + 0x17c)) {
    L_PrintLog(&UNK_00122b4a + iVar1,(char *)(DAT_00122f1c + 0x122bcc));
    this = (String *)
           Vector<MessageWithToxin*>::removeElementAt
                     ((Vector<MessageWithToxin*> *)(in_r0 + 0x178),0);
    ZombieCafe::addToxin(*(ZombieCafe **)(in_r0 + 0xc),*(int *)(this + 8),false);
    ZombieCafe::addCash(*(ZombieCafe **)(in_r0 + 0xc),*(int *)(this + 0xc));
    ZombieCafe::addXp(*(ZombieCafe **)(in_r0 + 0xc),*(int *)(this + 0x10));
    String::~String(this);
    operator_delete(this);
  }
  if (*(int **)(in_r0 + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x170) + 4))();
    *(undefined4 *)(in_r0 + 0x170) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xf4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xf4) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xe8);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xe8) = 0;
  }
  if (*(int **)(in_r0 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x104) + 4))();
    *(undefined4 *)(in_r0 + 0x104) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xf0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xf0) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xec);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xec) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xf8);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xf8) = 0;
  }
  if (*(int **)(in_r0 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x108) + 4))();
    *(undefined4 *)(in_r0 + 0x108) = 0;
  }
  if (*(int **)(in_r0 + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x100) + 4))();
    *(undefined4 *)(in_r0 + 0x100) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xfc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xfc) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xe0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xe0) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xe4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xe4) = 0;
  }
  if (*(int **)(in_r0 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x78) + 4))();
    *(undefined4 *)(in_r0 + 0x78) = 0;
  }
  L_PrintLog((char *)(DAT_00122f20 + 0x122d12),(char *)(DAT_00122f24 + 0x122d14));
  piVar6 = *(int **)(in_r0 + 0xc4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xc4) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0x94);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0x94) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xd8);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xd8) = 0;
  }
  piVar6 = *(int **)(in_r0 + 200);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 200) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xcc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xcc) = 0;
  }
  if (*(int **)(in_r0 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x80) + 4))();
    *(undefined4 *)(in_r0 + 0x80) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xd0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xd0) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xd4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xd4) = 0;
  }
  if (*(int **)(in_r0 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x7c) + 4))();
    *(undefined4 *)(in_r0 + 0x7c) = 0;
  }
  if (*(int **)(in_r0 + 0x134) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x134) + 4))();
    *(undefined4 *)(in_r0 + 0x134) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0x90);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0x90) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0x8c);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0x8c) = 0;
  }
  if (*(int **)(in_r0 + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x84) + 4))();
    *(undefined4 *)(in_r0 + 0x84) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xac);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xac) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xb4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xb4) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xb8);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xb8) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xbc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xbc) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xc0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xc0) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xb0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xb0) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0x9c);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0x9c) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xa0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xa0) = 0;
  }
  piVar6 = *(int **)(in_r0 + 0xdc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xdc) = 0;
  }
  if (*(int **)(in_r0 + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x120) + 4))();
    *(undefined4 *)(in_r0 + 0x120) = 0;
  }
  if (*(int **)(in_r0 + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x124) + 4))();
    *(undefined4 *)(in_r0 + 0x124) = 0;
  }
  if (*(int **)(in_r0 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x128) + 4))();
    *(undefined4 *)(in_r0 + 0x128) = 0;
  }
  L_PrintLog((char *)(DAT_00122f28 + 0x122f0c),(char *)(DAT_00122f2c + 0x122f0e));
  piVar6 = *(int **)(in_r0 + 0xa4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xa4) = 0;
  }
  if (*(int **)(in_r0 + 300) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 300) + 4))();
    *(undefined4 *)(in_r0 + 300) = 0;
  }
  if (*(int **)(in_r0 + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x130) + 4))();
    *(undefined4 *)(in_r0 + 0x130) = 0;
  }
  if (*(int **)(in_r0 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x11c) + 4))();
    *(undefined4 *)(in_r0 + 0x11c) = 0;
  }
  L_PrintLog((char *)(DAT_00123080 + 0x122f80),(char *)(DAT_00123084 + 0x122f82));
  piVar6 = *(int **)(in_r0 + 0xa8);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined4 *)(in_r0 + 0xa8) = 0;
  }
  this_00 = *(Cafe **)(in_r0 + 0x14);
  if (this_00 != (Cafe *)0x0) {
    Cafe::~Cafe(this_00);
    operator_delete(this_00);
    *(undefined4 *)(in_r0 + 0x14) = 0;
  }
  L_PrintLog((char *)(DAT_00123088 + 0x122fb4),(char *)(DAT_0012308c + 0x122fb6));
  *(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x7e8) = 0;
  if (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_00123090) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_00123090),*(CImage ***)(in_r0 + 0x1e8))
    ;
  }
  if (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0),*(CImage ***)(in_r0 + 0x1ec));
  }
  if (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_00123094) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_00123094),*(CImage ***)(in_r0 + 0x1f0))
    ;
  }
  ZombieCafe::unloadShopImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  ZombieCafe::unloadRecipeImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  iVar3 = DAT_00123098;
  ZombieCafe::unloadFurnitureImages(*(ZombieCafe **)(in_r0 + 0xc),false);
  L_PrintLog((char *)(iVar3 + 0x123028),(char *)(DAT_0012309c + 0x12302c));
  L_PrintLog((char *)(iVar3 + 0x123028),(char *)(DAT_001230a0 + 0x123038));
  if (*(int **)(in_r0 + 0x138) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x138) + 4))();
    *(undefined4 *)(in_r0 + 0x138) = 0;
  }
  if (*(int **)(in_r0 + 0x13c) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x13c) + 4))();
    *(undefined4 *)(in_r0 + 0x13c) = 0;
  }
  FontManager::dbgPrintFontArr((FontManager *)**(undefined4 **)(DAT_001230a4 + 0x123064));
  return CONCAT44(uStack_1c,pGStack_20);
}


