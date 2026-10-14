/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d9c1c FUN_001d9c1c */

void FUN_001d9c1c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  
  iVar5 = DAT_001d9da8;
  iVar1 = DAT_001d9d98;
  puVar8 = *(undefined4 **)(DAT_001d9d94 + 0x1d9c28);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_001d9d98);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_001d9d98);
  piVar11 = (int *)(&stack0xffffffec + DAT_001d9d98);
  piVar12 = (int *)(&stack0xffffffec + DAT_001d9d98);
  *(undefined4 *)(&stack0xffffffec + DAT_001d9d98) = param_2;
  *(undefined4 *)(&stack0xffffffec + DAT_001d9da0 + DAT_001d9d98) = *puVar8;
  pcVar4 = (char *)(DAT_001d9d9c + 0x1d9c40);
  pcVar6 = (char *)(DAT_001d9da4 + 0x1d9c42);
  *(undefined4 *)(param_1 + 8) = 0;
  CCGetWritableFilePath(&stack0xfffffff4 + iVar1,0x104,pcVar4);
  L_PrintLog(pcVar6,(char *)(iVar5 + 0x1d9c48));
  L_PrintLog((char *)(DAT_001d9dac + 0x1d9c5c),(char *)*puVar9);
  L_PrintLog(pcVar6,(char *)(iVar5 + 0x1d9c48));
  uVar2 = CCAssetManager::fileSize(&stack0xfffffff4 + iVar1);
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = puVar8;
  if ((int)uVar2 < 1) {
    L_PrintLog((char *)(DAT_001d9db8 + 0x1d9cba),(char *)(DAT_001d9dbc + 0x1d9cbc));
    (&stack0x000000f8)[iVar1] = 0;
  }
  else {
    pcVar4 = &stack0x000000f8 + iVar1;
    CCAssetManager::readFile(&stack0xfffffff4 + iVar1,pcVar4,uVar2);
    pcVar4[uVar2] = '\0';
    pcVar6 = (char *)(DAT_001d9db0 + 0x1d9c88);
    L_PrintLog(pcVar6,pcVar6);
    L_PrintLog(pcVar6,pcVar6);
    L_PrintLog((char *)(DAT_001d9db4 + 0x1d9c9e),pcVar4);
    L_PrintLog(pcVar6,pcVar6);
    L_PrintLog(pcVar6,pcVar6);
  }
  sVar3 = strlen((char *)*puVar10);
  sVar7 = 0;
  iVar5 = 2;
  while (sVar7 != sVar3) {
    pcVar4 = (char *)(*piVar11 + sVar7);
    sVar7 = sVar7 + 1;
    if (*pcVar4 == '\n') {
      if (iVar5 == 1) break;
      iVar5 = 1;
    }
  }
  pcVar4 = &stack0x000000f8 + iVar1;
  sVar3 = strlen(pcVar4);
  if (sVar3 != 0) {
    pcVar4[sVar3] = '\n';
    pcVar4[sVar3 + 1] = '\0';
  }
  pcVar4 = &stack0x000000f8 + iVar1;
  strcat(pcVar4,(char *)(*piVar12 + sVar7));
  sVar3 = strlen(pcVar4);
  CCAssetManager::writeFile(&stack0xfffffff4 + iVar1,pcVar4,sVar3);
  uVar2 = CCAssetManager::fileSize(&stack0xfffffff4 + iVar1);
  iVar5 = DAT_001d9dc0;
  CCAssetManager::readFile(&stack0xfffffff4 + iVar1,pcVar4,uVar2);
  pcVar6 = (char *)(iVar5 + 0x1d9d2c);
  pcVar4[uVar2] = '\0';
  L_PrintLog(pcVar6,pcVar6);
  L_PrintLog(pcVar6,pcVar6);
  L_PrintLog(pcVar6,pcVar6);
  iVar5 = DAT_001d9dd0;
  if (uVar2 == 0) {
    pcVar6 = (char *)(DAT_001d9dc4 + 0x1d9d52);
    pcVar4 = (char *)(DAT_001d9dc8 + 0x1d9d54);
  }
  else {
    pcVar6 = (char *)(DAT_001d9dcc + 0x1d9d5c);
  }
  L_PrintLog(pcVar6,pcVar4);
  pcVar4 = (char *)(iVar5 + 0x1d9d64);
  L_PrintLog(pcVar4,pcVar4);
  L_PrintLog(pcVar4,pcVar4);
  L_PrintLog(pcVar4,pcVar4);
  if (*(int *)(&stack0xffffffec + DAT_001d9da0 + iVar1) != **(int **)(&stack0xfffffff0 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


