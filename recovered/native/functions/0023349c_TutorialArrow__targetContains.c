/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023349c TutorialArrow::targetContains */

/* TutorialArrow::targetContains(GameStateRaid*, long) */

void __thiscall
TutorialArrow::targetContains(TutorialArrow *this,GameStateRaid *param_1,long param_2)

{
  if (*(int *)(this + 0x60) == 0) {
    if (*(ScreenElement **)(this + 100) != (ScreenElement *)0x0) {
      ScreenElement::contains(*(ScreenElement **)(this + 100),param_2 >> 0x10,(int)(short)param_2);
    }
  }
  else {
    if (param_1 != (GameStateRaid *)0x0) {
      param_2 = GameStateRaid::screenToWorldCoords(param_1,param_2);
    }
    (**(code **)(**(int **)(this + 0x60) + 0x10))(*(int **)(this + 0x60),param_2);
  }
  return;
}


