/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f0d38 EnemyCafeDialog::tick */

/* EnemyCafeDialog::tick(long) */

void EnemyCafeDialog::tick(long param_1)

{
  int iVar1;
  GameStateRaid *this;
  LoadingGameState *this_00;
  int extraout_r1;
  CapcomGame *this_01;
  int iVar2;
  int *piVar3;
  int iVar4;
  float extraout_s0;
  float extraout_s0_00;
  float fVar5;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float fVar6;
  float extraout_s1_01;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    ScreenElement::tick(param_1);
    iVar2 = *(int *)(param_1 + 0x88);
    iVar4 = *(int *)(iVar2 + DAT_000f0e78);
    if ((((iVar4 != 0) && (*(int *)(iVar2 + 0x4b8) == 0)) &&
        (*(int *)(iVar2 + DAT_000f0e80) <= (int)**(short **)(DAT_000f0e7c + 0xf0d6c))) &&
       ((iVar1 = __aeabi_fcmpgt(*(undefined4 *)(iVar2 + DAT_000f0e84),0), fVar5 = extraout_s0,
        fVar6 = extraout_s1, iVar1 == 0 ||
        (iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar2 + 0x4c0),0), fVar5 = extraout_s0_00,
        fVar6 = extraout_s1_00, iVar2 == 0)))) {
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x80),iVar4 >> 0x10,(int)(short)iVar4,fVar5,
                         fVar6);
      piVar3 = (int *)(param_1 + 0x88);
      if (iVar2 == 0) {
        iVar2 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0x84),
                           *(int *)(*piVar3 + DAT_000f0e78) >> 0x10,
                           (int)(short)*(int *)(*piVar3 + DAT_000f0e78),extraout_s0_01,
                           extraout_s1_01);
        if ((iVar2 != 0) && (iVar2 = ZombieCafe::haveZombies((ZombieCafe *)*piVar3), iVar2 != 0)) {
          ZombieCafe::playEffect(*piVar3,extraout_s0_02);
          this_01 = (CapcomGame *)*piVar3;
          this = (GameStateRaid *)operator_new(0x18c);
          iVar2 = *(int *)(param_1 + 0x60);
          iVar4 = *piVar3;
          __aeabi_idivmod(iVar2,**(undefined1 **)(DAT_000f0e88 + 0xf0e18));
          GameStateRaid::GameStateRaid
                    (this,iVar2,(uint)*(byte *)(*(int *)(iVar4 + DAT_000f0e8c) + extraout_r1),false,
                     false);
          this_00 = (LoadingGameState *)operator_new(0x2c);
          LoadingGameState::LoadingGameState(this_00,(GameState *)this,(CapcomFont *)0x0,0);
          *(int *)this_00 = *(int *)(DAT_000f0e90 + 0xf0e4c) + 8;
          this_00[0x14] = (LoadingGameState)0x0;
          *(undefined4 *)(this_00 + 0x28) = 0;
          CapcomGame::setNextState(this_01,(GameState *)this_00);
        }
      }
      else {
        ZombieCafe::playEffect(*piVar3,extraout_s0_01);
        (**(code **)(*(int *)param_1 + 0x20))(param_1,0);
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x88) + DAT_000f0e94) = 1;
  }
  return;
}


