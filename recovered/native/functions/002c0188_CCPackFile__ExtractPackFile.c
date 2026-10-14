/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0188 CCPackFile::ExtractPackFile */

/* CCPackFile::ExtractPackFile(char const*, void*, unsigned int) */

void CCPackFile::ExtractPackFile(char *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *__ptr;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iStack_4;
  
  iVar1 = DAT_002c039c;
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_002c039c);
  puVar8 = *(undefined4 **)(DAT_002c03a4 + 0x2c019c);
  *(undefined4 *)(&stack0x00000248 + DAT_002c039c) = *puVar8;
  L_PrintLog((char *)(DAT_002c03a8 + 0x2c01a0),(char *)(DAT_002c03a0 + 0x2c019a));
  iVar2 = CCAssetManager::doesFileExist(param_1);
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar8;
  if (iVar2 == 0) {
    uVar4 = 0;
    goto LAB_002c0384;
  }
  sVar3 = CCAssetManager::fileSize(param_1);
  uVar9 = 0;
  L_PrintLog((char *)(DAT_002c03ac + 0x2c01c6),param_1);
  __ptr = (undefined1 *)malloc(sVar3);
  *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
  if (__ptr == (undefined1 *)0x0) {
    uVar4 = 0;
    goto LAB_002c0384;
  }
  CCAssetManager::readFile(param_1,&stack0x00000008 + iVar1,4);
  CCAssetManager::readFile(param_1,__ptr,sVar3);
  *puVar11 = 4;
  sprintf(&stack0x00000044 + iVar1,(char *)(DAT_002c03b0 + 0x2c01f6),sVar3,
          *(undefined4 *)(&stack0x00000008 + iVar1));
  L_PrintLog((char *)(DAT_002c03b4 + 0x2c0206),&stack0x00000044 + iVar1);
  puVar7 = __ptr;
  for (; uVar9 < sVar3 - 4; uVar9 = uVar9 + 1) {
    *puVar7 = puVar7[4];
    puVar7 = puVar7 + 1;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0) {
    uVar4 = 0;
    goto LAB_002c0384;
  }
  L_PrintLog((char *)(DAT_002c03b8 + 0x2c022a),(char *)(DAT_002c03bc + 0x2c022c));
  sprintf(&stack0x00000044 + iVar1,(char *)(DAT_002c03c0 + 0x2c0238),
          *(undefined4 *)(&stack0x00000008 + iVar1));
  L_PrintLog((char *)(DAT_002c03c4 + 0x2c0242),&stack0x00000044 + iVar1);
  puVar8 = (undefined4 *)malloc(*(size_t *)(&stack0x00000008 + iVar1));
  if (puVar8 == (undefined4 *)0x0) {
    uVar4 = 0;
    goto LAB_002c0384;
  }
  L_PrintLog((char *)(DAT_002c03c8 + 0x2c025c),(char *)(DAT_002c03cc + 0x2c025e));
  *(undefined4 *)(&stack0x0000002c + iVar1) = 0;
  *(undefined4 *)(&stack0x00000030 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000034 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000010 + iVar1) = 0;
  *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
  uVar4 = inflateInit_(&stack0x0000000c + iVar1,DAT_002c03d0 + 0x2c026a,0x38);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar4;
  uVar4 = 0;
  if (*(int *)(&stack0xfffffff8 + iVar1) != 0) goto LAB_002c0384;
  L_PrintLog((char *)(DAT_002c03d4 + 0x2c028a),(char *)(DAT_002c03d8 + 0x2c028c));
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
  *(size_t *)(&stack0x00000010 + iVar1) = sVar3;
  *(undefined1 **)(&stack0x0000000c + iVar1) = __ptr;
  *(undefined4 **)(&stack0x00000018 + iVar1) = puVar8;
  iVar2 = inflate(&stack0x0000000c + iVar1,*(undefined4 *)(&stack0xfffffff8 + iVar1));
  sprintf(&stack0x00000044 + iVar1,(char *)(DAT_002c03dc + 0x2c02aa),iVar2);
  L_PrintLog((char *)(DAT_002c03e0 + 0x2c02b6),&stack0x00000044 + iVar1);
  if (iVar2 == -3) {
    pcVar5 = (char *)(DAT_002c03ec + 0x2c02d8);
    pcVar6 = (char *)(DAT_002c03f0 + 0x2c02da);
LAB_002c02e2:
    L_PrintLog(pcVar5,pcVar6);
  }
  else {
    if (iVar2 == 2) {
      pcVar5 = (char *)(DAT_002c03e4 + 0x2c02ce);
      pcVar6 = (char *)(DAT_002c03e8 + 0x2c02d0);
      goto LAB_002c02e2;
    }
    if (iVar2 == -4) {
      pcVar5 = (char *)(DAT_002c03f4 + 0x2c02e2);
      pcVar6 = (char *)(DAT_002c03f8 + 0x2c02e4);
      goto LAB_002c02e2;
    }
  }
  if (((iVar2 == -3) || (iVar2 == 2)) || (iVar2 == -4)) {
    free(puVar8);
    inflateEnd(&stack0x0000000c + iVar1);
    uVar4 = 0;
  }
  else {
    L_PrintLog((char *)(DAT_002c03fc + 0x2c0312),(char *)(DAT_002c0400 + 0x2c0314));
    inflateEnd(&stack0x0000000c + iVar1);
    free(__ptr);
    L_PrintLog((char *)(DAT_002c0404 + 0x2c032a),(char *)(DAT_002c0408 + 0x2c032c));
    uVar4 = *puVar8;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
    *(undefined4 *)((int)&iStack_4 + iVar1) = uVar4;
    puVar10 = puVar8;
    while (*(int *)(&stack0xfffffff8 + iVar1) != *(int *)((int)&iStack_4 + iVar1)) {
      pcVar5 = (char *)((int)puVar8 + puVar10[4]);
      for (uVar9 = 0; sVar3 = strlen(pcVar5), uVar9 < sVar3; uVar9 = uVar9 + 1) {
        if (pcVar5[uVar9] == '/') {
          pcVar5[uVar9] = '_';
        }
      }
      CCGetCacheFilePath(&stack0x00000144 + iVar1,0x104,pcVar5);
      CCAssetManager::writeFile(pcVar5,(void *)((int)puVar8 + puVar10[2]),puVar10[3]);
      puVar10 = puVar10 + 3;
      *(int *)(&stack0xfffffff8 + iVar1) = *(int *)(&stack0xfffffff8 + iVar1) + 1;
    }
    free(puVar8);
    uVar4 = 1;
  }
LAB_002c0384:
  if (*(int *)(&stack0x00000248 + iVar1) == **(int **)(&stack0x00000000 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


