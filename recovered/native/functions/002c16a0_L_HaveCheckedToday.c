/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c16a0 L_HaveCheckedToday */

void L_HaveCheckedToday(void)

{
  bool bVar1;
  void *pvVar2;
  int *piVar3;
  int local_120;
  int local_11c;
  char acStack_118 [260];
  int local_14;
  
  piVar3 = *(int **)(DAT_002c171c + 0x2c16ac);
  local_14 = *piVar3;
  CCGetWritableFilePath(acStack_118,0x104,(char *)(DAT_002c1720 + 0x2c16b2));
  pvVar2 = (void *)CCFile::Open(acStack_118,0);
  local_120 = 0;
  if ((int)pvVar2 - 1U < 0xfffffffe) {
    CCFile::Read(pvVar2,&local_120,4);
    CCFile::Close(pvVar2);
  }
  local_11c = CCSecondsSince1970();
  bVar1 = (uint)(local_11c - local_120) <= DAT_002c1724;
  if (!bVar1) {
    pvVar2 = (void *)CCFile::Open(acStack_118);
    CCFile::Write(pvVar2,&local_11c,4);
    CCFile::Close(pvVar2);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


