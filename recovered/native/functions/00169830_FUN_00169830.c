/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169830 FUN_00169830 */

void FUN_00169830(float param_1)

{
  int iVar1;
  GameStateCafe *this;
  GameStateLoading *this_00;
  code *pcVar2;
  int *unaff_r5;
  CapcomGame *this_01;
  float extraout_s0;
  
  if (*(char *)((int)unaff_r5 + 0x4d) != '\0') {
    if (*(int *)(unaff_r5[0x11] * 4 + *(int *)(unaff_r5[3] + 0x698)) < 1) {
      pcVar2 = *(code **)(*unaff_r5 + 0x78);
    }
    else {
      pcVar2 = *(code **)(*unaff_r5 + 0x74);
    }
    param_1 = (float)(*pcVar2)(unaff_r5);
  }
  if (((char)unaff_r5[0x13] != '\0') &&
     (*(int *)(unaff_r5[0x11] * 4 + *(int *)(unaff_r5[3] + 0x698)) < 1)) {
    *(undefined1 *)((int)unaff_r5 + 0x4d) = 1;
  }
  if ((char)unaff_r5[0x114] == '\0') {
    *(undefined1 *)(unaff_r5 + 0x114) = 1;
    ZombieCafe::loadAndPlayMusic((ZombieCafe *)unaff_r5[3],0,0xf,param_1,false);
  }
  if (*(char *)(unaff_r5[3] + DAT_00169a3c) == '\0') {
    FUN_00169b04();
    return;
  }
  *(undefined1 *)(unaff_r5[3] + DAT_00169a3c) = 0;
  iVar1 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(unaff_r5[3] + DAT_00169a1c),',');
  if (iVar1 == 0) {
    FUN_00169b04();
    return;
  }
  ZombieCafe::playEffect(unaff_r5[3],extraout_s0);
  this_01 = (CapcomGame *)unaff_r5[3];
  this = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this);
  this_00 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_00,(GameState *)this);
  CapcomGame::setNextState(this_01,(GameState *)this_00);
  FUN_00169b04();
  return;
}


