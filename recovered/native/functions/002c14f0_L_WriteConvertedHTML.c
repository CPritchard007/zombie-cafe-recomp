/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c14f0 L_WriteConvertedHTML */

undefined4 L_WriteConvertedHTML(char *param_1,char *param_2,int param_3)

{
  char *__dest;
  char *pcVar1;
  size_t sVar2;
  char *__src;
  uint uVar3;
  char *__haystack;
  int local_2c;
  
  __haystack = *(char **)(param_3 + 4);
  __dest = (char *)malloc(*(int *)(param_3 + 8) + 0x200);
  *__dest = '\0';
  uVar3 = *(uint *)(param_3 + 8);
  pcVar1 = strstr(__haystack,(char *)(DAT_002c1598 + 0x2c1516));
  __src = (char *)(DAT_002c159c + 0x2c1526);
  local_2c = 0;
  while ((pcVar1 != (char *)0x0 && ((uint)((int)pcVar1 - *(int *)(param_3 + 4)) < uVar3))) {
    local_2c = local_2c + ((int)pcVar1 - (int)__haystack) + 0xbU;
    strncat(__dest,__haystack,(int)pcVar1 - (int)__haystack);
    strncat(__dest,param_2,0x40);
    strcat(__dest,__src);
    __haystack = pcVar1 + 0xb;
    pcVar1 = strstr(__haystack,(char *)(DAT_002c15a0 + 0x2c1566));
  }
  strncat(__dest,__haystack,uVar3 - local_2c);
  sVar2 = strlen(__dest);
  CCAssetManager::writeFile(param_1,__dest,sVar2);
  free(__dest);
  return 1;
}


