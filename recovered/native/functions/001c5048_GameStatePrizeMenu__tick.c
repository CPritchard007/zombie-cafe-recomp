/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c5048 GameStatePrizeMenu::tick */

/* GameStatePrizeMenu::tick(long) */

undefined8 __thiscall GameStatePrizeMenu::tick(GameStatePrizeMenu *this,long param_1)

{
  GameStateMainMenu *pGVar1;
  GameStateLoading *pGVar2;
  GameStateEventRaid2Menu *pGVar3;
  GameStateCafe *pGVar4;
  int iVar5;
  int iVar6;
  CapcomGame *pCVar7;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar8;
  float extraout_s0_01;
  undefined8 uVar9;
  undefined4 extraout_s1;
  float extraout_s1_00;
  GameStatePrizeMenu *local_20;
  
  ZombieCafeGameState::tick((long)this);
  pCVar7 = *(CapcomGame **)(this + 0xc);
  local_20 = this;
  if (pCVar7[DAT_001c52c4] != (CapcomGame)0x0) goto LAB_001c52c0;
  if (pCVar7[DAT_001c52c8] == (CapcomGame)0x0) {
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
  }
  else {
    uVar9 = (**(code **)(**(int **)(this + 0x18) + 8))(*(int **)(this + 0x18),param_1);
    if (((*(char *)(*(int *)(this + 0x34) + 0x14) != '\0') ||
        (*(char *)(*(int *)(this + 0x38) + 0x14) != '\0')) || (*(int *)(this + 0x74) != 0)) {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_001c52cc) = 0;
      goto LAB_001c52c0;
    }
    if (this[0x6d] != (GameStatePrizeMenu)0x0) {
      iVar5 = ZombieCafe::checkEventRaid2Time();
      uVar9 = CONCAT44(extraout_s1,extraout_s0);
      if (iVar5 == 0) {
        pCVar7 = *(CapcomGame **)(this + 0xc);
        pGVar1 = (GameStateMainMenu *)operator_new(0x154);
        GameStateMainMenu::GameStateMainMenu(pGVar1);
        pGVar2 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
        goto LAB_001c5284;
      }
    }
    if (*(int *)(this + 0x5c) == 0) {
      *(undefined4 *)(this + 0x5c) = 1;
      Layout_Init();
      uVar9 = Layout_Default();
    }
    fVar8 = (float)uVar9;
    if (((((*(int *)(this + 0x5c) == 1) && (*(char *)(*(int *)(this + 0x34) + 0x14) == '\0')) &&
         ((*(char *)(*(int *)(this + 0x38) + 0x14) == '\0' &&
          ((iVar5 = *(int *)(this + 0xc), *(char *)(iVar5 + DAT_001c52d0) == '\0' &&
           (iVar6 = *(int *)(iVar5 + DAT_001c52d4), iVar6 != 0)))))) &&
        (*(int *)(iVar5 + 0x4b8) == 0)) &&
       (*(int *)(iVar5 + DAT_001c52dc) <= (int)**(short **)(DAT_001c52d8 + 0x1c512e))) {
      local_20 = (GameStatePrizeMenu *)0x3f800000;
      iVar5 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x44),iVar6 >> 0x10,(int)(short)iVar6,fVar8,
                         (float)((ulonglong)uVar9 >> 0x20));
      if (iVar5 == 0) {
        local_20 = (GameStatePrizeMenu *)0x3f800000;
        iVar5 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x40),
                           *(int *)(*(int *)(this + 0xc) + DAT_001c52d4) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001c52d4),extraout_s0_00,
                           extraout_s1_00);
        if (iVar5 == 0) {
          fVar8 = extraout_s0_01;
          if (this[0x78] != (GameStatePrizeMenu)0x0) {
            this[0x78] = (GameStatePrizeMenu)0x0;
            goto LAB_001c5208;
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
          fVar8 = (float)ZombieCafe::eventRaid2_setExplanationWebWindow
                                   (*(ZombieCafe **)(this + 0xc),*(int *)(this + 100));
          this[0x78] = (GameStatePrizeMenu)0x1;
        }
      }
      else if (this[0x78] == (GameStatePrizeMenu)0x0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
        SaveCafe();
        pCVar7 = *(CapcomGame **)(this + 0xc);
        if (*(int *)(this + 0x68) == 1) {
          pGVar3 = (GameStateEventRaid2Menu *)operator_new(0x114);
          GameStateEventRaid2Menu::GameStateEventRaid2Menu(pGVar3);
          pGVar2 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar3);
        }
        else {
          pGVar4 = (GameStateCafe *)operator_new(0x200);
          GameStateCafe::GameStateCafe(pGVar4);
          pGVar2 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
        }
        fVar8 = (float)CapcomGame::setNextState(pCVar7,(GameState *)pGVar2);
      }
      else {
        this[0x78] = (GameStatePrizeMenu)0x0;
LAB_001c5208:
        local_20 = (GameStatePrizeMenu *)0x3f800000;
        fVar8 = (float)javaHideWebViewRanking(0,0,1);
      }
    }
    if (*(char *)(*(int *)(this + 0xc) + DAT_001c52cc) == '\0') goto LAB_001c52c0;
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_001c52cc) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar8);
    if (this[0x78] != (GameStatePrizeMenu)0x0) {
      this[0x78] = (GameStatePrizeMenu)0x0;
      javaHideWebViewRanking(0,0,1);
      goto LAB_001c52c0;
    }
    SaveCafe();
    pCVar7 = *(CapcomGame **)(this + 0xc);
    if (*(int *)(this + 0x68) == 1) {
      pGVar3 = (GameStateEventRaid2Menu *)operator_new(0x114);
      GameStateEventRaid2Menu::GameStateEventRaid2Menu(pGVar3);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar3);
    }
    else {
      pGVar4 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(pGVar4);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
    }
  }
LAB_001c5284:
  CapcomGame::setNextState(pCVar7,(GameState *)pGVar2);
LAB_001c52c0:
  return CONCAT44(param_1,local_20);
}


