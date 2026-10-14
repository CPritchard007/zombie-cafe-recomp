/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5800 L_AddToBanFile */

/* L_AddToBanFile(char const*, char const*) */

void L_AddToBanFile(char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b5968;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002b5968);
  pcVar4 = &stack0x0000010c + DAT_002b5968;
  *(char **)((int)&uStack_4 + DAT_002b5968) = param_2;
  puVar8 = *(undefined4 **)(DAT_002b5970 + 0x2b5814);
  *(undefined4 *)(&stack0x00000210 + DAT_002b5968) = *puVar8;
  CCGetWritableFilePath(pcVar4,0x104,(char *)(DAT_002b596c + 0x2b581a));
  uVar6 = *(undefined4 *)((int)&uStack_4 + iVar1);
  *puVar9 = pcVar4;
  sprintf(&stack0x0000000c + iVar1,(char *)(DAT_002b5974 + 0x2b582e),uVar6,param_1);
  L_PrintLog((char *)(DAT_002b5978 + 0x2b583c),&stack0x0000000c + iVar1);
  uVar2 = CCAssetManager::fileSize(pcVar4);
  sVar3 = strlen(param_1);
  *(size_t *)(&stack0xfffffff8 + iVar1) = sVar3;
  sVar3 = strlen(*(char **)((int)&uStack_4 + iVar1));
  *(size_t *)(&stack0x00000000 + iVar1) = sVar3;
  sprintf(&stack0x0000000c + iVar1,(char *)(DAT_002b597c + 0x2b585e),uVar2);
  L_PrintLog((char *)(DAT_002b5980 + 0x2b586a),&stack0x0000000c + iVar1);
  *(undefined4 **)(&stack0x00000008 + iVar1) = puVar8;
  if ((int)uVar2 < 1) {
    L_PrintLog((char *)(DAT_002b598c + 0x2b58c0),(char *)(DAT_002b5990 + 0x2b58c2));
    sprintf(&stack0x0000000c + iVar1,(char *)(DAT_002b5994 + 0x2b58ce),param_1,
            *(undefined4 *)((int)&uStack_4 + iVar1));
    sVar3 = strlen(&stack0x0000000c + iVar1);
    CCAssetManager::writeFile(pcVar4,&stack0x0000000c + iVar1,sVar3);
    L_PrintLog((char *)(DAT_002b5998 + 0x2b58ea),&stack0x0000000c + iVar1);
  }
  else {
    sVar3 = *(int *)(&stack0xfffffff8 + iVar1) + *(int *)(&stack0x00000000 + iVar1) + 2 + uVar2;
    *(size_t *)(&stack0x00000000 + iVar1) = sVar3;
    __s = (char *)malloc(sVar3);
    CCAssetManager::readFile(pcVar4,__s,uVar2);
    sprintf(&stack0x0000000c + iVar1,(char *)(DAT_002b5984 + 0x2b589a),__s,uVar2);
    L_PrintLog((char *)(DAT_002b5988 + 0x2b58a8),&stack0x0000000c + iVar1);
    sVar3 = strlen(__s);
    *(size_t *)(&stack0x00000004 + iVar1) = sVar3;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
    pcVar4 = __s;
    while (*(int *)(&stack0xfffffff8 + iVar1) != *(int *)(&stack0x00000004 + iVar1)) {
      if (*param_1 == *pcVar4) {
        sVar3 = strlen(param_1);
        sVar7 = 0;
        while( true ) {
          if (sVar7 == sVar3) {
            pcVar4 = (char *)(DAT_002b599c + 0x2b5916);
            pcVar5 = (char *)(DAT_002b59a0 + 0x2b5918);
            goto LAB_002b5948;
          }
          if (param_1[sVar7] != pcVar4[sVar7]) break;
          sVar7 = sVar7 + 1;
        }
      }
      pcVar4 = pcVar4 + 1;
      *(int *)(&stack0xfffffff8 + iVar1) = *(int *)(&stack0xfffffff8 + iVar1) + 1;
    }
    sprintf(__s + uVar2,(char *)(DAT_002b59a4 + 0x2b5932),param_1,
            *(undefined4 *)((int)&uStack_4 + iVar1));
    CCAssetManager::writeFile(&stack0x0000010c + iVar1,__s,*(uint *)(&stack0x00000000 + iVar1));
    pcVar4 = (char *)(DAT_002b59a8 + 0x2b5948);
    pcVar5 = (char *)(DAT_002b59ac + 0x2b594a);
LAB_002b5948:
    L_PrintLog(pcVar4,pcVar5);
    free(__s);
  }
  if (*(int *)(&stack0x00000210 + iVar1) != **(int **)(&stack0x00000008 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


