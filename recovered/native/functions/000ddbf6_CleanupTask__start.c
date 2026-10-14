/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddbf6 CleanupTask::start */

/* CleanupTask::start() */

undefined8 __thiscall CleanupTask::start(CleanupTask *this)

{
  FollowTask *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Task::start((Task *)this);
  this[0x38] = (CleanupTask)0x0;
  this[0x24] = (CleanupTask)0x0;
  this_00 = (FollowTask *)operator_new(0x50);
  uVar2 = 0;
  uVar3 = 0;
  FollowTask::FollowTask
            (this_00,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x2c),
             *(Cafe **)(this + 0x28),'\0',false);
  *(FollowTask **)(this + 0x34) = this_00;
  (**(code **)(*(int *)this_00 + 8))(this_00);
  iVar1 = (**(code **)(**(int **)(this + 0x34) + 0x34))();
  if (iVar1 == 0) {
    if (*(char *)((int)*(int **)(this + 0x34) + 5) == '\0') {
      (**(code **)(**(int **)(this + 0x34) + 4))();
      *(undefined4 *)(this + 0x34) = 0;
      this[5] = (CleanupTask)0x0;
      Task::finish((Task *)this);
    }
  }
  return CONCAT44(uVar3,uVar2);
}


