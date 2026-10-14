/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bd2c GameStateCafe::getEventValue */

/* GameStateCafe::getEventValue(void*, void*) */

void __thiscall GameStateCafe::getEventValue(GameStateCafe *this,void *param_1,void *param_2)

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
  int iStack_4;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = DAT_0011bdb0;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_0011bdb0);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0011bdb0);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0011bdb0);
  iVar7 = DAT_0011bdb8 + 0x11bd3e;
  piVar8 = *(int **)(iVar7 + DAT_0011bdb4);
  *(int *)(&stack0x00000208 + DAT_0011bdb0) = *piVar8;
  uVar2 = CCGetDeviceID();
  *puVar9 = uVar2;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(*(int *)(this + 0xc) + 0x680);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(iVar7 + DAT_0011bdc4);
  *(int *)(&stack0xfffffff8 + iVar1) = DAT_0011bdc8 + 0x11bd68;
  *(int *)((int)&iStack_4 + iVar1) = DAT_0011bdcc + 0x11bd6e;
  snprintf(&stack0x00000008 + iVar1,0x200,(char *)(DAT_0011bdbc + 0x11bd5c),DAT_0011bdc0 + 0x11bd5e)
  ;
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    GetEventValueInfoFailed(this);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar7 + DAT_0011bdd0);
    p_Var5 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar7 + DAT_0011bdd4);
    p_Var6 = *(_func_void_void_ptr **)(iVar7 + DAT_0011bdd8);
    *puVar10 = param_2;
    CCServer::GetEventValueData(pvVar4,&stack0x00000008 + iVar1,p_Var5,p_Var6,(void *)*puVar11);
  }
  if (*(int *)(&stack0x00000208 + iVar1) != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


