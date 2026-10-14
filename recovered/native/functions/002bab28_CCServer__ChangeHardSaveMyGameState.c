/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bab28 CCServer::ChangeHardSaveMyGameState */

/* CCServer::ChangeHardSaveMyGameState(void*, unsigned char const*, char const*, unsigned int, void
   (*)(void*), void (*)(void*, ccServerFailureCode), void*, char const*, int, bool, char const*) */

void CCServer::ChangeHardSaveMyGameState
               (void *param_1,uchar *param_2,char *param_3,uint param_4,_func_void_void_ptr *param_5
               ,_func_void_void_ptr_ccServerFailureCode *param_6,void *param_7,char *param_8,
               int param_9,bool param_10,char *param_11)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iStack_4;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  
  iVar3 = DAT_002bad1c;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002bad1c);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_002bad1c);
  piVar11 = (int *)(&stack0xffffffec + DAT_002bad1c);
  piVar12 = (int *)(&stack0xffffffec + DAT_002bad1c);
  *(uchar **)((int)&param_7 + DAT_002bad1c) = param_2;
  *(uint *)((int)&param_8 + DAT_002bad1c) = param_4;
  *(undefined4 *)((int)&param_9 + DAT_002bad1c) =
       *(undefined4 *)(&stack0xffffffec + DAT_002bad24 + DAT_002bad1c);
  uVar5 = *(undefined4 *)(&stack0xffffffec + DAT_002bad20 + DAT_002bad1c);
  *(undefined4 *)((int)&param_11 + DAT_002bad1c) = *(undefined4 *)(&stack0x0000094c + DAT_002bad1c);
  puVar8 = *(undefined4 **)(DAT_002bad28 + 0x2bab5a);
  *(undefined4 *)(&param_10 + DAT_002bad1c) = uVar5;
  bVar2 = (&stack0xffffffec)[DAT_002bad2c + DAT_002bad1c];
  *(undefined4 *)(&stack0x0000001c + DAT_002bad1c) =
       *(undefined4 *)(&stack0x0000095c + DAT_002bad1c);
  *(undefined4 *)(&stack0xffffffec + DAT_002bad30 + DAT_002bad1c) = *puVar8;
  L_PrintLog((char *)(DAT_002bad34 + 0x2bab76),(char *)(DAT_002bad38 + 0x2bab78));
  CapcomApp::getInstance();
  iVar6 = *(int *)((int)param_1 + 0x284);
  *(undefined4 **)(&stack0x00000020 + iVar3) = puVar8;
  if (iVar6 == 0) {
    *puVar9 = *(undefined4 *)((int)param_1 + 0x14);
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)((int)param_1 + 0xc);
    *(int *)(&stack0xfffffff4 + iVar3) = (int)param_1 + 0x98;
    uVar5 = *(undefined4 *)(DAT_002bad3c + 0x2bab9c);
    *(int *)((int)&iStack_4 + iVar3) = DAT_002bad44 + 0x2babae;
    *(char **)(&stack0xfffffff8 + iVar3) = param_3;
    snprintf(&stack0x00000128 + iVar3,0x400,(char *)(DAT_002bad40 + 0x2bab9e),uVar5);
                    /* WARNING: Load size is inaccurate */
    iVar6 = CCFacebook::IsLoggedIn(*param_1);
    if (iVar6 != 0) {
      snprintf(&stack0x000000a8 + iVar3,0x80,(char *)(DAT_002bad48 + 0x2babcc),(int)param_1 + 0x118)
      ;
      strncat(&stack0x00000128 + iVar3,&stack0x000000a8 + iVar3,0x400);
    }
    *puVar10 = *(undefined4 *)(&stack0xffffffec + DAT_002bad4c + iVar3);
    snprintf(&stack0x000000a8 + iVar3,0x80,(char *)(DAT_002bad50 + 0x2babee),(uint)bVar2);
    L_PrintLog((char *)(DAT_002bad54 + 0x2bac00),&stack0x000000a8 + iVar3);
    strncat(&stack0x00000128 + iVar3,&stack0x000000a8 + iVar3,0x400);
    snprintf(&stack0x000000a8 + iVar3,0x80,(char *)(DAT_002bad58 + 0x2bac18),
             *(undefined4 *)(&stack0x0000001c + iVar3));
    strncat(&stack0x00000128 + iVar3,&stack0x000000a8 + iVar3,0x80);
    CCFileMd5(&stack0x00000028 + iVar3,0x40,*(uchar **)((int)&param_7 + iVar3),
              *(uint *)((int)&param_8 + iVar3));
    *piVar11 = (int)(&stack0x00000128 + iVar3);
    *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000028 + iVar3;
    snprintf(&stack0xffffffec + DAT_002bad60 + iVar3,0x400,(char *)(DAT_002bad5c + 0x2bac46),
             (int)param_1 + 0x26c);
    pcVar1 = &stack0x00000068 + iVar3;
    L_PrintLog((char *)(DAT_002bad64 + 0x2bac58),&stack0xffffffec + DAT_002bad60 + iVar3);
    CCMd5(pcVar1,0x40,&stack0xffffffec + DAT_002bad60 + iVar3);
    *(int *)((int)&param_7 + iVar3) = (int)param_1 + 0x18;
    *piVar12 = (int)(&stack0x00000128 + iVar3);
    *(char **)(&stack0xfffffff0 + iVar3) = pcVar1;
    snprintf(&stack0xffffffec + DAT_002bad60 + iVar3,0x400,(char *)(DAT_002bad68 + 0x2bac7a),
             *(undefined4 *)((int)&param_7 + iVar3));
    CCEscapeWithPercent(&stack0x00000128 + iVar3,0x400,&stack0xffffffec + DAT_002bad60 + iVar3);
    uVar7 = *(undefined4 *)(&param_10 + iVar3);
    *(undefined4 *)((int)param_1 + 0x28c) = *(undefined4 *)((int)&param_9 + iVar3);
    iVar4 = DAT_002bad70;
    iVar6 = DAT_002bad6c;
    uVar5 = *(undefined4 *)((int)&param_11 + iVar3);
    *(undefined4 *)((int)param_1 + 0x290) = uVar7;
    *(undefined4 *)((int)param_1 + 0x298) = uVar5;
    L_PrintLog((char *)(iVar6 + 0x2bacb2),(char *)(iVar4 + 0x2bacb4));
    L_PrintLog((char *)(DAT_002bad74 + 0x2bacc4),&stack0xffffffec + DAT_002bad60 + iVar3);
    L_PrintLog((char *)(DAT_002bad78 + 0x2bacd0),pcVar1);
    L_PrintLog((char *)(DAT_002bad7c + 0x2bacda),&stack0x00000128 + iVar3);
    L_PrintLog((char *)(iVar6 + 0x2bacb2),(char *)(iVar4 + 0x2bacb4));
    L_PrintLog((char *)(DAT_002bad80 + 0x2bacec),(char *)(DAT_002bad84 + 0x2bacee));
    uVar5 = CCUrlConnection::NewRequest
                      (*(char **)((int)&param_7 + iVar3),&stack0x00000128 + iVar3,0x50,param_1);
    *(undefined4 *)((int)param_1 + 0x284) = uVar5;
  }
  if (*(int *)(&stack0xffffffec + DAT_002bad30 + iVar3) == **(int **)(&stack0x00000020 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


