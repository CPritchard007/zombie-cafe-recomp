/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002552a0 TombstoneCommandBar::~TombstoneCommandBar */

/* TombstoneCommandBar::~TombstoneCommandBar() */

TombstoneCommandBar * __thiscall
TombstoneCommandBar::~TombstoneCommandBar(TombstoneCommandBar *this)

{
  *(int *)this = *(int *)(DAT_00255364 + 0x2552aa) + 8;
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x8c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 100) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x60) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x60) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(*(int *)(this + 100) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 0x60) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


