/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013beea GameStateFriendCafe::shouldCompleteTutorialStep */

/* GameStateFriendCafe::shouldCompleteTutorialStep(GameStateFriendCafe*, unsigned char) */

undefined4
GameStateFriendCafe::shouldCompleteTutorialStep(GameStateFriendCafe *param_1,uchar param_2)

{
  if (param_2 == '0') {
    TutorialArrow::attach
              (*(TutorialArrow **)(param_1 + 0x1c4),
               *(ScreenElement **)(*(int *)(param_1 + 0x19c) + 0x60),false,0);
    ScreenElement::setOrder
              (*(ScreenElement **)(param_1 + 0x1c4),
               (int)((*(byte *)(*(int *)(param_1 + 0x19c) + 0x4c) + 1) * 0x1000000) >> 0x18);
  }
  else {
    if (param_2 != 'C') {
      return 0;
    }
    TutorialArrow::detach(*(TutorialArrow **)(param_1 + 0x1c4));
  }
  return 1;
}


