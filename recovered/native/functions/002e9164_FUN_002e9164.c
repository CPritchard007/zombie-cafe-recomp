/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9164 FUN_002e9164 */

int FUN_002e9164(int param_1)

{
  void *__s;
  int extraout_r1;
  
  __s = malloc(param_1 + 0x90);
  if (__s != (void *)0x0) {
    memset(__s,0,0x90);
    return (int)__s + 0x90;
  }
  FUN_002e9730(DAT_002e9194 + 0x2e9186);
  if (extraout_r1 != -1) {
    __cxa_end_cleanup();
  }
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}


