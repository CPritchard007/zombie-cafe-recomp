/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00125dd8 FUN_00125dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00125dd8(float param_1)

{
  short sVar1;
  Furniture *pFVar2;
  long lVar3;
  FurnitureData *pFVar4;
  int iVar5;
  NoticeDialog *pNVar6;
  GameStateCafe *unaff_r6;
  int unaff_r7;
  
  if (*(char *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x38) != '\0') {
    param_1 = (float)FUN_001255f2();
  }
  iVar5 = *(int *)(*(int *)(unaff_r6 + 0x40) + 0x38);
  if ((*(char *)(iVar5 + 0x38) == '\0') &&
     (*(int *)(*(int *)(unaff_r6 + 0xc) + DAT_00125808) < *(int *)(iVar5 + 0x34))) {
    ZombieCafe::playEffect(*(int *)(unaff_r6 + 0xc),param_1);
    iVar5 = *(int *)(unaff_r6 + 0x84);
    *(undefined1 *)(iVar5 + 100) = 0;
    *(undefined4 *)(iVar5 + 0xd0) = 0;
    pNVar6 = *(NoticeDialog **)(unaff_r6 + 0xd0);
    Vector<String>::elementAt((int)&stack0x000001a4);
    Vector<String>::elementAt((int)&stack0x000001ac);
    NoticeDialog::show(pNVar6,&stack0x000001a4,&stack0x000001ac);
    String::~String((String *)&stack0x000001ac);
    String::~String((String *)&stack0x000001a4);
    *(undefined1 *)(*(int *)(unaff_r6 + 0x84) + 0x65) = 0;
    FUN_00125b34();
    return;
  }
  if ((((*(char *)(iVar5 + 0x44) == '\x06') &&
       (pFVar2 = (Furniture *)Cafe::pickWall(*(long *)(unaff_r6 + 0x14)), pFVar2 != (Furniture *)0x0
       )) && (*(int *)(pFVar2 + 0x44) == 0)) && (pFVar2[0x3b] == (Furniture)0x0)) {
    *(undefined4 *)(unaff_r6 + 0x60) = *(undefined4 *)(*(int *)(unaff_r6 + 0x40) + 0x38);
    GameStateCafe::completeStorePurchase(unaff_r6);
    Cafe::addWallDecor(*(CafeWall **)(unaff_r6 + 0x14),pFVar2);
    *(undefined4 *)(unaff_r6 + 0x40) = 0;
    iVar5 = _DAT_00125810;
    (**(code **)(**(int **)(unaff_r6 + 0x84) + 0x20))(*(int **)(unaff_r6 + 0x84),1);
    *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + iVar5) = 1;
    FUN_00125b34();
    return;
  }
  pFVar4 = *(FurnitureData **)(*(int *)(unaff_r6 + 0x40) + 0x38);
  if ((pFVar4[0x44] != (FurnitureData)0x6) &&
     (iVar5 = GameStateCafe::isValidFurnitureTile
                        (unaff_r6,(int)*(short *)(*(int *)(unaff_r6 + 0x40) + 0x2c),pFVar4),
     iVar5 != 0)) {
    if (*(char *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x44) == '\x0e') {
      GameStateCafe::resetTombstone
                (unaff_r6,*(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x24));
    }
    sVar1 = *(short *)(*(int *)(unaff_r6 + 0x40) + 0x2c);
    lVar3 = Cafe::diamondToStaggeredCoords
                      (*(short *)(*(int *)(unaff_r6 + 0x14) + 0x9c) + -1,
                       *(short *)(*(int *)(unaff_r6 + 0x14) + 0x9e) + 1 +
                       **(int **)(unaff_r7 + _DAT_00125814));
    iVar5 = Cafe::staggeredCoordsToIndex(lVar3);
    if (sVar1 == iVar5) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_001257ec),'>',true);
    }
    iVar5 = _DAT_00125810;
    *(undefined4 *)(unaff_r6 + 0x60) = *(undefined4 *)(*(int *)(unaff_r6 + 0x40) + 0x38);
    GameStateCafe::completeStorePurchase(unaff_r6);
    Cafe::addFurniture(*(Cafe **)(unaff_r6 + 0x14),*(Furniture **)(unaff_r6 + 0x40));
    GameStateCafe::checkForTombstones(unaff_r6);
    *(undefined4 *)(unaff_r6 + 0x40) = 0;
    GameStateCafe::resetPaths(unaff_r6);
    (**(code **)(**(int **)(unaff_r6 + 0x84) + 0x20))(*(int **)(unaff_r6 + 0x84),1);
    *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + iVar5) = 1;
    FUN_00125b34();
    return;
  }
  pNVar6 = *(NoticeDialog **)(unaff_r6 + 0xd0);
  Vector<String>::elementAt((int)&stack0x000001b4);
  Vector<String>::elementAt((int)&stack0x000001bc);
  NoticeDialog::show(pNVar6,&stack0x000001b4,&stack0x000001bc);
  String::~String((String *)&stack0x000001bc);
  String::~String((String *)&stack0x000001b4);
  FUN_00125b34();
  return;
}


