/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7838 AttackTask::~AttackTask */

/* AttackTask::~AttackTask() */

AttackTask * __thiscall AttackTask::~AttackTask(AttackTask *this)

{
  *(int *)this = *(int *)(DAT_000b7884 + 0xb7842) + 8;
  CharacterInstance::endZombility(*(CharacterInstance **)(this + 0x20));
  if (*(CafeObject **)(this + 0x24) != (CafeObject *)0x0) {
    CafeObject::removeRemoveListener
              (*(CafeObject **)(this + 0x24),
               *(_func_void_void_ptr_CafeObject_ptr **)(DAT_000b7888 + 0xb785a),this);
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
    *(undefined4 *)(this + 0x2c) = 0;
  }
  Task::~Task((Task *)this);
  return this;
}


