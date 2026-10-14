/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001499ec GameStateGatya::onLoadImageFromURLSuccess_Premium */

/* GameStateGatya::onLoadImageFromURLSuccess_Premium(void*) */

void GameStateGatya::onLoadImageFromURLSuccess_Premium(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = (char *)(DAT_00149a54 + 0x1499f8);
  pcVar6 = (char *)(DAT_00149a5c + 0x1499fe);
  L_PrintLog(pcVar5,(char *)(DAT_00149a58 + 0x1499fa));
  iVar1 = CCAssetManager::doesFileExist(pcVar6);
  iVar2 = DAT_00149a74;
  puVar4 = *(undefined4 **)(DAT_00149a60 + 0x149a0c);
  if (iVar1 == 0) {
    *puVar4 = 2;
    L_PrintLog(pcVar5,(char *)(iVar2 + 0x149a4e));
  }
  else {
    L_PrintLog((char *)(DAT_00149a64 + 0x149a18),(char *)(DAT_00149a68 + 0x149a1a));
    iVar2 = CCAssetManager::fileSize(pcVar6);
    if (iVar2 < 1) {
      L_PrintLog(pcVar5,(char *)(DAT_00149a70 + 0x149a3c));
      uVar3 = 2;
    }
    else {
      L_PrintLog(pcVar5,(char *)(DAT_00149a6c + 0x149a2e));
      uVar3 = 1;
    }
    *puVar4 = uVar3;
  }
  return;
}


