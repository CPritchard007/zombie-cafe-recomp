/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e59c Stove::deserialize */

/* Stove::deserialize(DataInputStream*, CImage**, FurnitureData**) */

Furniture * Stove::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  Furniture FVar1;
  undefined2 uVar2;
  int iVar3;
  Furniture *this;
  undefined4 uVar4;
  FoodStack *this_00;
  int iVar5;
  int *piVar6;
  FurnitureData *local_28;
  CapcomDate aCStack_20 [12];
  
  piVar6 = *(int **)(DAT_0022e6f8 + 0x22e5a8);
  iVar5 = *(int *)(DAT_0022e6fc + 0x22e5ac);
  if (*piVar6 < 0x31) {
    iVar3 = DataInputStream::readByte(param_1);
    local_28 = param_3[iVar3];
    this = (Furniture *)operator_new(0x8c);
    Furniture::Furniture(this,local_28);
  }
  else {
    iVar3 = DataInputStream::readInt(param_1);
    local_28 = param_3[iVar3];
    this = (Furniture *)operator_new(0x8c);
    Furniture::Furniture(this,local_28);
  }
  *(int *)this = iVar5 + 8;
  this[0x81] = (Furniture)0x1;
  *(FurnitureData **)(this + 0x68) = local_28;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (Furniture)0x1;
  this[0x82] = (Furniture)0x0;
  this[0x83] = (Furniture)0x0;
  *(undefined2 *)(this + 0x84) = 0;
  FVar1 = (Furniture)DataInputStream::readByte(param_1);
  this[0x34] = FVar1;
  iVar5 = DataInputStream::readBoolean(param_1);
  if (iVar5 != 0) {
    uVar4 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(this + 0x3c) = uVar4;
  }
  FVar1 = (Furniture)DataInputStream::readByte(param_1);
  this[0x41] = FVar1;
  if (0x17 < *piVar6) {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x42) = uVar2;
  }
  if (0x47 < *piVar6) {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x44) = uVar2;
  }
  if (0x2f < *piVar6) {
    CapcomDate::deserialize(aCStack_20,param_1);
    memcpy(this + 0x56,aCStack_20,7);
  }
  iVar5 = DataInputStream::readBoolean(param_1);
  if (iVar5 != 0) {
    this_00 = (FoodStack *)operator_new(0x24);
    String::String((String *)(this_00 + 0xc));
    String::String((String *)(this_00 + 0x14));
    *(FoodStack **)(this + 100) = this_00;
    FoodStack::deserialize(this_00,param_1);
  }
  uVar4 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x70) = uVar4;
  uVar4 = DataInputStream::readLong(param_1);
  iVar5 = *piVar6;
  *(undefined4 *)(this + 0x6c) = uVar4;
  if (0x53 < iVar5) {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x84) = uVar2;
  }
  return this;
}


