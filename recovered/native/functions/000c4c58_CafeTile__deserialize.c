/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4c58 CafeTile::deserialize */

/* CafeTile::deserialize(DataInputStream*, CImage**, FurnitureData**) */

undefined1 *
CafeTile::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar2 = (undefined1 *)operator_new(0x18);
  iVar6 = DAT_000c4d30 + 0xc4c72;
  puVar5 = *(undefined4 **)(iVar6 + DAT_000c4d34);
  iVar3 = __aeabi_fcmpeq(*puVar5,0);
  if (iVar3 != 0) {
    iVar3 = __floatsisf((int)**(short **)(iVar6 + DAT_000c4d38) +
                        (int)**(short **)(iVar6 + DAT_000c4d3c));
    uVar4 = __floatsisf((int)**(short **)(iVar6 + DAT_000c4d40) +
                        (int)**(short **)(iVar6 + DAT_000c4d44));
    uVar4 = __divsf3(iVar3 + -0x80000000,uVar4);
    *puVar5 = uVar4;
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  uVar1 = DataInputStream::readByte(param_1);
  *puVar2 = uVar1;
  uVar4 = DataInputStream::readInt(param_1);
  *(undefined4 *)(puVar2 + 4) = uVar4;
  uVar1 = DataInputStream::readBoolean(param_1);
  puVar2[8] = uVar1;
  iVar3 = DataInputStream::readBoolean(param_1);
  if (iVar3 != 0) {
    uVar4 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(puVar2 + 0xc) = uVar4;
  }
  iVar3 = DataInputStream::readBoolean(param_1);
  if (iVar3 != 0) {
    uVar4 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(puVar2 + 0x10) = uVar4;
  }
  iVar3 = DataInputStream::readBoolean(param_1);
  if (iVar3 != 0) {
    uVar4 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(puVar2 + 0x14) = uVar4;
  }
  return puVar2;
}


