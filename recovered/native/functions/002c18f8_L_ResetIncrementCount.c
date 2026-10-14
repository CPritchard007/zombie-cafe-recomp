/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c18f8 L_ResetIncrementCount */

void L_ResetIncrementCount(void)

{
  int *piVar1;
  char acStack_110 [260];
  int local_c;
  
  piVar1 = *(int **)(DAT_002c192c + 0x2c1904);
  local_c = *piVar1;
  CCGetWritableFilePath(acStack_110,0x104,(char *)(DAT_002c1930 + 0x2c190a));
  CCFile::Delete(acStack_110);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


