/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ff48 ResourceManager::Resource::getSize */

/* ResourceManager::Resource::getSize(char const*, int) */

void ResourceManager::Resource::getSize(char *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_0029ff80 + 0x29ff54);
  local_14 = *piVar2;
  uVar1 = CCAssetManager::fileSize(param_1);
  sprintf(acStack_114,(char *)(DAT_0029ff84 + 0x29ff68),param_1,uVar1);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


