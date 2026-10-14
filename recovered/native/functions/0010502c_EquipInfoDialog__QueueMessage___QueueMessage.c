/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010502c EquipInfoDialog::QueueMessage::~QueueMessage */

/* EquipInfoDialog::QueueMessage::~QueueMessage() */

QueueMessage * __thiscall EquipInfoDialog::QueueMessage::~QueueMessage(QueueMessage *this)

{
  String::~String((String *)(this + 0x10));
  String::~String((String *)(this + 8));
  String::~String((String *)this);
  return this;
}


