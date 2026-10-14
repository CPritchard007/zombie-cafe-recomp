/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f6158 FollowTask::~FollowTask */

/* FollowTask::~FollowTask() */

FollowTask * __thiscall FollowTask::~FollowTask(FollowTask *this)

{
  *(int *)this = *(int *)(DAT_000f618c + 0xf6162) + 8;
  if (*(CafeObject **)(this + 0x48) != (CafeObject *)0x0) {
    CafeObject::removeRemoveListener
              (*(CafeObject **)(this + 0x48),
               *(_func_void_void_ptr_CafeObject_ptr **)(DAT_000f6190 + 0xf6174),this);
  }
  MoveTask::~MoveTask((MoveTask *)this);
  return this;
}


