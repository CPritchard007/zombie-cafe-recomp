/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4e9c CafeWall::deserialize */

/* CafeWall::deserialize(DataInputStream*, CImage**, FurnitureData**) */

CafeWall * CafeWall::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  bool bVar1;
  CafeWall CVar2;
  CafeWall CVar3;
  short sVar4;
  long lVar5;
  CafeWall *this;
  int iVar6;
  undefined4 uVar7;
  
  sVar4 = DataInputStream::readByte(param_1);
  bVar1 = (bool)DataInputStream::readBoolean(param_1);
  CVar2 = (CafeWall)DataInputStream::readBoolean(param_1);
  CVar3 = (CafeWall)DataInputStream::readBoolean(param_1);
  lVar5 = DataInputStream::readInt(param_1);
  this = (CafeWall *)operator_new(0x48);
  CafeWall(this,param_2,sVar4,lVar5,bVar1);
  this[0x3b] = CVar2;
  this[0x3c] = CVar3;
  *(long *)(this + 0x40) = lVar5;
  iVar6 = DataInputStream::readBoolean(param_1);
  if (iVar6 != 0) {
    uVar7 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(this + 0x44) = uVar7;
  }
  return this;
}


