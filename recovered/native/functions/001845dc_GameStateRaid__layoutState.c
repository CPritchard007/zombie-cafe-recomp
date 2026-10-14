/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001845dc GameStateRaid::layoutState */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001848e8) */
/* WARNING: Removing unreachable block (ram,0x001848e8) */
/* GameStateRaid::layoutState() */

void __thiscall GameStateRaid::layoutState(GameStateRaid *this)

{
  GameStateRaid GVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  FoodStack *pFVar5;
  FoodStack *pFVar6;
  undefined4 uVar7;
  ZombieCafe *pZVar8;
  RaidRewardScreen *this_00;
  ScreenElement *pSVar9;
  FurnitureDialog *this_01;
  MALTAHoover *pMVar10;
  SServer *pSVar11;
  Character *this_02;
  int extraout_r1;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  FoodStack FVar16;
  undefined4 uVar17;
  char *pcVar18;
  CImage *pCVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  ServingCounter *this_03;
  int iVar24;
  int iVar25;
  uint *puVar26;
  float extraout_s0;
  float extraout_s0_00;
  float fVar43;
  uint uStack_4;
  uint *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uchar *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  int *piVar33;
  undefined4 *puVar34;
  uint *puVar35;
  int *piVar36;
  undefined4 *puVar37;
  uint *puVar38;
  int *piVar39;
  undefined4 *puVar40;
  uint *puVar41;
  undefined4 *puVar42;
  
  iVar4 = DAT_00184908;
  puVar26 = (uint *)(&stack0xffffffec + DAT_00184908);
  puVar27 = (uint *)(&stack0xffffffec + DAT_00184908);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  puVar30 = &stack0xffffffec + DAT_00184908;
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  piVar33 = (int *)(&stack0xffffffec + DAT_00184908);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  puVar35 = (uint *)(&stack0xffffffec + DAT_00184908);
  piVar36 = (int *)(&stack0xffffffec + DAT_00184908);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  puVar38 = (uint *)(&stack0xffffffec + DAT_00184908);
  piVar39 = (int *)(&stack0xffffffec + DAT_00184908);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  puVar41 = (uint *)(&stack0xffffffec + DAT_00184908);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_00184908);
  *(int *)(&stack0x0000001c + DAT_00184908) = DAT_00184910 + 0x1845f0;
  puVar23 = *(undefined4 **)(DAT_00184910 + 0x1845f0 + DAT_0018490c);
  *(undefined4 *)(&stack0x00000298 + DAT_00184908) = *puVar23;
  L_PrintLog((char *)(DAT_00184914 + 0x1845f8),(char *)(DAT_00184918 + 0x1845fc));
  GVar1 = this[0x15c];
  *(undefined4 **)(&stack0x00000030 + iVar4) = puVar23;
  if (GVar1 != (GameStateRaid)0x1) {
    if (GVar1 != (GameStateRaid)0x2) {
      FUN_00185256();
    }
    sendPresentGift(this);
    this[0x15c] = (GameStateRaid)0x3;
    FUN_00185256();
  }
  *(undefined4 *)(&stack0x00000118 + iVar4) = 0;
  memset(&stack0x0000011c + iVar4,0,0x7c);
  iVar24 = DAT_00184d44;
  if (this[100] == (GameStateRaid)0x0) {
    if (this[0x65] == (GameStateRaid)0x0) {
      ZombieCafe::addToxin(*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x118),false);
      while (-1 < *(int *)(this + 0x124)) {
        uVar2 = *(ushort *)**(undefined4 **)(this + 0x128);
        *puVar27 = (uint)(byte)((ushort *)**(undefined4 **)(this + 0x128))[4];
        snprintf(&stack0x00000058 + iVar4,0x40,(char *)(iVar24 + 0x1849d8),(uint)uVar2);
        pFVar5 = (FoodStack *)
                 Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x120),0);
        uVar15 = *(byte *)(*(int *)(this + 0xc) + DAT_00184d48) - 1;
        if ((int)(uint)*(ushort *)pFVar5 < (int)uVar15) {
          uVar15 = (uint)*(ushort *)pFVar5;
        }
        *(short *)pFVar5 = (short)uVar15;
        FVar16 = pFVar5[8];
        if (9 < (byte)FVar16) {
          FVar16 = (FoodStack)0x9;
        }
        pFVar5[8] = FVar16;
        iVar14 = *(int *)(this + 0xc);
        pFVar6 = (FoodStack *)operator_new(0x24);
        *(FoodStack **)(&stack0x00000018 + iVar4) = pFVar6;
        FoodStack::FoodStack(pFVar6,(uchar)*pFVar5,(uchar)pFVar5[8]);
        Vector<FoodStack*>::addElement
                  ((Vector<FoodStack*> *)(iVar14 + DAT_00184d4c),
                   *(FoodStack **)(&stack0x00000018 + iVar4));
        CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                          (void *)(DAT_00184d50 + 0x184a3c),(char *)(uint)*(ushort *)pFVar5,
                          *(int *)(this + 0xc));
        CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                          (void *)(DAT_00184d54 + 0x184a4c),(char *)(uint)(byte)pFVar5[8],
                          *(int *)(this + 0xc));
        FoodStack::~FoodStack(pFVar5);
        operator_delete(pFVar5);
        strncat(&stack0x00000118 + iVar4,&stack0x00000058 + iVar4,0x40);
      }
      iVar24 = 2;
    }
    else {
      while (-1 < *(int *)(this + 0x124)) {
        do {
          this_03 = *(ServingCounter **)(this + 300);
        } while (this_03 == (ServingCounter *)0x0);
        pFVar5 = (FoodStack *)
                 Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x120),0);
        ServingCounter::addFood(this_03,pFVar5);
      }
      iVar24 = 1;
    }
  }
  else {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0018491c),'!',(bool)GVar1);
    if ((this[0x16] == (GameStateRaid)0x0) && (this[0x15] == (GameStateRaid)0x0)) {
      iVar24 = *(int *)(this + 0xc);
      uVar7 = DAT_00184924;
      if (this[0x13] == (GameStateRaid)0x0) {
        iVar14 = DAT_00184928;
        if (this[0x14] == (GameStateRaid)0x0) {
          piVar12 = (int *)(iVar24 + 0x680);
          iVar24 = *(int *)(iVar24 + DAT_00184920);
          uVar7 = *(undefined4 *)
                   (((*(int *)(this + 0x54) - *piVar12) + 2) * 4 +
                   **(int **)(*(int *)(&stack0x0000001c + iVar4) + DAT_0018492c));
          iVar14 = *(int *)(this + 0x4c) << 2;
        }
      }
      else {
        iVar24 = *(int *)(iVar24 + DAT_00184920);
        iVar14 = *(int *)(this + 0x4c) << 2;
      }
      *(undefined4 *)(iVar14 + iVar24) = uVar7;
    }
    if (this[0x12] != (GameStateRaid)0x0) {
      **(undefined4 **)(*(int *)(this + 0xc) + 0x698) = 0;
    }
    iVar24 = *(int *)(this + 0xc);
    if (*(int *)(this + 0x54) == *(int *)(iVar24 + 0x6a8)) {
      if (*(int *)(this + 0x54) < *(int *)(iVar24 + 0x680)) {
        __aeabi_idivmod(*(int *)(iVar24 + 0x680),
                        **(undefined1 **)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184930));
        piVar12 = (int *)(*(int *)(iVar24 + DAT_00184920) + extraout_r1 * 4);
        if (*piVar12 < 0) {
          *piVar12 = 0;
        }
      }
      *(undefined4 *)(*(int *)(this + 0xc) + DAT_00184934) = 0;
      *(undefined4 *)(*(int *)(this + 0xc) + 0x6a8) = *(undefined4 *)(*(int *)(this + 0xc) + 0x680);
    }
    if (this[0x12] == (GameStateRaid)0x0) {
      if (((this[0x14] == (GameStateRaid)0x0) && (this[0x15] == (GameStateRaid)0x0)) &&
         (this[0x16] == (GameStateRaid)0x0)) {
        iVar24 = *(int *)(this + 0x4c);
        goto LAB_00184712;
      }
    }
    else {
      iVar24 = (uint)**(byte **)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184930) +
               *(int *)(this + 0x4c);
