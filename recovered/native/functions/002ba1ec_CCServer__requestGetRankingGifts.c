/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba1ec CCServer::requestGetRankingGifts */

/* CCServer::requestGetRankingGifts(void*, void (*)(void*, unsigned char const*, unsigned int), void
   (*)(void*, ccServerFailureCode), void*) */

void CCServer::requestGetRankingGifts
               (void *param_1,_func_void_void_ptr_uchar_ptr_uint *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  
  iVar2 = DAT_002ba2d4;
  iVar1 = DAT_002ba2cc;
  piVar8 = (int *)(&stack0xffffffec + DAT_002ba2cc);
  *(void **)(&stack0x0000000c + DAT_002ba2cc) = param_4;
  *(_func_void_void_ptr_uchar_ptr_uint **)(&stack0x00000004 + DAT_002ba2cc) = param_2;
  puVar5 = *(undefined4 **)(DAT_002ba2d8 + 0x2ba200);
  pcVar7 = (char *)(DAT_002ba2d0 + 0x2ba20a);
  *(undefined4 *)(&stack0x00000418 + DAT_002ba2cc) = *puVar5;
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0x00000008 + DAT_002ba2cc) = param_3;
  L_PrintLog(pcVar7,(char *)(DAT_002ba2dc + 0x2ba216));
  iVar4 = *(int *)((int)param_1 + iVar2);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar5;
  if (iVar4 == 0) {
    iVar4 = CapcomApp::getInstance();
    uVar3 = ZombieCafe::getGiftBoxCount(*(ZombieCafe **)(iVar4 + 4));
    *(undefined4 *)(&stack0x00000000 + iVar1) = uVar3;
    L_PrintLog(pcVar7,(char *)(DAT_002ba2e4 + 0x2ba242));
    *piVar8 = DAT_002ba2e8 + 0x2ba24e;
    pcVar6 = (char *)(DAT_002ba2ec + 0x2ba254);
    *(int *)(&stack0xfffffff0 + iVar1) = DAT_002ba2f4 + 0x2ba258;
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(DAT_002ba2f8 + 0x2ba262);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000000 + iVar1);
    snprintf(&stack0x00000018 + iVar1,0x400,(char *)(DAT_002ba2f0 + 0x2ba25e),pcVar6);
    CCEscapeWithPercent(&stack0x00000018 + iVar1,0x400,&stack0x00000018 + iVar1);
    L_PrintLog(pcVar7,(char *)(DAT_002ba2fc + 0x2ba284));
    uVar3 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)((int)param_1 + DAT_002ba300) = *(undefined4 *)(&stack0x00000004 + iVar1);
    *(undefined4 *)((int)param_1 + 0x558) = uVar3;
    *(undefined4 *)((int)param_1 + DAT_002ba304) = *(undefined4 *)(&stack0x0000000c + iVar1);
    uVar3 = CCUrlConnection::NewRequest(pcVar6,&stack0x00000018 + iVar1,0x4b,param_1);
    iVar4 = DAT_002ba308;
    *(undefined4 *)((int)param_1 + iVar2) = uVar3;
    L_PrintLog(pcVar7,(char *)(iVar4 + 0x2ba2b0));
    uVar3 = *(undefined4 *)((int)param_1 + iVar2);
  }
  else {
    L_PrintLog(pcVar7,(char *)(DAT_002ba2e0 + 0x2ba228));
    uVar3 = 0;
  }
  if (*(int *)(&stack0x00000418 + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


