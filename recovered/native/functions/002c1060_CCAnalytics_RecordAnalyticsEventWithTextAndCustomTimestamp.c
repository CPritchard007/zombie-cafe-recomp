/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1060 CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp */

void CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  char acStack_4 [4];
  
  iVar1 = DAT_002c1124;
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002c1124);
  piVar5 = *(int **)(DAT_002c112c + 0x2c1074);
  *(int *)(&stack0xffffffec + DAT_002c1128 + DAT_002c1124) = *piVar5;
  CCGetCacheFilePath(acStack_4 + DAT_002c1124,0x104,(char *)(DAT_002c1130 + 0x2c107e));
  *puVar7 = param_2;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = param_3;
  snprintf(&stack0x00000100 + iVar1,0x80,(char *)(DAT_002c1134 + 0x2c1092),param_1);
  __s = &stack0x00000100 + iVar1;
  __s[DAT_002c1138] = '\n';
  __s[DAT_002c113c] = '\0';
  sVar2 = strlen(__s);
  *(size_t *)(&stack0xfffffff8 + iVar1) = sVar2;
  uVar3 = CCAssetManager::doesFileExist(acStack_4 + iVar1);
  if (uVar3 != 0) {
    uVar3 = CCAssetManager::fileSize(acStack_4 + iVar1);
    if (DAT_002c1140 < (int)uVar3) {
      sVar2 = 0;
      goto LAB_002c110a;
    }
    if (0 < (int)uVar3) {
      CCAssetManager::readFile(acStack_4 + iVar1,&stack0xffffffec + DAT_002c1144 + iVar1,uVar3);
    }
  }
  puVar6 = &stack0xffffffec + DAT_002c1144 + iVar1;
  L_PrintLog((char *)(DAT_002c1148 + 0x2c10e8),&stack0x00000100 + iVar1);
  strncpy(puVar6 + uVar3,&stack0x00000100 + iVar1,*(size_t *)(&stack0xfffffff8 + iVar1));
  iVar4 = *(int *)(&stack0xfffffff8 + iVar1);
  puVar6[uVar3 + iVar4] = 0;
  CCAssetManager::writeFile(acStack_4 + iVar1,puVar6,uVar3 + iVar4);
LAB_002c110a:
  if (*(int *)(&stack0xffffffec + DAT_002c1128 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar2);
  }
  return;
}


