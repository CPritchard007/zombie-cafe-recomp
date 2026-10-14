/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236aa2 WaitDialog::QueueMessage::QueueMessage */

/* WaitDialog::QueueMessage::QueueMessage(String, String, String, void (*)(void*), void (*)(void*),
   void*) */

QueueMessage * __thiscall
WaitDialog::QueueMessage::QueueMessage
          (QueueMessage *this,String *param_2,String *param_3,String *param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String((String *)this);
  String::String((String *)(this + 8));
  String::String((String *)(this + 0x10));
  String::String(aSStack_30,param_2);
  String::operator=((String *)this,aSStack_30);
  String::~String(aSStack_30);
  String::String(aSStack_28,param_3);
  String::operator=((String *)(this + 8),aSStack_28);
  String::~String(aSStack_28);
  String::String(aSStack_20,param_4);
  String::operator=((String *)(this + 0x10),aSStack_20);
  String::~String(aSStack_20);
  *(undefined4 *)(this + 0x18) = param_5;
  *(undefined4 *)(this + 0x1c) = param_6;
  *(undefined4 *)(this + 0x20) = param_7;
  return this;
}


