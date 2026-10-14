/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002684c4 FUN_002684c4 */

undefined4 FUN_002684c4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] != 0) {
    *(undefined1 *)(param_1[2] + param_1[3]) = 0;
    if ((*(char *)((int)param_1 + 0x19) != '\0') && (param_1[2] == param_1[1])) {
      if (*(char *)((int)param_1 + 0x19) == '\x01') {
        uVar1 = FUN_0025ee10(*param_1,param_1[3] + 1);
      }
      else {
        uVar1 = sqlite3_malloc(param_1[3] + 1);
      }
      param_1[2] = uVar1;
      if ((void *)param_1[2] == (void *)0x0) {
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        memcpy((void *)param_1[2],(void *)param_1[1],param_1[3] + 1);
      }
    }
  }
  return param_1[2];
}


