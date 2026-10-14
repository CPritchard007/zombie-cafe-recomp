/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da5a8 GiftManager::PopGift */

/* GiftManager::PopGift(void*, SGiftDef*) */

void GiftManager::PopGift(void *param_1,SGiftDef *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char acStack_4 [4];
  
  iVar3 = DAT_001da6ec;
  *(SGiftDef **)(&stack0xfffffff4 + DAT_001da6ec) = param_2;
  puVar9 = *(undefined4 **)(DAT_001da6f4 + 0x1da5ba);
  pcVar10 = (char *)(DAT_001da6f0 + 0x1da5c0);
  uVar7 = *puVar9;
  *(void **)(&stack0xfffffff0 + DAT_001da6ec) = param_1;
  *(undefined4 *)(&stack0xffffffec + DAT_001da6f8 + DAT_001da6ec) = uVar7;
  CCGetWritableFilePath(&stack0x000000fc + DAT_001da6ec,0x104,pcVar10);
  L_PrintLog((char *)(DAT_001da6fc + 0x1da5d8),(char *)(DAT_001da700 + 0x1da5da));
  iVar4 = CCAssetManager::doesFileExist(&stack0x000000fc + iVar3);
  *(undefined4 **)(&stack0xfffffff8 + iVar3) = puVar9;
  if (iVar4 != 0) {
    uVar5 = CCAssetManager::fileSize(&stack0x000000fc + iVar3);
    sprintf(acStack_4 + iVar3,(char *)(DAT_001da704 + 0x1da5f8),uVar5);
    L_PrintLog((char *)(DAT_001da708 + 0x1da606),acStack_4 + iVar3);
    sprintf(acStack_4 + iVar3,(char *)(DAT_001da70c + 0x1da612),uVar5);
    L_PrintLog(pcVar10,acStack_4 + iVar3);
    pcVar10 = (char *)malloc(uVar5 + 1);
    memset(pcVar10,0,uVar5 + 1);
    CCAssetManager::readFile(&stack0x000000fc + iVar3,pcVar10,uVar5);
    iVar4 = 0;
    L_PrintLog((char *)(DAT_001da710 + 0x1da640),pcVar10);
    do {
      pcVar1 = pcVar10 + iVar4;
      iVar4 = iVar4 + 1;
    } while (*pcVar1 != '\n');
    iVar8 = 0;
    while( true ) {
      cVar2 = pcVar10[iVar4];
      if ((cVar2 == '\0') || (cVar2 == '\n')) break;
      (&stack0x00000200)[iVar8 + iVar3] = cVar2;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 1;
    }
    if (cVar2 != '\0') {
      iVar4 = iVar4 + 1;
    }
    pcVar1 = &stack0x00000200 + iVar3;
    pcVar1[iVar8] = '\0';
    L_PrintLog((char *)(DAT_001da714 + 0x1da66c),pcVar1);
    sVar6 = strlen(pcVar1);
    sprintf(acStack_4 + iVar3,(char *)(DAT_001da718 + 0x1da67e),uVar5 - sVar6);
    L_PrintLog((char *)(DAT_001da71c + 0x1da68a),acStack_4 + iVar3);
    if ((int)(uVar5 - sVar6) < 1) {
      L_PrintLog((char *)(DAT_001da720 + 0x1da6b8),(char *)(DAT_001da724 + 0x1da6ba));
      CCAssetManager::deleteFile(&stack0x000000fc + iVar3);
    }
    else {
      sVar6 = strlen(pcVar10 + iVar4);
      CCAssetManager::writeFile(&stack0x000000fc + iVar3,pcVar10 + iVar4,sVar6);
    }
    L_ParseGiftData(*(SGiftManager **)(&stack0xfffffff0 + iVar3),&stack0x00000200 + iVar3,
                    *(SGiftDef **)(&stack0xfffffff4 + iVar3));
    free(pcVar10);
    iVar4 = 1;
  }
  if (*(int *)(&stack0xffffffec + DAT_001da6f8 + iVar3) != **(int **)(&stack0xfffffff8 + iVar3)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


