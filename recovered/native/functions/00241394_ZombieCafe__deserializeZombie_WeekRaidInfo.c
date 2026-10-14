/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241394 ZombieCafe::deserializeZombie_WeekRaidInfo */

/* ZombieCafe::deserializeZombie_WeekRaidInfo(DataInputStream*) */

void __thiscall
ZombieCafe::deserializeZombie_WeekRaidInfo(ZombieCafe *this,DataInputStream *param_1)

{
  int iVar1;
  ZombieCafe ZVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 800) = uVar4;
  uVar4 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x324) = uVar4;
  uVar4 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x338) = uVar4;
  uVar7 = DataInputStream::readDouble();
  piVar5 = *(int **)(DAT_00241418 + 0x2413ce);
  *(undefined8 *)(this + 0x330) = uVar7;
  if (0x62 < *piVar5) {
    DataInputStream::readDouble();
    uVar4 = __fixdfsi();
    *(undefined4 *)(this + 0x328) = uVar4;
    uVar3 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x32c) = uVar3;
  }
  if (0x6f < *piVar5) {
    iVar6 = 0;
    do {
      ZVar2 = (ZombieCafe)DataInputStream::readByte(param_1);
      iVar1 = iVar6 + 0x33c;
      iVar6 = iVar6 + 1;
      this[iVar1] = ZVar2;
    } while (iVar6 != 4);
  }
  return;
}


