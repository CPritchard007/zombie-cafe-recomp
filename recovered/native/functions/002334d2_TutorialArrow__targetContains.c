/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002334d2 TutorialArrow::targetContains */

/* TutorialArrow::targetContains(GameStateMap*, long) */

void __thiscall
TutorialArrow::targetContains(TutorialArrow *this,GameStateMap *param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x60);
  if (piVar1 == (int *)0x0) {
    if (*(ScreenElement **)(this + 100) != (ScreenElement *)0x0) {
      ScreenElement::contains(*(ScreenElement **)(this + 100),param_2 >> 0x10,(int)(short)param_2);
    }
  }
  else {
    if (param_1 != (GameStateMap *)0x0) {
      param_2 = param_2 - *(uint *)(param_1 + 0x420) & 0xffff |
                (((uint)param_2 >> 0x10) - (*(uint *)(param_1 + 0x420) >> 0x10)) * 0x10000;
    }
    (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  }
  return;
}


