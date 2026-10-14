/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a224 ZombieCafe::getSuitableNotificationTime */

/* ZombieCafe::getSuitableNotificationTime(CapcomDate, bool) */

undefined4 *
ZombieCafe::getSuitableNotificationTime
          (undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CapcomDate aCStack_20 [12];
  
  iVar1 = *(int *)(param_2 + 0x960);
  iVar2 = *(int *)(param_2 + DAT_0023a2f0);
  local_30 = param_3;
  local_2c = param_4;
  if ((iVar1 == iVar2) || (*(char *)(param_2 + DAT_0023a2f4) == '\0')) {
LAB_0023a2ac:
    memcpy(param_1,&local_30,7);
    goto LAB_0023a2b6;
  }
  param_4 = param_4 & 0xff;
  if (iVar1 < iVar2) {
    if (((int)param_4 < iVar1) || (iVar2 <= (int)param_4)) goto LAB_0023a2ac;
    if (param_5 == '\0') {
LAB_0023a2a0:
      memcpy(param_1,&local_30,7);
LAB_0023a2a4:
      *(char *)(param_1 + 1) = (char)iVar2;
      *(char *)((int)param_1 + 5) = param_5;
      *(char *)((int)param_1 + 6) = param_5;
      goto LAB_0023a2b6;
    }
LAB_0023a26e:
    memcpy(param_1,&local_30,7);
  }
  else {
    if (iVar1 <= (int)param_4) {
      if (param_5 == '\0') {
        memcpy(param_1,&local_30,7);
        *(char *)((int)param_1 + 3) = *(char *)((int)param_1 + 3) + '\x01';
        goto LAB_0023a2a4;
      }
      goto LAB_0023a26e;
    }
    if (iVar2 <= (int)param_4) goto LAB_0023a2ac;
    if (param_5 == '\0') goto LAB_0023a2a0;
    memcpy(param_1,&local_30,7);
    *(char *)((int)param_1 + 3) = *(char *)((int)param_1 + 3) + -1;
  }
  *(char *)(param_1 + 1) = (char)iVar1;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
LAB_0023a2b6:
  CapcomDate::now((CapcomDate *)&local_28);
  iVar1 = CapcomDate::secondsBetween(local_28,local_24,*param_1,param_1[1]);
  if (iVar1 < 0) {
    CapcomDate::from1970Offset(aCStack_20,0);
    memcpy(param_1,aCStack_20,7);
  }
  return param_1;
}


