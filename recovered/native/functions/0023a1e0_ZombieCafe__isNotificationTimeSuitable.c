/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a1e0 ZombieCafe::isNotificationTimeSuitable */

/* ZombieCafe::isNotificationTimeSuitable(CapcomDate) */

undefined8 ZombieCafe::isNotificationTimeSuitable(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x960);
  uVar2 = *(uint *)(param_1 + DAT_0023a21c);
  param_3 = param_3 & 0xff;
  iVar1 = 1;
  if ((uVar3 != uVar2) && (*(char *)(param_1 + DAT_0023a220) != '\0')) {
    if ((int)uVar3 < (int)uVar2) {
      if ((int)param_3 < (int)uVar3) goto LAB_0023a218;
    }
    else {
      iVar1 = 0;
      if ((int)uVar3 <= (int)param_3) goto LAB_0023a218;
    }
    iVar1 = (uint)(uVar2 <= param_3) - ((int)uVar2 >> 0x1f);
  }
LAB_0023a218:
  return CONCAT44(param_1,iVar1);
}


