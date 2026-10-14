/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c049c CCPackFile::ValidateUnPackedFiles */

/* CCPackFile::ValidateUnPackedFiles(char const*) */

void CCPackFile::ValidateUnPackedFiles(char *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char local_1a0 [128];
  char acStack_120 [260];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002c052c + 0x2c04a8);
  local_1c = *piVar5;
  pvVar1 = (void *)CCFile::Open(param_1,0);
  uVar2 = 0;
  if (pvVar1 != (void *)0xffffffff) {
    do {
      iVar4 = CCFile::ReadALine(pvVar1,local_1a0,0x80);
      if (iVar4 == 0) {
        CCFile::Close(pvVar1);
        uVar2 = 1;
        goto LAB_002c051c;
      }
      for (uVar6 = 0; sVar3 = strlen(local_1a0), uVar6 < sVar3; uVar6 = uVar6 + 1) {
        if (local_1a0[uVar6] == '/') {
          local_1a0[uVar6] = '_';
        }
      }
      CCGetCacheFilePath(acStack_120,0x104,local_1a0);
      iVar4 = access(acStack_120,0);
    } while (iVar4 == 0);
    printf((char *)(DAT_002c0530 + 0x2c04fa),local_1a0,acStack_120);
    CCFile::Close(pvVar1);
    uVar2 = 0;
  }
LAB_002c051c:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


