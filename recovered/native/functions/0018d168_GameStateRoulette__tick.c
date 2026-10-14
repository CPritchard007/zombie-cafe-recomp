/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018d168 GameStateRoulette::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0018d2ac) */
/* WARNING: Removing unreachable block (ram,0x0018d2ac) */
/* GameStateRoulette::tick(long) */

void __thiscall GameStateRoulette::tick(GameStateRoulette *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  GameStateMainMenu *this_00;
  GameStateLoading *this_01;
  GameStateCafe *this_02;
  int iVar3;
  GameStateRoulette *pGVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  CapcomGame *this_03;
  code *pcVar8;
  float extraout_s0;
  float fVar9;
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0018d4b4;
  piVar5 = *(int **)(DAT_0018d4b0 + 0x18d174);
  local_1c = *piVar5;
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  iVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + iVar1));
  if (iVar1 == 0xf) {
    sprintf(acStack_11c,(char *)(DAT_0018d4b8 + 0x18d19a),0xf);
    L_PrintLog((char *)(DAT_0018d4bc + 0x18d1a4),acStack_11c);
  }
  iVar6 = *(int *)(this + 0xc);
  iVar1 = CImage::getRefCount(*(CImage **)(iVar6 + DAT_0018d4b4));
  if ((iVar1 == 0x10) && (this[DAT_0018d4c0] == (GameStateRoulette)0x0)) {
    this[DAT_0018d4c0] = (GameStateRoulette)0x1;
    uVar2 = CImage::getRefCount(*(CImage **)(iVar6 + DAT_0018d4b4));
    sprintf(acStack_11c,(char *)(DAT_0018d4c4 + 0x18d1d2),uVar2);
    L_PrintLog((char *)(DAT_0018d4c8 + 0x18d1dc),acStack_11c);
  }
  iVar1 = DAT_0018d4d0;
  this_03 = *(CapcomGame **)(this + 0xc);
  if (this_03[DAT_0018d4cc] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    this_01 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
    goto LAB_0018d48c;
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  iVar6 = *(int *)(this + iVar1);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  if (iVar6 != iVar1) {
    piVar7 = *(int **)(this + 0xe30);
    pcVar8 = *(code **)(*piVar7 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_124);
    (*pcVar8)(piVar7,aSStack_124);
    String::~String(aSStack_124);
    uVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + DAT_0018d4d0) = uVar2;
  }
  if (((*(ScreenElement **)(this + DAT_0018d4d4))[0x14] != (ScreenElement)0x0) &&
     (iVar1 = ScreenElement::contains
                        (*(ScreenElement **)(this + DAT_0018d4d4),
                         *(int *)(*(int *)(this + 0xc) + DAT_0018d4d8) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_0018d4d8)), iVar1 != 0)) {
    piVar7 = *(int **)(this + DAT_0018d4d4);
LAB_0018d28e:
    (**(code **)(*piVar7 + 8))(piVar7,param_1);
    goto LAB_0018d328;
  }
  iVar1 = DAT_0018d53c;
  if (((*(ScreenElement **)(this + DAT_0018d53c))[0x14] != (ScreenElement)0x0) &&
     (iVar6 = ScreenElement::contains
                        (*(ScreenElement **)(this + DAT_0018d53c),
                         *(int *)(*(int *)(this + 0xc) + DAT_0018d4d8) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_0018d4d8)), iVar6 != 0)) {
    piVar7 = *(int **)(this + iVar1);
    goto LAB_0018d28e;
  }
  iVar1 = DAT_0018d540;
  iVar6 = 0;
  if (0 < *(int *)(this + DAT_0018d540)) {
    iVar3 = *(int *)(this + DAT_0018d540) - param_1;
    *(int *)(this + DAT_0018d540) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(this + iVar1) = 0;
    }
    goto switchD_0018d2ac_default;
  }
  switch(this[DAT_0018d4dc]) {
  case (GameStateRoulette)0x0:
    tickStepPreview((long)this);
    break;
  case (GameStateRoulette)0x1:
    tickStepShutterClose((long)this);
    break;
  case (GameStateRoulette)0x2:
    tickStepShutterOpen((long)this);
    break;
  case (GameStateRoulette)0x3:
    tickStepRoulette((long)this);
    iVar1 = *(int *)(this + 0xc);
    iVar6 = *(int *)(iVar1 + DAT_0018d4d8);
    if ((iVar6 != 0) && (iVar6 = 0, *(int *)(iVar1 + 0x4b8) == 0)) {
      iVar6 = (((int)**(short **)(DAT_0018d4e0 + 0x18d2fa) >> 0x1f) -
              ((int)*(uint *)(iVar1 + DAT_0018d4e4) >> 0x1f)) +
              (uint)(*(uint *)(iVar1 + DAT_0018d4e4) <=
                    (uint)(int)**(short **)(DAT_0018d4e0 + 0x18d2fa));
    }
    goto switchD_0018d2ac_default;
  case (GameStateRoulette)0x4:
    tickStepRouletteStop((long)this);
    break;
  case (GameStateRoulette)0x5:
    tickStepResult((long)this);
    break;
  case (GameStateRoulette)0x6:
    tickStepResultWait((long)this);
    break;
  default:
    goto switchD_0018d2ac_default;
  }
