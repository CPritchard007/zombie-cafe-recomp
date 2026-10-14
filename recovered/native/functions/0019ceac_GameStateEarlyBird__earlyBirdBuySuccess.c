/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ceac GameStateEarlyBird::earlyBirdBuySuccess */

/* GameStateEarlyBird::earlyBirdBuySuccess(void*, unsigned char const*, unsigned int) */

void GameStateEarlyBird::earlyBirdBuySuccess(void *param_1,uchar *param_2,uint param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  Character *pCVar4;
  undefined4 uVar5;
  ZombieCafe *pZVar6;
  GameStateCafe *this;
  GameStateLoading *this_00;
  MALTAHoover *pMVar7;
  SServer *pSVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  CapcomGame *this_01;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  NoticeDialog *pNVar20;
  int iVar21;
  float extraout_s0;
  String aSStack_1bc [8];
  CharacterData aCStack_1b4 [8];
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  undefined1 auStack_19c [64];
  undefined1 auStack_15c [64];
  char acStack_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  iVar21 = DAT_0019d22c + 0x19ceb8;
  piVar16 = *(int **)(iVar21 + DAT_0019d230);
  local_1c = *piVar16;
  pcVar1 = strstr((char *)param_2,(char *)(DAT_0019d234 + 0x19cec6));
  if (pcVar1 == (char *)0x0) {
    pNVar20 = *(NoticeDialog **)((int)param_1 + 900);
    Vector<String>::elementAt((int)aSStack_1ac);
    Vector<String>::elementAt((int)aSStack_1a4);
    NoticeDialog::show(pNVar20,aSStack_1ac,aSStack_1a4,0,0);
    String::~String(aSStack_1a4);
    String::~String(aSStack_1ac);
  }
  else {
    ZombieCafe::playEffect(*(int *)((int)param_1 + 0xc),extraout_s0);
    ZombieCafe::spendToxin
              (*(ZombieCafe **)((int)param_1 + 0xc),
               *(int *)((int)param_1 + (*(int *)((int)param_1 + 0x20) + 0xa4) * 4 + 4));
    puVar2 = (undefined4 *)operator_new(8);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    *puVar2 = *(undefined4 *)((int)param_1 + (*(int *)((int)param_1 + 0x20) + 0x54) * 4 + 4);
    puVar2[1] = *(undefined4 *)((*(int *)((int)param_1 + 0x20) + 0x8c) * 4 + (int)param_1);
    iVar18 = *(int *)((int)param_1 + 0xc);
    iVar13 = *(int *)(iVar18 + 0x6b4) + 2;
    if (*(int *)(iVar18 + 0x6b0) < iVar13) {
      iVar10 = *(int *)(iVar18 + 0x6b0) * 2;
      if (iVar10 < iVar13) {
        iVar10 = iVar13;
      }
      Vector<EarlyBirdSaleBuyTimer*>::resize
                ((Vector<EarlyBirdSaleBuyTimer*> *)(iVar18 + 0x6b0),iVar10,-1);
    }
    iVar13 = *(int *)(iVar18 + 0x6b4) + 1;
    *(int *)(iVar18 + 0x6b4) = iVar13;
    *(undefined4 **)(iVar13 * 4 + *(int *)(iVar18 + 0x6b8)) = puVar2;
    iVar13 = *(int *)((int)param_1 + 0x20);
    uVar3 = findUpdateTimer((GameStateEarlyBird *)param_1,
                            *(int *)((int)param_1 + (iVar13 + 0x54) * 4 + 4));
    *(undefined4 *)((iVar13 + 0xbe) * 4 + (int)param_1) = uVar3;
    updateEarlyBirdConsole((GameStateEarlyBird *)param_1);
    String::String(aSStack_1bc,(char *)(DAT_0019d238 + 0x19cf74));
    pCVar4 = (Character *)operator_new(0x6c);
    Character::Character
              (pCVar4,*(undefined4 *)
                       ((uint)*(ushort *)
                               ((int)param_1 + (*(int *)((int)param_1 + 0x20) + 0xd0) * 2 + 4) * 4 +
                       *(int *)(*(int *)((int)param_1 + 0xc) + DAT_0019d23c)),2,1,aSStack_1bc);
    String::~String(aSStack_1bc);
    uVar3 = __floatsisf((int)**(short **)(iVar21 + DAT_0019d240));
    uVar5 = Character::getMaxEnergy();
    iVar13 = __aeabi_fcmplt(uVar3,0);
    if (iVar13 == 0) {
      iVar13 = __aeabi_fcmpgt(uVar3,uVar5);
      if (iVar13 != 0) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = 0;
    }
    iVar13 = DAT_0019d244;
    *(undefined4 *)(pCVar4 + 0x40) = uVar3;
    CharacterData::getRandomName(aCStack_1b4,*(bool *)(*(int *)pCVar4 + iVar13),0);
    String::operator=((String *)(pCVar4 + 8),aCStack_1b4);
    String::~String((String *)aCStack_1b4);
    Platform::getAppTime();
    uVar3 = __fixdfsi();
    pCVar4[4] = (Character)0x1;
    *(undefined4 *)(pCVar4 + 0x10) = uVar3;
    pCVar4[5] = (Character)0x2;
    iVar18 = *(int *)((int)param_1 + 0xc);
    iVar13 = *(int *)((Vector<Character*> *)(iVar18 + DAT_0019d248) + 4) + 2;
    if (*(int *)(iVar18 + DAT_0019d248) < iVar13) {
      iVar10 = *(int *)(iVar18 + DAT_0019d248) * 2;
      if (iVar10 < iVar13) {
        iVar10 = iVar13;
      }
      Vector<Character*>::resize((Vector<Character*> *)(iVar18 + DAT_0019d248),iVar10,-1);
    }
    iVar18 = iVar18 + DAT_0019d248;
    iVar13 = *(int *)(iVar18 + 4) + 1;
    *(int *)(iVar18 + 4) = iVar13;
    *(Character **)(iVar13 * 4 + *(int *)(iVar18 + 8)) = pCVar4;
    save();
    uVar3 = CCServer::GetMyUserID(*(void **)(*(int *)((int)param_1 + 0xc) + DAT_0019d24c));
    pZVar6 = *(ZombieCafe **)((int)param_1 + 0xc);
    uVar11 = *(undefined4 *)(pZVar6 + 0x680);
    uVar12 = *(undefined4 *)(pZVar6 + DAT_0019d250);
    uVar14 = *(undefined4 *)(pZVar6 + DAT_0019d254);
    uVar5 = ZombieCafe::getToxin(pZVar6);
    snprintf(acStack_11c,0x80,(char *)(DAT_0019d258 + 0x19d07c),DAT_0019d25c + 0x19d07e,uVar3,uVar11
             ,uVar12,uVar14,uVar5,
             *(undefined4 *)((int)param_1 + (*(int *)((int)param_1 + 0x20) + 0x54) * 4 + 4));
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)((int)param_1 + 0xc) + DAT_0019d260),DAT_0019d264 + 0x19d09e,
               acStack_11c);
    printf((char *)(DAT_0019d268 + 0x19d0a8));
    this_01 = *(CapcomGame **)((int)param_1 + 0xc);
    this = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)this);
    CapcomGame::setNextState(this_01,(GameState *)this_00);
    pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar7,(char *)(DAT_0019d26c + 0x19d0ec),(char *)(DAT_0019d270 + 0x19d0f0),
                      (char *)(DAT_0019d274 + 0x19d0ee));
    memset(auStack_19c,0,0x40);
    pSVar8 = (SServer *)MALTAHoover::GetInstance();
    puVar2 = *(undefined4 **)(iVar21 + DAT_0019d278);
    MALTAHoover::getFBID(pSVar8,(char *)*puVar2);
    memset(auStack_15c,0,0x40);
    pSVar8 = (SServer *)MALTAHoover::GetInstance();
    MALTAHoover::getGCID(pSVar8,(char *)*puVar2);
    memset(acStack_9c,0,0x80);
    snprintf(acStack_9c,0x80,(char *)(DAT_0019d27c + 0x19d14e),auStack_19c,auStack_15c,
             *(undefined4 *)((int)param_1 + (*(int *)((int)param_1 + 0x20) + 0x54) * 4 + 4),
             *(undefined4 *)((int)param_1 + (*(int *)((int)param_1 + 0x20) + 0xa4) * 4 + 4));
    pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar15 = *(uint *)(*(ZombieCafe **)((int)param_1 + 0xc) + 0x680);
    uVar9 = ZombieCafe::getToxin(*(ZombieCafe **)((int)param_1 + 0xc));
    pZVar6 = *(ZombieCafe **)((int)param_1 + 0xc);
    uVar17 = *(uint *)(pZVar6 + DAT_0019d254);
    uVar19 = *(uint *)(pZVar6 + DAT_0019d250);
    iVar13 = ZombieCafe::calUserRankId(pZVar6,(uint)(byte)pZVar6[DAT_0019d280]);
    MALTAHoover::send(pMVar7,(char *)(DAT_0019d288 + 0x19d196),uVar15,uVar9,uVar17,uVar19,iVar13,
                      acStack_9c,*(char **)(iVar21 + DAT_0019d284));
  }
  if (local_1c != *piVar16) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


