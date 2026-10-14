/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244b3c ZombieCafe::getStaminaEventRecoverTime */

/* ZombieCafe::getStaminaEventRecoverTime(bool) */

int __thiscall ZombieCafe::getStaminaEventRecoverTime(ZombieCafe *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1) {
    Platform::getAppTime();
    uVar1 = __fixunsdfsi();
    if (uVar1 < *(uint *)(this + 0x344)) {
      return DAT_00244b84;
    }
    if (*(uint *)(this + 0x348) < uVar1) {
      return DAT_00244b84;
    }
  }
  iVar2 = *(int *)(this + 0x340);
  iVar3 = 0x3c;
  if ((0x3b < iVar2) && (iVar3 = iVar2, 0xb4 < iVar2)) {
    iVar3 = 0xb4;
  }
  return iVar3 * DAT_00244b80;
}


