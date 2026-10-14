/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e243c ConfirmDialog::QueueMessage::~QueueMessage */

/* ConfirmDialog::QueueMessage::~QueueMessage() */

QueueMessage * __thiscall ConfirmDialog::QueueMessage::~QueueMessage(QueueMessage *this)

{
  String::~String((String *)(this + 0x10));
  String::~String((String *)(this + 8));
  String::~String((String *)this);
  return this;
}


