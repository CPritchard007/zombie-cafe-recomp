/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c040c CCPackFile::RemoveUnPackedFiles */

/* CCPackFile::RemoveUnPackedFiles(char const*, unsigned int) */

void CCPackFile::RemoveUnPackedFiles(char *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char acStack_1a0 [128];
  char acStack_120 [260];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002c0498 + 0x2c0418);
  local_1c = *piVar5;
  pvVar1 = (void *)CCFile::Open(param_1,0);
  uVar2 = 0;
  if (pvVar1 != (void *)0xffffffff) {
    while (iVar4 = CCFile::ReadALine(pvVar1,acStack_1a0,0x80), iVar4 != 0) {
      for (uVar6 = 0; sVar3 = strlen(acStack_1a0), uVar6 < sVar3; uVar6 = uVar6 + 1) {
        if (acStack_1a0[uVar6] == '/') {
          acStack_1a0[uVar6] = '_';
        }
      }
      if (param_2 == 0) {
        CCGetCacheFilePath(acStack_120,0x104,acStack_1a0);
      }
      else {
        CCGetWritableFilePath(acStack_120,0x104,acStack_1a0);
      }
      CCFile::Delete(acStack_120);
    }
    CCFile::Close(pvVar1);
    uVar2 = 1;
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


