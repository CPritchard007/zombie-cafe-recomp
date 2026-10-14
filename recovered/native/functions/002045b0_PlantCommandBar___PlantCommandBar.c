/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002045b0 PlantCommandBar::~PlantCommandBar */

/* PlantCommandBar::~PlantCommandBar() */

PlantCommandBar * __thiscall PlantCommandBar::~PlantCommandBar(PlantCommandBar *this)

{
  *(int *)this = *(int *)(DAT_002046d8 + 0x2045ba) + 8;
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa8) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 100) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xac) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xac) + 100) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb0) + 100) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


