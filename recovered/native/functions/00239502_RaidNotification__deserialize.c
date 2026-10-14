/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239502 RaidNotification::deserialize */

/* RaidNotification::deserialize(DataInputStream*) */

RaidNotification * RaidNotification::deserialize(DataInputStream *param_1)

{
  RaidNotification RVar1;
  RaidNotification *this;
  undefined4 uVar2;
  String aSStack_28 [8];
  String aSStack_20 [8];
  CapcomDate aCStack_18 [12];
  
  this = (RaidNotification *)operator_new(0x20);
  memset(this,0,0x20);
  RaidNotification(this);
  DataInputStream::readUTF();
  String::operator=((String *)this,aSStack_28);
  String::~String(aSStack_28);
  DataInputStream::readUTF();
  String::operator=((String *)(this + 8),aSStack_20);
  String::~String(aSStack_20);
  CapcomDate::deserialize(aCStack_18,param_1);
  memcpy(this + 0x10,aCStack_18,7);
  RVar1 = (RaidNotification)DataInputStream::readBoolean(param_1);
  this[0x18] = RVar1;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x1c) = uVar2;
  return this;
}


