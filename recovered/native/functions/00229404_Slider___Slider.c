/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229404 Slider::~Slider */

/* Slider::~Slider() */

Slider * __thiscall Slider::~Slider(Slider *this)

{
  *(int *)this = *(int *)(DAT_00229440 + 0x22940e) + 8;
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


