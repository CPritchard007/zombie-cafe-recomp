/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244dac ZombieCafe::subEventRaid2_attackPointTimer2 */

/* ZombieCafe::subEventRaid2_attackPointTimer2(long) */

void __thiscall ZombieCafe::subEventRaid2_attackPointTimer2(ZombieCafe *this,long param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  
  getStaminaEventTime(this,param_1,(StaminaEventInfo *)&local_24);
  if ((0 < local_20) && (iVar1 = getStaminaEventFlag2(this), iVar1 == 0)) {
    *(undefined2 *)(this + 0x1cc) = 3;
    *(undefined4 *)(this + 0x1c8) = 0;
    setStaminaEventFlag2(this,1);
    return;
  }
  iVar1 = getStaminaEventRecoverTime(this,false);
  iVar3 = *(int *)(this + 0x1c8);
  if (param_1 < iVar3) {
    *(int *)(this + 0x1c8) = iVar3 - param_1;
    return;
  }
  if (0 < local_24) {
    iVar4 = local_24 * 1000;
    if (iVar3 == iVar4 || iVar3 + local_24 * -1000 < 0 != SBORROW4(iVar3,iVar4)) {
      iVar4 = iVar4 - iVar3;
      sVar2 = *(short *)(this + 0x1cc);
      while (sVar2 = sVar2 + 1, sVar2 < 3) {
        if (iVar4 <= DAT_00244efc) {
          *(short *)(this + 0x1cc) = sVar2;
          *(int *)(this + 0x1c8) = DAT_00244f00 - iVar4;
          goto LAB_00244e38;
        }
        iVar4 = iVar4 + DAT_00244f04;
      }
      *(undefined2 *)(this + 0x1cc) = 3;
      goto LAB_00244ec2;
    }
    *(int *)(this + 0x1c8) = iVar3 + DAT_00244ef8 * local_24;
  }
LAB_00244e38:
  if (0 < local_20) {
    iVar3 = local_20 * 1000;
    iVar4 = *(int *)(this + 0x1c8);
    if (iVar4 == iVar3 || iVar4 + local_20 * -1000 < 0 != SBORROW4(iVar4,iVar3)) {
      iVar3 = iVar3 - iVar4;
      sVar2 = *(short *)(this + 0x1cc);
      while (sVar2 = sVar2 + 1, sVar2 < 3) {
        if (iVar3 < iVar1) {
          *(short *)(this + 0x1cc) = sVar2;
          *(int *)(this + 0x1c8) = iVar1 - iVar3;
          goto LAB_00244e86;
        }
        iVar3 = iVar3 - iVar1;
      }
      *(undefined2 *)(this + 0x1cc) = 3;
      goto LAB_00244ec2;
    }
    *(int *)(this + 0x1c8) = iVar4 + DAT_00244ef8 * local_20;
  }
LAB_00244e86:
  if (local_1c < 1) {
    return;
  }
  iVar1 = local_1c * 1000;
  iVar3 = *(int *)(this + 0x1c8);
  if (iVar3 != iVar1 && iVar3 + local_1c * -1000 < 0 == SBORROW4(iVar3,iVar1)) {
    *(int *)(this + 0x1c8) = iVar3 + DAT_00244ef8 * local_1c;
    return;
  }
  iVar1 = iVar1 - iVar3;
  sVar2 = *(short *)(this + 0x1cc);
  while (sVar2 = sVar2 + 1, sVar2 < 3) {
    if (iVar1 <= DAT_00244efc) {
      *(short *)(this + 0x1cc) = sVar2;
      *(int *)(this + 0x1c8) = DAT_00244f00 - iVar1;
      return;
    }
    iVar1 = iVar1 + DAT_00244f04;
  }
  *(undefined2 *)(this + 0x1cc) = 3;
LAB_00244ec2:
  *(undefined4 *)(this + 0x1c8) = 0;
  return;
}


