/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140004 GameStateFriendCafe::initRaidRewards */

/* GameStateFriendCafe::initRaidRewards() */

void __thiscall GameStateFriendCafe::initRaidRewards(GameStateFriendCafe *this)

{
  GameStateFriendCafe GVar1;
  int iVar2;
  FoodStack *pFVar3;
  SServer *pSVar4;
  char *pcVar5;
  void *pvVar6;
  ZombieCafe *pZVar7;
  undefined4 uVar8;
  RaidRewardScreen *this_00;
  undefined4 uVar9;
  undefined4 *puVar10;
  uchar *puVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  ushort *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 *puVar20;
  float extraout_s0;
  undefined4 uStack_4;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  uchar *puVar28;
  
  iVar2 = DAT_00140358;
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_00140358);
  puVar28 = &stack0xffffffec + DAT_00140358;
  *(int *)(&stack0x0000001c + DAT_00140358) = DAT_0014035c + 0x140012;
  puVar10 = *(undefined4 **)(DAT_0014035c + 0x140012 + DAT_00140360);
  *(undefined4 *)(&stack0x00000200 + DAT_00140358) = *puVar10;
  GVar1 = this[0xd8];
  *(undefined4 **)(&stack0x00000028 + DAT_00140358) = puVar10;
  if (GVar1 == (GameStateFriendCafe)0x0) {
    if (this[0x104] == (GameStateFriendCafe)0x0) {
      if (-1 < *(int *)(this + 0xfc)) {
        puVar16 = (ushort *)**(undefined4 **)(this + 0x100);
        uVar12 = *(byte *)(*(int *)(this + 0xc) + DAT_0014036c) - 1;
        if ((int)(uint)*puVar16 < (int)uVar12) {
          uVar12 = (uint)*puVar16;
        }
        *puVar16 = (ushort)uVar12;
        *(uint *)(this + 0xf0) = uVar12 & 0xffff;
        uVar12 = (uint)(byte)puVar16[4];
        if (9 < uVar12) {
          uVar12 = 9;
        }
        *(uchar *)(puVar16 + 4) = (uchar)uVar12;
        *(uint *)(this + 0xf4) = uVar12;
        iVar15 = *(int *)(this + 0xc);
        pFVar3 = (FoodStack *)operator_new(0x24);
        FoodStack::FoodStack(pFVar3,(uchar)*puVar16,(uchar)puVar16[4]);
        Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar15 + DAT_00140370),pFVar3);
        if (*(char *)(*(int *)(*(int *)(this + 0xc) + 0x4e8) + (uint)*puVar16 * 0x1c + 0x18) ==
            '\x04') {
          *puVar16 = 0;
          *(uchar *)(puVar16 + 4) = '\0';
        }
        CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                          (void *)(DAT_0014038c + 0x140290),(char *)(uint)*puVar16,
                          *(int *)(this + 0xc));
        CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                          (void *)(DAT_00140390 + 0x14029e),(char *)(uint)(byte)puVar16[4],
                          *(int *)(this + 0xc));
      }
      while (-1 < *(int *)(this + 0xfc)) {
        pFVar3 = (FoodStack *)
                 Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0xf8),0);
        if (pFVar3 != (FoodStack *)0x0) {
          FoodStack::~FoodStack(pFVar3);
          operator_delete(pFVar3);
        }
      }
      *(undefined4 *)(this + 0xe4) = 0;
      *(undefined4 *)(this + 0xe8) = 0;
      uVar9 = 2;
      goto LAB_001402d2;
    }
    while (-1 < *(int *)(this + 0xfc)) {
      pFVar3 = (FoodStack *)
               Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0xf8),0);
      if (pFVar3 != (FoodStack *)0x0) {
        FoodStack::~FoodStack(pFVar3);
        operator_delete(pFVar3);
      }
    }
    *(undefined4 *)(this + 0xe4) = 0;
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined4 *)(&stack0x00000020 + iVar2) = 1;
  }
  else {
    *(int *)(*(int *)(this + 0xc) + DAT_00140364) =
         *(int *)(*(int *)(this + 0xc) + DAT_00140364) + 1;
    puVar16 = *(ushort **)(this + 0xec);
    if (puVar16 != (ushort *)0x0) {
      *(uint *)(this + 0xf0) = (uint)*puVar16;
      *(uint *)(this + 0xf4) = (uint)(byte)puVar16[4];
      if (*(int *)(this + 0xfc) == -1) {
        pFVar3 = (FoodStack *)operator_new(0x24);
        puVar11 = *(uchar **)(this + 0xec);
        FoodStack::FoodStack(pFVar3,*puVar11,puVar11[8]);
        __mulsf3(*(undefined4 *)(this + 0x118),
                 **(undefined4 **)(*(int *)(&stack0x0000001c + iVar2) + DAT_00140368));
        uVar9 = __fixsfsi();
        *(undefined4 *)(pFVar3 + 4) = uVar9;
        Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(this + 0xf8),pFVar3);
      }
    }
    if (-1 < *(int *)(this + 0xfc)) {
      puVar16 = (ushort *)**(undefined4 **)(this + 0x100);
      uVar12 = *(byte *)(*(int *)(this + 0xc) + DAT_0014036c) - 1;
      if ((int)(uint)*puVar16 < (int)uVar12) {
        uVar12 = (uint)*puVar16;
      }
      *puVar16 = (ushort)uVar12;
      *(uint *)(this + 0xf0) = uVar12 & 0xffff;
      uVar12 = (uint)(byte)puVar16[4];
      if (9 < uVar12) {
        uVar12 = 9;
      }
      *(uchar *)(puVar16 + 4) = (uchar)uVar12;
      *(uint *)(this + 0xf4) = uVar12;
      iVar15 = *(int *)(this + 0xc);
      pFVar3 = (FoodStack *)operator_new(0x24);
      FoodStack::FoodStack(pFVar3,(uchar)*puVar16,(uchar)puVar16[4]);
      Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar15 + DAT_00140370),pFVar3);
      if (*(char *)(*(int *)(*(int *)(this + 0xc) + 0x4e8) + (uint)*puVar16 * 0x1c + 0x18) == '\x04'
         ) {
        *puVar16 = 0;
        *(uchar *)(puVar16 + 4) = '\0';
      }
      CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                        (void *)(DAT_00140374 + 0x14010c),(char *)(uint)*puVar16,
                        *(int *)(this + 0xc));
      CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                        (void *)(DAT_00140378 + 0x14011a),(char *)(uint)(byte)puVar16[4],
                        *(int *)(this + 0xc));
    }
    while (-1 < *(int *)(this + 0xfc)) {
      pFVar3 = (FoodStack *)
               Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0xf8),0);
      if (pFVar3 != (FoodStack *)0x0) {
        FoodStack::~FoodStack(pFVar3);
        operator_delete(pFVar3);
      }
    }
    *(GameStateFriendCafe **)(&stack0x00000020 + iVar2) = this + 0xfc;
    uVar9 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000020 + iVar2) + 0x1c),
                     **(undefined4 **)(*(int *)(&stack0x0000001c + iVar2) + DAT_0014037c));
    *(undefined4 *)(this + 0xe4) = uVar9;
    __mulsf3(uVar9,DAT_00140380);
    __fixsfsi();
    uVar18 = __floatsisf();
    uVar18 = __divsf3(uVar18,DAT_00140380);
    uVar18 = __mulsf3(uVar18,DAT_00140384);
    *(undefined4 *)(this + 0xe8) = uVar18;
    iVar15 = *(int *)(this + 0xc);
    uVar9 = __addsf3(*(undefined4 *)(iVar15 + 0x688),uVar9);
    *(undefined4 *)(iVar15 + 0x688) = uVar9;
    iVar15 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(this + 0xc));
    if (iVar15 == 0) {
      pZVar7 = *(ZombieCafe **)(this + 0xc);
      iVar15 = __fixsfsi(*(undefined4 *)(*(int *)(&stack0x00000020 + iVar2) + 0x1c));
      ZombieCafe::addXp(pZVar7,iVar15);
    }
    ObjectiveSystem::raidCafe(*(ObjectiveSystem **)(*(int *)(this + 0xc) + DAT_00140388),true);
    Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),3,(int *)0xffffffff);
    uVar9 = 0;
