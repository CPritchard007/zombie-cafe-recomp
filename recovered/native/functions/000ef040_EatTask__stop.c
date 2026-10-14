/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef040 EatTask::stop */

/* EatTask::stop() */

void __thiscall EatTask::stop(EatTask *this)

{
  this[0x3a] = (EatTask)0x1;
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 0xc))();
  }
  if (*(int *)(this + 0x30) != 0) {
    *(undefined1 *)(*(int *)(this + 0x30) + 0x2e) = 0;
    CafeObject::setVisible(*(CafeObject **)(this + 0x30),true);
  }
  return;
}


