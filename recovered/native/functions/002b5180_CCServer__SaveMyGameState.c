/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5180 CCServer::SaveMyGameState */

/* CCServer::SaveMyGameState(void*, unsigned char const*, char const*, unsigned int, void
   (*)(void*), void (*)(void*, ccServerFailureCode), void*, char const*, int, bool, char const*) */

void CCServer::SaveMyGameState
               (void *param_1,uchar *param_2,char *param_3,uint param_4,_func_void_void_ptr *param_5
               ,_func_void_void_ptr_ccServerFailureCode *param_6,void *param_7,char *param_8,
               int param_9,bool param_10,char *param_11)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_4;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  iVar2 = DAT_002b5378;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002b5378);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_002b5378);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_002b5378);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_002b5378);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_002b5378);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_002b5378);
  *(uint *)((int)&param_9 + DAT_002b5378) = param_4;
  *(uchar **)((int)&param_8 + DAT_002b5378) = param_2;
  *(undefined4 *)(&stack0x0000001c + DAT_002b5378) =
       *(undefined4 *)(&stack0xffffffec + DAT_002b5380 + DAT_002b5378);
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_002b537c + DAT_002b5378);
  *(undefined4 *)(&param_10 + DAT_002b5378) = *(undefined4 *)(&stack0x0000094c + DAT_002b5378);
  bVar1 = (&stack0xffffffec)[DAT_002b5384 + DAT_002b5378];
  puVar7 = *(undefined4 **)(DAT_002b5388 + 0x2b51b0);
  *(undefined4 *)((int)&param_11 + DAT_002b5378) = uVar3;
  iVar8 = *(int *)(&stack0xffffffec + DAT_002b538c + DAT_002b5378);
  *(uint *)(&stack0x00000020 + DAT_002b5378) = (uint)bVar1;
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_002b5390 + DAT_002b5378);
  *(undefined4 *)(&stack0xffffffec + DAT_002b5394 + DAT_002b5378) = *puVar7;
  *(undefined4 *)(&stack0x00000024 + DAT_002b5378) = uVar3;
  L_PrintLog((char *)(DAT_002b5398 + 0x2b51d0),param_3);
  iVar4 = *(int *)((int)param_1 + 0x284);
  *(undefined4 **)(&stack0x00000028 + iVar2) = puVar7;
  *(int *)((int)&param_7 + iVar2) = iVar4;
  if (iVar4 == 0) {
    uVar3 = javaGetDeviceInfoForURL();
    uVar6 = *(undefined4 *)((int)param_1 + 0x14);
    if (iVar8 == 0) {
      *puVar9 = *(undefined4 *)((int)param_1 + 0xc);
      pcVar5 = (char *)(DAT_002b53a4 + 0x2b520c);
      *(int *)(&stack0xfffffff0 + iVar2) = (int)param_1 + 0x98;
      *(char **)(&stack0xfffffff4 + iVar2) = param_3;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar3;
      *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
    }
    else {
      *puVar10 = *(undefined4 *)((int)param_1 + 0xc);
      *(int *)(&stack0xfffffff0 + iVar2) = (int)param_1 + 0x98;
      pcVar5 = (char *)(DAT_002b53a8 + 0x2b5224);
      *(int *)(&stack0xfffffff4 + iVar2) = iVar8;
      *(char **)(&stack0xfffffff8 + iVar2) = param_3;
      *(undefined4 *)((int)&uStack_4 + iVar2) = uVar3;
      *(undefined4 *)((int)&param_5 + iVar2) = *(undefined4 *)((int)&param_7 + iVar2);
    }
    snprintf(&stack0x00000130 + iVar2,0x400,pcVar5,uVar6);
    L_PrintLog((char *)(DAT_002b53ac + 0x2b523c),&stack0x00000130 + iVar2);
                    /* WARNING: Load size is inaccurate */
    iVar4 = CCFacebook::IsLoggedIn(*param_1);
    if (iVar4 != 0) {
      snprintf(&stack0x000000b0 + iVar2,0x80,(char *)(DAT_002b53b0 + 0x2b5252),(int)param_1 + 0x118)
      ;
      L_PrintLog((char *)(DAT_002b53b4 + 0x2b5262),&stack0x000000b0 + iVar2);
      strncat(&stack0x00000130 + iVar2,&stack0x000000b0 + iVar2,0x400);
    }
    *puVar11 = *(undefined4 *)(&stack0x0000095c + iVar2);
    snprintf(&stack0x000000b0 + iVar2,0x80,(char *)(DAT_002b53b8 + 0x2b5282),
             *(undefined4 *)(&stack0x00000020 + iVar2));
    pcVar5 = &stack0x00000130 + iVar2;
    L_PrintLog((char *)(DAT_002b53bc + 0x2b5292),&stack0x000000b0 + iVar2);
    strncat(pcVar5,&stack0x000000b0 + iVar2,0x400);
    snprintf(&stack0x000000b0 + iVar2,0x80,(char *)(DAT_002b53c0 + 0x2b52aa),
             *(undefined4 *)(&stack0x00000024 + iVar2));
    strncat(pcVar5,&stack0x000000b0 + iVar2,0x80);
    *puVar12 = pcVar5;
    snprintf(&stack0xffffffec + DAT_002b53c4 + iVar2,0x400,(char *)(DAT_002b53c8 + 0x2b52cc),
             (int)param_1 + 0x26c);
    CCFileMd5(&stack0x00000030 + iVar2,0x40,*(uchar **)((int)&param_8 + iVar2),
              *(uint *)((int)&param_9 + iVar2));
    *(undefined1 **)(&stack0xfffffff0 + iVar2) = &stack0x00000030 + iVar2;
    *puVar13 = pcVar5;
    snprintf(&stack0xffffffec + DAT_002b53c4 + iVar2,0x400,(char *)(DAT_002b53cc + 0x2b52ec),
             (int)param_1 + 0x26c);
    CCMd5(&stack0x00000070 + iVar2,0x40,&stack0xffffffec + DAT_002b53c4 + iVar2);
    *puVar14 = pcVar5;
    *(undefined1 **)(&stack0xfffffff0 + iVar2) = &stack0x00000070 + iVar2;
    snprintf(&stack0xffffffec + DAT_002b53c4 + iVar2,0x400,(char *)(DAT_002b53d0 + 0x2b5314),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(pcVar5,0x400,&stack0xffffffec + DAT_002b53c4 + iVar2);
    uVar6 = *(undefined4 *)((int)&param_11 + iVar2);
    *(undefined4 *)((int)param_1 + 0x28c) = *(undefined4 *)(&param_10 + iVar2);
    iVar4 = DAT_002b53d4;
    uVar3 = *(undefined4 *)(&stack0x0000001c + iVar2);
    *(undefined4 *)((int)param_1 + 0x290) = uVar6;
    *(undefined4 *)((int)param_1 + 0x298) = uVar3;
    L_PrintLog((char *)(iVar4 + 0x2b534a),pcVar5);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),pcVar5,2,param_1);
    *(undefined4 *)((int)param_1 + 0x284) = uVar3;
  }
  else {
    L_PrintLog((char *)(DAT_002b539c + 0x2b51ec),(char *)(DAT_002b53a0 + 0x2b51ee));
    uVar3 = 0;
  }
  if (*(int *)(&stack0xffffffec + DAT_002b5394 + iVar2) != **(int **)(&stack0x00000028 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


