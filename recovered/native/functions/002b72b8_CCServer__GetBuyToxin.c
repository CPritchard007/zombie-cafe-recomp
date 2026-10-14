/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b72b8 CCServer::GetBuyToxin */

/* CCServer::GetBuyToxin(void*, void (*)(void*, ccGetBuyToxinResult, char const*, unsigned int),
   void (*)(void*, ccGetBuyToxinResult), void*, unsigned int) */

void CCServer::GetBuyToxin
               (void *param_1,_func_void_void_ptr_ccGetBuyToxinResult_char_ptr_uint *param_2,
               _func_void_void_ptr_ccGetBuyToxinResult *param_3,void *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_002b7348;
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_002b7348);
  *(void **)(&stack0xfffffff8 + DAT_002b7348) = param_4;
  *(_func_void_void_ptr_ccGetBuyToxinResult **)(&stack0xfffffff4 + DAT_002b7348) = param_3;
  piVar4 = *(int **)(DAT_002b734c + 0x2b72cc);
  *(int *)(&stack0x00000400 + DAT_002b7348) = *piVar4;
  uVar3 = CCGetDeviceID();
  *puVar5 = uVar3;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 6;
  snprintf((char *)((int)&param_5 + iVar1),0x400,(char *)(DAT_002b7350 + 0x2b72e6),
           (char *)((int)param_1 + 0x18));
  CCEscapeWithPercent((char *)((int)&param_5 + iVar1),0x400,(char *)((int)&param_5 + iVar1));
  uVar3 = *(undefined4 *)(&stack0xfffffff4 + iVar1);
  *(_func_void_void_ptr_ccGetBuyToxinResult_char_ptr_uint **)((int)param_1 + 1000) = param_2;
  *(undefined4 *)((int)param_1 + 0x3ec) = uVar3;
  iVar2 = DAT_002b7354;
  *(undefined4 *)((int)param_1 + 0x330) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
  L_PrintLog((char *)(iVar2 + 0x2b731a),(char *)((int)&param_5 + iVar1));
  uVar3 = CCUrlConnection::NewRequest
                    ((char *)((int)param_1 + 0x18),(char *)((int)&param_5 + iVar1),0x36,param_1);
  *(undefined4 *)((int)param_1 + 0x31c) = uVar3;
  if (*(int *)(&stack0x00000400 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


