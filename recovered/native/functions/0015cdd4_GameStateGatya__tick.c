/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cdd4 GameStateGatya::tick */

/* GameStateGatya::tick(long) */

void __thiscall GameStateGatya::tick(GameStateGatya *this,long param_1)

{
  GameStateMainMenu *this_00;
  GameStateLoading *this_01;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  GameStateCafe *this_02;
  GameStateGatya GVar4;
  CapcomGame *this_03;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  float fVar8;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  this_03 = *(CapcomGame **)(this + 0xc);
  if (this_03[DAT_0015d07c] != (CapcomGame)0x0) {
    return;
  }
  if (this_03[DAT_0015d080] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    this_01 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
    goto LAB_0015d022;
  }
  if (this_03[DAT_0015d084] != (CapcomGame)0x0) {
    this_03[DAT_0015d084] = (CapcomGame)0x0;
    javaAsyncConsume();
  }
  iVar1 = DAT_0015d088;
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  iVar6 = *(int *)(this + iVar1);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  if ((iVar6 != iVar1) && (piVar5 = *(int **)(this + DAT_0015d08c), piVar5 != (int *)0x0)) {
    pcVar7 = *(code **)(*piVar5 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_28);
    (*pcVar7)(piVar5,aSStack_28);
    String::~String(aSStack_28);
    uVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + DAT_0015d088) = uVar2;
  }
  iVar6 = *(int *)(this + DAT_0015d090);
  iVar1 = ZombieCafe::getCash(*(ZombieCafe **)(this + 0xc));
  if ((iVar6 != iVar1) && (piVar5 = *(int **)(this + 0xee0), piVar5 != (int *)0x0)) {
    pcVar7 = *(code **)(*piVar5 + 0x44);
    ZombieCafe::getCash(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_20);
    (*pcVar7)(piVar5,aSStack_20);
    String::~String(aSStack_20);
    uVar2 = ZombieCafe::getCash(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + DAT_0015d090) = uVar2;
  }
  piVar5 = *(int **)(this + 0xed0);
  if ((char)piVar5[0x18] == '\0') {
    piVar3 = *(int **)(this + DAT_0015d094);
    if ((((piVar3 == (int *)0x0) || ((char)piVar3[5] == '\0')) &&
        ((piVar3 = *(int **)(this + DAT_0015d0b8), piVar3 == (int *)0x0 || ((char)piVar3[5] == '\0')
         ))) && (piVar3 = *(int **)(this + 0xf00), (char)(*(int **)(this + 0xf00))[5] == '\0')) {
      if ((char)piVar5[5] == '\0') {
        if (*(int *)(this + 0xe50) < 1) {
          GVar4 = this[DAT_0015d098];
          if (GVar4 == (GameStateGatya)0x1) {
            tickStepEffect((long)this);
          }
          else if (GVar4 == (GameStateGatya)0x0) {
            tickStepSelect((long)this);
          }
          else if (GVar4 == (GameStateGatya)0x2) {
            tickStepResultList(this,param_1);
          }
        }
        else {
          iVar1 = *(int *)(this + 0xe50) - param_1;
          *(int *)(this + 0xe50) = iVar1;
          if (iVar1 < 1) {
            *(undefined4 *)(this + 0xe50) = 0;
          }
        }
        goto LAB_0015cf46;
      }
      pcVar7 = *(code **)(*piVar5 + 8);
    }
    else {
      piVar5 = piVar3;
      pcVar7 = *(code **)(*piVar5 + 8);
    }
    (*pcVar7)(piVar5,param_1);
  }
  else {
    iVar1 = ZombieCafe::getPurchasingFlag();
    if (iVar1 == 0) {
      *(undefined1 *)(*(int *)(this + 0xed0) + 0x60) = 0;
      (**(code **)(*(int *)this + 0x28))(this,8);
    }
  }
LAB_0015cf46:
  if (this[DAT_0015d09c] == (GameStateGatya)0x0) {
    if (*(char *)(*(int *)(this + 0xed0) + 0x14) != '\0') {
      GVar4 = (GameStateGatya)0x1;
      goto LAB_0015cf56;
    }
  }
  else {
    GVar4 = *(GameStateGatya *)(*(int *)(this + 0xed0) + 0x14);
    if (GVar4 == (GameStateGatya)0x0) {
LAB_0015cf56:
      this[DAT_0015d09c] = GVar4;
    }
  }
  iVar1 = 0;
  do {
    piVar5 = *(int **)(this + iVar1 + 0x214);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x1c))(piVar5,param_1);
    }
    iVar6 = DAT_0015d0a4;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x2a8);
  uVar2 = __addsf3(*(undefined4 *)(this + DAT_0015d0a4),*(undefined4 *)(this + DAT_0015d0a0));
  *(undefined4 *)(this + iVar6) = uVar2;
  fVar8 = (float)updateScrollRoulette(this,param_1,false);
  iVar1 = DAT_0015d0ac;
  if ((this[DAT_0015d0a8] != (GameStateGatya)0x0) &&
     (iVar6 = *(int *)(this + DAT_0015d0ac), *(int *)(this + DAT_0015d0ac) = iVar6 + 1,
     0x14 < iVar6 + 1)) {
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = 0;
  do {
    piVar5 = *(int **)(this + DAT_0015d0b0 + iVar1);
    if (piVar5 != (int *)0x0) {
      fVar8 = (float)(**(code **)(*piVar5 + 0x20))(piVar5,1);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x2a8);
  if (*(char *)(*(int *)(this + 0xc) + DAT_0015d0b4) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0015d0b4) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar8);
  iVar1 = javaIsOpenFixWebView();
  if (iVar1 != 0) {
    javaHideFixWebView(0,0,1);
    return;
  }
  this_03 = *(CapcomGame **)(this + 0xc);
  this_02 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this_02);
  this_01 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_01,(GameState *)this_02);
LAB_0015d022:
  CapcomGame::setNextState(this_03,(GameState *)this_01);
  return;
}


