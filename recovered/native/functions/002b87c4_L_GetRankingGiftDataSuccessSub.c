/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b87c4 L_GetRankingGiftDataSuccessSub */

/* L_GetRankingGiftDataSuccessSub(void*, unsigned char const*, unsigned int) */

void L_GetRankingGiftDataSuccessSub(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uStack_4;
  int *piVar13;
  
  iVar1 = DAT_002b89a4;
  puVar9 = *(undefined4 **)(DAT_002b89a0 + 0x2b87d0);
  piVar12 = (int *)(&stack0xffffffec + DAT_002b89a4);
  piVar13 = (int *)(&stack0xffffffec + DAT_002b89a4);
  *(undefined4 *)(&stack0xffffffec + DAT_002b89a8 + DAT_002b89a4) = *puVar9;
  pcVar11 = (char *)(DAT_002b89ac + 0x2b87e2);
  *(uint *)(&stack0xfffffff8 + DAT_002b89a4) = param_3;
  L_PrintLog(pcVar11,(char *)(DAT_002b89b0 + 0x2b87e6));
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar9;
  *(undefined4 *)((int)param_1 + DAT_002b89b4) = 0;
  if (param_2 == (uchar *)0x0) {
    L_PrintLog(pcVar11,(char *)(DAT_002b89b8 + 0x2b8802));
    if (*(int *)((int)param_1 + 0x558) == 0) goto LAB_002b8986;
    L_PrintLog(pcVar11,(char *)(DAT_002b89bc + 0x2b8816));
    uVar2 = *(undefined4 *)((int)param_1 + DAT_002b89c0);
    pcVar7 = *(code **)((int)param_1 + 0x558);
LAB_002b88a4:
    uVar6 = 1;
  }
  else {
    iVar3 = strncmp((char *)param_2,(char *)(DAT_002b89c4 + 0x2b882a),0xb);
    if (iVar3 != 0) {
      iVar3 = strncmp((char *)param_2,(char *)(DAT_002b89d0 + 0x2b8864),7);
      if ((iVar3 != 0) &&
         (iVar4 = strncmp((char *)param_2,(char *)(DAT_002b89d4 + 0x2b8874),9), iVar3 = DAT_002b89e4
         , iVar4 != 0)) {
        if (*(int *)((int)param_1 + DAT_002b89e4) != 0) {
          L_PrintLog(pcVar11,(char *)(DAT_002b89e8 + 0x2b88ba));
          (**(code **)((int)param_1 + iVar3))
                    (*(undefined4 *)((int)param_1 + DAT_002b89c0),param_2,
                     *(undefined4 *)(&stack0xfffffff8 + iVar1));
        }
        iVar3 = CapcomApp::getInstance();
        iVar4 = 0;
        iVar8 = *(int *)(DAT_002b89ec + 0x2b88d6);
        *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(iVar3 + 4);
        iVar3 = 0;
        do {
          iVar5 = *(int *)(iVar4 + iVar8 + 0x84);
          iVar4 = iVar4 + 0xa0;
          *(int *)(&stack0xfffffff8 + iVar1) = iVar8;
          iVar3 = iVar3 + (uint)(iVar5 != 0);
        } while (iVar4 != 0x8c0);
        iVar4 = 0;
        L_PrintLog((char *)(DAT_002b89f0 + 0x2b88fc),(char *)(DAT_002b89f4 + 0x2b88fe));
        *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x00000008 + iVar1;
        snprintf(&stack0x00000008 + iVar1,0x400,(char *)(DAT_002b89f8 + 0x2b890e),iVar3);
        iVar3 = 0;
        piVar10 = (int *)(*(int *)(&stack0xfffffff8 + iVar1) + 0x84);
        do {
          if (*piVar10 != 0) {
            *(int *)(&stack0xfffffff0 + iVar1) = *(int *)(&stack0xfffffff8 + iVar1) + iVar4 * 0xa0;
            *piVar12 = iVar3;
            snprintf(&stack0x00000008 + iVar1,0x400,(char *)(DAT_002b89fc + 0x2b8934),
                     &stack0x00000008 + iVar1);
            iVar3 = iVar3 + 1;
          }
          iVar4 = iVar4 + 1;
          piVar10 = piVar10 + 0x28;
        } while (iVar4 != 0xe);
        pcVar11 = (char *)(DAT_002b8a04 + 0x2b8952);
        *piVar13 = DAT_002b8a00 + 0x2b8950;
        *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000008 + iVar1;
        snprintf(&stack0x00000408 + iVar1,0x400,(char *)(DAT_002b8a08 + 0x2b895c),pcVar11);
        CCUrlConnection::NewRequest(pcVar11,&stack0x00000408 + iVar1,0,param_1);
        ZombieCafe::SetPicGiftBox_from_RankingGiftBoxInfo(*(ZombieCafe **)((int)&uStack_4 + iVar1));
        L_PrintLog((char *)(DAT_002b8a0c + 0x2b8982),(char *)(DAT_002b8a10 + 0x2b8984));
        goto LAB_002b8986;
      }
      pcVar11 = (char *)(DAT_002b89d8 + 0x2b8884);
      L_PrintLog(pcVar11,(char *)(DAT_002b89dc + 0x2b8886));
      if (*(int *)((int)param_1 + 0x558) == 0) goto LAB_002b8986;
      L_PrintLog(pcVar11,(char *)(DAT_002b89e0 + 0x2b889c));
      uVar2 = *(undefined4 *)((int)param_1 + DAT_002b89c0);
      pcVar7 = *(code **)((int)param_1 + 0x558);
      goto LAB_002b88a4;
    }
    L_PrintLog(pcVar11,(char *)(DAT_002b89c8 + 0x2b883a));
    if (*(int *)((int)param_1 + 0x558) == 0) goto LAB_002b8986;
    L_PrintLog(pcVar11,(char *)(DAT_002b89cc + 0x2b884e));
    uVar6 = 3;
    uVar2 = *(undefined4 *)((int)param_1 + DAT_002b89c0);
    pcVar7 = *(code **)((int)param_1 + 0x558);
  }
  (*pcVar7)(uVar2,uVar6);
LAB_002b8986:
  if (*(int *)(&stack0xffffffec + DAT_002b89a8 + iVar1) == **(int **)(&stack0x00000000 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


