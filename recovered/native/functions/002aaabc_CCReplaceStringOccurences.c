/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aaabc CCReplaceStringOccurences */

void CCReplaceStringOccurences
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *__haystack;
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *__src;
  int *piVar8;
  int iStack_c;
  undefined4 local_8;
  undefined4 local_4;
  size_t *psVar9;
  int *piVar10;
  int *piVar11;
  
  iVar2 = DAT_002aac24;
  local_4 = param_4;
  local_8 = param_3;
  piVar8 = (int *)(&stack0xffffffe4 + DAT_002aac24);
  psVar9 = (size_t *)(&stack0xffffffe4 + DAT_002aac24);
  piVar10 = (int *)(&stack0xffffffe4 + DAT_002aac24);
  piVar11 = (int *)(&stack0xffffffe4 + DAT_002aac24);
  *(undefined4 *)(&stack0xffffffec + DAT_002aac24) = param_2;
  puVar6 = *(undefined4 **)(DAT_002aac2c + 0x2aaad2);
  *(undefined4 *)(&stack0xffffffe8 + DAT_002aac24) = param_1;
  iVar1 = DAT_002aac28 + DAT_002aac24;
  *(undefined4 *)(&stack0xffffffe4 + DAT_002aac30 + DAT_002aac24) = *puVar6;
  pcVar7 = *(char **)(&stack0xffffffe4 + iVar1);
  memset((void *)((int)&local_8 + DAT_002aac24),0,0x800);
  memset(&stack0xffffffe4 + DAT_002aac34 + iVar2,0,0x800);
  memset(&stack0xffffffe4 + DAT_002aac38 + iVar2,0,0x800);
  memset(&stack0xffffffe4 + DAT_002aac3c + iVar2,0,0x800);
  memset(&stack0xffffffe4 + DAT_002aac40 + iVar2,0,0x800);
  iVar3 = DAT_002aac44;
  strcpy((char *)((int)&local_8 + iVar2),pcVar7);
  *(undefined4 **)((int)&iStack_c + iVar2) = (undefined4 *)((int)(&stack0xffffffe4 + iVar1) + 4);
  *(undefined4 **)(&stack0xfffffff0 + iVar2) = puVar6;
  while( true ) {
    puVar6 = *(undefined4 **)((int)&iStack_c + iVar2);
    *(undefined4 **)((int)&iStack_c + iVar2) = puVar6 + 1;
    pcVar7 = (char *)*puVar6;
    if (pcVar7 == (char *)0x0) break;
    L_PrintLog((char *)(iVar3 + 0x2aab2e),pcVar7);
    puVar6 = *(undefined4 **)((int)&iStack_c + iVar2);
    *(undefined4 **)((int)&iStack_c + iVar2) = puVar6 + 1;
    __src = (char *)*puVar6;
    if (__src == (char *)0x0) break;
    __haystack = (char *)((int)&local_8 + iVar2);
    L_PrintLog((char *)(DAT_002aac48 + 0x2aab5a),__src);
    pcVar4 = strstr(__haystack,pcVar7);
    if (pcVar4 != (char *)0x0) {
      *piVar8 = (int)pcVar4 - (int)__haystack;
      if ((int)pcVar4 - (int)__haystack == 0) {
        strcpy(&stack0xffffffe4 + DAT_002aac3c + iVar2,__src);
        sVar5 = strlen(pcVar7);
        strcpy(&stack0xffffffe4 + DAT_002aac40 + iVar2,__haystack + sVar5);
        strcpy(&stack0xffffffe4 + DAT_002aac34 + iVar2,&stack0xffffffe4 + DAT_002aac3c + iVar2);
      }
      else {
        strncpy(&stack0xffffffe4 + DAT_002aac38 + iVar2,__haystack,*psVar9);
        (&stack0xffffffe4)[*piVar10 + DAT_002aac38 + iVar2] = 0;
        strcpy(&stack0xffffffe4 + DAT_002aac3c + iVar2,__src);
        sVar5 = strlen(pcVar7);
        strcpy(&stack0xffffffe4 + DAT_002aac40 + iVar2,__haystack + sVar5 + *piVar11);
        strcpy(&stack0xffffffe4 + DAT_002aac34 + iVar2,&stack0xffffffe4 + DAT_002aac38 + iVar2);
        strcat(&stack0xffffffe4 + DAT_002aac34 + iVar2,&stack0xffffffe4 + DAT_002aac3c + iVar2);
      }
      strcat(&stack0xffffffe4 + DAT_002aac34 + iVar2,&stack0xffffffe4 + DAT_002aac40 + iVar2);
      strcpy((char *)((int)&local_8 + iVar2),&stack0xffffffe4 + DAT_002aac34 + iVar2);
    }
  }
  strncpy(*(char **)(&stack0xffffffe8 + iVar2),(char *)((int)&local_8 + iVar2),
          *(size_t *)(&stack0xffffffec + iVar2));
  if (*(int *)(&stack0xffffffe4 + DAT_002aac30 + iVar2) != **(int **)(&stack0xfffffff0 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


