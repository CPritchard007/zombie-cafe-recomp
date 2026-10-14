/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131f10 GameStateChooseChef::buyConfirmed */

/* GameStateChooseChef::buyConfirmed(GameStateChooseChef*) */

void __thiscall
GameStateChooseChef::buyConfirmed(GameStateChooseChef *this,GameStateChooseChef *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  int iVar6;
  uint uVar7;
  GameStateCafe *this_00;
  GameStateLoading *this_01;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  Character *this_02;
  uint uVar13;
  CapcomGame *this_03;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  float in_s0;
  undefined4 local_150;
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar12 = *(int **)(DAT_001321f8 + 0x131f1c);
  local_1c = *piVar12;
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  *(undefined4 *)(*(int *)(this + 0xc) + 0x690) = *(undefined4 *)(this + 0x5c);
  CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this + 0xc) + 0x840));
  ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this + 0xc));
  CRAMHoover::addEventIntProperty(*(char **)(*(int *)(this + 0xc) + 0x840),DAT_00132200 + 0x131f5e);
  CRAMHoover::endTrackEvent();
  String::String(aSStack_13c,0);
  iVar8 = *(int *)(*(int *)(this + 0xc) + 0x590);
  if (iVar8 == 0) {
    bVar1 = false;
    uVar14 = 0;
    local_150 = 0;
  }
  else {
    local_150 = *(undefined4 *)(iVar8 + 0x14);
    uVar14 = *(undefined4 *)(iVar8 + 0x10);
    String::String(aSStack_134,(String *)(iVar8 + 8));
    String::operator=(aSStack_13c,aSStack_134);
    String::~String(aSStack_134);
    this_02 = *(Character **)(*(int *)(this + 0xc) + 0x590);
    if (this_02 != (Character *)0x0) {
      Character::~Character(this_02);
      operator_delete(this_02);
    }
    bVar1 = true;
  }
  CCMarketing_ShowPage(*(undefined4 *)(*(int *)(this + 0xc) + DAT_00132208),0);
  iVar8 = *(int *)(this + 0xc);
  uVar2 = createCharacter((int)this);
  *(undefined4 *)(iVar8 + 0x590) = uVar2;
  if (bVar1) {
    *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + 0x590) + 0x10) = uVar14;
    *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + 0x590) + 0x14) = local_150;
    String::String(aSStack_12c,aSStack_13c);
    iVar8 = operator!=(aSStack_12c,0);
    String::~String(aSStack_12c);
    if (iVar8 != 0) {
      iVar8 = *(int *)(*(int *)(this + 0xc) + 0x590);
      String::String(aSStack_124,aSStack_13c);
      String::operator=((String *)(iVar8 + 8),aSStack_124);
      String::~String(aSStack_124);
    }
  }
  if (*(char *)(*(int *)(*(int *)(this + 0xc) + DAT_0013220c + 8) + *(int *)(this + 0x5c)) == '\0')
  {
    uVar14 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_00132210));
    iVar8 = DAT_00132218;
    pZVar3 = *(ZombieCafe **)(this + 0xc);
    uVar9 = *(undefined4 *)(pZVar3 + DAT_00132214);
    uVar15 = *(undefined4 *)(pZVar3 + 0x680);
    uVar10 = *(undefined4 *)(pZVar3 + DAT_00132218);
    uVar2 = ZombieCafe::getToxin(pZVar3);
    snprintf(acStack_9c,0x80,(char *)(DAT_0013221c + 0x132076),DAT_00132220 + 0x13207a,uVar14,uVar15
             ,uVar9,uVar10,uVar2,*(undefined4 *)(this + 0x5c));
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(this + 0xc) + DAT_00132208),DAT_00132224 + 0x13208c,
               acStack_9c);
    pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar4,(char *)(DAT_00132228 + 0x1320a8),(char *)(DAT_0013222c + 0x1320aa),
                      (char *)(DAT_00132230 + 0x1320ac));
    memset(acStack_11c,0,0x40);
    pSVar5 = (SServer *)MALTAHoover::GetInstance();
    iVar6 = MALTAHoover::getFBID(pSVar5,(char *)**(undefined4 **)(DAT_00132234 + 0x1320c6));
    if (iVar6 == 0) {
      L_PrintLog((char *)(DAT_00132238 + 0x1320d8),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    snprintf(acStack_dc,0x40,(char *)(DAT_0013223c + 0x1320f0),acStack_11c,
             *(undefined4 *)(this + 0x5c));
    L_PrintLog((char *)(DAT_00132240 + 0x1320fe),(char *)(DAT_00132244 + 0x132100));
    pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar11 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
    uVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    pZVar3 = *(ZombieCafe **)(this + 0xc);
    uVar16 = *(uint *)(pZVar3 + DAT_00132214);
    uVar13 = *(uint *)(pZVar3 + iVar8);
    iVar6 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_00132248]);
    MALTAHoover::send(pMVar4,(char *)(DAT_00132250 + 0x13213a),uVar11,uVar7,uVar13,uVar16,iVar6,
                      acStack_dc,*(char **)(DAT_0013224c + 0x132136));
    pZVar3 = *(ZombieCafe **)(this + 0xc);
    iVar6 = *(int *)(*(int *)(this + 0x5c) * 4 + *(int *)(this + 0xac));
    if (*(char *)(iVar6 + DAT_00132254) == '\0') {
      *(int *)(pZVar3 + iVar8) = *(int *)(pZVar3 + iVar8) - *(int *)(iVar6 + 0xb20);
    }
    else {
      ZombieCafe::spendToxin(pZVar3,*(int *)(iVar6 + 0xb20));
    }
    iVar8 = *(int *)(this + 0x5c);
    if ((-1 < iVar8) && (iVar8 <= *(int *)(*(int *)(this + 0xc) + DAT_0013220c + 4))) {
      *(undefined1 *)(*(int *)(*(int *)(this + 0xc) + DAT_0013220c + 8) + iVar8) = 1;
    }
  }
  this_03 = *(CapcomGame **)(this + 0xc);
  this_00 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this_00);
  this_01 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
  CapcomGame::setNextState(this_03,(GameState *)this_01);
  String::~String(aSStack_13c);
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


