/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240e94 ZombieCafe::deserializeZombie_AmpouleRaidInfo */

/* ZombieCafe::deserializeZombie_AmpouleRaidInfo(DataInputStream*) */

undefined8 __thiscall
ZombieCafe::deserializeZombie_AmpouleRaidInfo(ZombieCafe *this,DataInputStream *param_1)

{
  ZombieCafe ZVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ZombieCafe *pZVar4;
  int iVar5;
  int iVar6;
  ZombieCafe *pZVar7;
  undefined8 uVar8;
  ZombieCafe *local_1c;
  
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x2c8) = uVar3;
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x2cc) = uVar3;
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x2d0) = uVar3;
  uVar3 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x2d4) = uVar3;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x2d8) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x2dc) = uVar2;
  iVar5 = 0;
  pZVar7 = this;
  local_1c = this;
  do {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(pZVar7 + DAT_00240f30) = uVar2;
    ZVar1 = (ZombieCafe)DataInputStream::readBoolean(param_1);
    iVar6 = iVar5 + 1;
    this[DAT_00240f34 + iVar5] = ZVar1;
    uVar3 = DataInputStream::readInt(param_1);
    pZVar4 = local_1c + 0x2f8;
    local_1c = local_1c + 4;
    *(undefined4 *)pZVar4 = uVar3;
    pZVar7 = pZVar7 + 2;
    iVar5 = iVar6;
  } while (iVar6 != 8);
  uVar8 = DataInputStream::readDouble();
  *(undefined8 *)(this + 0x318) = uVar8;
  return CONCAT44(local_1c,this);
}