LAB_00184712:
      GameStateMap::clearEnemyData(iVar24);
    }
    iVar24 = DAT_0018493c;
    iVar14 = *(int *)(this + 0xc);
    if (((*(char *)(iVar14 + DAT_00184938) == '\0') && (*(char *)(iVar14 + DAT_0018493c) == '\0'))
       && ((**(int **)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184940) <=
            *(int *)(iVar14 + 0x680) &&
           (iVar25 = __aeabi_fcmpge(*(undefined4 *)(iVar14 + 0x688),
                                    **(undefined4 **)
                                      (*(int *)(&stack0x0000001c + iVar4) + DAT_00184944)),
           iVar25 != 0)))) {
      if (*(int *)(this + 0x118) == 0) {
        *(undefined4 *)(this + 0x118) = 1;
      }
      *(undefined1 *)(iVar14 + iVar24) = 1;
    }
    ZombieCafe::addToxin(*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x118),false);
    if ((*(int *)(this + 0x58) != 0) && (*(int *)(this + 0x124) == -1)) {
      pFVar5 = (FoodStack *)operator_new(0x24);
      FoodStack::FoodStack
                (pFVar5,(uchar)*(undefined4 *)(this + 0x5c),(uchar)*(undefined4 *)(this + 0x60));
      Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(this + 0x120),pFVar5);
    }
    if (-1 < *(int *)(this + 0x124)) {
      uVar2 = *(ushort *)**(undefined4 **)(this + 0x128);
      *puVar26 = (uint)(byte)((ushort *)**(undefined4 **)(this + 0x128))[4];
      snprintf(&stack0x00000058 + iVar4,0x40,(char *)(DAT_00184948 + 0x1847ba),(uint)uVar2);
      pFVar5 = (FoodStack *)
               Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x120),0);
      uVar15 = *(byte *)(*(int *)(this + 0xc) + DAT_0018494c) - 1;
      if ((int)(uint)*(ushort *)pFVar5 < (int)uVar15) {
        uVar15 = (uint)*(ushort *)pFVar5;
      }
      *(short *)pFVar5 = (short)uVar15;
      FVar16 = pFVar5[8];
      if (9 < (byte)FVar16) {
        FVar16 = (FoodStack)0x9;
      }
      pFVar5[8] = FVar16;
      iVar24 = *(int *)(this + 0xc);
      pFVar6 = (FoodStack *)operator_new(0x24);
      FoodStack::FoodStack(pFVar6,(uchar)*pFVar5,(uchar)pFVar5[8]);
      Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar24 + DAT_00184950),pFVar6);
      CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                        (void *)(DAT_00184954 + 0x184816),(char *)(uint)*(ushort *)pFVar5,
                        *(int *)(this + 0xc));
      CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                        (void *)(DAT_00184958 + 0x184824),(char *)(uint)(byte)pFVar5[8],
                        *(int *)(this + 0xc));
      FoodStack::~FoodStack(pFVar5);
      operator_delete(pFVar5);
      strncat(&stack0x00000118 + iVar4,&stack0x00000058 + iVar4,0x40);
    }
    while (-1 < *(int *)(this + 0x124)) {
      pFVar5 = (FoodStack *)
               Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x120),0);
      if (pFVar5 != (FoodStack *)0x0) {
        FoodStack::~FoodStack(pFVar5);
        operator_delete(pFVar5);
      }
    }
    iVar24 = **(int **)(*(int *)(&stack0x0000001c + iVar4) + DAT_0018495c);
    if (*(char *)(*(int *)(*(int *)(this + 0xc) + 0x988) +
                 *(int *)(*(int *)(this + 0x50) * 4 + iVar24)) == '\0') {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00184960) = 1;
    }
    iVar24 = *(int *)(*(int *)(this + 0x50) * 4 + iVar24);
    if ((-1 < iVar24) && (iVar24 <= *(int *)(*(int *)(this + 0xc) + 0x984))) {
      *(undefined1 *)(*(int *)(*(int *)(this + 0xc) + 0x988) + iVar24) = 1;
    }
    ObjectiveSystem::raidCafe(*(ObjectiveSystem **)(*(int *)(this + 0xc) + DAT_00184964),false);
    iVar24 = DAT_00184968;
    if (this[0x12] == (GameStateRaid)0x0) {
      if (((this[0x15] == (GameStateRaid)0x0) && (this[0x16] == (GameStateRaid)0x0)) &&
         (this[0x13] != (GameStateRaid)0x0)) {
        iVar24 = 0x720;
        goto LAB_001848d8;
      }
    }
    else {
LAB_001848d8:
      *(undefined4 *)(*(int *)(this + 0xc) + iVar24) = 0xff;
    }
    iVar24 = 0;
    if (*(int *)(this + 0x50) - 8U < 7) {
      iVar24 = *(int *)(this + 0xc);
      switch(*(int *)(this + 0x50)) {
      case 8:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x1c;
        break;
      case 9:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x1d;
        break;
      case 10:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x1e;
        break;
      case 0xb:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x22;
        break;
      case 0xc:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x23;
        break;
      case 0xd:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x24;
        break;
      case 0xe:
        iVar24 = *(int *)(iVar24 + 0x40);
        iVar14 = 0x25;
      }
      Quest::runQuest(iVar24,iVar14,(int *)0xffffffff);
      iVar24 = 0;
    }
  }
  uVar7 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_00184d58));
  pZVar8 = *(ZombieCafe **)(this + 0xc);
  uVar13 = *(undefined4 *)(pZVar8 + DAT_00184d5c);
  uVar17 = *(undefined4 *)(pZVar8 + DAT_00184d60);
  *(undefined4 *)(&stack0x00000018 + iVar4) = *(undefined4 *)(pZVar8 + 0x680);
  *(undefined4 *)(&stack0x00000020 + iVar4) = uVar13;
  *(undefined4 *)(&stack0x00000024 + iVar4) = uVar17;
  uVar13 = ZombieCafe::getToxin(pZVar8);
  *(undefined4 *)(&stack0xfffffff0 + iVar4) = *(undefined4 *)(&stack0x00000018 + iVar4);
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = *(undefined4 *)(&stack0x00000020 + iVar4);
  *(undefined4 *)((int)&uStack_4 + iVar4) = uVar13;
  *(undefined4 *)(&stack0xfffffff8 + iVar4) = *(undefined4 *)(&stack0x00000024 + iVar4);
  *(undefined4 *)(&stack0x00000004 + iVar4) = 0;
  *puVar28 = uVar7;
  *(int *)(&stack0x00000000 + iVar4) = iVar24;
  snprintf(&stack0x00000198 + iVar4,0x80,(char *)(DAT_00184d64 + 0x184aa6),DAT_00184d68 + 0x184aa8);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)(this + 0xc) + DAT_00184d6c),DAT_00184d70 + 0x184acc,
             &stack0x00000198 + iVar4);
  *(undefined4 *)(&stack0x00000018 + iVar4) = 0;
  if (iVar24 == 0) {
    uVar7 = getDefenderTotalHp();
    *(undefined4 *)(&stack0x00000018 + iVar4) = uVar7;
  }
  *(int *)(&stack0x00000020 + iVar4) = *(int *)(*(int *)(this + 0xc) + DAT_00184d4c + 4) + 1;
  this_00 = (RaidRewardScreen *)operator_new(0xc0);
  uVar7 = *(undefined4 *)(this + 0x11c);
  uVar13 = *(undefined4 *)(this + 0x118);
  *puVar29 = 0;
  *(undefined4 *)(&stack0x00000024 + iVar4) = uVar7;
  *(undefined4 *)(&stack0x00000028 + iVar4) = uVar13;
  uVar7 = *(undefined4 *)(this + 0x48);
  *(int *)(&stack0xfffffff0 + iVar4) = iVar24;
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = uVar7;
  *(undefined4 *)(&stack0xfffffff8 + iVar4) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)((int)&uStack_4 + iVar4) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(&stack0x00000000 + iVar4) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar4) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar4) = *(undefined4 *)(this + 0x50);
  *(uint *)(&stack0x0000000c + iVar4) = (uint)(byte)this[0x16];
  uVar7 = __fixsfsi(*(undefined4 *)(&stack0x00000018 + iVar4));
  *(undefined4 *)(&stack0x00000010 + iVar4) = uVar7;
  RaidRewardScreen::RaidRewardScreen
            (this_00,*(int *)(&stack0x00000024 + iVar4),*(int *)(&stack0x00000020 + iVar4),
             *(int *)(&stack0x00000028 + iVar4),extraout_s0,*puVar30,
             *(int *)(&stack0xfffffff0 + iVar4),*(int *)(&stack0xfffffff4 + iVar4),
             *(int *)(&stack0xfffffff8 + iVar4),*(bool *)((int)&uStack_4 + iVar4),
             *(void **)(&stack0x00000000 + iVar4),*(int *)(&stack0x00000004 + iVar4),
             (bool)(&stack0x00000008)[iVar4],*(int *)(&stack0x0000000c + iVar4));
  *(RaidRewardScreen **)(this + 0x2c) = this_00;
  (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
  iVar14 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)(this + 0x2c) + 0x14))
            (*(int **)(this + 0x2c),(iVar14 >> 0x10) - (iVar14 >> 0x1f) >> 1,(int)(short)iVar14 / 2)
  ;
  pSVar9 = *(ScreenElement **)(this + 0x2c);
  pcVar18 = *(char **)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184d74);
  *(char **)(&stack0x00000018 + iVar4) = pcVar18;
  ScreenElement::setOrder(pSVar9,(int)*pcVar18);
  (**(code **)(**(int **)(this + 0x134) + 0x2c))
            (*(int **)(this + 0x134),*(undefined4 *)(this + 0x2c));
  *(undefined4 *)(this + 0x28) = 0;
  uVar7 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),2,false);
  *(undefined4 *)(&stack0x00000020 + iVar4) = uVar7;
  this_01 = (FurnitureDialog *)operator_new(0xcc);
  pCVar19 = *(CImage **)(*(int *)(this + 0x7c) + 0x28);
  *puVar31 = 0x3f800000;
  FurnitureDialog::FurnitureDialog
            (this_01,(FurnitureData *)0x0,*(CImage **)(&stack0x00000020 + iVar4),pCVar19,
             extraout_s0_00);
  *(FurnitureDialog **)(this + 0x34) = this_01;
  (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
  iVar14 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),(iVar14 >> 0x10) - (iVar14 >> 0x1f) >> 1,(int)(short)iVar14 / 2)
  ;
  ScreenElement::setOrder
            (*(ScreenElement **)(this + 0x34),(int)**(char **)(&stack0x00000018 + iVar4));
  (**(code **)(**(int **)(this + 0x134) + 0x2c))
            (*(int **)(this + 0x134),*(undefined4 *)(this + 0x34));
  if ((((this[0x13] == (GameStateRaid)0x0) && (this[0x16] == (GameStateRaid)0x0)) &&
      (this[0x15] == (GameStateRaid)0x0)) || (iVar24 != 0)) {
LAB_00184fa4:
    *(undefined4 *)(&stack0x00000018 + iVar4) = 0xffffffff;
  }
  else {
    iVar14 = 0;
    iVar25 = 0;
    do {
      if (this[0x15] == (GameStateRaid)0x0) {
        if (this[0x16] == (GameStateRaid)0x0) {
          iVar20 = *(int *)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184d84);
          *(int *)(&stack0x00000018 + iVar4) = iVar20;
          if (*(int *)(iVar20 + iVar14) != -1) {
            uVar7 = CapcomMath::random(DAT_00184d7c);
            *(undefined4 *)(&stack0x00000020 + iVar4) = uVar7;
            *(int *)(&stack0x00000024 + iVar4) =
                 iVar14 + *(int *)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184d88);
            *(int *)(&stack0x00000028 + iVar4) =
                 iVar14 + *(int *)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184d8c);
            uVar7 = __floatsisf(*(undefined1 *)(*(int *)(this + 0xc) + 0x48));
            uVar7 = __mulsf3(uVar7,**(undefined4 **)(&stack0x00000028 + iVar4));
            uVar7 = __addsf3(uVar7,**(undefined4 **)(&stack0x00000024 + iVar4));
            __mulsf3(uVar7,DAT_00184d80);
            iVar20 = __fixsfsi();
            if (*(int *)(&stack0x00000020 + iVar4) <= iVar20) {
              iVar14 = *(int *)(&stack0x00000018 + iVar4);
              iVar25 = iVar25 << 2;
              goto LAB_00184d32;
            }
          }
        }
        else {
          iVar21 = (*(int *)(this + 0x48) - 1U & 1) * 8 + iVar25;
          iVar20 = *(int *)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184d78);
          *(int *)(&stack0x00000024 + iVar4) = iVar21;
          iVar21 = (iVar21 + 0x38) * 4;
          *(int *)(&stack0x00000028 + iVar4) = iVar21;
          iVar21 = *(int *)(iVar21 + iVar20);
          *(int *)(&stack0x00000018 + iVar4) = iVar20;
          if (iVar21 != -1) {
            uVar7 = CapcomMath::random(DAT_00184d7c);
            *(undefined4 *)(&stack0x00000020 + iVar4) = uVar7;
            __mulsf3(*(undefined4 *)
                      ((*(int *)(&stack0x00000024 + iVar4) + 0x48) * 4 +
                      *(int *)(&stack0x00000018 + iVar4)),DAT_00184d80);
            uVar15 = __fixsfsi();
            if ((((((int)uVar15 >> 0x1f) - (*(int *)(&stack0x00000020 + iVar4) >> 0x1f)) +
                  (uint)(*(uint *)(&stack0x00000020 + iVar4) <= uVar15) & 0xff) != 0) &&
               (uVar15 != 0)) {
              *(undefined4 *)(&stack0x00000018 + iVar4) =
                   *(undefined4 *)
                    (*(int *)(&stack0x00000028 + iVar4) + *(int *)(&stack0x00000018 + iVar4));
              goto LAB_00184d90;
            }
          }
        }
      }
      else {
        *(int *)(&stack0x00000018 + iVar4) = *(int *)(this + 0x48) + -1;
        *(uint *)(&stack0x00000018 + iVar4) =
             *(uint *)(&stack0x00000018 + iVar4) & -(uint)(*(uint *)(&stack0x00000018 + iVar4) < 4);
        iVar20 = *(int *)(*(int *)(&stack0x0000001c + iVar4) + DAT_00184d78);
        *(int *)(&stack0x00000020 + iVar4) = iVar20;
        if (*(int *)(iVar14 + iVar20 + 0x18) != -1) {
          uVar7 = CapcomMath::random(DAT_00184d7c);
          *(undefined4 *)(&stack0x00000024 + iVar4) = uVar7;
          __mulsf3(*(undefined4 *)
                    ((*(int *)(&stack0x00000018 + iVar4) * 8 + iVar25 + 0xe) * 4 +
                    *(int *)(&stack0x00000020 + iVar4)),DAT_00184d80);
          uVar15 = __fixsfsi();
          if ((((((int)uVar15 >> 0x1f) - (*(int *)(&stack0x00000024 + iVar4) >> 0x1f)) +
                (uint)(*(uint *)(&stack0x00000024 + iVar4) <= uVar15) & 0xff) != 0) && (uVar15 != 0)
             ) {
            iVar25 = (iVar25 + 6) * 4;
            iVar14 = *(int *)(&stack0x00000020 + iVar4);
LAB_00184d32:
            *(undefined4 *)(&stack0x00000018 + iVar4) = *(undefined4 *)(iVar25 + iVar14);
LAB_00184d90:
            if (*(int *)(&stack0x00000018 + iVar4) != -1) goto LAB_00184df6;
            break;
          }
        }
      }
      iVar25 = iVar25 + 1;
      iVar14 = iVar14 + 4;
    } while (iVar25 != 8);
    uVar7 = CapcomMath::random(DAT_001850b8);
    iVar14 = DAT_001850bc;
    iVar25 = 0;
    *(undefined4 *)(&stack0x00000024 + iVar4) = uVar7;
    *(undefined4 *)(&stack0x00000018 + iVar4) = 0;
    do {
      sVar3 = *(short *)(iVar25 * 2 + iVar14 + 0x184e00);
      *(int *)(&stack0x00000020 + iVar4) = iVar25 * 2;
      iVar20 = *(int *)(&stack0x00000018 + iVar4) + (int)sVar3;
      *(int *)(&stack0x00000018 + iVar4) = iVar20;
      uVar7 = __floatsisf(iVar20);
      uVar7 = __mulsf3(uVar7,DAT_001850c0);
      *(undefined4 *)(&stack0x00000028 + iVar4) = uVar7;
      uVar7 = __floatsisf(*(undefined4 *)(&stack0x00000024 + iVar4));
      iVar20 = __aeabi_fcmpge(*(undefined4 *)(&stack0x00000028 + iVar4),uVar7);
      if (iVar20 != 0) {
        *(undefined4 *)(this + 0x28) =
             *(undefined4 *)
              (*(short *)(*(int *)(&stack0x00000020 + iVar4) + iVar14 + 0x184e0c) * 4 +
              *(int *)(*(int *)(this + 0x78) + 0x94));
        break;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != 6);
    *(undefined4 *)(&stack0x00000018 + iVar4) = 0xffffffff;
LAB_00184df6:
    if (this[0x13] != (GameStateRaid)0x0) {
      iVar14 = *(int *)(&stack0x0000001c + iVar4);
      *(char *)(*(int *)(this + 0xc) + 0x48) = *(char *)(*(int *)(this + 0xc) + 0x48) + '\x01';
      if (**(int **)(iVar14 + DAT_001850c4) <= (int)(uint)*(byte *)(*(int *)(this + 0xc) + 0x48)) {
        *(byte *)(*(int *)(this + 0xc) + 0x48) = (char)**(int **)(iVar14 + DAT_001850c4) - 1;
      }
    }
    if (*(int *)(&stack0x00000018 + iVar4) == -1) {
LAB_00184e42:
      if (*(FurnitureData **)(this + 0x28) != (FurnitureData *)0x0) {
        FurnitureDialog::setFurnitureData
                  (*(FurnitureDialog **)(this + 0x34),*(FurnitureData **)(this + 0x28));
        FurnitureDialog::layout(*(FurnitureDialog **)(this + 0x34));
        uVar7 = *(undefined4 *)(this + 0x34);
        String::String((String *)(&stack0x00000050 + iVar4),0);
        String::String((String *)(&stack0x00000048 + iVar4),(char *)(DAT_001850e4 + 0x184f70));
        *(undefined4 *)(&stack0xfffffff0 + iVar4) = 1;
        *puVar32 = 0;
        FurnitureDialog::show(uVar7,&stack0x00000050 + iVar4,&stack0x00000048 + iVar4);
        String::~String((String *)(&stack0x00000048 + iVar4));
        String::~String((String *)(&stack0x00000050 + iVar4));
        CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                          (void *)(DAT_001850e8 + 0x184fa0),*(char **)(*(int *)(this + 0x28) + 0x24)
                          ,*(int *)(this + 0x28));
      }
      goto LAB_00184fa4;
    }
    iVar14 = *(int *)(&stack0x00000018 + iVar4);
    iVar25 = *(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001850c8) + iVar14 * 4);
    if ((*(int *)(iVar25 + 0x560) == 0) || (*(int *)(iVar25 + DAT_001850cc) == 0))
    goto LAB_00184e42;
    String::String((String *)(&stack0x00000038 + iVar4),(char *)(DAT_0018530c + 0x1852b4));
    this_02 = (Character *)operator_new(0x6c);
    uVar7 = *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + DAT_00185310) + iVar14 * 4);
    *puVar42 = (String *)(&stack0x00000038 + iVar4);
    Character::Character(this_02,uVar7,2,1);
    String::~String((String *)(&stack0x00000038 + iVar4));
    fVar43 = (float)__floatsisf((int)**(short **)(*(int *)(&stack0x0000001c + iVar4) + DAT_001850d0)
                               );
    Character::setCurrentEnergy(this_02,fVar43);
    CharacterData::getRandomName
              ((CharacterData *)(&stack0x00000040 + iVar4),*(bool *)(*(int *)this_02 + DAT_001850d4)
               ,*(int *)(&stack0x00000018 + iVar4));
    String::operator=((String *)(this_02 + 8),&stack0x00000040 + iVar4);
    String::~String((String *)(&stack0x00000040 + iVar4));
    Platform::getAppTime();
    uVar7 = __fixdfsi();
    this_02[4] = (Character)0x1;
    *(undefined4 *)(this_02 + 0x10) = uVar7;
    this_02[5] = (Character)0x2;
    pZVar8 = *(ZombieCafe **)(this + 0xc);
    iVar25 = *(int *)((Vector<Character*> *)(pZVar8 + DAT_001850d8) + 4);
    *(int *)(&stack0x00000020 + iVar4) = iVar25 + 1;
    iVar14 = *(int *)(pZVar8 + 0x680);
    *(undefined4 *)(&stack0x00000024 + iVar4) =
         **(undefined4 **)(*(int *)(&stack0x0000001c + iVar4) + DAT_001850dc);
    if (*(int *)(&stack0x00000020 + iVar4) <
        (int)*(short *)((iVar14 + -1) * 2 + *(int *)(&stack0x00000024 + iVar4))) {
      iVar25 = iVar25 + 2;
      if (*(int *)(pZVar8 + DAT_001850d8) < iVar25) {
        iVar14 = *(int *)(pZVar8 + DAT_001850d8) * 2;
        if (iVar14 < iVar25) {
          iVar14 = iVar25;
        }
        Vector<Character*>::resize((Vector<Character*> *)(pZVar8 + DAT_001850d8),iVar14,-1);
      }
      iVar25 = *(int *)(pZVar8 + DAT_001850d8 + 4);
      iVar14 = DAT_001850d8 + 8;
      *(int *)(pZVar8 + DAT_001850d8 + 4) = iVar25 + 1;
      *(Character **)((iVar25 + 1) * 4 + *(int *)(pZVar8 + iVar14)) = this_02;
      Vector<int>::addElement((Vector<int> *)(this + 0xd4),(uint)(byte)this_02[0x44]);
      Vector<long>::addElement((Vector<long> *)(this + 0xe0),*(long *)(this_02 + 0x48));
      Vector<int>::addElement((Vector<int> *)(this + 0xec),(uint)(byte)this_02[0x4c]);
    }
    else {
      ZombieCafe::putZombieInMeetlocker(pZVar8,this_02,(PullMenuElement *)0x0);
    }
    *(undefined1 *)(*(int *)(this + 0x140) + 0x60) = 1;
    CharacterDetails::setCharacter(*(CharacterDetails **)(this + 0x140),this_02);
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x140),
               (int)**(char **)(*(int *)(&stack0x0000001c + iVar4) + DAT_001850e0));
    (**(code **)(**(int **)(this + 0x140) + 0x20))(*(int **)(this + 0x140),1);
  }
  memset(&stack0x00000218 + iVar4,0,0x80);
  memset(&stack0x00000098 + iVar4,0,0x40);
  memset(&stack0x000000d8 + iVar4,0,0x40);
  if (((this[0x13] != (GameStateRaid)0x0) || (this[0x15] != (GameStateRaid)0x0)) ||
     (this[0x16] != (GameStateRaid)0x0)) {
    *(uint *)(&stack0x00000018 + iVar4) =
         *(uint *)(&stack0x00000018 + iVar4) & -(uint)(*(int *)(&stack0x00000018 + iVar4) != -1);
    pMVar10 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar10,(char *)(DAT_001850ec + 0x185006),(char *)(DAT_001850f0 + 0x185008),
                      (char *)(DAT_001850f4 + 0x18500a));
    pSVar11 = (SServer *)MALTAHoover::GetInstance();
    puVar23 = *(undefined4 **)(*(int *)(&stack0x0000001c + iVar4) + DAT_001850f8);
    MALTAHoover::getFBID(pSVar11,(char *)*puVar23);
    pSVar11 = (SServer *)MALTAHoover::GetInstance();
    MALTAHoover::getGCID(pSVar11,(char *)*puVar23);
    GVar1 = this[0x16];
    uVar7 = *(undefined4 *)(this + 0x50);
    pcVar18 = &stack0x00000218 + iVar4;
    *(undefined4 *)(&stack0x00000020 + iVar4) =
         *(undefined4 *)(*(int *)(&stack0x0000001c + iVar4) + DAT_001850fc);
    if (GVar1 == (GameStateRaid)0x0) {
      if (this[0x15] == (GameStateRaid)0x0) {
        *(undefined4 *)(&stack0xfffffff0 + iVar4) = uVar7;
        iVar14 = *(int *)(&stack0x0000001c + iVar4);
        *piVar39 = (int)(&stack0x000000d8 + iVar4);
        uVar7 = **(undefined4 **)(iVar14 + DAT_001852f8);
        *(undefined4 *)((int)&uStack_4 + iVar4) = *(undefined4 *)(&stack0x00000018 + iVar4);
        *(int *)(&stack0xfffffff8 + iVar4) = iVar24;
        *(undefined4 *)(&stack0xfffffff4 + iVar4) = uVar7;
        *(uint *)(&stack0x00000000 + iVar4) = (uint)*(byte *)(*(int *)(this + 0xc) + 0x48);
        snprintf(pcVar18,0x80,(char *)(DAT_001852fc + 0x1851c6),&stack0x00000098 + iVar4);
        uVar7 = MALTAHoover::GetInstance();
        *(undefined4 *)(&stack0x0000001c + iVar4) = uVar7;
        pZVar8 = *(ZombieCafe **)(this + 0xc);
        *(undefined4 *)(&stack0x00000018 + iVar4) = *(undefined4 *)(pZVar8 + 0x680);
        uVar7 = ZombieCafe::getToxin(pZVar8);
        *(undefined4 *)(&stack0x00000024 + iVar4) = uVar7;
        pZVar8 = *(ZombieCafe **)(this + 0xc);
        uVar17 = *(undefined4 *)(pZVar8 + DAT_001852e8);
        *(undefined4 *)(&stack0x00000028 + iVar4) = *(undefined4 *)(pZVar8 + DAT_001852ec);
        uVar7 = ZombieCafe::calUserRankId(pZVar8,(uint)(byte)pZVar8[DAT_001852f0]);
        *(char **)(&stack0xfffffff8 + iVar4) = pcVar18;
        uVar13 = *(undefined4 *)(&stack0x00000020 + iVar4);
        *(undefined4 *)(&stack0xfffffff0 + iVar4) = *(undefined4 *)(&stack0x00000028 + iVar4);
        *(undefined4 *)(&stack0xfffffff4 + iVar4) = uVar7;
        pMVar10 = *(MALTAHoover **)(&stack0x0000001c + iVar4);
        uVar15 = *(uint *)(&stack0x00000018 + iVar4);
        uVar22 = *(uint *)(&stack0x00000024 + iVar4);
        *puVar40 = uVar17;
        *(undefined4 *)((int)&uStack_4 + iVar4) = uVar13;
        MALTAHoover::send(pMVar10,(char *)(DAT_00185300 + 0x18520a),uVar15,uVar22,*puVar41,
                          *(uint *)(&stack0xfffffff0 + iVar4),*(int *)(&stack0xfffffff4 + iVar4),
                          *(char **)(&stack0xfffffff8 + iVar4),*(char **)((int)&uStack_4 + iVar4));
        goto LAB_00185216;
      }
      iVar14 = *(int *)(this + 0x48);
      uVar15 = 3;
      if ((iVar14 != 4) && (uVar15 = 2, iVar14 != 3)) {
        uVar15 = (uint)(iVar14 == 2);
      }
      uVar13 = *(undefined4 *)(&stack0x00000018 + iVar4);
      *(undefined4 *)(&stack0xfffffff0 + iVar4) = uVar7;
      *piVar36 = (int)(&stack0x000000d8 + iVar4);
      *(undefined4 *)(&stack0xfffffff4 + iVar4) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar4) = uVar13;
      *(int *)(&stack0xfffffff8 + iVar4) = iVar24;
      *(uint *)((int)&uStack_4 + iVar4) = uVar15;
      snprintf(&stack0x00000218 + iVar4,0x80,(char *)(DAT_001852e4 + 0x18513e),
               &stack0x00000098 + iVar4);
      uVar7 = MALTAHoover::GetInstance();
      *(undefined4 *)(&stack0x0000001c + iVar4) = uVar7;
      pZVar8 = *(ZombieCafe **)(this + 0xc);
      *(undefined4 *)(&stack0x00000018 + iVar4) = *(undefined4 *)(pZVar8 + 0x680);
      uVar7 = ZombieCafe::getToxin(pZVar8);
      *(undefined4 *)(&stack0x00000024 + iVar4) = uVar7;
      pZVar8 = *(ZombieCafe **)(this + 0xc);
      uVar7 = *(undefined4 *)(pZVar8 + DAT_001852ec);
      *(undefined4 *)(&stack0x00000028 + iVar4) = *(undefined4 *)(pZVar8 + DAT_001852e8);
      *(undefined4 *)(&stack0x0000002c + iVar4) = uVar7;
      uVar7 = ZombieCafe::calUserRankId(pZVar8,(uint)(byte)pZVar8[DAT_001852f0]);
      uVar13 = *(undefined4 *)(&stack0x0000002c + iVar4);
      *puVar37 = *(undefined4 *)(&stack0x00000028 + iVar4);
      *(undefined4 *)(&stack0xfffffff0 + iVar4) = uVar13;
      *(undefined4 *)(&stack0xfffffff4 + iVar4) = uVar7;
      *(undefined4 *)((int)&uStack_4 + iVar4) = *(undefined4 *)(&stack0x00000020 + iVar4);
      *(undefined1 **)(&stack0xfffffff8 + iVar4) = &stack0x00000218 + iVar4;
      MALTAHoover::send(*(MALTAHoover **)(&stack0x0000001c + iVar4),
                        (char *)(DAT_001852f4 + 0x18518a),*(uint *)(&stack0x00000018 + iVar4),
                        *(uint *)(&stack0x00000024 + iVar4),*puVar38,
                        *(uint *)(&stack0xfffffff0 + iVar4),*(int *)(&stack0xfffffff4 + iVar4),
                        *(char **)(&stack0xfffffff8 + iVar4),*(char **)((int)&uStack_4 + iVar4));
    }
    else {
      iVar14 = *(int *)(this + 0x48);
      *(undefined4 *)(&stack0xfffffff0 + iVar4) = uVar7;
      iVar14 = 0xb - (uint)(iVar14 == 1);
      *(int *)(&stack0x0000001c + iVar4) = iVar14;
      *(int *)((int)&uStack_4 + iVar4) = iVar14;
      *(undefined4 *)(&stack0xfffffff4 + iVar4) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar4) = *(undefined4 *)(&stack0x00000018 + iVar4);
      *piVar33 = (int)(&stack0x000000d8 + iVar4);
      *(int *)(&stack0xfffffff8 + iVar4) = iVar24;
      snprintf(pcVar18,0x80,(char *)(DAT_00185100 + 0x18505c),&stack0x00000098 + iVar4);
      uVar7 = MALTAHoover::GetInstance();
      *(undefined4 *)(&stack0x00000018 + iVar4) = uVar7;
      pZVar8 = *(ZombieCafe **)(this + 0xc);
      *(undefined4 *)(&stack0x00000024 + iVar4) = *(undefined4 *)(pZVar8 + 0x680);
      uVar7 = ZombieCafe::getToxin(pZVar8);
      *(undefined4 *)(&stack0x00000028 + iVar4) = uVar7;
      pZVar8 = *(ZombieCafe **)(this + 0xc);
      uVar17 = *(undefined4 *)(pZVar8 + DAT_0018510c);
      *(undefined4 *)(&stack0x0000002c + iVar4) = *(undefined4 *)(pZVar8 + DAT_00185104);
      uVar7 = ZombieCafe::calUserRankId(pZVar8,(uint)(byte)pZVar8[DAT_00185108]);
      *(char **)(&stack0xfffffff8 + iVar4) = pcVar18;
      uVar13 = *(undefined4 *)(&stack0x00000020 + iVar4);
      *(undefined4 *)(&stack0xfffffff0 + iVar4) = *(undefined4 *)(&stack0x0000002c + iVar4);
      *(undefined4 *)(&stack0xfffffff4 + iVar4) = uVar7;
      uVar15 = *(uint *)(&stack0x00000024 + iVar4);
      pMVar10 = *(MALTAHoover **)(&stack0x00000018 + iVar4);
      uVar22 = *(uint *)(&stack0x00000028 + iVar4);
      *puVar34 = uVar17;
      *(undefined4 *)((int)&uStack_4 + iVar4) = uVar13;
      MALTAHoover::send(pMVar10,(char *)(DAT_00185110 + 0x1850a0),uVar15,uVar22,*puVar35,
                        *(uint *)(&stack0xfffffff0 + iVar4),*(int *)(&stack0xfffffff4 + iVar4),
                        *(char **)(&stack0xfffffff8 + iVar4),*(char **)((int)&uStack_4 + iVar4));
      uVar15 = *(uint *)(&stack0x0000001c + iVar4);
    }
    sendGLog((int)this,uVar15);
  }
LAB_00185216:
  if ((this[0x15] != (GameStateRaid)0x0) && (iVar24 == 0)) {
    ZombieCafe::addWeekRaid_openNum(*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x48));
    iVar24 = ZombieCafe::getWeekRaid_toxinflag
                       (*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x48) + -1);
    if (iVar24 == 0) {
      ZombieCafe::addToxin(*(ZombieCafe **)(this + 0xc),2,false);
      ZombieCafe::setWeekRaid_toxinflag(*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x48) + -1);
      RaidRewardScreen::setFirstClearBonus(*(RaidRewardScreen **)(this + 0x2c));
    }
  }
  ZombieCafe::save();
  L_PrintLog((char *)(DAT_00185304 + 0x18525e),(char *)(DAT_00185308 + 0x185260));
  if (*(int *)(&stack0x00000298 + iVar4) == **(int **)(&stack0x00000030 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


