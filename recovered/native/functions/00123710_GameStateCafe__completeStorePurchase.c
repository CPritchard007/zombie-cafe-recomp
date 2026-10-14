/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00123710 GameStateCafe::completeStorePurchase */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00123b32) */
/* WARNING: Removing unreachable block (ram,0x00123b32) */
/* GameStateCafe::completeStorePurchase(GameStateCafe*) */

void GameStateCafe::completeStorePurchase(GameStateCafe *param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  GameStateCafe *pGVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  uint uVar7;
  StatusNote *pSVar8;
  ZombieCafe *pZVar9;
  undefined4 uVar10;
  int iVar11;
  CapcomOrderableList<Furniture*> *pCVar12;
  Furniture *pFVar13;
  long lVar14;
  TutorialSystem *this;
  uchar uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  CafeObject *this_00;
  uint uVar22;
  Cafe *pCVar23;
  undefined4 uVar24;
  byte *pbVar25;
  int iVar26;
  CFPathFinder *pCVar27;
  int iVar28;
  int *piVar29;
  int *piVar30;
  undefined4 uVar31;
  float fVar32;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  int local_14c;
  int local_144;
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  undefined4 local_1c;
  
  iVar28 = DAT_00123940 + 0x12371c;
  local_1c = **(undefined4 **)(iVar28 + DAT_00123944);
  pGVar4 = param_1;
  if (*(int *)(param_1 + 0x60) == 0) {
    pGVar4 = (GameStateCafe *)FUN_0012418a();
  }
  CRAMHoover::beginTrackEvent(*(char **)(*(int *)(pGVar4 + 0xc) + 0x840));
  ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(param_1 + 0xc));
  if (*(char *)(*(int *)(param_1 + 0x60) + 0x38) == '\0') {
    iVar16 = DAT_00123950 + 0x123762;
  }
  else {
    iVar16 = DAT_0012394c + 0x12375c;
  }
  CRAMHoover::addEventIntProperty(*(char **)(*(int *)(param_1 + 0xc) + 0x840),iVar16);
  iVar16 = DAT_00123954;
  fVar32 = (float)CRAMHoover::endTrackEvent();
  iVar19 = DAT_00123958;
  if (*(char *)(*(int *)(param_1 + 0x60) + 0x38) == '\0') {
    fVar32 = (float)ZombieCafe::playEffect(*(int *)(param_1 + 0xc),fVar32);
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),fVar32);
    *(int *)(*(int *)(param_1 + 0xc) + iVar19) =
         *(int *)(*(int *)(param_1 + 0xc) + iVar19) - *(int *)(*(int *)(param_1 + 0x60) + 0x34);
    ObjectiveSystem::spendMoney
              (*(ObjectiveSystem **)(*(int *)(param_1 + 0xc) + iVar16),
               *(int *)(*(int *)(param_1 + 0x60) + 0x34));
    Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0x17,
                    *(int **)(*(int *)(param_1 + 0x60) + 0x34));
    uVar31 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x6c);
    iVar16 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
    if ((iVar16 == 0) && (iVar16 = __fixsfsi(uVar31), 0 < iVar16)) {
      pCVar23 = *(Cafe **)(param_1 + 0x14);
      String::valueOf((int)aSStack_124);
      pSVar8 = (StatusNote *)operator_new(0x30);
      StatusNote::StatusNote
                (pSVar8,*(undefined4 *)(param_1 + 0x18),1,aSStack_124,
                 **(undefined4 **)(iVar28 + DAT_00123d60),0xffffffff,0);
      Cafe::addStatusNote(pCVar23,pSVar8);
      String::~String(aSStack_124);
      ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),iVar16);
    }
    uVar31 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_00123d64));
    pZVar9 = *(ZombieCafe **)(param_1 + 0xc);
    uVar21 = *(undefined4 *)(pZVar9 + 0x680);
    uVar24 = *(undefined4 *)(pZVar9 + DAT_00123d68);
    uVar18 = *(undefined4 *)(pZVar9 + iVar19);
    uVar10 = ZombieCafe::getToxin(pZVar9);
    snprintf(acStack_9c,0x80,(char *)(DAT_00123d6c + 0x123a78),DAT_00123d70 + 0x123a7a,uVar31,uVar21
             ,uVar24,uVar18,uVar10,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x24));
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00123d74),DAT_00123d78 + 0x123a94,
               acStack_9c);
  }
  else {
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),fVar32);
    ZombieCafe::spendToxin
              (*(ZombieCafe **)(param_1 + 0xc),*(int *)(*(int *)(param_1 + 0x60) + 0x34));
    piVar30 = *(int **)(iVar28 + DAT_0012395c);
    ObjectiveSystem::spendMoney
              (*(ObjectiveSystem **)(*(int *)(param_1 + 0xc) + iVar16),
               *(int *)(*(int *)(param_1 + 0x60) + 0x34) * *piVar30);
    Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0x17,
                    (int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x34) * *piVar30));
    uVar31 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x6c);
    iVar16 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
    if (((iVar16 == 0) && (*(char *)(*(int *)(param_1 + 0x60) + 0x44) != '\n')) &&
       (iVar16 = __fixsfsi(uVar31), 0 < iVar16)) {
      pCVar23 = *(Cafe **)(param_1 + 0x14);
      String::valueOf((int)aSStack_12c);
      pSVar8 = (StatusNote *)operator_new(0x30);
      StatusNote::StatusNote
                (pSVar8,*(undefined4 *)(param_1 + 0x18),1,aSStack_12c,
                 **(undefined4 **)(iVar28 + DAT_00123960),0xffffffff,0);
      Cafe::addStatusNote(pCVar23,pSVar8);
      String::~String(aSStack_12c);
      ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),iVar16);
    }
    iVar16 = DAT_00123968;
    uVar31 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_00123964));
    pZVar9 = *(ZombieCafe **)(param_1 + 0xc);
    uVar21 = *(undefined4 *)(pZVar9 + 0x680);
    uVar24 = *(undefined4 *)(pZVar9 + DAT_0012396c);
    uVar18 = *(undefined4 *)(pZVar9 + iVar19);
    uVar10 = ZombieCafe::getToxin(pZVar9);
    snprintf(acStack_9c,0x80,(char *)(DAT_00123970 + 0x123868),(char *)(iVar16 + 0x123866),uVar31,
             uVar21,uVar24,uVar18,uVar10,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x24));
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00123974),DAT_00123978 + 0x12387e,
               acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_0012397c + 0x12389a),(char *)(DAT_00123980 + 0x12389c),
                      (char *)(iVar16 + 0x123866));
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar16 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(iVar28 + DAT_00123984));
    if (iVar16 == 0) {
      L_PrintLog((char *)(DAT_00123988 + 0x1238c6),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    snprintf(acStack_dc,0x40,(char *)(DAT_0012398c + 0x1238e0),acStack_11c,
             *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x24));
    L_PrintLog((char *)(DAT_00123990 + 0x1238f0),(char *)(DAT_00123994 + 0x1238f2));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar22 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
    uVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    pZVar9 = *(ZombieCafe **)(param_1 + 0xc);
    uVar17 = *(uint *)(pZVar9 + iVar19);
    uVar20 = *(uint *)(pZVar9 + DAT_0012396c);
    iVar16 = ZombieCafe::calUserRankId(pZVar9,(uint)(byte)pZVar9[DAT_00123998]);
    MALTAHoover::send(pMVar5,(char *)(DAT_001239a0 + 0x123938),uVar22,uVar7,uVar17,uVar20,iVar16,
                      acStack_dc,*(char **)(iVar28 + DAT_0012399c));
  }
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0xd,
                  *(int **)(*(int *)(param_1 + 0x60) + 0x24));
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0xe,
                  (int *)(uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x24) * 4 +
                                                 *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x7e8)
                                                         + 0x94)) + 0x45));
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0xf,
                  (int *)(uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x24) * 4 +
                                                 *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x7e8)
                                                         + 0x94)) + 0x45));
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0x10,
                  (int *)(uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x24) * 4 +
                                                 *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x7e8)
                                                         + 0x94)) + 0x45));
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0x11,
                  (int *)(uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x24) * 4 +
                                                 *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x7e8)
                                                         + 0x94)) + 0x45));
  switch(*(undefined1 *)(*(int *)(param_1 + 0x60) + 0x44)) {
  case 0:
    iVar28 = getSlotMachineCount(param_1);
    if ((0 < iVar28) || (*(int *)(*(int *)(param_1 + 0x60) + 0x24) == 0x8a))
    goto switchD_00123b32_caseD_e;
    break;
  case 10:
    ZombieCafe::addToxin
              (*(ZombieCafe **)(param_1 + 0xc),*(int *)(*(int *)(param_1 + 0x60) + 0x58),false);
    break;
  case 0xc:
    TutorialSystem::setTutorialCompleted
              (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_00123d80),'N');
    pbVar25 = (byte *)(*(int *)(param_1 + 0x14) + 0xa0);
    uVar7 = (uint)*pbVar25;
    uVar17 = (uint)*(byte *)(*(int *)(param_1 + 0x14) + 0xa1);
    *pbVar25 = *(byte *)(*(int *)(param_1 + 0x60) + 0x39);
    local_14c = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xa1) =
         *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x3a);
    while( true ) {
      iVar16 = 0;
      if ((int)(uint)*(byte *)(*(int *)(param_1 + 0x14) + 0xa0) <= (int)(local_14c + uVar7)) break;
      for (; iVar16 < (int)uVar17; iVar16 = iVar16 + 1) {
        lVar14 = Cafe::diamondToStaggeredCoords
                           ((**(int **)(iVar28 + DAT_00123d84) + -1) - (local_14c + uVar7),
                            **(int **)(iVar28 + DAT_00123d88) + 1 + iVar16);
        iVar19 = Cafe::staggeredCoordsToIndex(lVar14);
        iVar11 = *(int *)((uint)**(byte **)(iVar28 + DAT_00123d8c) * 4 +
                         *(int *)(*(Cafe **)(param_1 + 0x14) + 0x94));
        Cafe::setTileImageIndex
                  (*(Cafe **)(param_1 + 0x14),iVar19,(int)*(short *)(iVar11 + 0x3c),
                   *(long *)(iVar11 + 0x48));
        pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
        iVar11 = Cafe::getNextTileNE(iVar19);
        CFPathFinder::linkNodes(pCVar27,iVar19,iVar11,extraout_s0);
        pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
        iVar11 = Cafe::getNextTileNW(iVar19);
        CFPathFinder::unlinkNodes(pCVar27,iVar19,iVar11);
        if (iVar16 != 0) {
          pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
          iVar11 = Cafe::getNextTileNW(iVar19);
          CFPathFinder::linkNodes(pCVar27,iVar19,iVar11,extraout_s0_00);
        }
      }
      local_14c = local_14c + 1;
    }
    for (; iVar16 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x14) + 0xa0); iVar16 = iVar16 + 1) {
      for (local_14c = 0; iVar19 = local_14c + uVar17,
          iVar19 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x14) + 0xa1); local_14c = local_14c + 1)
      {
        lVar14 = Cafe::diamondToStaggeredCoords
                           ((**(int **)(iVar28 + DAT_00123d84) + -1) - iVar16,
                            **(int **)(iVar28 + DAT_00123d88) + 1 + iVar19);
        iVar11 = Cafe::staggeredCoordsToIndex(lVar14);
        iVar26 = *(int *)((uint)**(byte **)(iVar28 + DAT_00123d8c) * 4 +
                         *(int *)(*(Cafe **)(param_1 + 0x14) + 0x94));
        Cafe::setTileImageIndex
                  (*(Cafe **)(param_1 + 0x14),iVar11,(int)*(short *)(iVar26 + 0x3c),
                   *(long *)(iVar26 + 0x48));
        pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
        iVar26 = Cafe::getNextTileNW(iVar11);
        CFPathFinder::linkNodes(pCVar27,iVar11,iVar26,extraout_s0_01);
        pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
        iVar26 = Cafe::getNextTileNE(iVar11);
        CFPathFinder::unlinkNodes(pCVar27,iVar11,iVar26);
        pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
        iVar26 = Cafe::getNextTileSE(iVar11);
        CFPathFinder::unlinkNodes(pCVar27,iVar11,iVar26);
        if (iVar19 != 0) {
          pCVar27 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
          iVar19 = Cafe::getNextTileNE(iVar11);
          CFPathFinder::linkNodes(pCVar27,iVar11,iVar19,extraout_s0_02);
        }
      }
    }
    iVar16 = 0;
    piVar29 = *(int **)(iVar28 + DAT_00123d84);
    piVar30 = *(int **)(iVar28 + DAT_00123d88);
    while( true ) {
      pCVar23 = *(Cafe **)(param_1 + 0x14);
      iVar28 = iVar16 + uVar7;
      iVar16 = iVar16 + 1;
      if ((int)(uint)(byte)pCVar23[0xa0] <= iVar28) break;
      lVar14 = Cafe::diamondToStaggeredCoords((*piVar29 + -1) - iVar28,*piVar30 + 1);
      iVar28 = Cafe::staggeredCoordsToIndex(lVar14);
      Cafe::addWallSection(pCVar23,iVar28,0);
    }
    iVar28 = 0;
    while( true ) {
      pCVar23 = *(Cafe **)(param_1 + 0x14);
      iVar16 = iVar28 + uVar17;
      iVar28 = iVar28 + 1;
      if ((int)(uint)(byte)pCVar23[0xa1] <= iVar16) break;
      lVar14 = Cafe::diamondToStaggeredCoords(*piVar29 + -1,*piVar30 + 1 + iVar16);
      iVar16 = Cafe::staggeredCoordsToIndex(lVar14);
      Cafe::addWallSection(pCVar23,iVar16,1);
    }
    local_144 = (uint)(byte)pCVar23[0xa1] + *piVar30;
    for (local_14c = *piVar29 - (uint)(byte)pCVar23[0xa0]; local_14c < *piVar29;
        local_14c = local_14c + 1) {
      while( true ) {
        local_144 = local_144 + 1;
        lVar14 = Cafe::diamondToStaggeredCoords(local_14c,local_144);
        iVar28 = Cafe::staggeredCoordsToIndex(lVar14);
        iVar16 = Cafe::getNextTileNE(iVar28);
        iVar19 = Cafe::getNextTileSE(iVar28);
        if ((iVar19 < 0) || (iVar16 < 0)) break;
        CFPathFinder::unlinkNodes(*(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c),iVar28,iVar16)
        ;
        fVar32 = (float)CFPathFinder::unlinkNodes
                                  (*(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c),iVar28,iVar19
                                  );
        fVar32 = (float)CFPathFinder::linkNodes
                                  (*(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c),iVar28,iVar16
                                   ,fVar32);
        CFPathFinder::linkNodes
                  (*(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c),iVar28,iVar19,fVar32);
      }
      local_144 = (uint)*(byte *)(*(int *)(param_1 + 0x14) + 0xa1) + *piVar30;
    }
    for (iVar28 = 0; iVar28 < *(int *)(param_1 + 0x20) + 1; iVar28 = iVar28 + 1) {
      this_00 = *(CafeObject **)(iVar28 * 4 + *(int *)(param_1 + 0x24));
      if ((*(char *)(*(int *)(this_00 + 0x8c) + 0x44) == '\x03') ||
         (*(char *)(*(int *)(this_00 + 0x8c) + 0x44) == '\x06')) {
        lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(this_00 + 0x2c));
        iVar16 = Cafe::staggeredToDiamondCoords(lVar14);
        if (((int)(uVar17 + *piVar30) < (int)(short)iVar16) && (iVar16 >> 0x10 < *piVar29)) {
          lVar14 = Cafe::diamondToStaggeredCoords
                             ((iVar16 >> 0x10) << 0x10 |
                              (*(byte *)(*(int *)(param_1 + 0x14) + 0xa1) - uVar17) +
                              (int)(short)iVar16 & 0xffff);
          sVar3 = Cafe::staggeredCoordsToIndex(lVar14);
          CafeObject::setTileIndex(this_00,sVar3,*(Cafe **)(param_1 + 0x14));
        }
      }
    }
    pCVar12 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList(*(Cafe **)(param_1 + 0x14),'\x0e',0);
    *(undefined4 *)(pCVar12 + 0x10) = *(undefined4 *)(pCVar12 + 8);
    while( true ) {
      pFVar13 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar12);
      bVar2 = SUB41(param_1,0);
      if (pFVar13 == (Furniture *)0x0) break;
      lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(pFVar13 + 0x2c));
      local_14c = Cafe::staggeredToDiamondCoords(lVar14);
      local_14c = local_14c >> 0x10;
      lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(pFVar13 + 0x2c));
      sVar3 = Cafe::staggeredToDiamondCoords(lVar14);
      pCVar23 = *(Cafe **)(param_1 + 0x14);
      iVar16 = (int)sVar3;
      iVar28 = uVar17 + (int)*(short *)(pCVar23 + 0x9e);
      if (((iVar16 == iVar28 + 1) && (iVar19 = (int)*(short *)(pCVar23 + 0x9c), local_14c < iVar19))
         && ((int)(iVar19 - uVar7) <= local_14c)) {
        iVar16 = iVar16 + 1;
      }
      else {
        iVar19 = (int)*(short *)(pCVar23 + 0x9c) - uVar7;
        if (((local_14c == iVar19 + -1) && (*(short *)(pCVar23 + 0x9e) < iVar16)) &&
           (iVar16 <= iVar28)) {
          local_14c = iVar19 + -2;
        }
      }
      Cafe::removeFurniture(pCVar23,pFVar13);
      lVar14 = Cafe::diamondToStaggeredCoords(local_14c,iVar16);
      sVar3 = Cafe::staggeredCoordsToIndex(lVar14);
      CafeObject::setTileIndex((CafeObject *)pFVar13,sVar3,*(Cafe **)(param_1 + 0x14));
      Cafe::addFurniture(*(Cafe **)(param_1 + 0x14),pFVar13);
      save(bVar2);
    }
    CapcomOrderableList<Furniture*>::removeAll(pCVar12);
    operator_delete(pCVar12);
    pCVar12 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList(*(Cafe **)(param_1 + 0x14),'\x0f',0);
    *(undefined4 *)(pCVar12 + 0x10) = *(undefined4 *)(pCVar12 + 8);
    while (pFVar13 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar12),
          pFVar13 != (Furniture *)0x0) {
      lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(pFVar13 + 0x2c));
      local_14c = Cafe::staggeredToDiamondCoords(lVar14);
      local_14c = local_14c >> 0x10;
      lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(pFVar13 + 0x2c));
      sVar3 = Cafe::staggeredToDiamondCoords(lVar14);
      pCVar23 = *(Cafe **)(param_1 + 0x14);
      iVar16 = (int)sVar3;
      iVar28 = uVar17 + (int)*(short *)(pCVar23 + 0x9e);
      if (((iVar16 == iVar28 + 1) && (iVar19 = (int)*(short *)(pCVar23 + 0x9c), local_14c < iVar19))
         && ((int)(iVar19 - uVar7) <= local_14c)) {
        iVar16 = iVar16 + 1;
      }
      else {
        iVar19 = (int)*(short *)(pCVar23 + 0x9c) - uVar7;
        if (((local_14c == iVar19 + -1) && (*(short *)(pCVar23 + 0x9e) < iVar16)) &&
           (iVar16 <= iVar28)) {
          local_14c = iVar19 + -2;
        }
      }
      Cafe::removeFurniture(pCVar23,pFVar13);
      lVar14 = Cafe::diamondToStaggeredCoords(local_14c,iVar16);
      sVar3 = Cafe::staggeredCoordsToIndex(lVar14);
      CafeObject::setTileIndex((CafeObject *)pFVar13,sVar3,*(Cafe **)(param_1 + 0x14));
      Cafe::addFurniture(*(Cafe **)(param_1 + 0x14),pFVar13);
      save(bVar2);
    }
    CapcomOrderableList<Furniture*>::removeAll(pCVar12);
    operator_delete(pCVar12);
    pCVar12 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList(*(Cafe **)(param_1 + 0x14),'\x11',0);
    *(undefined4 *)(pCVar12 + 0x10) = *(undefined4 *)(pCVar12 + 8);
    while (pFVar13 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar12),
          pFVar13 != (Furniture *)0x0) {
      lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(pFVar13 + 0x2c));
      iVar28 = Cafe::staggeredToDiamondCoords(lVar14);
      lVar14 = Cafe::indexToStaggeredCoords((int)*(short *)(pFVar13 + 0x2c));
      sVar3 = Cafe::staggeredToDiamondCoords(lVar14);
      Cafe::removeFurniture(*(Cafe **)(param_1 + 0x14),pFVar13);
      lVar14 = Cafe::diamondToStaggeredCoords((iVar28 >> 0x10) + -1,sVar3 + 1);
      sVar3 = Cafe::staggeredCoordsToIndex(lVar14);
      CafeObject::setTileIndex((CafeObject *)pFVar13,sVar3,*(Cafe **)(param_1 + 0x14));
      Cafe::addFurniture(*(Cafe **)(param_1 + 0x14),pFVar13);
      save(bVar2);
    }
    CapcomOrderableList<Furniture*>::removeAll(pCVar12);
    operator_delete(pCVar12);
    (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(*(int **)(param_1 + 0x84),1);
    Store::close(*(Store **)(param_1 + 0x84));
    resetPaths(param_1);
    break;
  case 0xd:
    iVar28 = getMokubaCount(param_1);
    if ((0 < iVar28) || (*(int *)(*(int *)(param_1 + 0x60) + 0x24) == DAT_00123d7c))
    goto switchD_00123b32_caseD_e;
    break;
  case 0xe:
  case 0xf:
  case 0x11:
switchD_00123b32_caseD_e:
    Store::close(*(Store **)(param_1 + 0x84));
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x60) + 0x44);
  if (cVar1 == '\x03') {
    uVar15 = '\x13';
    this = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0012419c);
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 == '\x01') {
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0012419c),'J');
      }
      goto LAB_00124160;
    }
    uVar15 = '\x14';
    this = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0012419c);
  }
  TutorialSystem::triggerEvent(this,uVar15,true);
LAB_00124160:
  param_1[DAT_001241a0] = (GameStateCafe)0x2;
  FUN_0012418a();
  return;
}


