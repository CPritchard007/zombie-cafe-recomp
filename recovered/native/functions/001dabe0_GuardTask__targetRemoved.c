/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dabe0 GuardTask::targetRemoved */

/* GuardTask::targetRemoved(GuardTask*, CafeObject*) */

void GuardTask::targetRemoved(GuardTask *param_1,CafeObject *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[5] = (GuardTask)0x0;
  Task::finish((Task *)param_1);
  return;
}


