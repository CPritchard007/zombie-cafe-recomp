/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001feebc CookingOrder::~CookingOrder */

/* CookingOrder::~CookingOrder() */

CookingOrder * __thiscall CookingOrder::~CookingOrder(CookingOrder *this)

{
  *(int *)this = *(int *)(DAT_001fef5c + 0x1feec8) + 8;
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
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
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
  PendingItem::~PendingItem((PendingItem *)this);
  return this;
}


