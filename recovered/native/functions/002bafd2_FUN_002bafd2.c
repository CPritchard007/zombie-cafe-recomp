/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bafd2 FUN_002bafd2 */

void FUN_002bafd2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __aeabi_fcmplt(param_1,0);
  if (iVar1 == 0) {
    __addsf3(param_1,0x3f000000);
  }
  else {
    __subsf3(param_1,0x3f000000);
  }
  __fixsfsi();
  return;
}