LAB_0018d328:
  iVar6 = 0;
switchD_0018d2ac_default:
  iVar1 = 0;
  do {
    piVar7 = *(int **)(this + iVar1 + 0x94);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x1c))(piVar7,param_1);
    }
    iVar3 = DAT_0018d4ec;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x2a8);
  uVar2 = __addsf3(*(undefined4 *)(this + DAT_0018d4ec),*(undefined4 *)(this + DAT_0018d4e8));
  iVar1 = DAT_0018d4f0;
  *(undefined4 *)(this + iVar3) = uVar2;
  if (this[iVar1] == (GameStateRoulette)0x0) {
    updateScrollRoulette(this,param_1,SUB41(iVar6,0));
  }
  else {
    updateScrollFurniture(this,param_1,SUB41(iVar6,0));
  }
  iVar1 = DAT_0018d4f4;
  if ((this[0x9f0] != (GameStateRoulette)0x0) &&
     (iVar6 = *(int *)(this + DAT_0018d4f4), *(int *)(this + DAT_0018d4f4) = iVar6 + 1,
     0x14 < iVar6 + 1)) {
    *(undefined4 *)(this + iVar1) = 0;
  }
  pGVar4 = this + 0x90;
  iVar1 = *(int *)pGVar4;
  *(int *)pGVar4 = iVar1 + 1;
  if (0x77 < iVar1 + 1) {
    *(undefined4 *)pGVar4 = 0;
  }
  iVar1 = 0;
  if (*(int *)pGVar4 < 0x15) {
    do {
      piVar7 = *(int **)(this + iVar1 + 0x33c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x20))(piVar7,0);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x2a8);
  }
  else {
    do {
      piVar7 = *(int **)(this + iVar1 + 0x33c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x20))(piVar7,1);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x2a8);
  }
  iVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + DAT_0018d4b4));
  if (iVar1 == 0xf) {
    sprintf(acStack_11c,(char *)(DAT_0018d4f8 + 0x18d3fc),0xf);
    L_PrintLog((char *)(DAT_0018d4fc + 0x18d406),acStack_11c);
  }
  iVar6 = *(int *)(this + 0xc);
  iVar1 = CImage::getRefCount(*(CImage **)(iVar6 + DAT_0018d4b4));
  fVar9 = extraout_s0;
  if ((iVar1 == 0x10) && (this[DAT_0018d4c0] == (GameStateRoulette)0x0)) {
    this[DAT_0018d4c0] = (GameStateRoulette)0x1;
    uVar2 = CImage::getRefCount(*(CImage **)(iVar6 + DAT_0018d4b4));
    sprintf(acStack_11c,(char *)(DAT_0018d500 + 0x18d434),uVar2);
    fVar9 = (float)L_PrintLog((char *)(DAT_0018d504 + 0x18d43e),acStack_11c);
  }
  iVar1 = DAT_0018d4d4;
  if (((*(char *)(*(int *)(this + 0xc) + DAT_0018d508) != '\0') &&
      (*(undefined1 *)(*(int *)(this + 0xc) + DAT_0018d508) = 0,
      *(char *)(*(int *)(this + iVar1) + 0x14) == '\0')) &&
     (*(char *)(*(int *)(this + DAT_0018d50c) + 0x14) == '\0')) {
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar9);
    this_03 = *(CapcomGame **)(this + 0xc);
    this_02 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this_02);
    this_01 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_01,(GameState *)this_02);
LAB_0018d48c:
    CapcomGame::setNextState(this_03,(GameState *)this_01);
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


