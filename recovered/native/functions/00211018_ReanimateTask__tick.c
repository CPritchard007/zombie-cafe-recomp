/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00211018 ReanimateTask::tick */

/* ReanimateTask::tick(long) */

void ReanimateTask::tick(long param_1)

{
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x8c) + 0x50) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xac) = **(undefined4 **)(DAT_00211040 + 0x211032);
    *(undefined1 *)(param_1 + 5) = 1;
    Task::finish((Task *)param_1);
  }
  return;
}


