/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be51c Character::Character */

/* Character::Character(CharacterData const*, unsigned char, unsigned char, String) */

Character * __thiscall
Character::Character
          (Character *this,undefined4 param_1,Character param_2,Character param_3,String *param_5)

{
  undefined4 uVar1;
  String aSStack_20 [12];
  
  String::String((String *)(this + 8));
  *(undefined4 *)this = param_1;
  this[5] = param_2;
  this[4] = param_3;
  String::String(aSStack_20,param_5);
  String::operator=((String *)(this + 8),aSStack_20);
  String::~String(aSStack_20);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x44] = (Character)0x0;
  *(undefined4 *)(this + 0x48) = DAT_000be5b4;
  this[0x4c] = (Character)0x0;
  this[0x24] = (Character)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  uVar1 = getMaxEnergy();
  *(undefined4 *)(this + 0x40) = uVar1;
  this[0x54] = (Character)0x0;
  this[0x35] = (Character)0x0;
  this[0x36] = (Character)0x0;
  this[0x34] = (Character)0x0;
  return this;
}


