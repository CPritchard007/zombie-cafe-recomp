/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240694 ZombieCafe::subEventRaid3_attackPointTimer */

/* ZombieCafe::subEventRaid3_attackPointTimer(long) */

void __thiscall ZombieCafe::subEventRaid3_attackPointTimer(ZombieCafe *this,long param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x22c);
  if (param_1 < iVar2) {
    *(int *)(this + 0x22c) = iVar2 - param_1;
  }
  else {
    iVar2 = param_1 - iVar2;
    sVar1 = *(short *)(this + 0x230);
    while (sVar1 = sVar1 + 1, sVar1 < 3) {
      if (iVar2 <= DAT_002406e0) {
        *(short *)(this + 0x230) = sVar1;
        *(int *)(this + 0x22c) = DAT_002406e4 - iVar2;
        return;
      }
      iVar2 = iVar2 + DAT_002406e8;
    }
    *(undefined2 *)(this + 0x230) = 3;
    *(undefined4 *)(this + 0x22c) = 0;
  }
  return;
}


