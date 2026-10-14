/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00149a78 GameStateGatya::onLoadImageFromURLSuccess_Normal */

/* GameStateGatya::onLoadImageFromURLSuccess_Normal(void*) */

void GameStateGatya::onLoadImageFromURLSuccess_Normal(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = (char *)(DAT_00149ae0 + 0x149a84);
  pcVar6 = (char *)(DAT_00149ae8 + 0x149a8a);
  L_PrintLog(pcVar5,(char *)(DAT_00149ae4 + 0x149a86));
  iVar1 = CCAssetManager::doesFileExist(pcVar6);
  iVar2 = DAT_00149b00;
  puVar4 = *(undefined4 **)(DAT_00149aec + 0x149a98);
  if (iVar1 == 0) {
    *puVar4 = 2;
    L_PrintLog(pcVar5,(char *)(iVar2 + 0x149ada));
  }
  else {
    L_PrintLog((char *)(DAT_00149af0 + 0x149aa4),(char *)(DAT_00149af4 + 0x149aa6));
    iVar2 = CCAssetManager::fileSize(pcVar6);
    if (iVar2 < 1) {
      L_PrintLog(pcVar5,(char *)(DAT_00149afc + 0x149ac8));
      uVar3 = 2;
    }
    else {
      L_PrintLog(pcVar5,(char *)(DAT_00149af8 + 0x149aba));
      uVar3 = 1;
    }
    *puVar4 = uVar3;
  }
  return;
}


