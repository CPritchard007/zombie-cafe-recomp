/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aac50 CCReplaceStringOccurencesFB */

void CCReplaceStringOccurencesFB
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  size_t sVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar13;
  int iStack_c;
  undefined4 local_8;
  undefined4 local_4;
  undefined4 *puVar12;
  
  iVar1 = DAT_002aae44;
  local_4 = param_4;
  local_8 = param_3;
  puVar11 = (undefined4 *)(&stack0xffffffe4 + DAT_002aae44);
  puVar12 = (undefined4 *)(&stack0xffffffe4 + DAT_002aae44);
  *(undefined4 *)(&stack0xffffffec + DAT_002aae44) = param_2;
  puVar7 = *(undefined4 **)(DAT_002aae48 + 0x2aac66);
  uVar6 = *puVar7;
  *(undefined4 *)(&stack0xffffffe8 + DAT_002aae44) = param_1;
  *(undefined4 *)(&stack0xffffffe4 + DAT_002aae4c + DAT_002aae44) = uVar6;
  pcVar10 = *(char **)(&stack0x00000c14 + DAT_002aae44);
  puVar13 = &stack0x00000c18 + DAT_002aae44;
  memset(&stack0x000001f8 + DAT_002aae44,0,0x200);
  memset(&stack0x000003f8 + iVar1,0,0x200);
  memset(&stack0xffffffe4 + DAT_002aae50 + iVar1,0,0x200);
  memset(&stack0xffffffe4 + DAT_002aae54 + iVar1,0,0x200);
  memset(&stack0xffffffe4 + DAT_002aae58 + iVar1,0,0x200);
  memset((void *)((int)&local_8 + iVar1),0,0x100);
  iVar2 = DAT_002aae5c;
  strcpy(&stack0x000001f8 + iVar1,pcVar10);
  *(undefined1 **)((int)&iStack_c + iVar1) = puVar13;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = puVar7;
  while( true ) {
    iVar3 = DAT_002aae64;
    puVar7 = *(undefined4 **)((int)&iStack_c + iVar1);
    *(undefined4 **)((int)&iStack_c + iVar1) = puVar7 + 1;
    pcVar10 = (char *)*puVar7;
    if (pcVar10 == (char *)0x0) break;
    pcVar8 = (char *)puVar7[1];
    *(undefined4 **)((int)&iStack_c + iVar1) = puVar7 + 2;
    if (pcVar8 == (char *)0x0) break;
    pcVar4 = strstr(&stack0x000001f8 + iVar1,pcVar10);
    *puVar11 = pcVar4;
    strncpy((char *)((int)&local_8 + iVar1),pcVar8,0x10);
    pcVar8 = (char *)*puVar12;
    while (pcVar8 != (char *)0x0) {
      pcVar4 = &stack0x000001f8 + iVar1;
      sVar9 = (int)pcVar8 - (int)pcVar4;
      if (sVar9 == 0) {
        strcpy(&stack0xffffffe4 + DAT_002aae54 + iVar1,(char *)((int)&local_8 + iVar1));
        sVar9 = strlen(pcVar10);
        strcpy(&stack0xffffffe4 + DAT_002aae58 + iVar1,pcVar4 + sVar9);
        strcpy(&stack0x000003f8 + iVar1,&stack0xffffffe4 + DAT_002aae54 + iVar1);
      }
      else {
        sprintf(&stack0x000000f8 + iVar1,(char *)(iVar2 + 0x2aacd0),sVar9);
        strncpy(&stack0xffffffe4 + DAT_002aae50 + iVar1,pcVar4,sVar9);
        (&stack0xffffffe4)[sVar9 + DAT_002aae50 + iVar1] = 0;
        strcpy(&stack0xffffffe4 + DAT_002aae54 + iVar1,(char *)((int)&local_8 + iVar1));
        sVar5 = strlen(pcVar10);
        strcpy(&stack0xffffffe4 + DAT_002aae58 + iVar1,pcVar4 + sVar5 + sVar9);
        strcpy(&stack0x000003f8 + iVar1,&stack0xffffffe4 + DAT_002aae50 + iVar1);
        strcat(&stack0x000003f8 + iVar1,&stack0xffffffe4 + DAT_002aae54 + iVar1);
      }
      strcat(&stack0x000003f8 + iVar1,&stack0xffffffe4 + DAT_002aae58 + iVar1);
      strcpy(&stack0x000001f8 + iVar1,&stack0x000003f8 + iVar1);
      pcVar8 = strstr(&stack0x000001f8 + iVar1,pcVar10);
    }
  }
  pcVar10 = strstr(&stack0x000001f8 + iVar1,(char *)(DAT_002aae60 + 0x2aadae));
  while (pcVar8 = &stack0x000001f8 + iVar1, pcVar10 != (char *)0x0) {
    sVar9 = (int)pcVar10 - (int)pcVar8;
    pcVar10 = &stack0xffffffe4 + DAT_002aae50 + iVar1;
    strncpy(pcVar10,pcVar8,sVar9);
    pcVar10[sVar9] = '\0';
    strcpy(&stack0xffffffe4 + DAT_002aae54 + iVar1,(char *)(iVar3 + 0x2aadb4));
    strcpy(&stack0xffffffe4 + DAT_002aae58 + iVar1,pcVar8 + sVar9 + 2);
    strcpy(&stack0x000003f8 + iVar1,pcVar10);
    strcat(&stack0x000003f8 + iVar1,&stack0xffffffe4 + DAT_002aae54 + iVar1);
    strcat(&stack0x000003f8 + iVar1,&stack0xffffffe4 + DAT_002aae58 + iVar1);
    strcpy(pcVar8,&stack0x000003f8 + iVar1);
    pcVar10 = strstr(pcVar8,(char *)(DAT_002aae68 + 0x2aae12));
  }
  strncpy(*(char **)(&stack0xffffffe8 + iVar1),pcVar8,*(size_t *)(&stack0xffffffec + iVar1));
  if (*(int *)(&stack0xffffffe4 + DAT_002aae4c + iVar1) == **(int **)(&stack0xfffffff0 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


