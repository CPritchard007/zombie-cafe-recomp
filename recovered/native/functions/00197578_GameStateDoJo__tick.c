/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00197578 GameStateDoJo::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00197678) */
/* WARNING: Removing unreachable block (ram,0x00197678) */
/* GameStateDoJo::tick(long) */

void __thiscall GameStateDoJo::tick(GameStateDoJo *this,long param_1)

{
  GameStateMainMenu *this_00;
  GameStateLoading *this_01;
  int iVar1;
  undefined4 uVar2;
  GameStateCafe *this_02;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  CapcomGame *this_03;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar10;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  int local_2c;
  GameStateDoJo *local_28;
  GameStateDoJo *local_24;
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  iVar1 = DAT_00197878;
  this_03 = *(CapcomGame **)(this + 0xc);
  if (this_03[DAT_00197874] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    this_01 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
    goto LAB_00197ada;
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  iVar7 = *(int *)(this + iVar1);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  fVar10 = extraout_s0;
  if (iVar7 != iVar1) {
    piVar4 = *(int **)(this + 0x6f8);
    pcVar8 = *(code **)(*piVar4 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_20);
    (*pcVar8)(piVar4,aSStack_20);
    String::~String(aSStack_20);
    uVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + DAT_00197878) = uVar2;
    fVar10 = extraout_s0_00;
  }
  if ((*(char *)(*(int *)(this + 0x710) + 0x14) != '\0') ||
     (*(char *)(*(int *)(this + 0x700) + 0x14) != '\0')) {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_0019787c) = 0;
  }
  if (((*(ScreenElement **)(this + 0x710))[0x14] != (ScreenElement)0x0) &&
     (iVar1 = ScreenElement::contains
                        (*(ScreenElement **)(this + 0x710),
                         *(int *)(*(int *)(this + 0xc) + DAT_00197880) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00197880)),
     fVar10 = extraout_s0_01, iVar1 != 0)) {
    piVar4 = *(int **)(this + 0x710);
LAB_00197656:
    fVar10 = (float)(**(code **)(*piVar4 + 8))(piVar4,param_1);
    goto LAB_00197714;
  }
  if (((*(ScreenElement **)(this + 0x700))[0x14] != (ScreenElement)0x0) &&
     (iVar1 = ScreenElement::contains
                        (*(ScreenElement **)(this + 0x700),
                         *(int *)(*(int *)(this + 0xc) + DAT_00197880) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00197880)),
     fVar10 = extraout_s0_02, iVar1 != 0)) {
    piVar4 = *(int **)(this + 0x700);
    goto LAB_00197656;
  }
  iVar1 = DAT_00197b4c;
  if (0 < *(int *)(this + DAT_00197b4c)) {
    iVar3 = *(int *)(this + DAT_00197b4c) - param_1;
    iVar7 = 0;
    *(int *)(this + DAT_00197b4c) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(this + iVar1) = 0;
    }
    goto switchD_00197678_default;
  }
  iVar7 = 0;
  switch(this[DAT_00197884]) {
  case (GameStateDoJo)0x0:
    fVar10 = (float)tickStepSelectZombie((long)this);
    break;
  case (GameStateDoJo)0x1:
    fVar10 = (float)tickStepShutterClose((long)this);
    break;
  case (GameStateDoJo)0x2:
    fVar10 = (float)tickStepShutterOpen((long)this);
    break;
  case (GameStateDoJo)0x3:
    fVar10 = (float)tickStepPreview((long)this);
    break;
  case (GameStateDoJo)0x4:
    fVar10 = (float)tickStepShutterClose2((long)this);
    break;
  case (GameStateDoJo)0x5:
    fVar10 = (float)tickStepShutterOpen2((long)this);
    break;
  case (GameStateDoJo)0x6:
    fVar10 = (float)tickStepRoulette((long)this);
    iVar1 = *(int *)(this + 0xc);
    iVar7 = *(int *)(iVar1 + DAT_00197880);
    if ((iVar7 != 0) && (iVar7 = 0, *(int *)(iVar1 + 0x4b8) == 0)) {
      iVar7 = (((int)**(short **)(DAT_00197888 + 0x1976e6) >> 0x1f) -
              ((int)*(uint *)(iVar1 + DAT_0019788c) >> 0x1f)) +
              (uint)(*(uint *)(iVar1 + DAT_0019788c) <=
                    (uint)(int)**(short **)(DAT_00197888 + 0x1976e6));
    }
    goto switchD_00197678_default;
  case (GameStateDoJo)0x7:
    fVar10 = (float)tickStepRouletteStop((long)this);
    break;
  case (GameStateDoJo)0x8:
    fVar10 = (float)tickStepResult((long)this);
    break;
  case (GameStateDoJo)0x9:
    fVar10 = (float)tickStepResultWait((long)this);
    break;
  default:
    goto switchD_00197678_default;
  }
