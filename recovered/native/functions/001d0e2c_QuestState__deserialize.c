/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0e2c QuestState::deserialize */

/* QuestState::deserialize(DataInputStream*) */

QuestState * QuestState::deserialize(DataInputStream *param_1)

{
  QuestState QVar1;
  QuestState *this;
  undefined4 uVar2;
  undefined8 uVar3;
  
  this = (QuestState *)operator_new(0x18);
  QuestState(this);
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)this = uVar2;
  QVar1 = (QuestState)DataInputStream::readByte(param_1);
  this[4] = QVar1;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x10) = uVar2;
  uVar3 = DataInputStream::readDouble();
  *(undefined8 *)(this + 8) = uVar3;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}


