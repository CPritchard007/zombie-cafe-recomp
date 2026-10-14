/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4ba0 CCServer::SetPushToken */

/* CCServer::SetPushToken(void*, unsigned char const*, unsigned int, void (*)(void*), void
   (*)(void*, ccServerFailureCode), void*) */

void CCServer::SetPushToken
               (void *param_1,uchar *param_2,uint param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr_ccServerFailureCode *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_4;
  int *piVar7;
  
  iVar1 = DAT_002b4c74;
  piVar6 = (int *)(&stack0xffffffec + DAT_002b4c74);
  piVar7 = (int *)(&stack0xffffffec + DAT_002b4c74);
  piVar5 = *(int **)(DAT_002b4c80 + 0x2b4bb4);
  *(undefined4 *)((int)&uStack_4 + DAT_002b4c74) =
       *(undefined4 *)(&stack0xffffffec + DAT_002b4c78 + DAT_002b4c74);
  *(_func_void_void_ptr **)(&stack0xfffffff8 + DAT_002b4c74) = param_4;
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_002b4c7c + DAT_002b4c74);
  *(int *)(&stack0xffffffec + DAT_002b4c84 + DAT_002b4c74) = *piVar5;
  *(undefined4 *)((int)&param_5 + DAT_002b4c74) = uVar3;
  iVar2 = L_ServerConnected((SServer *)param_1);
  if ((iVar2 != 0) && (iVar2 = 0, *(int *)((int)param_1 + 0x284) == 0)) {
    uVar3 = CCGetDeviceID();
    snprintf(&stack0x00000048 + iVar1,0x400,(char *)(DAT_002b4c88 + 0x2b4bec),uVar3);
    *piVar6 = (int)(&stack0x00000048 + iVar1);
    snprintf(&stack0x00000448 + iVar1,0x400,(char *)(DAT_002b4c8c + 0x2b4c06),(int)param_1 + 0x26c);
    CCMd5(&stack0x00000008 + iVar1,0x40,&stack0x00000448 + iVar1);
    *piVar7 = (int)(&stack0x00000048 + iVar1);
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000008 + iVar1;
    snprintf(&stack0x00000448 + iVar1,0x400,(char *)(DAT_002b4c90 + 0x2b4c2c),(int)param_1 + 0x18);
    CCEscapeWithPercent(&stack0x00000048 + iVar1,0x400,&stack0x00000448 + iVar1);
    uVar3 = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x28c) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    uVar4 = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + 0x290) = uVar3;
    *(undefined4 *)((int)param_1 + 0x298) = uVar4;
    iVar2 = *(int *)((int)param_1 + 0x284);
  }
  if (*(int *)(&stack0xffffffec + DAT_002b4c84 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


