/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ff88 ResourceManager::Resource::load */

/* ResourceManager::Resource::load(char const*, int) */

void ResourceManager::Resource::load(char *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  size_t __size;
  int *piVar3;
  char acStack_220 [256];
  undefined1 auStack_120 [252];
  char *pcStack_24;
  int iStack_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_002a000c + 0x29ff94);
  local_1c = *piVar3;
  pcStack_24 = param_1;
  iStack_20 = param_2;
  pvVar1 = (void *)CCGetFilePath(auStack_120,0x104,param_1,1);
  if (pvVar1 != (void *)0x0) {
    iVar2 = CCAssetManager::doesFileExist(param_1);
    if (iVar2 == 0) {
      L_PrintLog((char *)(DAT_002a0010 + 0x29ffbe),param_1);
      pvVar1 = (void *)0x0;
    }
    else {
      __size = CCAssetManager::fileSize(param_1);
      sprintf(acStack_220,(char *)(DAT_002a0014 + 0x29ffd4),param_1,__size);
      L_PrintLog((char *)(DAT_002a0018 + 0x29ffe0),acStack_220);
      pvVar1 = malloc(__size);
      CCAssetManager::readFile(param_1,pvVar1,__size);
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar1);
  }
  return;
}


