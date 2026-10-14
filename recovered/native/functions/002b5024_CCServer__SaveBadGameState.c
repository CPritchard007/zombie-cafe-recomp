/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5024 CCServer::SaveBadGameState */

/* CCServer::SaveBadGameState(void*, unsigned char const*, char const*, unsigned int, void*) */

void CCServer::SaveBadGameState
               (void *param_1,uchar *param_2,char *param_3,uint param_4,void *param_5)

{
  char *__s;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_4;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar1 = DAT_002b5158;
  uVar4 = 0;
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_002b5158);
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002b5158);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002b5158);
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002b5158);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002b5158);
  *(uchar **)(&stack0x0000000c + DAT_002b5158) = param_2;
  *(char **)(&stack0x00000008 + DAT_002b5158) = param_3;
  puVar2 = *(undefined4 **)(DAT_002b515c + 0x2b5040);
  *(undefined4 *)(&stack0x00000014 + DAT_002b5158) =
       *(undefined4 *)(&stack0x0000093c + DAT_002b5158);
  *(uint *)(&stack0x00000010 + DAT_002b5158) = param_4;
  uVar3 = *puVar2;
  *(undefined4 **)(&stack0x00000018 + DAT_002b5158) = puVar2;
  *(undefined4 *)(&stack0xffffffec + DAT_002b5160 + DAT_002b5158) = uVar3;
  if (*(int *)((int)param_1 + 0x284) == 0) {
    uVar4 = javaGetDeviceInfoForURL();
    __s = &stack0x00000120 + iVar1;
    *puVar5 = *(undefined4 *)((int)param_1 + 0xc);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
    uVar3 = *(undefined4 *)((int)param_1 + 0x14);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar4;
    *(int *)(&stack0xfffffff0 + iVar1) = (int)param_1 + 0x98;
    *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
    snprintf(__s,0x400,(char *)(DAT_002b5164 + 0x2b5072),uVar3);
    uVar4 = CCSecondsSince1970();
    *puVar6 = uVar4;
    snprintf(&stack0x000000a0 + iVar1,0x80,(char *)(DAT_002b5168 + 0x2b508e),(int)param_1 + 0x98);
    strncat(__s,&stack0x000000a0 + iVar1,0x400);
    *(int *)(&stack0x00000008 + iVar1) = (int)param_1 + 0x26c;
    uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *puVar7 = __s;
    snprintf(&stack0xffffffec + DAT_002b516c + iVar1,0x400,(char *)(DAT_002b5170 + 0x2b50b4),uVar4);
    CCFileMd5(&stack0x00000020 + iVar1,0x40,*(uchar **)(&stack0x0000000c + iVar1),
              *(uint *)(&stack0x00000010 + iVar1));
    uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000020 + iVar1;
    *puVar8 = __s;
    snprintf(&stack0xffffffec + DAT_002b516c + iVar1,0x400,(char *)(DAT_002b5174 + 0x2b50d6),uVar4);
    CCMd5(&stack0x00000060 + iVar1,0x40,&stack0xffffffec + DAT_002b516c + iVar1);
    *(int *)(&stack0x00000008 + iVar1) = (int)param_1 + 0x18;
    *puVar9 = __s;
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000060 + iVar1;
    snprintf(&stack0xffffffec + DAT_002b516c + iVar1,0x400,(char *)(DAT_002b5178 + 0x2b50fc));
    CCEscapeWithPercent(__s,0x400,&stack0xffffffec + DAT_002b516c + iVar1);
    *(undefined4 *)((int)param_1 + 0x28c) = 0;
    uVar4 = *(undefined4 *)(&stack0x00000014 + iVar1);
    *(undefined4 *)((int)param_1 + 0x290) = 0;
    *(undefined4 *)((int)param_1 + 0x298) = uVar4;
    uVar4 = CCUrlConnection::NewRequest(*(char **)(&stack0x00000008 + iVar1),__s,2,param_1);
    *(undefined4 *)((int)param_1 + 0x284) = uVar4;
  }
  if (*(int *)(&stack0xffffffec + DAT_002b5160 + iVar1) != **(int **)(&stack0x00000018 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


