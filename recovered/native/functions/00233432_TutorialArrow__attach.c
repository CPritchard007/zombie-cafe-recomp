/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00233432 TutorialArrow::attach */

/* TutorialArrow::attach(CafeObject*, bool, long) */

void __thiscall
TutorialArrow::attach(TutorialArrow *this,CafeObject *param_1,bool param_2,long param_3)

{
  detach(this);
  *(CafeObject **)(this + 0x60) = param_1;
  *(long *)(this + 0x78) = param_3;
  setPointsUp(SUB41(this,0));
  ScreenElement::setOrder((ScreenElement *)this,0);
  return;
}


