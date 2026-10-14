/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f9dc ZombieCafe::deserializeZombie_EventRaidInfo */

/* ZombieCafe::deserializeZombie_EventRaidInfo(DataInputStream*) */

undefined8 __thiscall
ZombieCafe::deserializeZombie_EventRaidInfo(ZombieCafe *this,DataInputStream *param_1)

{
  ZombieCafe ZVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  ZombieCafe *pZVar6;
  undefined8 uVar7;
  ZombieCafe *local_1c;
  
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0xe0) = uVar3;
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0xe4) = uVar3;
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0xe8) = uVar3;
  uVar3 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0xec) = uVar3;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0xf0) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0xf4) = uVar2;
  iVar5 = 0;
  pZVar6 = this;
  local_1c = this;
  do {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(pZVar6 + 0xfe) = uVar2;
    ZVar1 = (ZombieCafe)DataInputStream::readBoolean(param_1);
    this[iVar5 + 0x10e] = ZVar1;
    uVar3 = DataInputStream::readInt(param_1);
    iVar5 = iVar5 + 1;
    pZVar6 = pZVar6 + 2;
    *(undefined4 *)(local_1c + 0x118) = uVar3;
    local_1c = local_1c + 4;
  } while (iVar5 != 8);
  uVar7 = DataInputStream::readDouble();
  piVar4 = *(int **)(DAT_0023fa98 + 0x23fa76);
  *(undefined8 *)(this + 0x138) = uVar7;
  if (0x61 < *piVar4) {
    DataInputStream::readDouble();
    uVar3 = __fixdfsi();
    *(undefined4 *)(this + 0xf8) = uVar3;
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0xfc) = uVar2;
  }
  return CONCAT44(local_1c,this);
}


