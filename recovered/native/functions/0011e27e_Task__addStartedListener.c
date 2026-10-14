/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e27e Task::addStartedListener */

/* Task::addStartedListener(void (*)(void*, Task*), void*) */

void __thiscall
Task::addStartedListener(Task *this,_func_void_void_ptr_Task_ptr *param_1,void *param_2)

{
  TaskListener *pTVar1;
  
  pTVar1 = (TaskListener *)operator_new(0xc);
  *(_func_void_void_ptr_Task_ptr **)(pTVar1 + 4) = param_1;
  *(void **)(pTVar1 + 8) = param_2;
  *pTVar1 = (TaskListener)0x0;
  CapcomLinkedList<Task::TaskListener*>::add
            ((CapcomLinkedList<Task::TaskListener*> *)(this + 8),pTVar1);
  return;
}


