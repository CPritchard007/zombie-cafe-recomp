/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00149960 GameStateGatya::onLoadImageFromURLSuccess_PremiumEv */

/* GameStateGatya::onLoadImageFromURLSuccess_PremiumEv(void*) */

void GameStateGatya::onLoadImageFromURLSuccess_PremiumEv(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = (char *)(DAT_001499c8 + 0x14996c);
  pcVar6 = (char *)(DAT_001499d0 + 0x149972);
  L_PrintLog(pcVar5,(char *)(DAT_001499cc + 0x14996e));
  iVar1 = CCAssetManager::doesFileExist(pcVar6);
  iVar2 = DAT_001499e8;
  puVar4 = *(undefined4 **)(DAT_001499d4 + 0x149980);
  if (iVar1 == 0) {
    *puVar4 = 2;
    L_PrintLog(pcVar5,(char *)(iVar2 + 0x1499c2));
  }
  else {
    L_PrintLog((char *)(DAT_001499d8 + 0x14998c),(char *)(DAT_001499dc + 0x14998e));
    iVar2 = CCAssetManager::fileSize(pcVar6);
    if (iVar2 < 1) {
      L_PrintLog(pcVar5,(char *)(DAT_001499e4 + 0x1499b0));
      uVar3 = 2;
    }
    else {
      L_PrintLog(pcVar5,(char *)(DAT_001499e0 + 0x1499a2));
      uVar3 = 1;
    }
    *puVar4 = uVar3;
  }
  return;
}


