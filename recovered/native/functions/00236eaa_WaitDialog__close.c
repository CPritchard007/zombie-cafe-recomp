/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236eaa WaitDialog::close */

/* WaitDialog::close() */

void __thiscall WaitDialog::close(WaitDialog *this)

{
  QueueMessage *this_00;
  
  this_00 = (QueueMessage *)
            CapcomLinkedList<WaitDialog::QueueMessage*>::remove
                      ((CapcomLinkedList<WaitDialog::QueueMessage*> *)(this + 0x74),0);
  if (this_00 != (QueueMessage *)0x0) {
    QueueMessage::~QueueMessage(this_00);
    operator_delete(this_00);
  }
  if (*(int *)(this + 0x84) != 0) {
    show();
  }
  this[0x14] = (WaitDialog)0x0;
  return;
}


