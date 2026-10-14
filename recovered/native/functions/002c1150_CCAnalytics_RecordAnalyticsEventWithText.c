/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1150 CCAnalytics_RecordAnalyticsEventWithText */

void CCAnalytics_RecordAnalyticsEventWithText(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = CCSecondsSince1970();
  CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp(param_1,param_2,uVar1);
  return;
}


