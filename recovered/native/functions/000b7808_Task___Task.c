/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7808 Task::~Task */

/* Task::~Task() */

Task * __thiscall Task::~Task(Task *this)

{
  void *pvVar1;
  
  *(int *)this = *(int *)(DAT_000b7834 + 0xb7814) + 8;
  while (*(int *)(this + 0x18) != 0) {
    pvVar1 = (void *)CapcomLinkedList<Task::TaskListener*>::remove
                               ((CapcomLinkedList<Task::TaskListener*> *)(this + 8),0);
    operator_delete(pvVar1);
  }
  return this;
}


