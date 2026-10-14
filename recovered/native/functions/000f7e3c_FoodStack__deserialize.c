/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7e3c FoodStack::deserialize */

/* FoodStack::deserialize(DataInputStream*) */

void __thiscall FoodStack::deserialize(FoodStack *this,DataInputStream *param_1)

{
  FoodStack FVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int *piVar4;
  String aSStack_28 [8];
  String aSStack_20 [8];
  CapcomDate aCStack_18 [8];
  
  piVar4 = *(int **)(DAT_000f7ef4 + 0xf7e48);
  if (*piVar4 < 0x7b) {
    uVar2 = DataInputStream::readByte(param_1);
  }
  else {
    uVar2 = DataInputStream::readShort(param_1);
  }
  *(undefined2 *)this = uVar2;
  if (0x18 < *piVar4) {
    FVar1 = (FoodStack)DataInputStream::readByte(param_1);
    this[8] = FVar1;
  }
  if (*piVar4 < 0x31) {
    uVar3 = DataInputStream::readShort(param_1);
  }
  else {
    uVar3 = DataInputStream::readInt(param_1);
  }
  *(undefined4 *)(this + 4) = uVar3;
  if (*(int *)(this + 4) < 0) {
    *(undefined4 *)(this + 4) = DAT_000f7ef8;
  }
  FVar1 = (FoodStack)DataInputStream::readByte(param_1);
  this[8] = FVar1;
  DataInputStream::readUTF();
  String::operator=((String *)(this + 0xc),aSStack_28);
  String::~String(aSStack_28);
  DataInputStream::readUTF();
  String::operator=((String *)(this + 0x14),aSStack_20);
  String::~String(aSStack_20);
  if (0x33 < *piVar4) {
    CapcomDate::deserialize(aCStack_18,param_1);
    memcpy(this + 0x1c,aCStack_18,7);
  }
  return;
}


