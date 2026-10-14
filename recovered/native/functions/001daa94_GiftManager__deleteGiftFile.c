/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001daa94 GiftManager::deleteGiftFile */

/* GiftManager::deleteGiftFile() */

void GiftManager::deleteGiftFile(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char acStack_120 [260];
  int local_1c;
  
  iVar1 = DAT_001dab18;
  piVar5 = *(int **)(DAT_001dab08 + 0x1daaa0);
  local_1c = *piVar5;
  pcVar3 = (char *)(DAT_001dab10 + 0x1daab0);
  pcVar4 = (char *)(DAT_001dab14 + 0x1daab2);
  CCGetWritableFilePath(acStack_120,0x104,(char *)(DAT_001dab0c + 0x1daaac));
  L_PrintLog(pcVar3,pcVar4);
  L_PrintLog((char *)(iVar1 + 0x1daac8),(char *)(DAT_001dab1c + 0x1daacc));
  L_PrintLog(pcVar3,pcVar4);
  iVar2 = CCAssetManager::fileSize(acStack_120);
  if (iVar2 < 1) {
    pcVar3 = (char *)(DAT_001dab24 + 0x1daaf2);
  }
  else {
    CCAssetManager::deleteFile(acStack_120);
    pcVar3 = (char *)(DAT_001dab20 + 0x1daaec);
  }
  L_PrintLog((char *)(iVar1 + 0x1daac8),pcVar3);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


