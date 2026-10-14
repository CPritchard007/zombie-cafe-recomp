/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00201878 PendingOrderDialog::~PendingOrderDialog */

/* PendingOrderDialog::~PendingOrderDialog() */

PendingOrderDialog * __thiscall PendingOrderDialog::~PendingOrderDialog(PendingOrderDialog *this)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  *(int *)this = *(int *)(DAT_00201a30 + 0x201884) + 8;
  while (*(int *)(this + 0xcc) != 0) {
    piVar1 = (int *)CapcomLinkedList<PendingItem*>::remove
                              ((CapcomLinkedList<PendingItem*> *)(this + 0xbc),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x90) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x94) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x94) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int *)(this + 0xcc) != 0) {
    while (pvVar2 = *(void **)(this + 0xc0), pvVar2 != (void *)0x0) {
      uVar3 = *(undefined4 *)((int)pvVar2 + 4);
      operator_delete(pvVar2);
      *(undefined4 *)(this + 0xc0) = uVar3;
    }
    *(undefined4 *)(this + 0xcc) = 0;
    *(PendingOrderDialog **)(this + 0xc4) = this + 0xbc;
    *(undefined4 *)(this + 200) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


