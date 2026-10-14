/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cd990 GameStateChangeHard::gotTransferInfo */

/* GameStateChangeHard::gotTransferInfo(void*, void*, int) */

void GameStateChangeHard::gotTransferInfo(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  JSONTakeOverData *this;
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
  
  iVar1 = DAT_001cda0c;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_001cda0c);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_001cda0c);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_001cda0c);
  iVar7 = DAT_001cda14 + 0x1cd9a4;
  piVar8 = *(int **)(iVar7 + DAT_001cda10);
  *(int *)(&stack0x00000200 + DAT_001cda0c) = *piVar8;
  *(undefined4 *)((int)param_2 + 0xcc) = 1;
  this = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  uVar2 = JSONTakeOverData::GetTransferID(this);
  *puVar9 = *(undefined4 *)(iVar7 + DAT_001cda18);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
  *(int *)(&stack0xfffffff4 + iVar1) = param_3;
  snprintf(&stack0x00000000 + iVar1,0x200,(char *)(DAT_001cda1c + 0x1cd9c2),DAT_001cda20 + 0x1cd9c4)
  ;
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    gotTransferInfoFaild(param_2);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar7 + DAT_001cda24);
    p_Var5 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar7 + DAT_001cda28);
    p_Var6 = *(_func_void_void_ptr **)(iVar7 + DAT_001cda2c);
    *puVar10 = param_2;
    CCServer::GotHitugiTransferInfo(pvVar4,&stack0x00000000 + iVar1,p_Var5,p_Var6,(void *)*puVar11);
  }
  if (*(int *)(&stack0x00000200 + iVar1) != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


