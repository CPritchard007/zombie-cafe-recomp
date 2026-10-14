/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7e04 Character::deserialize */

/* Character::deserialize(DataInputStream*, CharacterData**, unsigned short, bool) */

Character *
Character::deserialize(DataInputStream *param_1,CharacterData **param_2,ushort param_3,bool param_4)

{
  Character CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Character *this;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint local_3c;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  puVar6 = (undefined4 *)(DAT_000c7ffc + 0xc7e1a);
  L_PrintLog((char *)(DAT_000c7ff4 + 0xc7e16),(char *)(DAT_000c7ff8 + 0xc7e18));
  piVar7 = (int *)*puVar6;
  if (*piVar7 < 0x37) {
    local_3c = DataInputStream::readByte(param_1);
  }
  else {
    local_3c = DataInputStream::readShort(param_1);
    local_3c = local_3c & 0xffff;
  }
  DataInputStream::readUTF();
  uVar2 = DataInputStream::readByte(param_1);
  uVar3 = DataInputStream::readByte(param_1);
  String::String(aSStack_20,aSStack_28);
  this = (Character *)operator_new(0x6c);
  Character(this,param_2[local_3c],uVar2,uVar3,aSStack_20);
  String::~String(aSStack_20);
  if (*piVar7 < 0x4e) {
    uVar2 = DataInputStream::readFloat();
    uVar2 = __mulsf3(uVar2,DAT_000c8000);
  }
  else {
    uVar2 = DataInputStream::readFloat();
  }
  *(undefined4 *)(this + 0x40) = uVar2;
  CVar1 = (Character)DataInputStream::readByte(param_1);
  this[0x44] = CVar1;
  uVar2 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x48) = uVar2;
  CVar1 = (Character)DataInputStream::readByte(param_1);
  this[0x4c] = CVar1;
  uVar2 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x50) = uVar2;
  uVar2 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x10) = uVar2;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x18) = uVar2;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x1c) = uVar2;
  uVar2 = DataInputStream::readInt(param_1);
  iVar4 = *piVar7;
  *(undefined4 *)(this + 0x20) = uVar2;
  if (0x1d < iVar4) {
    CVar1 = (Character)DataInputStream::readByte(param_1);
    this[0x54] = CVar1;
  }
  if (0x2e < *piVar7) {
    uVar2 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x28) = uVar2;
    uVar2 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x2c) = uVar2;
  }
  if (0x3c < *piVar7) {
    CVar1 = (Character)DataInputStream::readByte(param_1);
    this[0x36] = CVar1;
  }
  if (*piVar7 < 0x4b) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  else if (*piVar7 < 0x4e) {
    uVar2 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x58) = uVar2;
    uVar2 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x5c) = uVar2;
    uVar2 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x60) = uVar2;
  }
  else {
    iVar4 = 0;
    do {
      uVar2 = DataInputStream::readInt(param_1);
      iVar5 = iVar4 + 4;
      *(undefined4 *)(this + iVar4 + 0x58) = uVar2;
      iVar4 = iVar5;
    } while (iVar5 != 0x14);
  }
  if (*piVar7 < 99) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  else {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined4 *)(this + 0x30) = uVar2;
  }
  if (0x6e < *piVar7) {
    CVar1 = (Character)DataInputStream::readBoolean(param_1);
    this[0x34] = CVar1;
  }
  if (!param_4) {
    uVar3 = *(undefined4 *)(this + 0x40);
    uVar2 = getMaxEnergy();
    iVar4 = __aeabi_fcmpgt(uVar3,uVar2);
    if (iVar4 != 0) {
      uVar2 = getMaxEnergy();
      *(undefined4 *)(this + 0x40) = uVar2;
    }
  }
  if (param_3 < local_3c) {
    ~Character(this);
    operator_delete(this);
    this = (Character *)0x0;
  }
  L_PrintLog((char *)(DAT_000c8004 + 0xc7fca),(char *)(DAT_000c8008 + 0xc7fcc));
  String::~String(aSStack_28);
  return this;
}


