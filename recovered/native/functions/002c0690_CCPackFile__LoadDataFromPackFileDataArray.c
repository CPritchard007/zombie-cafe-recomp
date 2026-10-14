/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0690 CCPackFile::LoadDataFromPackFileDataArray */

/* CCPackFile::LoadDataFromPackFileDataArray(unsigned char const*, char const*) */

uchar * CCPackFile::LoadDataFromPackFileDataArray(uchar *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  uint uVar6;
  uchar *__s;
  
  iVar3 = *(int *)param_1;
  iVar4 = 0;
  puVar5 = param_1 + 8;
  while( true ) {
    if (iVar4 == iVar3) {
      return (uchar *)0xffffffff;
    }
    __s = param_1 + *(int *)(puVar5 + 8);
    for (uVar6 = 0; sVar1 = strlen((char *)__s), uVar6 < sVar1; uVar6 = uVar6 + 1) {
      if (__s[uVar6] == '/') {
        __s[uVar6] = '_';
      }
    }
    iVar2 = strcmp((char *)__s,param_2);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0xc;
  }
  return puVar5;
}


