/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00233178 TutorialArrow::~TutorialArrow */

/* TutorialArrow::~TutorialArrow() */

TutorialArrow * __thiscall TutorialArrow::~TutorialArrow(TutorialArrow *this)

{
  *(int *)this = *(int *)(DAT_002331b4 + 0x233182) + 8;
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


