/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001962d4 GameStateDoJo::tickStepSelectZombie */

/* GameStateDoJo::tickStepSelectZombie(long) */

undefined8 GameStateDoJo::tickStepSelectZombie(long param_1)

{
  int iVar1;
  GameStateCafe *this;
  GameStateLoading *this_00;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  int iVar4;
  int iVar5;
  ZCImageButton *this_01;
  int iVar6;
  CapcomGame *this_02;
  long lVar7;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar8;
  float extraout_s0_02;
  float in_s1;
  float extraout_s1;
  float extraout_s1_00;
  float fVar9;
  float extraout_s1_01;
  long local_20;
  
  iVar1 = DAT_001964fc;
  iVar4 = DAT_001964e8;
  local_20 = param_1;
  if ((*(char *)(*(int *)(param_1 + 0x710) + 0x14) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x700) + 0x14) == '\0')) {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(iVar6 + DAT_001964e8);
    if ((iVar5 == 0) ||
       ((*(int *)(iVar6 + 0x4b8) != 0 ||
        ((int)**(short **)(DAT_001964ec + 0x196316) < *(int *)(iVar6 + DAT_001964f0))))) {
      if ((*(char *)(iVar6 + DAT_001964fc) == '\0') && (*(int *)(iVar6 + 0x4b8) != 0)) {
        if ((int)**(short **)(DAT_001964f8 + 0x196484) < *(int *)(iVar6 + DAT_001964f0)) {
          uVar3 = __floatsisf((iVar5 >> 0x10) - (*(int *)(iVar6 + 0x4b8) >> 0x10));
          *(undefined4 *)(param_1 + 0x6e0) = uVar3;
          *(undefined1 *)(iVar6 + iVar1) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x6e0) = 0;
        }
      }
    }
    else {
      local_20 = 0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0xb8),iVar5 >> 0x10,(int)(short)iVar5,in_s0,
                         in_s1);
      if (iVar1 == 0) {
        this_01 = *(ZCImageButton **)(param_1 + 0xc0);
        fVar8 = extraout_s0;
        fVar9 = extraout_s1;
        if ((this_01[0x14] != (ZCImageButton)0x0) && (this_01[0x86] != (ZCImageButton)0x0)) {
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar4);
          local_20 = 0x3f800000;
          iVar1 = ZCImageButton::contains
                            (this_01,iVar1 >> 0x10,(int)(short)iVar1,extraout_s0,extraout_s1);
          fVar8 = extraout_s0_00;
          fVar9 = extraout_s1_00;
          if (iVar1 != 0) {
            ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
            if (*(int *)(param_1 + 0x28) != -1) {
              *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x8c);
              changeMessageWindow(param_1,false);
              *(undefined1 *)(param_1 + DAT_001964f4) = 1;
              *(undefined4 *)(param_1 + 0x6c0) = 0;
              (**(code **)(**(int **)(param_1 + 0xd8) + 0x20))(*(int **)(param_1 + 0xd8),0);
              (**(code **)(**(int **)(param_1 + 0xd4) + 0x20))(*(int **)(param_1 + 0xd4),0);
              (**(code **)(**(int **)(param_1 + 0xdc) + 0x20))(*(int **)(param_1 + 0xdc),0);
            }
            goto LAB_001964e4;
          }
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar4);
        iVar1 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0xd8),iVar1 >> 0x10,(int)(short)iVar1,fVar8
                           ,fVar9);
        if (iVar1 == 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + DAT_001964e8);
          local_20 = 0x3f800000;
          iVar1 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0xd4),iVar1 >> 0x10,(int)(short)iVar1,
                             extraout_s0_02,extraout_s1_01);
          if (iVar1 == 0) {
            iVar1 = 0;
            lVar7 = param_1;
            do {
              piVar2 = *(int **)(lVar7 + 0xe0);
              if ((piVar2 != (int *)0x0) &&
                 (iVar5 = (**(code **)(*piVar2 + 0x10))
                                    (piVar2,*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4)),
                 iVar5 != 0)) {
                selectCharacter((GameStateDoJo *)param_1,iVar1,false);
              }
              iVar1 = iVar1 + 1;
              lVar7 = lVar7 + 4;
            } while (iVar1 != 0xde);
            goto LAB_001964e4;
          }
          ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_01);
          iVar4 = 1;
        }
        else {
          ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_02);
          iVar4 = 0;
        }
        local_20 = 0x3f800000;
        calcJumpScrollX((GameStateDoJo *)param_1,iVar4);
      }
      else {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
        this_02 = *(CapcomGame **)(param_1 + 0xc);
        this = (GameStateCafe *)operator_new(0x200);
        GameStateCafe::GameStateCafe(this);
        this_00 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(this_00,(GameState *)this);
        CapcomGame::setNextState(this_02,(GameState *)this_00);
      }
    }
  }
LAB_001964e4:
  return CONCAT44(in_r1,local_20);
}


