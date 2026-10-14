/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236edc WaitDialog::~WaitDialog */

/* WaitDialog::~WaitDialog() */

WaitDialog * __thiscall WaitDialog::~WaitDialog(WaitDialog *this)

{
  QueueMessage *this_00;
  void *pvVar1;
  undefined4 uVar2;
  
  *(int *)this = *(int *)(DAT_00236f84 + 0x236ee8) + 8;
  while (this_00 = (QueueMessage *)
                   CapcomLinkedList<WaitDialog::QueueMessage*>::remove
                             ((CapcomLinkedList<WaitDialog::QueueMessage*> *)(this + 0x74),0),
        this_00 != (QueueMessage *)0x0) {
    QueueMessage::~QueueMessage(this_00);
    operator_delete(this_00);
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int *)(this + 0x84) != 0) {
    while (pvVar1 = *(void **)(this + 0x78), pvVar1 != (void *)0x0) {
      uVar2 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x78) = uVar2;
    }
    *(undefined4 *)(this + 0x84) = 0;
    *(WaitDialog **)(this + 0x7c) = this + 0x74;
    *(undefined4 *)(this + 0x80) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


