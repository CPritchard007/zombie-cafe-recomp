/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f6194 FollowTask::~FollowTask */

/* FollowTask::~FollowTask() */

FollowTask * __thiscall FollowTask::~FollowTask(FollowTask *this)

{
  ~FollowTask(this);
  operator_delete(this);
  return this;
}


