/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b76f2 AttackTask::targetRemoved */

/* AttackTask::targetRemoved(AttackTask*, CafeObject*) */

void AttackTask::targetRemoved(AttackTask *param_1,CafeObject *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[5] = (AttackTask)0x0;
  Task::finish((Task *)param_1);
  return;
}


