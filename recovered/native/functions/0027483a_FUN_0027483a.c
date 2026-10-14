/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027483a FUN_0027483a */

void FUN_0027483a(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if ((bVar1 != 0) && (bVar1 != 6)) {
    if (bVar1 < 2) {
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_00261dac();
      }
    }
    else {
      FUN_0025ad28();
      if ((*(byte *)(param_1 + 0xf) != 6) && (1 < *(byte *)(param_1 + 0xf))) {
        FUN_002747d4(param_1);
      }
      FUN_0025ad3c();
    }
  }
  FUN_00261cb6(param_1);
  return;
}