LAB_00197714:
  iVar7 = 0;
switchD_00197678_default:
  uVar9 = (uint)(byte)this[0x6c8];
  if (uVar9 == 0) {
    do {
      piVar4 = *(int **)(this + uVar9 + 0x618);
      if (piVar4 != (int *)0x0) {
        fVar10 = (float)(**(code **)(*piVar4 + 0x1c))(piVar4,param_1);
      }
      uVar9 = uVar9 + 4;
    } while (uVar9 != 0x50);
  }
  else {
    iVar1 = 0;
    do {
      piVar4 = *(int **)(this + iVar1 + 0xe0);
      if (piVar4 != (int *)0x0) {
        fVar10 = (float)(**(code **)(*piVar4 + 0x1c))(piVar4,param_1);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x378);
  }
  if (iVar7 == 0) {
    uVar2 = __addsf3(*(undefined4 *)(this + DAT_00197894),*(undefined4 *)(this + 0x6e0));
    *(undefined4 *)(this + DAT_00197894) = uVar2;
    if (this[DAT_0019789c] == (GameStateDoJo)0x0) {
      iVar1 = DAT_001978b0;
      if (this[0x6c8] == (GameStateDoJo)0x0) {
        iVar1 = 0x690;
      }
      iVar7 = *(int *)(this + iVar1);
      iVar1 = SmDev();
      uVar2 = __floatsisf(iVar7 - 1U & (int)~(iVar7 - 1U) >> 0x1f);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(DAT_00197b1c + iVar1 * 4 + 0x1978f0));
      iVar1 = __aeabi_fcmpge(*(undefined4 *)(this + DAT_00197b20),uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(this + DAT_00197b20) = uVar2;
      }
      iVar1 = __aeabi_fcmple(*(undefined4 *)(this + DAT_00197b20),0);
      if (iVar1 != 0) {
        *(undefined4 *)(this + DAT_00197b20) = 0;
      }
      uVar2 = *(undefined4 *)(this + 0x6e0);
      puVar6 = *(undefined4 **)(DAT_00197b24 + 0x19790e);
      uVar5 = __floatsisf(param_1);
      uVar5 = __mulsf3(uVar5,*puVar6);
      iVar1 = __aeabi_fcmplt(uVar5,0x3f800000);
      if (iVar1 == 0) {
        uVar5 = 0x3f800000;
      }
      uVar5 = __subsf3(0x3f800000,uVar5);
      iVar1 = __mulsf3(uVar2,uVar5);
      *(int *)(this + 0x6e0) = iVar1;
      iVar7 = __aeabi_fcmpge(iVar1,0);
      if (iVar7 == 0) {
        iVar1 = iVar1 + -0x80000000;
      }
      iVar1 = __aeabi_fcmplt(iVar1,**(undefined4 **)(DAT_00197b28 + 0x19795c));
      fVar10 = extraout_s0_05;
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x6e0) = 0;
      }
    }
    else {
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x690));
      iVar1 = SmDev();
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(DAT_001978a0 + iVar1 * 4 + 0x1977c0));
      uVar5 = *(undefined4 *)(this + DAT_00197894);
      iVar1 = __aeabi_fcmpge(uVar5,uVar2);
      if (iVar1 != 0) {
        uVar2 = __subsf3(uVar5,uVar2);
        *(undefined4 *)(this + DAT_00197894) = uVar2;
      }
      uVar2 = __subsf3(*(undefined4 *)(this + 0x6e0),DAT_001978a4);
      *(undefined4 *)(this + 0x6e0) = uVar2;
      iVar1 = __aeabi_fcmplt(uVar2,0);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x6e0) = 0;
      }
      iVar1 = __aeabi_fcmplt(*(undefined4 *)(this + 0x6e0),0x3f800000);
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(this + DAT_00197890);
        iVar7 = __fixsfsi(*(undefined4 *)(this + DAT_00197894));
        iVar3 = __fixsfsi(uVar2);
        iVar1 = DAT_00197894;
        if (iVar7 == iVar3) {
          *(undefined4 *)(this + 0x6e0) = 0;
          *(undefined4 *)(this + iVar1) = uVar2;
          this[DAT_00197898] = (GameStateDoJo)0x1;
        }
        else {
          *(undefined4 *)(this + 0x6e0) = 0x3f800000;
        }
      }
      uVar2 = __addsf3(*(undefined4 *)(this + 0x6e8),*(undefined4 *)(this + 0x6e0));
      iVar1 = DAT_001978a8;
      *(undefined4 *)(this + 0x6e8) = uVar2;
      uVar5 = *(undefined4 *)(this + iVar1);
      iVar7 = __aeabi_fcmpgt(uVar5,uVar2);
      fVar10 = extraout_s0_03;
      if (iVar7 != 0) {
        iVar7 = SmDev();
        uVar2 = __subsf3(uVar5,*(undefined4 *)(&UNK_00197872 + DAT_001978ac + iVar7 * 4));
        *(undefined4 *)(this + iVar1) = uVar2;
        fVar10 = extraout_s0_04;
      }
    }
  }
  else {
    *(undefined4 *)(this + 0x6e0) = 0;
    *(undefined4 *)(this + DAT_00197894) = *(undefined4 *)(this + DAT_00197890);
    this[DAT_00197898] = (GameStateDoJo)0x1;
  }
  if ((this[DAT_00197b2c] != (GameStateDoJo)0x0) &&
     (iVar1 = *(int *)(this + 0x6f0), *(int *)(this + 0x6f0) = iVar1 + 1, 0x14 < iVar1 + 1)) {
    *(undefined4 *)(this + 0x6f0) = 0;
  }
  if (this[0x6c8] == (GameStateDoJo)0x0) {
    iVar1 = DAT_00197b40 + 0x197a28;
    local_2c = 0;
    local_28 = this;
    do {
      if (*(int *)(local_28 + 0x618) != 0) {
        iVar7 = SmDev();
        uVar2 = __floatsisf(local_2c);
        uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar1 + iVar7 * 4 + 0x18));
        uVar2 = __subsf3(uVar2,*(undefined4 *)(this + DAT_00197b20));
        iVar7 = SmDev();
        piVar4 = *(int **)(local_28 + 0x618);
        pcVar8 = *(code **)(*piVar4 + 0xc);
        __addsf3(uVar2,*(undefined4 *)(iVar1 + iVar7 * 4 + 0x30));
        iVar7 = __fixsfsi();
        iVar3 = SmDev();
        uVar9 = __fixsfsi(*(undefined4 *)(DAT_00197b44 + iVar3 * 4 + 0x197a8e));
        fVar10 = (float)(*pcVar8)(piVar4,uVar9 & 0xffff | iVar7 << 0x10);
      }
      local_2c = local_2c + 1;
      local_28 = local_28 + 4;
    } while (local_2c != 0x14);
  }
  else {
    local_2c = 0;
    iVar1 = DAT_00197b30 + 0x19799a;
    local_24 = this;
    do {
      if (*(int *)(local_24 + 0xe0) != 0) {
        iVar7 = SmDev();
        uVar2 = __floatsisf(local_2c);
        uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar1 + iVar7 * 4 + 0x18));
        uVar2 = __subsf3(uVar2,*(undefined4 *)(this + DAT_00197b20));
        iVar7 = SmDev();
        __addsf3(uVar2,*(undefined4 *)(iVar1 + iVar7 * 4 + 0x30));
        local_28 = (GameStateDoJo *)__fixsfsi();
        if (DAT_00197b34 < (int)local_28 + 1000U) {
          local_28 = (GameStateDoJo *)DAT_00197b38;
        }
        piVar4 = *(int **)(local_24 + 0xe0);
        pcVar8 = *(code **)(*piVar4 + 0xc);
        iVar7 = SmDev();
        uVar9 = __fixsfsi(*(undefined4 *)(DAT_00197b3c + iVar7 * 4 + 0x197a08));
        fVar10 = (float)(*pcVar8)(piVar4,(int)local_28 << 0x10 | uVar9 & 0xffff);
      }
      local_2c = local_2c + 1;
      local_24 = local_24 + 4;
    } while (local_2c != 0xde);
  }
  if (*(char *)(*(int *)(this + 0xc) + DAT_00197b48) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00197b48) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar10);
    this_03 = *(CapcomGame **)(this + 0xc);
    this_02 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this_02);
    this_01 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_01,(GameState *)this_02);
LAB_00197ada:
    CapcomGame::setNextState(this_03,(GameState *)this_01);
  }
  return;
}


