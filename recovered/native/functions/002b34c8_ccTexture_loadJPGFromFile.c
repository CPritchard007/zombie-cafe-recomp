/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b34c8 ccTexture_loadJPGFromFile */

/* ccTexture_loadJPGFromFile(ccTexture2D*, char const*) */

void ccTexture_loadJPGFromFile(ccTexture2D *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_002b352c + 0x2b34d4);
  local_14 = *piVar2;
  sprintf(acStack_114,(char *)(DAT_002b3530 + 0x2b34de),param_2);
  iVar1 = CCAssetManager::doesFileExist(param_2);
  if (iVar1 != 0) {
    javaLoadTexture(param_2,&local_12c,1);
    *(undefined4 *)param_1 = local_120;
    *(undefined4 *)(param_1 + 4) = local_12c;
    *(undefined4 *)(param_1 + 8) = local_128;
    *(undefined4 *)(param_1 + 0xc) = local_124;
    *(undefined4 *)(param_1 + 0x10) = 4;
    *(undefined4 *)(param_1 + 0x14) = local_11c;
    *(undefined4 *)(param_1 + 0x18) = local_118;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


