/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b72f0 MALTAHoover::sendDailyActiveUsers */

/* MALTAHoover::sendDailyActiveUsers(unsigned int, unsigned int, unsigned int, unsigned int, int,
   char*) */

void __thiscall
MALTAHoover::sendDailyActiveUsers
          (MALTAHoover *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5,
          char *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_4;
  
  iVar2 = DAT_000b7480;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_000b7480);
  *(uint *)(&stack0x00000024 + DAT_000b7480) = param_1;
  piVar8 = *(int **)(DAT_000b7484 + 0xb7304);
  *(uint *)(&stack0x0000002c + DAT_000b7480) = param_3;
  iVar7 = *piVar8;
  *(undefined4 *)(&stack0x00000030 + DAT_000b7480) =
       *(undefined4 *)(&stack0x0000065c + DAT_000b7480);
  *(int *)(&stack0xffffffec + DAT_000b7488 + DAT_000b7480) = iVar7;
  *(uint *)(&stack0x00000028 + DAT_000b7480) = param_2;
  L_PrintLog((char *)(DAT_000b748c + 0xb731e),(char *)(DAT_000b7490 + 0xb7320));
  pcVar5 = &stack0x00000038 + iVar2;
  strcpy(&stack0x00000138 + iVar2,(char *)(DAT_000b7494 + 0xb732c));
  pcVar3 = (char *)javaGetCountryCode();
  strcpy(&stack0x000001b8 + iVar2,pcVar3);
  memset(pcVar5,0,0x40);
  memset(&stack0x00000078 + iVar2,0,0x40);
  memset(&stack0x000000b8 + iVar2,0,0x40);
  memset(&stack0x000000f8 + iVar2,0,0x40);
  pcVar3 = (char *)javaGetDeviceInfoForURL();
  pcVar3 = strtok(pcVar3,(char *)(DAT_000b7498 + 0xb7370));
  strcpy(pcVar5,pcVar3);
  pcVar3 = (char *)(DAT_000b749c + 0xb7380);
  do {
    iVar7 = strcmp(pcVar5,pcVar3);
    if (iVar7 == 0) {
      pcVar4 = strtok((char *)0x0,(char *)(DAT_000b74a0 + 0xb7390));
      puVar1 = &stack0x00000078;
LAB_000b73b2:
      strcpy(puVar1 + iVar2,pcVar4);
    }
    else {
      iVar7 = strcmp(pcVar5,(char *)(DAT_000b74a4 + 0xb73a0));
      if (iVar7 == 0) {
        pcVar4 = strtok((char *)0x0,(char *)(DAT_000b74a8 + 0xb73ac));
        puVar1 = &stack0x000000b8;
        goto LAB_000b73b2;
      }
      iVar7 = strcmp(pcVar5,(char *)(DAT_000b74ac + 0xb73c0));
      if (iVar7 == 0) {
        pcVar5 = strtok((char *)0x0,(char *)(DAT_000b74b0 + 0xb73ce));
        strcpy(&stack0x000000f8 + iVar2,pcVar5);
        uVar6 = CCGetDeviceID();
        iVar7 = DAT_000b74c0;
        *puVar9 = uVar6;
        *(undefined1 **)(&stack0xfffffff0 + iVar2) = &stack0x00000138 + iVar2;
        *(undefined1 **)(&stack0xfffffff4 + iVar2) = &stack0x00000078 + iVar2;
        *(undefined1 **)(&stack0xfffffff8 + iVar2) = &stack0x000000b8 + iVar2;
        *(undefined1 **)((int)&param_4 + iVar2) = &stack0x000001b8 + iVar2;
        *(undefined4 *)((int)&param_6 + iVar2) = *(undefined4 *)(&stack0x00000024 + iVar2);
        *(MALTAHoover **)((int)&param_5 + iVar2) = this + 0x100;
        *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(&stack0x0000002c + iVar2);
        *(undefined1 **)((int)&uStack_4 + iVar2) = &stack0x000000f8 + iVar2;
        *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(&stack0x00000028 + iVar2);
        *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(&stack0x00000654 + iVar2);
        *(undefined4 *)(&stack0x00000018 + iVar2) =
             *(undefined4 *)(&stack0xffffffec + DAT_000b74b4 + iVar2);
        *(undefined4 *)(&stack0x0000001c + iVar2) = *(undefined4 *)(&stack0x00000030 + iVar2);
        snprintf(&stack0x00000238 + iVar2,0x400,(char *)(DAT_000b74b8 + 0xb7420),
                 DAT_000b74bc + 0xb7422);
        sendDailyActiveUsersGET(this,&stack0x00000238 + iVar2);
        L_PrintLog((char *)(iVar7 + 0xb7430),&stack0x00000238 + iVar2);
        L_PrintLog((char *)(iVar7 + 0xb7430),(char *)(DAT_000b74c4 + 0xb7446));
        if (*(int *)(&stack0xffffffec + DAT_000b7488 + iVar2) != *piVar8) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    memset(pcVar5,0,0x40);
    pcVar4 = strtok((char *)0x0,(char *)(DAT_000b74c8 + 0xb7468));
    strcpy(pcVar5,pcVar4);
  } while( true );
}


