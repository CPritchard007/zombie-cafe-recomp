/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206960 ProgressBar::~ProgressBar */

/* ProgressBar::~ProgressBar() */

ProgressBar * __thiscall ProgressBar::~ProgressBar(ProgressBar *this)

{
  *(int *)this = *(int *)(DAT_002069e0 + 0x20696a) + 8;
  if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


