/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015f128 GameStateHelp::tick */

/* GameStateHelp::tick(long) */

void GameStateHelp::tick(long param_1)

{
  GameStateMainMenu *pGVar1;
  int iVar2;
  int iVar3;
  CapcomGame *pCVar4;
  float fVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  
  iVar2 = DAT_0015f248;
  fVar5 = (float)(**(code **)(**(int **)(param_1 + 0x14) + 8))();
  iVar3 = *(int *)(param_1 + 0xc);
  if ((*(int *)(iVar3 + iVar2) != 0) && (*(int *)(iVar3 + 0x4b8) == 0)) {
    if (*(int *)(iVar3 + DAT_0015f250) <= (int)**(short **)(DAT_0015f24c + 0x15f14e)) {
      iVar3 = FUN_0015ec02(*(undefined4 *)(param_1 + 0x28));
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
        pCVar4 = *(CapcomGame **)(param_1 + 0xc);
        pGVar1 = (GameStateMainMenu *)operator_new(0x154);
        GameStateMainMenu::GameStateMainMenu(pGVar1);
        CapcomGame::setNextState(pCVar4,(GameState *)pGVar1);
      }
      iVar3 = FUN_0015ec02(*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
        javaLaunchURL(DAT_0015f254 + 0x15f1a4);
      }
      iVar3 = FUN_0015ec02(*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_01);
        javaLaunchURL(DAT_0015f258 + 0x15f1c4);
      }
      iVar3 = FUN_0015ec02(*(undefined4 *)(param_1 + 0x34),
                           *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_02);
        javaOpenSupportPage();
      }
      iVar2 = FUN_0015ec02(*(undefined4 *)(param_1 + 0x3c),
                           *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
      if (iVar2 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_03);
        javaNickNameUpdatePage();
      }
      fVar5 = (float)checkSuCmd();
    }
  }
  if (*(char *)(*(int *)(param_1 + 0xc) + DAT_0015f25c) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0015f25c) = 0;
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),fVar5);
    pCVar4 = *(CapcomGame **)(param_1 + 0xc);
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    CapcomGame::setNextState(pCVar4,(GameState *)pGVar1);
  }
  return;
}


