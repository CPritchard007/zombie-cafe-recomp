/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299244 CapcomFile::checkFileData */

/* CapcomFile::checkFileData(char const*, unsigned int) */

bool CapcomFile::checkFileData(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = fileExist(param_1);
  bVar3 = true;
  if (iVar1 == 0) {
    uVar2 = getFreeSpace();
    bVar3 = param_2 <= uVar2;
  }
  return bVar3;
}


