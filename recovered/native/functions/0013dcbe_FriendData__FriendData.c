/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013dcbe FriendData::FriendData */

/* FriendData::FriendData(FriendData const&) */

undefined8 __thiscall FriendData::FriendData(FriendData *this,FriendData *param_1)

{
  String::String((String *)this,(String *)param_1);
  String::String((String *)(this + 8),(String *)(param_1 + 8));
  String::String((String *)(this + 0x10),(String *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  String::String((String *)(this + 0x24),(String *)(param_1 + 0x24));
  String::String((String *)(this + 0x2c),(String *)(param_1 + 0x2c));
  String::String((String *)(this + 0x34),(String *)(param_1 + 0x34));
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
  return CONCAT44((String *)(this + 8),this);
}


