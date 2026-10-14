/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1c1c CCMarketing_RecordAnalyticsEvent */

undefined8 CCMarketing_RecordAnalyticsEvent(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(DAT_002c1c6c + 0x2c1c30);
  pcVar2 = (char *)(DAT_002c1c64 + 0x2c1c32);
  uStack_20 = param_1;
  pcStack_1c = param_2;
  uStack_18 = param_3;
  snprintf((char *)&uStack_20,6,(char *)(DAT_002c1c68 + 0x2c1c2e),param_2);
  L_PrintLog(pcVar2,pcVar3);
  L_PrintLog((char *)(DAT_002c1c70 + 0x2c1c48),param_2);
  L_PrintLog(pcVar2,pcVar3);
  uVar1 = CCSecondsSince1970();
  CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp(&uStack_20,param_3,uVar1);
  return CONCAT44(pcStack_1c,uStack_20);
}


