/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7dac FoodStack::serialize */

/* FoodStack::serialize(DataOutputStream*) */

void __thiscall FoodStack::serialize(FoodStack *this,DataOutputStream *param_1)

{
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  DataOutputStream::writeShort((short)param_1);
  DataOutputStream::writeByte((uchar)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeByte((uchar)param_1);
  String::String(aSStack_20,(String *)(this + 0xc));
  DataOutputStream::writeUTF(param_1,aSStack_20);
  String::~String(aSStack_20);
  String::String(aSStack_18,(String *)(this + 0x14));
  DataOutputStream::writeUTF(param_1,aSStack_18);
  String::~String(aSStack_18);
  CapcomDate::serialize((CapcomDate *)(this + 0x1c),param_1);
  return;
}


