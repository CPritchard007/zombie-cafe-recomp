/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1c74 CCMarketing_RecordAnalyticsEventWithCustomTimestamp */

undefined8
CCMarketing_RecordAnalyticsEventWithCustomTimestamp
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  snprintf((char *)&uStack_18,6,(char *)(DAT_002c1c98 + 0x2c1c82),param_2);
  CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp(&uStack_18,param_3,param_4);
  return CONCAT44(uStack_14,uStack_18);
}


