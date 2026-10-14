/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002226ec ZukanHeadButton::~ZukanHeadButton */

/* ZukanHeadButton::~ZukanHeadButton() */

ZukanHeadButton * __thiscall ZukanHeadButton::~ZukanHeadButton(ZukanHeadButton *this)

{
  *(int *)this = *(int *)(DAT_00222730 + 0x2226f6) + 8;
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
    *(undefined4 *)(this + 0x6c) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


