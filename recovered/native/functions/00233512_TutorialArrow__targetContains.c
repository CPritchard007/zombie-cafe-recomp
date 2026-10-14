/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00233512 TutorialArrow::targetContains */

/* TutorialArrow::targetContains(GameStateFriendCafe*, long) */

void __thiscall
TutorialArrow::targetContains(TutorialArrow *this,GameStateFriendCafe *param_1,long param_2)

{
  if (*(int *)(this + 0x60) == 0) {
    if (*(ScreenElement **)(this + 100) != (ScreenElement *)0x0) {
      ScreenElement::contains(*(ScreenElement **)(this + 100),param_2 >> 0x10,(int)(short)param_2);
    }
  }
  else {
    if (param_1 != (GameStateFriendCafe *)0x0) {
      param_2 = GameStateFriendCafe::screenToWorldCoords(param_1,param_2);
    }
    (**(code **)(**(int **)(this + 0x60) + 0x10))(*(int **)(this + 0x60),param_2);
  }
  return;
}


