/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261c6e FUN_00261c6e */

void FUN_00261c6e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 != '\0') {
    FUN_00261c56(param_1,0,1,cVar1,param_4);
    *(char *)(param_1 + 0x2c) = '\0';
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (-1 < *(short *)(param_1 + 0x28)) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))
                (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x28) = 0xffff;
  }
  return;
}


