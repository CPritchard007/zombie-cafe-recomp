/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00116980 GameStateBackupSelection::tick */

/* GameStateBackupSelection::tick(long) */

undefined8 __thiscall GameStateBackupSelection::tick(GameStateBackupSelection *this,long param_1)

{
  int iVar1;
  GameStateCafe *this_00;
  LoadingGameState *pLVar2;
  GameStateMainMenu *this_01;
  int iVar3;
  int iVar4;
  GameStateBackupSelection *pGVar5;
  CapcomGame *pCVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar7;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar8;
  float extraout_s1_01;
  float fVar9;
  GameStateBackupSelection *local_20;
  
  (**(code **)(**(int **)(this + 0x14) + 8))();
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(this + 0xc));
  iVar4 = DAT_00116aa8;
  local_20 = this;
  if (iVar1 != 0) {
    iVar1 = 0;
    pGVar5 = this;
    fVar7 = extraout_s0;
    fVar9 = extraout_s1;
    do {
      if (*(ZCImageButton **)(pGVar5 + 0x44) != (ZCImageButton *)0x0) {
        iVar3 = *(int *)(*(int *)(this + 0xc) + iVar4);
        local_20 = (GameStateBackupSelection *)0x3f800000;
        iVar3 = ZCImageButton::contains
                          (*(ZCImageButton **)(pGVar5 + 0x44),iVar3 >> 0x10,(int)(short)iVar3,fVar7,
                           fVar9);
        fVar7 = extraout_s0_00;
        fVar9 = extraout_s1_00;
        if (iVar3 == 0) goto LAB_00116a94;
        ZombieCafe::revertToBackup(*(int *)(this + 0xc));
        pCVar6 = *(CapcomGame **)(this + 0xc);
        this_00 = (GameStateCafe *)operator_new(0x200);
        GameStateCafe::GameStateCafe(this_00);
        pLVar2 = (LoadingGameState *)operator_new(0x2c);
        LoadingGameState::LoadingGameState(pLVar2,(GameState *)this_00,(CapcomFont *)0x0,0);
        *(int *)pLVar2 = *(int *)(DAT_00116aac + 0x1169f0) + 8;
        pLVar2[0x14] = (LoadingGameState)0x0;
        *(undefined4 *)(pLVar2 + 0x28) = 0;
        uVar8 = CapcomGame::setNextState(pCVar6,(GameState *)pLVar2);
LAB_00116a18:
        local_20 = (GameStateBackupSelection *)0x3f800000;
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_00116ab0) = 1;
        break;
      }
LAB_00116a94:
      if (*(ZCImageButton **)(pGVar5 + 0x38) != (ZCImageButton *)0x0) {
        iVar3 = *(int *)(*(int *)(this + 0xc) + iVar4);
        local_20 = (GameStateBackupSelection *)0x3f800000;
        iVar3 = ZCImageButton::contains
                          (*(ZCImageButton **)(pGVar5 + 0x38),iVar3 >> 0x10,(int)(short)iVar3,fVar7,
                           fVar9);
        uVar8 = CONCAT44(extraout_s1_01,extraout_s0_01);
        fVar7 = extraout_s0_01;
        fVar9 = extraout_s1_01;
        if (iVar3 != 0) goto LAB_00116a18;
      }
      uVar8 = CONCAT44(fVar9,fVar7);
      iVar1 = iVar1 + 1;
      pGVar5 = pGVar5 + 4;
    } while (iVar1 != 3);
    if (*(char *)(*(int *)(this + 0xc) + DAT_00116ab0) == '\0') {
      iVar4 = *(int *)(*(int *)(this + 0xc) + DAT_00116aa8);
      local_20 = (GameStateBackupSelection *)0x3f800000;
      iVar4 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x34),iVar4 >> 0x10,(int)(short)iVar4,
                         (float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
      if (iVar4 != 0) {
        pCVar6 = *(CapcomGame **)(this + 0xc);
        this_01 = (GameStateMainMenu *)operator_new(0x154);
        GameStateMainMenu::GameStateMainMenu(this_01);
        pLVar2 = (LoadingGameState *)operator_new(0x2c);
        LoadingGameState::LoadingGameState(pLVar2,(GameState *)this_01,(CapcomFont *)0x0,0);
        *(int *)pLVar2 = *(int *)(DAT_00116ab4 + 0x116a70) + 8;
        pLVar2[0x14] = (LoadingGameState)0x0;
        *(undefined4 *)(pLVar2 + 0x28) = 0;
        CapcomGame::setNextState(pCVar6,(GameState *)pLVar2);
      }
    }
  }
  return CONCAT44(param_1,local_20);
}


