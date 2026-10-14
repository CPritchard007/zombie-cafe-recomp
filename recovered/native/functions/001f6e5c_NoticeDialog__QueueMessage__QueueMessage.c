/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f6e5c NoticeDialog::QueueMessage::QueueMessage */

/* NoticeDialog::QueueMessage::QueueMessage(String, String, void (*)(void*), void*) */

QueueMessage * __thiscall
NoticeDialog::QueueMessage::QueueMessage
          (QueueMessage *this,String *param_2,String *param_3,undefined4 param_4,undefined4 param_5)

{
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String((String *)this);
  String::String((String *)(this + 8));
  String::String(aSStack_28,param_2);
  String::operator=((String *)this,aSStack_28);
  String::~String(aSStack_28);
  String::String(aSStack_20,param_3);
  String::operator=((String *)(this + 8),aSStack_20);
  String::~String(aSStack_20);
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 0x14) = param_5;
  return this;
}


