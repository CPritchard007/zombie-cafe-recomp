/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fe68 ZombieCafe::deserializeZombie_EventRaid2Info */

/* ZombieCafe::deserializeZombie_EventRaid2Info(DataInputStream*) */

void __thiscall
ZombieCafe::deserializeZombie_EventRaid2Info(ZombieCafe *this,DataInputStream *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x1c0) = uVar3;
  uVar3 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x1c4) = uVar3;
  uVar6 = DataInputStream::readDouble();
  *(undefined8 *)(this + 0x1e0) = uVar6;
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x1d0) = uVar3;
  uVar3 = DataInputStream::readLong(param_1);
  piVar5 = *(int **)(DAT_0023ff40 + 0x23feb2);
  *(undefined4 *)(this + 0x1d4) = uVar3;
  if (0x66 < *piVar5) {
    DataInputStream::readDouble();
    uVar3 = __fixdfsi();
    *(undefined4 *)(this + 0x1c8) = uVar3;
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x1cc) = uVar2;
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x1ce) = uVar2;
  }
  if (0x6a < *piVar5) {
    iVar4 = 0;
    if (*piVar5 < 0x70) {
      do {
        uVar2 = DataInputStream::readShort(param_1);
        iVar1 = iVar4 + 0x1e8;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(this + iVar1) = uVar2;
      } while (iVar4 != 0x28);
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 0x210;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(this + iVar1) = 0;
      } while (iVar4 != 0x16);
    }
    else {
      do {
        uVar2 = DataInputStream::readShort(param_1);
        iVar1 = iVar4 + 0x1e8;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(this + iVar1) = uVar2;
      } while (iVar4 != 0x3e);
    }
  }
  if (0x71 < *piVar5) {
    uVar3 = DataInputStream::readLong(param_1);
    *(undefined4 *)(this + 0x1d8) = uVar3;
  }
  return;
}


