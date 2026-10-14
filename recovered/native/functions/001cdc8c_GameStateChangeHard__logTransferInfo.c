/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cdc8c GameStateChangeHard::logTransferInfo */

/* GameStateChangeHard::logTransferInfo(void*, void*, int) */

void GameStateChangeHard::logTransferInfo(void *param_1,void *param_2,int param_3)

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
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = DAT_001cdcfc;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_001cdcfc);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_001cdcfc);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_001cdcfc);
  iVar7 = DAT_001cdd04 + 0x1cdc9e;
  piVar8 = *(int **)(iVar7 + DAT_001cdd00);
  *(int *)(&stack0x00000200 + DAT_001cdcfc) = *piVar8;
  uVar2 = CCGetDeviceID();
  *puVar9 = *(undefined4 *)(iVar7 + DAT_001cdd08);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
  *(int *)(&stack0xfffffff4 + iVar1) = param_3;
  snprintf(&stack0x00000000 + iVar1,0x200,(char *)(DAT_001cdd0c + 0x1cdcb2),DAT_001cdd10 + 0x1cdcb4)
  ;
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    logTransferInfoFaild(param_2);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar7 + DAT_001cdd14);
    p_Var5 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar7 + DAT_001cdd18);
    p_Var6 = *(_func_void_void_ptr **)(iVar7 + DAT_001cdd1c);
    *puVar10 = param_2;
    CCServer::logHitugiTransferInfo(pvVar4,&stack0x00000000 + iVar1,p_Var5,p_Var6,(void *)*puVar11);
  }
  if (*(int *)(&stack0x00000200 + iVar1) != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


