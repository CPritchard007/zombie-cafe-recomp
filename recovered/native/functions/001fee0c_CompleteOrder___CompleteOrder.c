/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fee0c CompleteOrder::~CompleteOrder */

/* CompleteOrder::~CompleteOrder() */

CompleteOrder * __thiscall CompleteOrder::~CompleteOrder(CompleteOrder *this)

{
  *(int *)this = *(int *)(DAT_001feea4 + 0x1fee16) + 8;
  if (*(int **)(*(int *)(this + 0x7c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 0x60) + 4))();
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
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  PendingItem::~PendingItem((PendingItem *)this);
  return this;
}


