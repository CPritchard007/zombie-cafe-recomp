/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001618bc L_UploadAndroidAnalytics */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* L_UploadAndroidAnalytics() */

void L_UploadAndroidAnalytics(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_00161920 + 0x1618c8);
  pcVar3 = (char *)(DAT_00161924 + 0x1618cc);
  local_14 = *piVar2;
  iVar1 = CCAssetManager::doesFileExist(pcVar3);
  if (iVar1 != 0) {
    iVar1 = CCAssetManager::fileSize(pcVar3);
  }
  sprintf(acStack_114,(char *)(DAT_00161928 + 0x1618ec),iVar1);
  L_PrintLog((char *)(DAT_0016192c + 0x1618f6),acStack_114);
  if (100 < iVar1) {
    L_PrintLog((char *)(DAT_00161930 + 0x161904),(char *)(DAT_00161934 + 0x161906));
    CCMarketing_AndroidAnalytics(0);
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


