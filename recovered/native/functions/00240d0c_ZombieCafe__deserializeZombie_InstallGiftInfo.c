/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240d0c ZombieCafe::deserializeZombie_InstallGiftInfo */

/* ZombieCafe::deserializeZombie_InstallGiftInfo(DataInputStream*) */

void __thiscall
ZombieCafe::deserializeZombie_InstallGiftInfo(ZombieCafe *this,DataInputStream *param_1)

{
  ZombieCafe ZVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (**(int **)(DAT_00240d54 + 0x240d18) < 0x65) {
    do {
      ZVar1 = (ZombieCafe)DataInputStream::readBoolean(param_1);
      iVar2 = iVar3 + 1;
      this[DAT_00240d58 + iVar3] = ZVar1;
      iVar3 = iVar2;
    } while (iVar2 != 4);
    this[0x4a0] = (ZombieCafe)0x0;
  }
  else {
    do {
      ZVar1 = (ZombieCafe)DataInputStream::readBoolean(param_1);
      iVar2 = iVar3 + 1;
      this[DAT_00240d58 + iVar3] = ZVar1;
      iVar3 = iVar2;
    } while (iVar2 != 5);
  }
  return;
}


