/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017c3dc GameStatePowerup::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0017c4d6) */
/* WARNING: Removing unreachable block (ram,0x0017c4d6) */
/* GameStatePowerup::tick(long) */

void __thiscall GameStatePowerup::tick(GameStatePowerup *this,long param_1)

{
  int iVar1;
  GameStateMainMenu *this_00;
  GameStateLoading *this_01;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameStateCafe *this_02;
  undefined4 extraout_r1;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  CapcomGame *this_03;
  float fVar12;
  int local_30;
  GameStatePowerup *local_2c;
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  this_03 = *(CapcomGame **)(this + 0xc);
  if (this_03[DAT_0017c740] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    this_01 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
    goto LAB_0017c736;
  }
  iVar10 = 0;
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  do {
    piVar2 = *(int **)(this + iVar10 + 0x114);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
    }
    iVar10 = iVar10 + 4;
  } while (iVar10 != 0x378);
  piVar2 = *(int **)(this + 0x490);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
  }
  piVar2 = *(int **)(this + DAT_0017c744);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
  }
  iVar1 = DAT_0017c75c;
  iVar8 = DAT_0017c754;
  iVar5 = DAT_0017c74c;
  iVar10 = DAT_0017c748;
  if (*(char *)(*(int *)(this + DAT_0017c748) + 0x14) == '\0') {
    if (*(char *)(*(int *)(this + DAT_0017c754) + 0x14) != '\0') {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_0017c750) = 0;
      goto LAB_0017c49a;
    }
    iVar8 = 0x528;
    if (*(char *)(*(int *)(this + 0x528) + 0x14) != '\0') {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_0017c750) = 0;
      goto LAB_0017c49a;
    }
    if (*(int *)(this + DAT_0017c75c) < 1) {
      switch(this[DAT_0017c74c]) {
      case (GameStatePowerup)0x0:
        tickStepSelectZombie((long)this);
        break;
      case (GameStatePowerup)0x1:
        tickStepShutterClose1((long)this);
        break;
      case (GameStatePowerup)0x2:
        tickStepShutterOpen1((long)this);
        break;
      case (GameStatePowerup)0x3:
        tickStepLeave(this,param_1);
        break;
      case (GameStatePowerup)0x4:
        tickStepShake(this,param_1);
        break;
      case (GameStatePowerup)0x5:
        tickStepServerWalk(this,param_1);
        break;
      case (GameStatePowerup)0x6:
        tickStepServeDish(this,param_1);
        break;
      case (GameStatePowerup)0x7:
        tickStepServerLeave((long)this);
        break;
      case (GameStatePowerup)0x8:
        tickStepEat(this,param_1);
        break;
      case (GameStatePowerup)0x9:
        tickStepResult((long)this);
        break;
      case (GameStatePowerup)0xa:
        tickStepResultWait((long)this);
      }
    }
    else {
      iVar10 = *(int *)(this + DAT_0017c75c) - param_1;
      *(int *)(this + DAT_0017c75c) = iVar10;
      if (iVar10 < 1) {
        *(undefined4 *)(this + iVar1) = 0;
      }
    }
  }
  else {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_0017c750) = 0;
    iVar8 = iVar10;
