/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cd788 GameStateChangeHard::setTransferInfo */

/* GameStateChangeHard::setTransferInfo(void*, void*) */

void GameStateChangeHard::setTransferInfo(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  _func_void_void_ptr_uchar_ptr_uint *p_Var5;
  _func_void_void_ptr *p_Var6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char acStack_4 [4];
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = DAT_001cd7fc;
  puVar9 = (undefined4 *)(&stack0xfffffff0 + DAT_001cd7fc);
  puVar10 = (undefined4 *)(&stack0xfffffff0 + DAT_001cd7fc);
  puVar11 = (undefined4 *)(&stack0xfffffff0 + DAT_001cd7fc);
  iVar7 = DAT_001cd804 + 0x1cd79a;
  piVar8 = *(int **)(iVar7 + DAT_001cd800);
  *(int *)(&stack0x000001fc + DAT_001cd7fc) = *piVar8;
  *(undefined4 *)((int)param_2 + 0xcc) = 1;
  uVar2 = CCGetDeviceID();
  *puVar9 = *(undefined4 *)(iVar7 + DAT_001cd808);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar2;
  snprintf(acStack_4 + iVar1,0x200,(char *)(DAT_001cd80c + 0x1cd7b4),DAT_001cd810 + 0x1cd7b6);
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    setTransferInfoFaild(param_2);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar7 + DAT_001cd814);
    p_Var5 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar7 + DAT_001cd818);
    p_Var6 = *(_func_void_void_ptr **)(iVar7 + DAT_001cd81c);
    *puVar10 = param_2;
    CCServer::SetHitugiTransferInfo(pvVar4,acStack_4 + iVar1,p_Var5,p_Var6,(void *)*puVar11);
  }
  if (*(int *)(&stack0x000001fc + iVar1) != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


