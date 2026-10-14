/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f304 GameStateSurvivalMenu::requestGetGift */

/* GameStateSurvivalMenu::requestGetGift(void*, void*) */

void GameStateSurvivalMenu::requestGetGift(void *param_1,void *param_2)

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
  
  iVar1 = DAT_0018f374;
  puVar8 = (undefined4 *)(&stack0xfffffff0 + DAT_0018f374);
  puVar9 = (undefined4 *)(&stack0xfffffff0 + DAT_0018f374);
  puVar10 = (undefined4 *)(&stack0xfffffff0 + DAT_0018f374);
  iVar6 = DAT_0018f380 + 0x18f318;
  piVar7 = *(int **)(iVar6 + DAT_0018f378);
  *(int *)(&stack0x000001fc + DAT_0018f374) = *piVar7;
  printf((char *)(DAT_0018f37c + 0x18f314));
  *puVar8 = *(undefined4 *)(iVar6 + DAT_0018f384);
  snprintf(acStack_4 + iVar1,0x200,(char *)(DAT_0018f388 + 0x18f32c),DAT_0018f38c + 0x18f32e);
  iVar2 = javaIsConnected();
  if (iVar2 == 0) {
    SurvivalGetGiftFailed(param_2);
  }
  else {
    pvVar3 = (void *)**(undefined4 **)(iVar6 + DAT_0018f390);
    p_Var4 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar6 + DAT_0018f394);
    p_Var5 = *(_func_void_void_ptr **)(iVar6 + DAT_0018f398);
    *puVar9 = param_2;
    CCServer::ColosseumGetGiftData(pvVar3,acStack_4 + iVar1,p_Var4,p_Var5,(void *)*puVar10);
  }
  if (*(int *)(&stack0x000001fc + iVar1) != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


