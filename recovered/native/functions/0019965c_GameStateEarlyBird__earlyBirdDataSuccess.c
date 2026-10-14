/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019965c GameStateEarlyBird::earlyBirdDataSuccess */

/* GameStateEarlyBird::earlyBirdDataSuccess(void*, unsigned char const*, unsigned int) */

void GameStateEarlyBird::earlyBirdDataSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uchar *puVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  void *local_78;
  void *local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  void *local_64;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50;
  int local_4c;
  uint local_44;
  char acStack_3c [32];
  int local_1c;
  
  piVar9 = *(int **)(DAT_001999b4 + 0x199668);
  local_1c = *piVar9;
  L_PrintLog((char *)(DAT_001999b8 + 0x199674),(char *)(DAT_001999bc + 0x199676));
  iVar1 = strncmp((char *)param_2,(char *)(DAT_001999c0 + 0x199684),9);
  if (iVar1 == 0) {
    pcVar2 = strstr((char *)param_2,(char *)(DAT_001999c4 + 0x199698));
    if (pcVar2 == (char *)0x0) {
      *(undefined4 *)((int)param_1 + 0x348) = DAT_001999c8;
      puVar4 = param_2;
    }
    else {
      pcVar3 = strchr(pcVar2,0x5b);
      puVar4 = (uchar *)strchr(pcVar2,0x5d);
      memset(acStack_3c,0,0x20);
      strncpy(acStack_3c,pcVar3 + 1,(int)puVar4 - (int)(pcVar3 + 1));
      iVar1 = atoi(acStack_3c);
      *(int *)((int)param_1 + 0x348) = iVar1 * 1000;
    }
    pcVar2 = strstr((char *)param_2,(char *)(DAT_001999cc + 0x1996ec));
    if (pcVar2 == (char *)0x0) {
      *(undefined4 *)((int)param_1 + 0x350) = 0;
    }
    else {
      pcVar3 = strchr(pcVar2,0x5b);
      puVar4 = (uchar *)strchr(pcVar2,0x5d);
      memset(acStack_3c,0,0x20);
      strncpy(acStack_3c,pcVar3 + 1,(int)puVar4 - (int)(pcVar3 + 1));
      iVar1 = atoi(acStack_3c);
      *(int *)((int)param_1 + 0x350) = iVar1;
    }
    L_PrintLog((char *)(DAT_001999d0 + 0x19973c),(char *)(DAT_001999d4 + 0x19973e));
    pcVar2 = (char *)(DAT_001999d8 + 0x19974c);
    local_78 = param_1;
    local_74 = param_1;
    local_64 = param_1;
    for (local_70 = 0; iVar8 = DAT_00199a6c, iVar1 = DAT_00199a68,
        local_70 < *(int *)((int)param_1 + 0x350); local_70 = local_70 + 1) {
      pcVar3 = strstr((char *)param_2,pcVar2);
      param_2 = puVar4;
      if (pcVar3 != (char *)0x0) {
        pcVar5 = strchr(pcVar3,0x5b);
        pcVar3 = strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5 + 1,(int)pcVar3 - (int)(pcVar5 + 1));
        local_5c = atoi(acStack_3c);
        pcVar3 = strstr(pcVar3,(char *)(DAT_001999dc + 0x199798));
        pcVar5 = strchr(pcVar3,0x5b);
        pcVar3 = strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5 + 1,(int)pcVar3 - (int)(pcVar5 + 1));
        uVar6 = atoi(acStack_3c);
        local_6c = uVar6 & 0xffff;
        pcVar3 = strstr(pcVar3,(char *)(DAT_001999e0 + 0x1997d4));
        pcVar5 = strchr(pcVar3,0x5b);
        pcVar3 = strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5 + 1,(int)pcVar3 - (int)(pcVar5 + 1));
        uVar6 = atoi(acStack_3c);
        local_68 = uVar6 & 0xff;
        pcVar3 = strstr(pcVar3,(char *)(DAT_001999e4 + 0x199812));
        pcVar5 = strchr(pcVar3,0x5b);
        pcVar3 = strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5 + 1,(int)pcVar3 - (int)(pcVar5 + 1));
        local_58 = atoi(acStack_3c);
        pcVar3 = strstr(pcVar3,(char *)(DAT_001999e8 + 0x19984e));
        pcVar5 = strchr(pcVar3,0x5b);
        pcVar5 = pcVar5 + 1;
        pcVar7 = strchr(pcVar5,0x3a);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5,(int)pcVar7 - (int)pcVar5);
        iVar1 = atoi(acStack_3c);
        local_50 = iVar1 == 1;
        pcVar3 = strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar7 + 1,(int)pcVar3 - (int)(pcVar7 + 1));
        local_4c = atoi(acStack_3c);
        pcVar3 = strstr(pcVar3,(char *)(DAT_001999ec + 0x1998b6));
        pcVar5 = strchr(pcVar3,0x5b);
        pcVar3 = strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5 + 1,(int)pcVar3 - (int)(pcVar5 + 1));
        local_54 = atoi(acStack_3c);
        pcVar3 = strstr(pcVar3,(char *)(DAT_001999f0 + 0x1998f0));
        pcVar5 = strchr(pcVar3,0x5b);
        param_2 = (uchar *)strchr(pcVar3,0x5d);
        memset(acStack_3c,0,0x20);
        strncpy(acStack_3c,pcVar5 + 1,(int)param_2 - (int)(pcVar5 + 1));
        uVar6 = atoi(acStack_3c);
        local_44 = uVar6 & 0xff;
        L_PrintLog((char *)(DAT_001999f8 + 0x19992e),(char *)(DAT_001999f4 + 0x19992a));
      }
      if (local_58 <= DAT_001999fc) {
        *(int *)((int)local_78 + 0x154) = local_5c;
        *(undefined2 *)((int)local_64 + 0x1a4) = (undefined2)local_6c;
        *(undefined1 *)((int)local_74 + 0x1cc) = (undefined1)local_68;
        *(int *)((int)local_78 + 0x1e0) = local_58;
        *(int *)((int)local_78 + 0x230) = local_54 * 1000;
        *(undefined1 *)((int)local_74 + 0x280) = local_50;
        *(int *)((int)local_78 + 0x294) = local_4c;
        *(char *)((int)local_74 + 0x2e4) = (char)local_44;
      }
      iVar1 = *(int *)((int)param_1 + 0xc);
      for (iVar8 = 0; iVar8 < *(int *)(iVar1 + 0x6b4) + 1; iVar8 = iVar8 + 1) {
        if (**(int **)(iVar8 * 4 + *(int *)(iVar1 + 0x6b8)) == local_5c) {
          *(int *)((int)local_78 + 0x2f8) = iVar8;
        }
      }
      local_78 = (void *)((int)local_78 + 4);
      local_64 = (void *)((int)local_64 + 2);
      local_74 = (void *)((int)local_74 + 1);
      puVar4 = param_2;
    }
    *(undefined1 *)((int)param_1 + 0x370) = 0;
    L_PrintLog((char *)(iVar1 + 0x199a52),(char *)(iVar8 + 0x199a54));
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


