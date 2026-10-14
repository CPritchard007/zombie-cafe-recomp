/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e284e ConfirmDialog::close */

/* ConfirmDialog::close() */

void __thiscall ConfirmDialog::close(ConfirmDialog *this)

{
  QueueMessage *this_00;
  
  this_00 = (QueueMessage *)
            CapcomLinkedList<ConfirmDialog::QueueMessage*>::remove
                      ((CapcomLinkedList<ConfirmDialog::QueueMessage*> *)(this + 0x80),0);
  if (this_00 != (QueueMessage *)0x0) {
    QueueMessage::~QueueMessage(this_00);
    operator_delete(this_00);
  }
  if (*(int *)(this + 0x90) != 0) {
    show(this);
  }
  this[0x14] = (ConfirmDialog)0x0;
  return;
}


