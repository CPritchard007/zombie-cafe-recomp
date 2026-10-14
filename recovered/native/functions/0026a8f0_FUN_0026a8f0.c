/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a8f0 FUN_0026a8f0 */

char * FUN_0026a8f0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  int local_2c;
  int local_28;
  int local_1c;
  
  pcVar1 = param_2;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\x1a') {
      *param_2 = '^';
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = (char *)FUN_00269020();
      if (pcVar1 == (char *)0x0) {
        local_2c = DAT_0026a944 + 0x26a914;
        local_1c = 1;
        local_28 = DAT_0026a948 + 0x26a91e;
        FUN_0025c882(&local_2c,param_2);
        if (local_1c == 0) {
          FUN_00268e48(*param_1,DAT_0026a94c + 0x26a932,*(undefined4 *)(param_2 + 4));
          pcVar1 = (char *)0x1;
        }
      }
    }
  }
  return pcVar1;
}


