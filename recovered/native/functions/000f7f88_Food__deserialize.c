/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7f88 Food::deserialize */

/* Food::deserialize(DataInputStream*, CImage**, FurnitureData**) */

Food * Food::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  Food FVar1;
  undefined2 uVar2;
  int iVar3;
  FurnitureData *pFVar4;
  Food *this;
  undefined4 uVar5;
  FoodStack *this_00;
  int *piVar6;
  CapcomDate aCStack_20 [12];
  
  piVar6 = *(int **)(DAT_000f80ac + 0xf7f94);
  if (*piVar6 < 0x31) {
    iVar3 = DataInputStream::readByte(param_1);
    pFVar4 = param_3[iVar3];
    this = (Food *)operator_new(0x70);
    Food(this,pFVar4,(FoodStack *)0x0,'\0');
  }
  else {
    iVar3 = DataInputStream::readInt(param_1);
    pFVar4 = param_3[iVar3];
    this = (Food *)operator_new(0x70);
    Food(this,pFVar4,(FoodStack *)0x0,'\0');
  }
  FVar1 = (Food)DataInputStream::readByte(param_1);
  this[0x34] = FVar1;
  iVar3 = DataInputStream::readBoolean(param_1);
  if (iVar3 != 0) {
    uVar5 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(this + 0x3c) = uVar5;
  }
  FVar1 = (Food)DataInputStream::readByte(param_1);
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
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar3 + 4);
  this_00 = (FoodStack *)operator_new(0x24);
  String::String((String *)(this_00 + 0xc));
  String::String((String *)(this_00 + 0x14));
  *(FoodStack **)(this + 100) = this_00;
  FoodStack::deserialize(this_00,param_1);
  uVar5 = PackedImage::getImage
                    (*(PackedImage **)(iVar3 + DAT_000f80b0),
                     (int)*(short *)(*(int *)(iVar3 + 0x4e8) +
                                     (uint)**(ushort **)(this + 100) * 0x1c + 0x14),true);
  *(undefined4 *)(this + 0x68) = uVar5;
  return this;
}