LAB_001402d2:
    *(undefined4 *)(&stack0x00000020 + iVar2) = uVar9;
  }
  if (this[0xd8] == (GameStateFriendCafe)0x0) {
    for (iVar15 = 0; iVar15 < *(int *)(this + 0x154) + 1; iVar15 = iVar15 + 1) {
      iVar13 = *(int *)(this + 0x158);
      *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(this + 0x120);
      uVar9 = calculateDifficulty(this,*(Character **)(*(int *)(iVar15 * 4 + iVar13) + 0x8c));
      uVar9 = __addsf3(*(undefined4 *)(&stack0x00000018 + iVar2),uVar9);
      *(undefined4 *)(this + 0x120) = uVar9;
    }
    *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(this + 0x11c);
    uVar9 = *(undefined4 *)(this + 0x120);
    uVar18 = **(undefined4 **)(*(int *)(&stack0x0000001c + iVar2) + DAT_00140684);
    StringUtil::getEncodingString((StringUtil *)(&stack0x00000038 + iVar2),'\0');
    *puVar23 = 0;
    pcVar5 = (char *)String::getBytes((String *)(this + 0x1dc),&stack0x00000038 + iVar2,0);
    String::~String((String *)(&stack0x00000038 + iVar2));
    uVar9 = __subsf3(*(undefined4 *)(&stack0x00000018 + iVar2),uVar9);
    __mulsf3(uVar9,uVar18);
    iVar15 = __fixsfsi();
    if (iVar15 < 1) {
      iVar15 = 1;
    }
    snprintf(&stack0x00000100 + iVar2,0x80,(char *)(DAT_00140688 + 0x1404b0),iVar15);
    pcVar19 = (char *)(*(int *)(this + 0xc) + DAT_0014068c);
    *(int *)(&stack0x00000018 + iVar2) = *(int *)(this + 0xc) + DAT_00140690;
    L_PrintLog((char *)(DAT_00140694 + 0x1404cc),pcVar5);
    L_PrintLog((char *)(DAT_00140698 + 0x1404dc),pcVar19);
    L_PrintLog((char *)(DAT_0014069c + 0x1404e6),*(char **)(&stack0x00000018 + iVar2));
    L_PrintLog((char *)(DAT_001406a0 + 0x1404f0),&stack0x00000100 + iVar2);
    pvVar6 = *(void **)(*(int *)(this + 0xc) + DAT_0014067c);
    pcVar14 = *(char **)(&stack0x00000018 + iVar2);
    *puVar24 = &stack0x00000100 + iVar2;
    GiftManager::SendDefenderWin(pvVar6,pcVar5,pcVar19,pcVar14,(char *)*puVar25);
    free(pcVar5);
    uVar9 = 0;
    goto LAB_0014050c;
  }
  StringUtil::getEncodingString((StringUtil *)(&stack0x00000030 + iVar2),'\0');
  *puVar20 = 0;
  uVar9 = String::getBytes((String *)(this + 0x1dc),&stack0x00000030 + iVar2,0);
  *(undefined4 *)(&stack0x00000018 + iVar2) = uVar9;
  String::~String((String *)(&stack0x00000030 + iVar2));
  snprintf(&stack0x00000080 + iVar2,0x80,(char *)(DAT_00140394 + 0x14030c));
  iVar15 = DAT_00140398;
  if (*(int *)(this + 0x78) << 0x1f < 0) {
    iVar13 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(this + 0xc) + DAT_00140398));
    if (iVar13 == 0) {
      pcVar5 = (char *)(DAT_001403a0 + 0x14033a);
    }
    else {
      pcVar5 = (char *)CCFacebook::GetMyName(*(void **)(*(int *)(this + 0xc) + iVar15));
    }
  }
  else {
    pcVar5 = (char *)(DAT_0014039c + 0x140334);
  }
  iVar15 = DAT_00140398;
  if (*(int *)(this + 0x78) << 0x1f < 0) {
    iVar13 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(this + 0xc) + DAT_00140398));
    if (iVar13 == 0) goto LAB_0014034c;
    pcVar14 = (char *)CCFacebook::GetUserIdAsString(*(void **)(*(int *)(this + 0xc) + iVar15));
  }
  else {
LAB_0014034c:
    pcVar14 = (char *)CCServer::GetMyGameCenterId(*(void **)(*(int *)(this + 0xc) + DAT_001403a4));
  }
  L_PrintLog((char *)(DAT_0014066c + 0x1403bc),*(char **)(&stack0x00000018 + iVar2));
  L_PrintLog((char *)(DAT_00140670 + 0x1403c6),pcVar5);
  L_PrintLog((char *)(DAT_00140674 + 0x1403d0),pcVar14);
  L_PrintLog((char *)(DAT_00140678 + 0x1403da),&stack0x00000080 + iVar2);
  pcVar19 = *(char **)(&stack0x00000018 + iVar2);
  pvVar6 = *(void **)(*(int *)(this + 0xc) + DAT_0014067c);
  *puVar21 = &stack0x00000080 + iVar2;
  GiftManager::SendAttackerWin(pvVar6,pcVar19,pcVar5,pcVar14,(char *)*puVar22);
  uVar9 = getDefenderTotalHp();
  if (*(char *)(*(int *)(this + 0xc) + 0x950) != '\0') {
    uVar9 = 0;
  }
  free(*(void **)(&stack0x00000018 + iVar2));
  memset(&stack0x00000040 + iVar2,0,0x40);
  pSVar4 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID
            (pSVar4,(char *)**(undefined4 **)(*(int *)(&stack0x0000001c + iVar2) + DAT_00140680));
  memset(&stack0x00000100 + iVar2,0,0x80);
