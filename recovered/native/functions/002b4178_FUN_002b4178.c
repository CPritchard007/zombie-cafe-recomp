/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4178 FUN_002b4178 */

void FUN_002b4178(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  char *__format;
  undefined4 *puVar10;
  int iStack_4;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  iVar1 = DAT_002b4378;
  puVar9 = *(undefined4 **)(DAT_002b4374 + 0x2b4184);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_002b4378);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_002b4378);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_002b4378);
  uVar7 = *puVar9;
  *(undefined4 *)((int)&iStack_4 + DAT_002b4378) = param_3;
  *(undefined4 *)(&stack0xffffffec + DAT_002b437c + DAT_002b4378) = uVar7;
  iVar2 = strncmp(param_2,(char *)(DAT_002b4380 + 0x2b419a),0xb);
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar9;
  if (iVar2 == 0) {
    pcVar8 = (code *)param_1[0xdb];
    if (pcVar8 == (code *)0x0) {
      uVar7 = 0;
      goto LAB_002b435a;
    }
    uVar3 = param_1[0xdc];
    uVar6 = 3;
  }
  else {
    iVar2 = strncmp(param_2,(char *)(DAT_002b4384 + 0x2b41c6),7);
    if ((iVar2 == 0) || (iVar2 = strncmp(param_2,(char *)(DAT_002b4388 + 0x2b41d6),9), iVar2 == 0))
    {
      if ((code *)param_1[0xdb] == (code *)0x0) {
        uVar7 = 0;
      }
      else {
        (*(code *)param_1[0xdb])(param_1[0xdc],1);
        uVar7 = 0;
      }
      goto LAB_002b435a;
    }
    pcVar4 = strchr(param_2,10);
    if (pcVar4 == (char *)0x0) {
      if ((code *)param_1[0xdb] == (code *)0x0) {
        uVar7 = 0;
      }
      else {
        (*(code *)param_1[0xdb])(param_1[0xdc],1);
        uVar7 = 0;
      }
      goto LAB_002b435a;
    }
    *(char **)(&stack0xfffffff8 + iVar1) = pcVar4 + 1;
    pcVar5 = strchr(pcVar4 + 1,10);
    if (pcVar5 != (char *)0x0) {
      __format = (char *)(DAT_002b438c + 0x2b4254);
      snprintf(&stack0x00000048 + iVar1,(size_t)(pcVar4 + (1 - (int)param_2)),__format,param_2);
      snprintf(&stack0x000000c8 + iVar1,(size_t)(pcVar5 + (1 - *(int *)(&stack0xfffffff8 + iVar1))),
               __format);
      L_PrintLog((char *)(DAT_002b4390 + 0x2b4272),pcVar5 + 1);
      printf((char *)(DAT_002b4394 + 0x2b427c),pcVar5 + 1);
      uVar7 = CCGetDeviceID();
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar7;
      *puVar10 = &stack0x000000c8 + iVar1;
      snprintf(&stack0x00000248 + iVar1,0x400,(char *)(DAT_002b4398 + 0x2b428c),
               &stack0x00000048 + iVar1);
      iVar2 = CCFacebook::IsLoggedIn((void *)*param_1);
      if (iVar2 != 0) {
        snprintf(&stack0x000001c8 + iVar1,0x80,(char *)(DAT_002b439c + 0x2b42aa),param_1 + 0x46);
        strncat(&stack0x00000248 + iVar1,&stack0x000001c8 + iVar1,0x400);
      }
      uVar7 = CCGetAndroidID();
      snprintf(&stack0x00000148 + iVar1,0x80,(char *)(DAT_002b43a0 + 0x2b42cc),uVar7);
      pcVar4 = &stack0x00000248 + iVar1;
      strncat(pcVar4,&stack0x00000148 + iVar1,0x400);
      L_PrintLog((char *)(DAT_002b43a4 + 0x2b42e6),pcVar4);
      CCEscapeWithPercent(pcVar4,0x400,pcVar4);
      *puVar11 = pcVar4;
      snprintf(&stack0xffffffec + DAT_002b43b0 + iVar1,0x400,(char *)(DAT_002b43ac + 0x2b4302),
               (int)param_1 + DAT_002b43a8);
      CCMd5(&stack0x00000008 + iVar1,0x40,&stack0xffffffec + DAT_002b43b0 + iVar1);
      if (*(int *)((int)&iStack_4 + iVar1) == 0) {
        pcVar5 = (char *)(DAT_002b43b8 + 0x2b432c);
      }
      else {
        pcVar5 = (char *)(DAT_002b43b4 + 0x2b4326);
      }
      *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000008 + iVar1;
      *puVar12 = pcVar4;
      snprintf(&stack0xffffffec + DAT_002b43bc + iVar1,0x400,pcVar5,param_1 + 6);
      L_PrintLog((char *)(DAT_002b43c0 + 0x2b4344),&stack0xffffffec + DAT_002b43bc + iVar1);
      uVar7 = CCUrlConnection::NewRequest
                        ((char *)(param_1 + 6),&stack0xffffffec + DAT_002b43bc + iVar1,0xe,param_1);
      goto LAB_002b435a;
    }
    pcVar8 = (code *)param_1[0xdb];
    if (pcVar8 == (code *)0x0) {
      uVar7 = 0;
      goto LAB_002b435a;
    }
    uVar3 = param_1[0xdc];
    uVar6 = 1;
  }
  uVar7 = 0;
  (*pcVar8)(uVar3,uVar6);
LAB_002b435a:
  if (*(int *)(&stack0xffffffec + DAT_002b437c + iVar1) != **(int **)(&stack0x00000000 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


