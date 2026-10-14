/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6848 CCServer::RetrieveSpecialGamestate */

/* CCServer::RetrieveSpecialGamestate(void*, char const*, void (*)(void*, char const*, unsigned char
   const*, unsigned int), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveSpecialGamestate
               (void *param_1,char *param_2,_func_void_void_ptr_char_ptr_uchar_ptr_uint *param_3,
               _func_void_void_ptr_ccServerFailureCode *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b68fc;
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0xfffffff8 + DAT_002b68fc) = param_4;
  puVar5 = *(undefined4 **)(DAT_002b6900 + 0x2b685e);
  *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(&stack0xfffffff4 + DAT_002b68fc) = param_3;
  uVar2 = *puVar5;
  *(undefined4 *)((int)&uStack_4 + DAT_002b68fc) = *(undefined4 *)(&stack0x00000424 + DAT_002b68fc);
  *(undefined4 *)(&stack0x00000408 + DAT_002b68fc) = uVar2;
  iVar3 = *(int *)((int)param_1 + 0x31c);
  *(undefined4 **)((int)&param_5 + DAT_002b68fc) = puVar5;
  if (iVar3 == 0) {
    *(undefined4 *)(&stack0xffffffec + DAT_002b68fc) = *(undefined4 *)((int)param_1 + 0x14);
    *(char **)(&stack0xfffffff0 + DAT_002b68fc) = param_2;
    snprintf(&stack0x00000008 + DAT_002b68fc,0x400,(char *)(DAT_002b6904 + 0x2b6888),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000008 + iVar1,0x400,&stack0x00000008 + iVar1);
    uVar2 = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    *(undefined4 *)((int)param_1 + 0x324) = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    uVar4 = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x32c) = uVar2;
    *(undefined4 *)((int)param_1 + 0x330) = uVar4;
    snprintf((char *)((int)param_1 + 0x29c),0x80,(char *)(DAT_002b6908 + 0x2b68c2),param_2);
    L_PrintLog((char *)(DAT_002b690c + 0x2b68d2),&stack0x00000008 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000008 + iVar1,10,param_1);
    *(undefined4 *)((int)param_1 + 0x31c) = uVar2;
  }
  if (*(int *)(&stack0x00000408 + iVar1) != **(int **)((int)&param_5 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


