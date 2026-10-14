/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7618 AttackTask::stop */

/* AttackTask::stop() */

void __thiscall AttackTask::stop(AttackTask *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0xc))();
  }
  this[0x29] = (AttackTask)0x1;
  return;
}


