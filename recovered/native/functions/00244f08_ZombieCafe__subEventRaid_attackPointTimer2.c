/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244f08 ZombieCafe::subEventRaid_attackPointTimer2 */

/* ZombieCafe::subEventRaid_attackPointTimer2(long) */

void __thiscall ZombieCafe::subEventRaid_attackPointTimer2(ZombieCafe *this,long param_1)

{
  int iVar1;
  ZombieCafe *pZVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  
  getStaminaEventTime(this,param_1,(StaminaEventInfo *)&local_1c);
  if ((0 < local_18) && (iVar1 = getStaminaEventFlag1(this), iVar1 == 0)) {
    *(undefined2 *)(this + 0xfc) = 3;
    *(undefined4 *)(this + 0xf8) = 0;
    setStaminaEventFlag1(this,1);
    return;
  }
  iVar1 = getStaminaEventRecoverTime(this,false);
  pZVar2 = this + 0xf8;
  iVar4 = *(int *)pZVar2;
  if (param_1 < iVar4) {
    *(int *)pZVar2 = iVar4 - param_1;
    return;
  }
  if (0 < local_1c) {
    iVar5 = local_1c * 1000;
    if (iVar4 == iVar5 || iVar4 + local_1c * -1000 < 0 != SBORROW4(iVar4,iVar5)) {
      iVar5 = iVar5 - iVar4;
      sVar3 = *(short *)(this + 0xfc);
      while (sVar3 = sVar3 + 1, sVar3 < 3) {
        if (iVar5 <= DAT_00245064) {
          *(short *)(this + 0xfc) = sVar3;
          *(int *)(this + 0xf8) = DAT_00245068 - iVar5;
          goto LAB_00244f92;
        }
        iVar5 = iVar5 + DAT_0024506c;
      }
      goto LAB_0024501a;
    }
    *(int *)pZVar2 = iVar4 + DAT_00245060 * local_1c;
  }
LAB_00244f92:
  if (0 < local_18) {
    iVar4 = local_18 * 1000;
    iVar5 = *(int *)(this + 0xf8);
    if (iVar5 == iVar4 || iVar5 + local_18 * -1000 < 0 != SBORROW4(iVar5,iVar4)) {
      iVar4 = iVar4 - iVar5;
      sVar3 = *(short *)(this + 0xfc);
      while (sVar3 = sVar3 + 1, sVar3 < 3) {
        if (iVar4 < iVar1) {
          *(short *)(this + 0xfc) = sVar3;
          *(int *)(this + 0xf8) = iVar1 - iVar4;
          goto LAB_00244fe2;
        }
        iVar4 = iVar4 - iVar1;
      }
      goto LAB_0024501a;
    }
    *(int *)(this + 0xf8) = iVar5 + DAT_00245060 * local_18;
  }
LAB_00244fe2:
  if (local_14 < 1) {
    return;
  }
  iVar1 = local_14 * 1000;
  iVar4 = *(int *)(this + 0xf8);
  if (iVar4 != iVar1 && iVar4 + local_14 * -1000 < 0 == SBORROW4(iVar4,iVar1)) {
    *(int *)(this + 0xf8) = iVar4 + DAT_00245060 * local_14;
    return;
  }
  iVar1 = iVar1 - iVar4;
  sVar3 = *(short *)(this + 0xfc);
  while (sVar3 = sVar3 + 1, sVar3 < 3) {
    if (iVar1 <= DAT_00245064) {
      *(short *)(this + 0xfc) = sVar3;
      *(int *)(this + 0xf8) = DAT_00245068 - iVar1;
      return;
    }
    iVar1 = iVar1 + DAT_0024506c;
  }
LAB_0024501a:
  *(undefined2 *)(this + 0xfc) = 3;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}


