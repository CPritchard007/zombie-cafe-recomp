/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f51c ZombieCafe::deserializeZombieFlowerInfo */

/* ZombieCafe::deserializeZombieFlowerInfo(DataInputStream*) */

void __thiscall ZombieCafe::deserializeZombieFlowerInfo(ZombieCafe *this,DataInputStream *param_1)

{
  int iVar1;
  ZombieCafe ZVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar3 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x358) = uVar3;
  uVar3 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x35c) = uVar3;
  uVar3 = DataInputStream::readShort(param_1);
  iVar6 = DAT_0023f5e8;
  *(undefined2 *)(this + DAT_0023f5e4) = uVar3;
  uVar3 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x360) = uVar3;
  uVar3 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + DAT_0023f5ec) = uVar3;
  uVar3 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x364) = uVar3;
  uVar4 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x368) = uVar4;
  uVar3 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x36c) = uVar3;
  uVar7 = DataInputStream::readDouble();
  *(undefined8 *)(this + 0x378) = uVar7;
  uVar7 = DataInputStream::readDouble();
  piVar5 = *(int **)(iVar6 + 0x23f55e);
  *(undefined8 *)(this + 0x370) = uVar7;
  if (0x55 < *piVar5) {
    ZVar2 = (ZombieCafe)DataInputStream::readBoolean(param_1);
    this[1000] = ZVar2;
  }
  if (0x6a < *piVar5) {
    uVar4 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x380) = uVar4;
    iVar6 = 0;
    do {
      uVar4 = DataInputStream::readInt(param_1);
      iVar1 = iVar6 + 900;
      iVar6 = iVar6 + 4;
      *(undefined4 *)(this + iVar1) = uVar4;
    } while (iVar6 != 0x20);
  }
  return;
}


