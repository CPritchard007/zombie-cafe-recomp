/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244a4c ZombieCafe::deserializeZombie_basicEventInfo */

/* ZombieCafe::deserializeZombie_basicEventInfo(DataInputStream*) */

void __thiscall
ZombieCafe::deserializeZombie_basicEventInfo(ZombieCafe *this,DataInputStream *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_00244ab0 + 0x244a58);
  if (0x69 < *piVar2) {
    uVar1 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x340) = uVar1;
    uVar1 = DataInputStream::readLong(param_1);
    *(undefined4 *)(this + 0x344) = uVar1;
    uVar1 = DataInputStream::readLong(param_1);
    *(undefined4 *)(this + 0x348) = uVar1;
    uVar1 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x34c) = uVar1;
    uVar1 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x350) = uVar1;
  }
  if (0x77 < *piVar2) {
    uVar1 = DataInputStream::readInt(param_1);
    *(undefined4 *)(this + 0x354) = uVar1;
  }
  return;
}


