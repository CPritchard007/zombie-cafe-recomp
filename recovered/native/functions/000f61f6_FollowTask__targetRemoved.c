/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f61f6 FollowTask::targetRemoved */

/* FollowTask::targetRemoved(FollowTask*, CafeObject*) */

void FollowTask::targetRemoved(FollowTask *param_1,CafeObject *param_2)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[5] = (FollowTask)0x0;
  Task::finish((Task *)param_1);
  return;
}


