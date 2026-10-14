/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fed2c PendingOrder::~PendingOrder */

/* PendingOrder::~PendingOrder() */

PendingOrder * __thiscall PendingOrder::~PendingOrder(PendingOrder *this)

{
  *(int *)this = *(int *)(DAT_001fedf4 + 0x1fed36) + 8;
  if (*(int **)(*(int *)(this + 0x84) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x84) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x88) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x88) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
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
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  PendingItem::~PendingItem((PendingItem *)this);
  return this;
}


