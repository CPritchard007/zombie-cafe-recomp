/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f270 GameStateSurvivalMenu::loadSurvivalGiftInfo */

/* GameStateSurvivalMenu::loadSurvivalGiftInfo(void*, void*) */

void GameStateSurvivalMenu::loadSurvivalGiftInfo(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  _func_void_void_ptr_uchar_ptr_uint *p_Var4;
  _func_void_void_ptr *p_Var5;
  int iVar6;
  char *__format;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar1 = DAT_0018f2e0;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_0018f2e0);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_0018f2e0);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0018f2e0);
  __format = (char *)(DAT_0018f2e8 + 0x18f280);
  iVar6 = DAT_0018f2ec + 0x18f284;
  piVar7 = *(int **)(iVar6 + DAT_0018f2e4);
  *(int *)(&stack0x000001f8 + DAT_0018f2e0) = *piVar7;
  printf(__format);
  *puVar8 = *(undefined4 *)(iVar6 + DAT_0018f2f0);
  snprintf(&stack0xfffffff8 + iVar1,0x200,(char *)(DAT_0018f2f4 + 0x18f29a),__format);
  iVar2 = javaIsConnected();
  if (iVar2 == 0) {
    SurvivalGiftInfoFailed(param_2);
  }
  else {
    pvVar3 = (void *)**(undefined4 **)(iVar6 + DAT_0018f2f8);
    p_Var4 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar6 + DAT_0018f2fc);
    p_Var5 = *(_func_void_void_ptr **)(iVar6 + DAT_0018f300);
    *puVar9 = param_2;
    CCServer::ColosseumGiftInfoData(pvVar3,&stack0xfffffff8 + iVar1,p_Var4,p_Var5,(void *)*puVar10);
  }
  if (*(int *)(&stack0x000001f8 + iVar1) != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


