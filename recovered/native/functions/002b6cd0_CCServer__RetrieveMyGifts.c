/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6cd0 CCServer::RetrieveMyGifts */

/* CCServer::RetrieveMyGifts(void*, void (*)(void*, char const*), void (*)(void*,
   ccServerFailureCode), void*, unsigned int, unsigned int, unsigned int) */

void CCServer::RetrieveMyGifts
               (void *param_1,_func_void_void_ptr_char_ptr *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4,uint param_5,
               uint param_6,uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *__format;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_4;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar1 = DAT_002b6e6c;
  piVar6 = *(int **)(DAT_002b6e68 + 0x2b6cdc);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002b6e6c);
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002b6e6c);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002b6e6c);
  *(_func_void_void_ptr_char_ptr **)(&stack0xfffffff8 + DAT_002b6e6c) = param_2;
  *(void **)((int)&param_5 + DAT_002b6e6c) = param_4;
  *(int *)(&stack0xffffffec + DAT_002b6e70 + DAT_002b6e6c) = *piVar6;
  *(_func_void_void_ptr_ccServerFailureCode **)((int)&uStack_4 + DAT_002b6e6c) = param_3;
  L_PrintLog((char *)(DAT_002b6e74 + 0x2b6cf6),(char *)(DAT_002b6e78 + 0x2b6cf8));
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x360) == 0) {
    uVar2 = *(undefined4 *)((int)param_1 + 0x10);
    if (*(int *)(&stack0x0000052c + iVar1) == 0) {
      if (*(int *)(&stack0x00000524 + iVar1) == 0) {
        __format = (char *)(DAT_002b6e88 + 0x2b6d5a);
      }
      else {
        __format = (char *)(DAT_002b6e84 + 0x2b6d54);
      }
      *puVar8 = uVar2;
    }
    else {
      if (*(int *)(&stack0x00000524 + iVar1) == 0) {
        uVar3 = CCGetDeviceID();
        __format = (char *)(DAT_002b6e80 + 0x2b6d36);
      }
      else {
        uVar3 = CCGetDeviceID();
        __format = (char *)(DAT_002b6e7c + 0x2b6d2c);
      }
      *puVar7 = uVar2;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar3;
    }
    snprintf(&stack0x00000108 + iVar1,0x400,__format,(int)param_1 + 0x18);
    L_PrintLog((char *)(DAT_002b6e8c + 0x2b6d6c),&stack0x00000108 + iVar1);
                    /* WARNING: Load size is inaccurate */
    iVar4 = CCFacebook::IsLoggedIn(*param_1);
    if (iVar4 != 0) {
      snprintf(&stack0x00000088 + iVar1,0x80,(char *)(DAT_002b6e90 + 0x2b6d82),(int)param_1 + 0x118)
      ;
      strncat(&stack0x00000108 + iVar1,&stack0x00000088 + iVar1,0x400);
    }
    L_PrintLog((char *)(DAT_002b6e94 + 0x2b6d9e),&stack0x00000108 + iVar1);
    uVar2 = CCGetAndroidID();
    snprintf((char *)((int)&param_7 + iVar1),0x80,(char *)(DAT_002b6e98 + 0x2b6dae),uVar2);
    strncat(&stack0x00000108 + iVar1,(char *)((int)&param_7 + iVar1),0x400);
    L_PrintLog((char *)(DAT_002b6e9c + 0x2b6dc6),&stack0x00000108 + iVar1);
    if (*(int *)(&stack0xffffffec + DAT_002b6ea0 + iVar1) != 0) {
      *(undefined4 *)(&stack0x00000088 + iVar1) = 0;
      memset(&stack0x0000008c + iVar1,0,0x7c);
      uVar2 = GetGiftIndex(param_1);
      *puVar9 = uVar2;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
      snprintf(&stack0x00000088 + iVar1,0x80,(char *)(DAT_002b6ea4 + 0x2b6df0));
      strncat(&stack0x00000108 + iVar1,&stack0x00000088 + iVar1,0x400);
    }
    CCEscapeWithPercent(&stack0x00000108 + iVar1,0x400,&stack0x00000108 + iVar1);
    uVar3 = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x368) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    iVar4 = DAT_002b6ea8;
    uVar2 = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + 0x36c) = uVar3;
    *(undefined4 *)((int)param_1 + 0x370) = uVar2;
    L_PrintLog((char *)(iVar4 + 0x2b6e2c),&stack0x00000108 + iVar1);
    if (*(int *)(&stack0x00000524 + iVar1) == 0) {
      uVar5 = 0xb;
    }
    else {
      uVar5 = 0x38;
    }
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000108 + iVar1,uVar5,param_1);
    *(undefined4 *)((int)param_1 + 0x360) = uVar2;
    uVar2 = *(undefined4 *)((int)param_1 + 0x360);
  }
  if (*(int *)(&stack0xffffffec + DAT_002b6e70 + iVar1) == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


