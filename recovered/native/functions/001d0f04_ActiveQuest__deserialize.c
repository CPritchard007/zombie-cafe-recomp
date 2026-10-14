/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0f04 ActiveQuest::deserialize */

/* ActiveQuest::deserialize(DataInputStream*) */

ActiveQuest * ActiveQuest::deserialize(DataInputStream *param_1)

{
  ActiveQuest AVar1;
  ActiveQuest *this;
  undefined4 uVar2;
  undefined8 uVar3;
  
  this = (ActiveQuest *)operator_new(0x20);
  ActiveQuest(this);
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)this = uVar2;
  AVar1 = (ActiveQuest)DataInputStream::readBoolean(param_1);
  this[0x10] = AVar1;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar3 = DataInputStream::readDouble();
  *(undefined8 *)(this + 8) = uVar3;
  AVar1 = (ActiveQuest)DataInputStream::readBoolean(param_1);
  this[0x18] = AVar1;
  return this;
}


