/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023947e RaidNotification::serialize */

/* RaidNotification::serialize(DataOutputStream*) */

void __thiscall RaidNotification::serialize(RaidNotification *this,DataOutputStream *param_1)

{
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_20,(String *)this);
  DataOutputStream::writeUTF(param_1,aSStack_20);
  String::~String(aSStack_20);
  String::String(aSStack_18,(String *)(this + 8));
  DataOutputStream::writeUTF(param_1,aSStack_18);
  String::~String(aSStack_18);
  CapcomDate::serialize((CapcomDate *)(this + 0x10),param_1);
  DataOutputStream::writeBoolean(SUB41(param_1,0));
  DataOutputStream::writeInt((int)param_1);
  return;
}


