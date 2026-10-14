/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddbc4 CleanupTask::stopImmediately */

/* CleanupTask::stopImmediately() */

void __thiscall CleanupTask::stopImmediately(CleanupTask *this)

{
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 0x10))();
  }
  CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + 0x20),0);
  this[5] = (CleanupTask)((byte)this[0x24] - 3 < 4);
  Task::finish((Task *)this);
  return;
}


