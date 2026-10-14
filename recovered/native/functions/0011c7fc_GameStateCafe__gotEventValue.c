/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011c7fc GameStateCafe::gotEventValue */

/* GameStateCafe::gotEventValue(void*, void*) */

void __thiscall GameStateCafe::gotEventValue(GameStateCafe *this,void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  _func_void_void_ptr_uchar_ptr_uint *p_Var3;
  _func_void_void_ptr *p_Var4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *__format;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_4;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = DAT_0011c8b0;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_0011c8b0);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0011c8b0);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0011c8b0);
  *(GameStateCafe **)(&stack0xfffffff8 + DAT_0011c8b0) = this;
  *(void **)((int)&uStack_4 + DAT_0011c8b0) = param_2;
  iVar5 = DAT_0011c8b8 + 0x11c810;
  puVar7 = *(undefined4 **)(iVar5 + DAT_0011c8b4);
  *(undefined4 *)(&stack0x00000308 + DAT_0011c8b0) = *puVar7;
  *(undefined4 *)(&stack0xfffffff4 + DAT_0011c8b0) = **(undefined4 **)(iVar5 + DAT_0011c8c0);
  snprintf(&stack0x00000108 + DAT_0011c8b0,0x200,(char *)(DAT_0011c8bc + 0x11c81a),
           DAT_0011c8c4 + 0x11c82c);
  snprintf(&stack0x00000008 + iVar1,0x80,(char *)(DAT_0011c8c8 + 0x11c838),
           *(undefined4 *)(&stack0xfffffff4 + iVar1));
  strcat(&stack0x00000108 + iVar1,&stack0x00000008 + iVar1);
  puVar6 = *(undefined4 **)(iVar5 + DAT_0011c8cc);
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar7;
  __format = (char *)(DAT_0011c8d0 + 0x11c850);
  for (iVar8 = 0; iVar8 < *(int *)(&stack0xfffffff4 + iVar1); iVar8 = iVar8 + 1) {
    *puVar9 = *puVar6;
    snprintf(&stack0x00000088 + iVar1,0x80,__format,iVar8);
    strcat(&stack0x00000108 + iVar1,&stack0x00000088 + iVar1);
    puVar6 = puVar6 + 6;
  }
  iVar8 = javaIsConnected();
  if (iVar8 == 0) {
    GotEventValueInfoFailed(*(void **)(&stack0xfffffff8 + iVar1));
  }
  else {
    pvVar2 = (void *)**(undefined4 **)(iVar5 + DAT_0011c8d4);
    p_Var3 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar5 + DAT_0011c8d8);
    p_Var4 = *(_func_void_void_ptr **)(iVar5 + DAT_0011c8dc);
    *puVar10 = *(undefined4 *)((int)&uStack_4 + iVar1);
    CCServer::GotEventValueData(pvVar2,&stack0x00000108 + iVar1,p_Var3,p_Var4,(void *)*puVar11);
  }
  if (*(int *)(&stack0x00000308 + iVar1) != **(int **)(&stack0x00000000 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


