/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0534 CCPackFile::ExtractPackFileToDataArray */

/* CCPackFile::ExtractPackFileToDataArray(char const*) */

void CCPackFile::ExtractPackFileToDataArray(char *param_1)

{
  undefined1 *puVar1;
  size_t __size;
  undefined1 *__ptr;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  size_t local_158;
  undefined1 *local_154;
  size_t local_150;
  undefined1 *local_148;
  size_t local_144;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002c065c + 0x2c0540);
  pcVar5 = (char *)(DAT_002c0660 + 0x2c0544);
  local_1c = *piVar4;
  L_PrintLog(pcVar5,param_1);
  puVar1 = (undefined1 *)CCAssetManager::doesFileExist(param_1);
  if (puVar1 != (undefined1 *)0x0) {
    L_PrintLog(pcVar5,(char *)(DAT_002c0664 + 0x2c0564));
    __size = CCAssetManager::fileSize(param_1);
    L_PrintLog((char *)(DAT_002c0668 + 0x2c0576),param_1);
    __ptr = (undefined1 *)malloc(__size);
    local_158 = 0;
    puVar1 = __ptr;
    if (__ptr != (undefined1 *)0x0) {
      CCAssetManager::readFile(param_1,&local_158,4);
      CCAssetManager::readFile(param_1,__ptr,__size);
      sprintf(acStack_11c,(char *)(DAT_002c066c + 0x2c05a8),__size,local_158,4);
      L_PrintLog((char *)(DAT_002c0670 + 0x2c05b8),acStack_11c);
      for (uVar3 = 0; uVar3 < __size - 4; uVar3 = uVar3 + 1) {
        *puVar1 = puVar1[4];
        puVar1 = puVar1 + 1;
      }
      if (local_158 != 0) {
        printf((char *)(DAT_002c0674 + 0x2c05dc),__size);
        puVar1 = (undefined1 *)malloc(local_158);
        if (puVar1 != (undefined1 *)0x0) {
          local_134 = 0;
          local_130 = 0;
          local_12c = 0;
          local_150 = 0;
          local_154 = (undefined1 *)0x0;
          iVar2 = inflateInit_(&local_154,DAT_002c0678 + 0x2c05f2,0x38);
          if (iVar2 != 0) {
            puVar1 = (undefined1 *)0x0;
            goto LAB_002c0646;
          }
          local_144 = local_158;
          local_154 = __ptr;
          local_150 = __size;
          local_148 = puVar1;
          iVar2 = inflate(&local_154,0);
          if (((iVar2 != -3) && (iVar2 != 2)) && (iVar2 != -4)) {
            inflateEnd(&local_154);
            free(__ptr);
            goto LAB_002c0646;
          }
          free(puVar1);
          inflateEnd(&local_154);
        }
      }
      puVar1 = (undefined1 *)0xffffffff;
    }
  }
LAB_002c0646:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar1);
  }
  return;
}


