/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4958 CafeObject::deserialize */

/* CafeObject::deserialize(DataInputStream*, CImage**, FurnitureData**) */

int CafeObject::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DataInputStream::readByte(param_1);
  if (iVar3 == 1) {
    iVar3 = Furniture::deserialize(param_1,param_2,param_3);
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    iVar3 = CafeWall::deserialize(param_1,param_2,param_3);
  }
  uVar4 = DataInputStream::readInt(param_1);
  *(undefined4 *)(iVar3 + 4) = uVar4;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(iVar3 + 0x24) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(iVar3 + 0x2c) = uVar2;
  uVar1 = DataInputStream::readBoolean(param_1);
  *(undefined1 *)(iVar3 + 0x2e) = uVar1;
  return iVar3;
}


