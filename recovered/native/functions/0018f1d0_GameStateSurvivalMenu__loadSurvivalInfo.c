/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f1d0 GameStateSurvivalMenu::loadSurvivalInfo */

/* GameStateSurvivalMenu::loadSurvivalInfo(void*, void*) */

void GameStateSurvivalMenu::loadSurvivalInfo(void *param_1,void *param_2)

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
  
  iVar1 = DAT_0018f24c;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_0018f24c);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_0018f24c);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0018f24c);
  __format = (char *)(DAT_0018f254 + 0x18f1e0);
  iVar6 = DAT_0018f258 + 0x18f1e4;
  piVar7 = *(int **)(iVar6 + DAT_0018f250);
  *(int *)(&stack0x000001f8 + DAT_0018f24c) = *piVar7;
  printf(__format);
  *(undefined1 *)((int)param_2 + 0x58) = 0;
  *(undefined4 *)((int)param_2 + 0x70) = 1;
  *puVar8 = *(undefined4 *)(iVar6 + DAT_0018f25c);
  snprintf(&stack0xfffffff8 + iVar1,0x200,(char *)(DAT_0018f260 + 0x18f206),__format);
  iVar2 = javaIsConnected();
  if (iVar2 == 0) {
    SurvivalInfoFailed(param_2);
  }
  else {
    pvVar3 = (void *)**(undefined4 **)(iVar6 + DAT_0018f264);
    p_Var4 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar6 + DAT_0018f268);
    p_Var5 = *(_func_void_void_ptr **)(iVar6 + DAT_0018f26c);
    *puVar9 = param_2;
    CCServer::ColosseumData(pvVar3,&stack0xfffffff8 + iVar1,p_Var4,p_Var5,(void *)*puVar10);
  }
  if (*(int *)(&stack0x000001f8 + iVar1) != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


