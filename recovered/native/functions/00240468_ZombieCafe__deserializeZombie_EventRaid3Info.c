/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240468 ZombieCafe::deserializeZombie_EventRaid3Info */

/* ZombieCafe::deserializeZombie_EventRaid3Info(DataInputStream*) */

void __thiscall
ZombieCafe::deserializeZombie_EventRaid3Info(ZombieCafe *this,DataInputStream *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x228) = uVar2;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x234) = uVar2;
  uVar3 = DataInputStream::readDouble();
  *(undefined8 *)(this + 0x240) = uVar3;
  DataInputStream::readDouble();
  uVar2 = __fixdfsi();
  *(undefined4 *)(this + 0x22c) = uVar2;
  uVar1 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x230) = uVar1;
  uVar1 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + DAT_002404cc) = uVar1;
  uVar2 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x238) = uVar2;
  return;
}


