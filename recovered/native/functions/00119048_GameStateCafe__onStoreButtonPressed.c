/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119048 GameStateCafe::onStoreButtonPressed */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00119058) */
/* WARNING: Removing unreachable block (ram,0x00119058) */
/* GameStateCafe::onStoreButtonPressed(GameStateCafe*, int, int) */

void GameStateCafe::onStoreButtonPressed(GameStateCafe *param_1,int param_2,int param_3)

{
  int iVar1;
  GameStateEarlyBird *this;
  GameStateDoJo *pGVar2;
  GameStateRoulette *pGVar3;
  GameStateLoading *this_00;
  int iVar4;
  CapcomGame *this_01;
  
  iVar1 = DAT_001193b0;
  iVar4 = DAT_001193ac + 0x119054;
  switch(param_2) {
  case 1:
    param_1[0x11] = (GameStateCafe)0x1;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    this = (GameStateEarlyBird *)operator_new(0x390);
    GameStateEarlyBird::GameStateEarlyBird(this);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)this);
    break;
  default:
    goto switchD_00119058_caseD_2;
  case 5:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         **(undefined1 **)(iVar4 + DAT_001193b4);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) = **(undefined4 **)(iVar4 + DAT_001193bc);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 0;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
    break;
  case 6:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 1);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 4);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 0;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
    break;
  case 7:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b0) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 2);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 8);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 0;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
    break;
  case 8:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b0) = 3;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 3);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0xc);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 0;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
    break;
  case 9:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b0) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0x10);
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar2 = (GameStateDoJo *)operator_new(DAT_001193c8);
    GameStateDoJo::GameStateDoJo(pGVar2);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar2);
    break;
  case 10:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 5);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0x14);
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar2 = (GameStateDoJo *)operator_new(DAT_001193c8);
    GameStateDoJo::GameStateDoJo(pGVar2);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar2);
    break;
  case 0xb:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b0) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 6);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0x18);
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar2 = (GameStateDoJo *)operator_new(DAT_001193c8);
    GameStateDoJo::GameStateDoJo(pGVar2);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar2);
    break;
  case 0xc:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 8);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0x20);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 1;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
    break;
  case 0xd:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 9);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0x24);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 1;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
    break;
  case 0xe:
    param_1[0x11] = (GameStateCafe)0x1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193b8) =
         *(undefined1 *)(*(int *)(iVar4 + DAT_001193b4) + 10);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xa30) =
         *(undefined4 *)(*(int *)(iVar4 + DAT_001193bc) + 0x28);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001193c0) = 1;
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    pGVar3 = (GameStateRoulette *)operator_new(DAT_001193c4);
    GameStateRoulette::GameStateRoulette(pGVar3);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)pGVar3);
  }
  CapcomGame::setNextState(this_01,(GameState *)this_00);
switchD_00119058_caseD_2:
  return;
}


