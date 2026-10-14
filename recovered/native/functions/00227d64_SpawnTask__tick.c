/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227d64 SpawnTask::tick */

/* SpawnTask::tick(long) */

void SpawnTask::tick(long param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 4) == '\0') &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + 0x90) + 0x1c))(), iVar1 != 0)) {
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_00227d24(param_1);
    }
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x8c) + 0x44) = 4;
  }
  return;
}


