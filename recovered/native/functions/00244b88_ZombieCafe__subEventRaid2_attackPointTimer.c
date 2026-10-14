/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244b88 ZombieCafe::subEventRaid2_attackPointTimer */

/* ZombieCafe::subEventRaid2_attackPointTimer(long) */

void __thiscall ZombieCafe::subEventRaid2_attackPointTimer(ZombieCafe *this,long param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar1 = checkStaminaEventTime(this);
  if ((iVar1 == 0) || (iVar1 = getStaminaEventFlag2(this), iVar1 != 0)) {
    iVar1 = getStaminaEventRecoverTime(this,true);
    iVar3 = *(int *)(this + 0x1c8);
    if (param_1 < iVar3) {
      *(int *)(this + 0x1c8) = iVar3 - param_1;
    }
    else {
      iVar3 = param_1 - iVar3;
      sVar2 = *(short *)(this + 0x1cc);
      while (sVar2 = sVar2 + 1, sVar2 < 3) {
        if (iVar3 < iVar1) {
          *(short *)(this + 0x1cc) = sVar2;
          *(int *)(this + 0x1c8) = iVar1 - iVar3;
          return;
        }
        iVar3 = iVar3 - iVar1;
      }
      *(undefined2 *)(this + 0x1cc) = 3;
      *(undefined4 *)(this + 0x1c8) = 0;
    }
  }
  else {
    setStaminaEventFlag2(this,1);
    *(undefined2 *)(this + 0x1cc) = 3;
    *(undefined4 *)(this + 0x1c8) = 0;
  }
  return;
}


