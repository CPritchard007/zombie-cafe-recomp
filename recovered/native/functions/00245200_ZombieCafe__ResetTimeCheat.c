/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245200 ZombieCafe::ResetTimeCheat */

/* ZombieCafe::ResetTimeCheat() */

void __thiscall ZombieCafe::ResetTimeCheat(ZombieCafe *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  CapcomDate aCStack_28 [8];
  CapcomDate aCStack_20 [12];
  
  uVar2 = DAT_002452b4;
  uVar1 = DAT_002452b0;
  *(undefined4 *)(this + 0x138) = DAT_002452b0;
  *(undefined4 *)(this + 0x13c) = uVar2;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  *(undefined4 *)(this + 0x1e4) = uVar2;
  *(undefined4 *)(this + 0x240) = uVar1;
  *(undefined4 *)(this + 0x244) = uVar2;
  *(undefined4 *)(this + 0x318) = uVar1;
  *(undefined4 *)(this + 0x31c) = uVar2;
  *(undefined4 *)(this + 0x330) = uVar1;
  *(undefined4 *)(this + 0x334) = uVar2;
  uVar2 = DAT_002452bc;
  uVar1 = DAT_002452b8;
  *(undefined4 *)(this + 0x370) = DAT_002452b8;
  *(undefined4 *)(this + 0x374) = uVar2;
  *(undefined4 *)(this + 0x378) = uVar1;
  *(undefined4 *)(this + 0x37c) = uVar2;
  *(undefined2 *)(this + 0x36c) = 0;
  this[DAT_002452c0] = (ZombieCafe)0x1;
  CapcomDate::from1970Offset(aCStack_28,0);
  memcpy(this + DAT_002452c4,aCStack_28,7);
  this[0x950] = (ZombieCafe)0x0;
  iVar3 = DAT_002452cc * (uint)**(byte **)(DAT_002452c8 + 0x245286);
  *(int *)(this + 0x940) = iVar3;
  *(int *)(this + 0x944) = iVar3 >> 0x1f;
  CapcomDate::from1970Offset(aCStack_20,0);
  memcpy(this + DAT_002452d0,aCStack_20,7);
  return;
}


