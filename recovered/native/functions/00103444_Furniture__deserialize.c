/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00103444 Furniture::deserialize */

/* Furniture::deserialize(DataInputStream*, CImage**, FurnitureData**) */

Furniture *
Furniture::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  Furniture FVar1;
  undefined2 uVar2;
  int iVar3;
  Furniture *this;
  FurnitureData *pFVar4;
  undefined4 uVar5;
  int *piVar6;
  CapcomDate aCStack_20 [12];
  
  L_PrintLog((char *)(DAT_00103568 + 0x103456),(char *)(DAT_0010356c + 0x103458));
  iVar3 = DataInputStream::readBoolean(param_1);
  if (iVar3 == 0) {
    iVar3 = DataInputStream::readByte(param_1);
    if (iVar3 == 1) {
      this = (Furniture *)Stove::deserialize(param_1,param_2,param_3);
    }
    else if (iVar3 == 2) {
      this = (Furniture *)ServingCounter::deserialize(param_1,param_2,param_3);
    }
    else {
      piVar6 = *(int **)(DAT_00103570 + 0x1034a8);
      if (*piVar6 < 0x31) {
        iVar3 = DataInputStream::readByte(param_1);
        pFVar4 = param_3[iVar3];
        this = (Furniture *)operator_new(100);
        Furniture(this,pFVar4);
      }
      else {
        iVar3 = DataInputStream::readInt(param_1);
        pFVar4 = param_3[iVar3];
        this = (Furniture *)operator_new(100);
        Furniture(this,pFVar4);
      }
      FVar1 = (Furniture)DataInputStream::readByte(param_1);
      this[0x34] = FVar1;
      iVar3 = DataInputStream::readBoolean(param_1);
      if (iVar3 != 0) {
        uVar5 = CafeObject::deserialize(param_1,param_2,param_3);
        *(undefined4 *)(this + 0x3c) = uVar5;
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
      L_PrintLog((char *)(DAT_00103574 + 0x103550),(char *)(DAT_00103578 + 0x103552));
    }
  }
  else {
    DataInputStream::readByte(param_1);
    this = (Furniture *)Food::deserialize(param_1,param_2,param_3);
  }
  return this;
}


