/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2350 CCMarketingView_ProcessAction */

void CCMarketingView_ProcessAction(CMarketingView *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char acStack_5c [64];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002c245c + 0x2c235c);
  local_1c = *piVar5;
  if ((*(int **)(param_1 + 0x2c) == (int *)0x0) || (iVar6 = **(int **)(param_1 + 0x2c), iVar6 == 0))
  goto LAB_002c2448;
  iVar1 = strcmp(param_2,(char *)(DAT_002c2460 + 0x2c237a));
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = strcmp(param_2,(char *)(DAT_002c2464 + 0x2c2390));
    if (iVar1 == 0) {
      uVar4 = *(undefined4 *)(iVar6 + DAT_002c2468);
    }
    else {
      iVar6 = strncmp(param_2,(char *)(DAT_002c246c + 0x2c23a6),9);
      if (iVar6 == 0) {
        strncpy((char *)(param_1 + 0xc4),param_2 + 9,0x104);
        uVar4 = *(undefined4 *)(**(int **)(param_1 + 0x2c) + DAT_002c2468);
      }
      else {
        iVar6 = strncmp(param_2,(char *)(DAT_002c2470 + 0x2c23d2),8);
        if (iVar6 == 0) {
          if (param_3 != 0) {
            uVar4 = CCSecondsSince1970();
            snprintf(acStack_5c,0x40,(char *)(DAT_002c2474 + 0x2c23ea),uVar4);
            CCAnalytics_RecordAnalyticsEventWithText(DAT_002c2478 + 0x2c23f8,param_2 + 8);
          }
          goto LAB_002c2448;
        }
        iVar6 = strncmp(param_2,(char *)(DAT_002c247c + 0x2c2406),5);
        if (iVar6 != 0) goto LAB_002c2448;
        uVar2 = L_GetPageIndexForName(param_1,param_2 + 5);
        uVar4 = L_GetNextRealPage(param_1,uVar2);
        if (param_3 != 0) {
          uVar3 = CCSecondsSince1970();
          snprintf(acStack_5c,0x40,(char *)(DAT_002c2480 + 0x2c2432),uVar3);
          CCAnalytics_RecordAnalyticsEventWithText(DAT_002c2484 + 0x2c243e,param_2 + 5);
        }
      }
    }
  }
  CCMarketingView_ClosePage(param_1,uVar4);
LAB_002c2448:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


