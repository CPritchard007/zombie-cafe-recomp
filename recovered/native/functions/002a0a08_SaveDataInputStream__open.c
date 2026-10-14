/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0a08 SaveDataInputStream::open */

/* SaveDataInputStream::open(String) */

SaveDataInputStream * SaveDataInputStream::open(String *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  SaveDataInputStream *this;
  int iVar4;
  char *pcVar5;
  
  pcVar2 = (char *)String::getBytes(param_1);
  iVar1 = DAT_002a0a9c;
  iVar3 = DAT_002a0a98;
  iVar4 = 0;
  do {
    if (pcVar2[iVar4] == '.') {
      pcVar2[iVar4 + 4] = '\0';
      pcVar5 = (char *)(iVar1 + 0x2a0a2a);
      L_PrintLog((char *)(iVar3 + 0x2a0a26),pcVar2);
      L_PrintLog(pcVar5,pcVar2);
      iVar3 = CCAssetManager::doesFileExist(pcVar2);
      if (iVar3 == 0) {
        this = (SaveDataInputStream *)0x0;
      }
      else {
        L_PrintLog(pcVar5,(char *)(DAT_002a0aa0 + 0x2a0a54));
        iVar3 = CCAssetManager::fileSize(pcVar2);
        if (iVar3 < 1) {
          this = (SaveDataInputStream *)0x0;
        }
        else {
          L_PrintLog(pcVar5,(char *)(DAT_002a0aa4 + 0x2a0a68));
          this = (SaveDataInputStream *)operator_new(0x18);
          SaveDataInputStream(this,pcVar2);
        }
      }
      return this;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x40);
  L_PrintLog((char *)(DAT_002a0aa8 + 0x2a0a92),pcVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


