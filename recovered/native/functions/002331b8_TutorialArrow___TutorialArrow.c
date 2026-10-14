/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002331b8 TutorialArrow::~TutorialArrow */

/* TutorialArrow::~TutorialArrow() */

TutorialArrow * __thiscall TutorialArrow::~TutorialArrow(TutorialArrow *this)

{
  ~TutorialArrow(this);
  operator_delete(this);
  return this;
}


