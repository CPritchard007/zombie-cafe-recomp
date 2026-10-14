/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244ce0 ZombieCafe::getStaminaEventTime */

/* ZombieCafe::getStaminaEventTime(unsigned long, StaminaEventInfo*) */

void __thiscall
ZombieCafe::getStaminaEventTime(ZombieCafe *this,ulong param_1,StaminaEventInfo *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  
  uVar11 = Platform::getAppTime();
  uVar1 = __udivsi3(param_1,1000);
  iVar2 = getStaminaEventRecoverTime(this,false);
  if (iVar2 != DAT_00244da8) {
    uVar3 = __fixunsdfsi((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar6 = *(uint *)(this + 0x344);
    bVar9 = false;
    if (uVar6 < uVar3) {
      bVar9 = uVar3 < *(uint *)(this + 0x348);
    }
    uVar5 = uVar3 - uVar1;
    bVar10 = false;
    if (uVar6 < uVar5) {
      bVar10 = uVar5 < *(uint *)(this + 0x348);
    }
    if (bVar9) {
      if (bVar10) {
        iVar2 = 0;
        uVar8 = 0;
        uVar7 = uVar1;
      }
      else {
        uVar7 = uVar3 - uVar6;
        uVar8 = uVar1 - uVar7;
        iVar2 = 0;
      }
      goto LAB_00244d82;
    }
    if (bVar10) {
      iVar2 = uVar1 - (*(int *)(this + 0x348) - uVar5);
      uVar8 = 0;
      uVar7 = *(int *)(this + 0x348) - uVar5;
      goto LAB_00244d82;
    }
    if ((uVar5 <= uVar6) && (uVar4 = *(uint *)(this + 0x348), uVar4 <= uVar3)) {
      uVar8 = uVar6 - uVar5;
      iVar2 = uVar3 - uVar4;
      uVar7 = uVar4 - uVar6;
      goto LAB_00244d82;
    }
  }
  iVar2 = 0;
  uVar7 = 0;
  uVar8 = uVar1;
LAB_00244d82:
  if (((iVar2 < 0) || ((int)uVar8 < 0)) || ((int)uVar7 < 0)) {
    iVar2 = 0;
    uVar7 = 0;
    uVar8 = param_1;
  }
  *(ulong *)param_2 = uVar8;
  *(ulong *)(param_2 + 4) = uVar7;
  *(int *)(param_2 + 8) = iVar2;
  return;
}


