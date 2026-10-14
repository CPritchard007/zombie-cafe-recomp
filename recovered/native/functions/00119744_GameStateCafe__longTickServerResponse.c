/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119744 GameStateCafe::longTickServerResponse */

/* GameStateCafe::longTickServerResponse(GameStateCafe*, unsigned long) */

void GameStateCafe::longTickServerResponse(GameStateCafe *param_1,ulong param_2)

{
  int iVar1;
  GameStateLoading *this;
  GameStateMainMenu *this_00;
  GameStateCafe *pGVar2;
  char *pcVar3;
  CapcomGame *this_01;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  pcVar3 = (char *)(DAT_00119830 + 0x119750);
  L_PrintLog(pcVar3,(char *)(DAT_00119834 + 0x119754));
  iVar1 = CapcomApp::getInstance();
  pGVar2 = *(GameStateCafe **)(*(int *)(iVar1 + 4) + 8);
  if (pGVar2 == param_1) {
    L_PrintLog(pcVar3,(char *)(DAT_00119838 + 0x11976e));
    CapcomDate::now((CapcomDate *)&local_28);
    CapcomDate::from1970Offset((CapcomDate *)&local_20,param_2);
    iVar1 = CapcomDate::secondsBetween(local_28,local_24,local_20,local_1c);
    L_PrintLog(pcVar3,(char *)(DAT_0011983c + 0x119794));
    if ((DAT_00119840 < (iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f)) ||
       (iVar1 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(pGVar2 + 0xc) + DAT_00119844),'\x16'),
       iVar1 == 0)) {
      L_PrintLog((char *)(DAT_0011984c + 0x119814),(char *)(DAT_00119850 + 0x119816));
      this_01 = *(CapcomGame **)(pGVar2 + 0xc);
      this_00 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(this_00);
      this = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(this,(GameState *)this_00);
      CapcomGame::setNextState(this_01,(GameState *)this);
      pGVar2[0x11] = (GameStateCafe)0x1;
    }
    else {
      (**(code **)(*(int *)pGVar2 + 0x2c))
                (pGVar2,*(code **)(*(int *)pGVar2 + 0x2c),
                 *(undefined4 *)(*(int *)(pGVar2 + 0xc) + 0x4a8),
                 *(undefined4 *)(*(int *)(pGVar2 + 0xc) + 0x4ac));
      iVar1 = *(int *)(pGVar2 + 0xc);
      *(undefined4 *)(iVar1 + 0x4a8) = 0;
      *(undefined4 *)(iVar1 + 0x4ac) = 0;
      L_PrintLog(pcVar3,(char *)(DAT_00119848 + 0x1197de));
    }
  }
  return;
}