LAB_0017c49a:
    iVar10 = ScreenElement::contains
                       (*(ScreenElement **)(this + iVar8),
                        *(int *)(*(int *)(this + 0xc) + DAT_0017c758) >> 0x10,
                        (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_0017c758));
    if (iVar10 != 0) {
      (**(code **)(**(int **)(this + iVar8) + 8))(*(int **)(this + iVar8),param_1);
    }
  }
  uVar3 = __addsf3(*(undefined4 *)(this + 0x4a8),*(undefined4 *)(this + DAT_0017c760));
  iVar10 = DAT_0017c764;
  *(undefined4 *)(this + 0x4a8) = uVar3;
  iVar8 = *(int *)(this + iVar10);
  iVar10 = SmDev();
  uVar3 = *(undefined4 *)(DAT_0017c768 + iVar10 * 4 + 0x17c584);
  if (this[iVar5] == (GameStatePowerup)0x0) {
    uVar4 = __floatsisf(iVar8 - 1U & (int)~(iVar8 - 1U) >> 0x1f);
    iVar10 = __mulsf3(uVar4,uVar3);
    iVar5 = __aeabi_fcmplt(*(undefined4 *)(this + 0x4a8),iVar10 + -0x80000000);
    if (iVar5 != 0) {
      *(int *)(this + 0x4a8) = iVar10 + -0x80000000;
    }
  }
  iVar10 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x4a8),0);
  if (iVar10 != 0) {
    *(undefined4 *)(this + 0x4a8) = 0;
  }
  uVar4 = *(undefined4 *)(this + DAT_0017c760);
  puVar11 = *(undefined4 **)(DAT_0017c76c + 0x17c5c6);
  uVar3 = __floatsisf(param_1);
  uVar3 = __mulsf3(uVar3,*puVar11);
  iVar10 = __aeabi_fcmplt(uVar3,0x3f800000);
  if (iVar10 == 0) {
    uVar3 = 0x3f800000;
  }
  uVar3 = __subsf3(0x3f800000,uVar3);
  iVar10 = __mulsf3(uVar4,uVar3);
  *(int *)(this + DAT_0017c760) = iVar10;
  iVar5 = __aeabi_fcmpge(iVar10,0);
  if (iVar5 == 0) {
    iVar10 = iVar10 + -0x80000000;
  }
  iVar10 = __aeabi_fcmplt(iVar10,**(undefined4 **)(DAT_0017c770 + 0x17c616));
  if (iVar10 != 0) {
    *(undefined4 *)(this + DAT_0017c760) = 0;
  }
  uVar3 = __fixsfsi(*(undefined4 *)(this + 0x4a8));
  iVar10 = SmDev();
  iVar5 = DAT_0017c774 + 0x17c63a;
  uVar4 = __fixsfsi(*(undefined4 *)(iVar5 + iVar10 * 4 + 0x10));
  __aeabi_idivmod(uVar3,uVar4);
  uVar3 = __floatsisf(extraout_r1);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x530));
  iVar10 = SmDev();
  uVar4 = __mulsf3(*(undefined4 *)(iVar5 + iVar10 * 4 + 0x28),*(undefined4 *)(this + 0x530));
  __addsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  iVar10 = DAT_0017c778;
  local_30 = 0;
  local_2c = this;
  do {
    piVar2 = *(int **)(local_2c + 0xb4);
    pcVar9 = *(code **)(*piVar2 + 0x14);
    iVar8 = SmDev();
    uVar4 = __floatsisf(uVar3);
    uVar6 = __mulsf3(*(undefined4 *)(iVar5 + iVar8 * 4 + 0x10),*(undefined4 *)(this + 0x530));
    uVar7 = __floatsisf(local_30);
    uVar6 = __mulsf3(uVar6,uVar7);
    __addsf3(uVar4,uVar6);
    uVar4 = __fixsfsi();
    iVar8 = SmDev();
    __mulsf3(*(undefined4 *)(iVar10 + iVar8 * 4 + 0x17c68e),*(undefined4 *)(this + DAT_0017c77c));
    uVar6 = __fixsfsi();
    fVar12 = (float)(*pcVar9)(piVar2,uVar4,uVar6);
    local_30 = local_30 + 1;
    local_2c = local_2c + 4;
  } while (local_30 != 10);
  if (*(char *)(*(int *)(this + 0xc) + DAT_0017c750) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0017c750) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
  this_03 = *(CapcomGame **)(this + 0xc);
  this_02 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this_02);
  this_01 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_01,(GameState *)this_02);
LAB_0017c736:
  CapcomGame::setNextState(this_03,(GameState *)this_01);
  return;
}


