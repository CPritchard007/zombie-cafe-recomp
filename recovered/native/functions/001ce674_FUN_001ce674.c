/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ce674 FUN_001ce674 */

void FUN_001ce674(float param_1)

{
  GameStateLoading *this;
  GameStateMainMenu *this_00;
  int iVar1;
  int unaff_r5;
  CapcomGame *this_01;
  
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_001ce74c) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_001ce74c) = 0;
  iVar1 = *(int *)(unaff_r5 + 0xc0);
  if (iVar1 != 8) {
    if (iVar1 < 9) {
      if ((iVar1 == 2) || (iVar1 == 5)) goto LAB_001ce712;
    }
    else if (((iVar1 == 0x20) || (iVar1 == 99)) || (iVar1 == 10)) goto LAB_001ce712;
    return;
  }
LAB_001ce712:
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),param_1);
  this_01 = *(CapcomGame **)(unaff_r5 + 0xc);
  this_00 = (GameStateMainMenu *)operator_new(0x154);
  GameStateMainMenu::GameStateMainMenu(this_00);
  this = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this,(GameState *)this_00);
  CapcomGame::setNextState(this_01,(GameState *)this);
  FUN_001ce72e();
  return;
}


