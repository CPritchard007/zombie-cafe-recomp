/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00233406 TutorialArrow::attach */

/* TutorialArrow::attach(ScreenElement*, bool, long) */

void __thiscall
TutorialArrow::attach(TutorialArrow *this,ScreenElement *param_1,bool param_2,long param_3)

{
  detach(this);
  *(ScreenElement **)(this + 100) = param_1;
  *(long *)(this + 0x78) = param_3;
  setPointsUp(SUB41(this,0));
  ScreenElement::setOrder
            ((ScreenElement *)this,(int)(((byte)param_1[0x4c] + 1) * 0x1000000) >> 0x18);
  return;
}


