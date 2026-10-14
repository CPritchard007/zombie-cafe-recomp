/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f39c GameStateSurvivalMenu::requestGotGift */

/* GameStateSurvivalMenu::requestGotGift(void*, void*) */

void GameStateSurvivalMenu::requestGotGift(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  _func_void_void_ptr_uchar_ptr_uint *p_Var4;
  _func_void_void_ptr *p_Var5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  char acStack_4 [4];
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar1 = DAT_0018f410;
  puVar8 = (undefined4 *)(&stack0xfffffff0 + DAT_0018f410);
  puVar9 = (undefined4 *)(&stack0xfffffff0 + DAT_0018f410);
  puVar10 = (undefined4 *)(&stack0xfffffff0 + DAT_0018f410);
  iVar6 = DAT_0018f418 + 0x18f3ac;
  piVar7 = *(int **)(iVar6 + DAT_0018f414);
  *(int *)(&stack0x000001fc + DAT_0018f410) = *piVar7;
  CapcomApp::getInstance();
  *puVar8 = *(undefined4 *)(iVar6 + DAT_0018f41c);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = **(undefined4 **)(iVar6 + DAT_0018f428);
  snprintf(acStack_4 + iVar1,0x200,(char *)(DAT_0018f420 + 0x18f3c0),DAT_0018f424 + 0x18f3c2);
  iVar2 = javaIsConnected();
  if (iVar2 == 0) {
    SurvivalGotGiftFailed(param_2);
  }
  else {
    pvVar3 = (void *)**(undefined4 **)(iVar6 + DAT_0018f42c);
    p_Var4 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar6 + DAT_0018f430);
    p_Var5 = *(_func_void_void_ptr **)(iVar6 + DAT_0018f434);
    *puVar9 = param_2;
    CCServer::ColosseumGotGiftData(pvVar3,acStack_4 + iVar1,p_Var4,p_Var5,(void *)*puVar10);
  }
  if (*(int *)(&stack0x000001fc + iVar1) != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


