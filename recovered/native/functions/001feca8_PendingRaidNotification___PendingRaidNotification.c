/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001feca8 PendingRaidNotification::~PendingRaidNotification */

/* PendingRaidNotification::~PendingRaidNotification() */

PendingRaidNotification * __thiscall
PendingRaidNotification::~PendingRaidNotification(PendingRaidNotification *this)

{
  *(int *)this = *(int *)(DAT_001fed14 + 0x1fecb2) + 8;
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 100) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 0x60) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  PendingItem::~PendingItem((PendingItem *)this);
  return this;
}


