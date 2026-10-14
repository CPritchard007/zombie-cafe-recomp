/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002407b4 ZombieCafe::isToxinCheat */

/* ZombieCafe::isToxinCheat() */

ZombieCafe __thiscall ZombieCafe::isToxinCheat(ZombieCafe *this)

{
  int iVar1;
  ZombieCafe ZVar2;
  int iVar3;
  
  ZVar2 = this[DAT_002407d8];
  if (ZVar2 != (ZombieCafe)0x0) {
    iVar3 = *(int *)(this + DAT_002407dc);
    iVar1 = getToxinVial(this);
    ZVar2 = (ZombieCafe)(iVar3 < iVar1);
  }
  return ZVar2;
}


