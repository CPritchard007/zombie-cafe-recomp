/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c15a4 L_LogSession */

void L_LogSession(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  void *__ptr;
  int *piVar4;
  uint uVar5;
  void *pvVar6;
  uint local_124;
  char acStack_120 [260];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002c1698 + 0x2c15b0);
  local_1c = *piVar4;
  CCGetWritableFilePath(acStack_120,0x104,(char *)(DAT_002c169c + 0x2c15b6));
  uVar1 = CCSecondsSince1970();
  pvVar2 = (void *)CCFile::Open(acStack_120,0);
  if ((int)pvVar2 - 1U < 0xfffffffe) {
    iVar3 = CCFile::Read(pvVar2,&local_124,4);
    if (iVar3 == 0) {
      local_124 = 0;
    }
    if (0x32 < local_124) {
      local_124 = 0x32;
    }
    __ptr = malloc((local_124 + 1) * 4);
    pvVar6 = __ptr;
    for (uVar5 = 0; uVar5 < local_124; uVar5 = uVar5 + 1) {
      iVar3 = CCFile::Read(pvVar2,pvVar6,4);
      if (iVar3 == 0) {
        local_124 = uVar5 - 1;
      }
      pvVar6 = (void *)((int)pvVar6 + 4);
    }
    CCFile::Close(pvVar2);
  }
  else {
    __ptr = malloc(4);
    uVar5 = 0;
  }
  *(undefined4 *)(uVar5 * 4 + (int)__ptr) = uVar1;
  local_124 = uVar5;
  pvVar2 = (void *)CCFile::Open(acStack_120,1);
  if ((int)pvVar2 - 1U < 0xfffffffe) {
    iVar3 = CCFile::Write(pvVar2,&local_124,4);
    if (iVar3 != 0) {
      pvVar6 = __ptr;
      for (uVar5 = 0; uVar5 < local_124; uVar5 = uVar5 + 1) {
        iVar3 = CCFile::Write(pvVar2,pvVar6,4);
        pvVar6 = (void *)((int)pvVar6 + 4);
        if (iVar3 == 0) break;
      }
    }
    free(__ptr);
    CCFile::Close(pvVar2);
  }
  else {
    free(__ptr);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


