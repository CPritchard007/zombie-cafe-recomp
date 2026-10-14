/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f745c NoticeDialog::~NoticeDialog */

/* NoticeDialog::~NoticeDialog() */

NoticeDialog * __thiscall NoticeDialog::~NoticeDialog(NoticeDialog *this)

{
  String *this_00;
  void *pvVar1;
  undefined4 uVar2;
  
  *(int *)this = *(int *)(DAT_001f7530 + 0x1f7468) + 8;
  while (this_00 = (String *)
                   CapcomLinkedList<NoticeDialog::QueueMessage*>::remove
                             ((CapcomLinkedList<NoticeDialog::QueueMessage*> *)(this + 0x74),0),
        this_00 != (String *)0x0) {
    String::~String(this_00 + 8);
    String::~String(this_00);
    operator_delete(this_00);
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int *)(this + 0x84) != 0) {
    while (pvVar1 = *(void **)(this + 0x78), pvVar1 != (void *)0x0) {
      uVar2 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x78) = uVar2;
    }
    *(undefined4 *)(this + 0x84) = 0;
    *(NoticeDialog **)(this + 0x7c) = this + 0x74;
    *(undefined4 *)(this + 0x80) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


