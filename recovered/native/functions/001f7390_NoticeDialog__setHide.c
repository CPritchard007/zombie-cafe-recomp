/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f7390 NoticeDialog::setHide */

/* NoticeDialog::setHide() */

void __thiscall NoticeDialog::setHide(NoticeDialog *this)

{
  String *this_00;
  
  L_PrintLog((char *)(DAT_001f73f0 + 0x1f739e),(char *)(DAT_001f73ec + 0x1f739c));
  this_00 = (String *)
            CapcomLinkedList<NoticeDialog::QueueMessage*>::remove
                      ((CapcomLinkedList<NoticeDialog::QueueMessage*> *)(this + 0x74),0);
  if (*(code **)(this_00 + 0x10) != (code *)0x0) {
    (**(code **)(this_00 + 0x10))(*(undefined4 *)(this_00 + 0x14));
  }
  String::~String(this_00 + 8);
  String::~String(this_00);
  operator_delete(this_00);
  this[0x14] = (NoticeDialog)0x0;
  if (*(int *)(this + 0x84) != 0) {
    show();
  }
  return;
}


