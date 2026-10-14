/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7148 CookCommandBar::~CookCommandBar */

/* CookCommandBar::~CookCommandBar() */

CookCommandBar * __thiscall CookCommandBar::~CookCommandBar(CookCommandBar *this)

{
  int *piVar1;
  
  *(int *)this = *(int *)(DAT_000e7288 + 0xe7152) + 8;
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa0) + 100) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int *)(this + 0x94) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x94) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x94) + 4))();
    }
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x60) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x60) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x8c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 100) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(*(int *)(this + 100) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 0x60) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
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
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