LAB_0014050c:
  if (*(char *)(*(int *)(*(int *)(this + 0xc) + 0x4e8) + *(int *)(this + 0xf0) * 0x1c + 0x18) ==
      '\x04') {
    *(undefined4 *)(this + 0xf0) = 0;
    *(undefined4 *)(this + 0xf4) = 0;
  }
  uVar18 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_001406a4));
  pZVar7 = *(ZombieCafe **)(this + 0xc);
  uVar17 = *(undefined4 *)(pZVar7 + 0x680);
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(pZVar7 + DAT_001406a8);
  *(undefined4 *)(&stack0x00000024 + iVar2) = *(undefined4 *)(pZVar7 + DAT_001406ac);
  uVar8 = ZombieCafe::getToxin(pZVar7);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000018 + iVar2);
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = *(undefined4 *)(&stack0x00000024 + iVar2);
  *(undefined4 *)((int)&uStack_4 + iVar2) = uVar8;
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(&stack0x00000020 + iVar2);
  *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
  *puVar26 = uVar18;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar17;
  snprintf(&stack0x00000180 + iVar2,0x80,(char *)(DAT_001406b0 + 0x14055c),DAT_001406b4 + 0x14055e);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)(this + 0xc) + DAT_001406b8),DAT_001406bc + 0x140582,
             &stack0x00000180 + iVar2);
  *(int *)(&stack0x00000018 + iVar2) = *(int *)(*(int *)(this + 0xc) + DAT_001406c0 + 4) + 1;
  this_00 = (RaidRewardScreen *)operator_new(0xc0);
  *(undefined4 *)(&stack0x00000024 + iVar2) = *(undefined4 *)(this + 0xe0);
  uVar18 = *(undefined4 *)(this + 0xe8);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *puVar27 = uVar18;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000020 + iVar2);
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = *(undefined4 *)(this + 0xf0);
  uVar18 = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)(&stack0x00000000 + iVar2) = 1;
  *(undefined4 *)((int)&uStack_4 + iVar2) = uVar18;
  *(GameStateFriendCafe **)(&stack0x00000004 + iVar2) = this;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  iVar15 = __aeabi_fcmpeq(uVar9,0);
  *(uint *)(&stack0x0000000c + iVar2) = (uint)(iVar15 == 0);
  *(undefined4 *)(&stack0x00000010 + iVar2) = 0;
  RaidRewardScreen::RaidRewardScreen
            (this_00,*(int *)(&stack0x00000024 + iVar2),*(int *)(&stack0x00000018 + iVar2),0,
             extraout_s0,*puVar28,*(int *)(&stack0xfffffff0 + iVar2),
             *(int *)(&stack0xfffffff4 + iVar2),*(int *)(&stack0xfffffff8 + iVar2),
             *(bool *)((int)&uStack_4 + iVar2),*(void **)(&stack0x00000000 + iVar2),
             *(int *)(&stack0x00000004 + iVar2),(bool)(&stack0x00000008)[iVar2],
             *(int *)(&stack0x0000000c + iVar2));
  *(RaidRewardScreen **)(this + 0x30) = this_00;
  (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
  iVar15 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)(this + 0x30) + 0x14))
            (*(int **)(this + 0x30),(iVar15 >> 0x10) - (iVar15 >> 0x1f) >> 1,(int)(short)iVar15 / 2)
  ;
  ScreenElement::setOrder
            (*(ScreenElement **)(this + 0x30),
             (int)**(char **)(*(int *)(&stack0x0000001c + iVar2) + DAT_001406c4));
  (**(code **)(**(int **)(this + 0x1d8) + 0x2c))
            (*(int **)(this + 0x1d8),*(undefined4 *)(this + 0x30));
  ZombieCafe::save();
  if (*(int *)(&stack0x00000200 + iVar2) != **(int **)(&stack0x00000028 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


