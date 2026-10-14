/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236c70 WaitDialog::QueueMessage::~QueueMessage */

/* WaitDialog::QueueMessage::~QueueMessage() */

QueueMessage * __thiscall WaitDialog::QueueMessage::~QueueMessage(QueueMessage *this)

{
  String::~String((String *)(this + 0x10));
  String::~String((String *)(this + 8));
  String::~String((String *)this);
  return this;
}


