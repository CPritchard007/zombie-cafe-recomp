/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1168 CCAnalytics_RecordAnalyticsEvent */

void CCAnalytics_RecordAnalyticsEvent(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = CCSecondsSince1970();
  CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp(param_1,DAT_002c1180 + 0x2c117a,uVar1);
  return;
}


