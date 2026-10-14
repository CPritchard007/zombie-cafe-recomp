/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00174eec FriendData::FriendData */

/* FriendData::FriendData(int) */

undefined8 __thiscall FriendData::FriendData(FriendData *this,int param_1)

{
  String::String((String *)this);
  String::String((String *)(this + 8));
  String::String((String *)(this + 0x10));
  String::String((String *)(this + 0x24));
  String::String((String *)(this + 0x2c));
  String::String((String *)(this + 0x34));
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x4e] = (FriendData)0x0;
  this[0x4d] = (FriendData)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return CONCAT44(this,this);
}


