/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c42c FriendData::operator= */

/* FriendData::TEMPNAMEPLACEHOLDERVALUE(FriendData const&) */

FriendData * __thiscall FriendData::operator=(FriendData *this,FriendData *param_1)

{
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_40,(String *)param_1);
  String::operator=((String *)this,aSStack_40);
  String::~String(aSStack_40);
  String::String(aSStack_38,(String *)(param_1 + 8));
  String::operator=((String *)(this + 8),aSStack_38);
  String::~String(aSStack_38);
  String::String(aSStack_30,(String *)(param_1 + 0x10));
  String::operator=((String *)(this + 0x10),aSStack_30);
  String::~String(aSStack_30);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  String::String(aSStack_28,(String *)(param_1 + 0x24));
  String::operator=((String *)(this + 0x24),aSStack_28);
  String::~String(aSStack_28);
  String::String(aSStack_20,(String *)(param_1 + 0x2c));
  String::operator=((String *)(this + 0x2c),aSStack_20);
  String::~String(aSStack_20);
  String::String(aSStack_18,(String *)(param_1 + 0x34));
  String::operator=((String *)(this + 0x34),aSStack_18);
  String::~String(aSStack_18);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  this[0x4c] = param_1[0x4c];
  this[0x4d] = param_1[0x4d];
  this[0x4e] = param_1[0x4e];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


