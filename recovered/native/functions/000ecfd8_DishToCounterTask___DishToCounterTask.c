/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecfd8 DishToCounterTask::~DishToCounterTask */

/* DishToCounterTask::~DishToCounterTask() */

DishToCounterTask * __thiscall DishToCounterTask::~DishToCounterTask(DishToCounterTask *this)

{
  int iVar1;
  
  iVar1 = DAT_000ed034 + 0xecfe4;
  *(int *)this = *(int *)(iVar1 + DAT_000ed038) + 8;
  if (*(CafeObject **)(this + 0x38) != (CafeObject *)0x0) {
    CafeObject::removeRemoveListener
              (*(CafeObject **)(this + 0x38),
               *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + DAT_000ed03c),this);
  }
  if (*(CafeObject **)(this + 0x34) != (CafeObject *)0x0) {
    CafeObject::removeRemoveListener
              (*(CafeObject **)(this + 0x34),
               *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + DAT_000ed03c),this);
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
  }
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))();
  }
  Task::~Task((Task *)this);
  return this;
}


