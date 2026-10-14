/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f0e98 EnemyCafeDialog::~EnemyCafeDialog */

/* EnemyCafeDialog::~EnemyCafeDialog() */

EnemyCafeDialog * __thiscall EnemyCafeDialog::~EnemyCafeDialog(EnemyCafeDialog *this)

{
  *(int *)this = *(int *)(DAT_000f0f88 + 0xf0ea2) + 8;
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x80) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x80) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x84) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x84) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


