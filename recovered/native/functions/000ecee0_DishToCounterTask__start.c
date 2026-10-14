/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecee0 DishToCounterTask::start */

/* DishToCounterTask::start() */

undefined8 __thiscall DishToCounterTask::start(DishToCounterTask *this)

{
  FollowTask *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  Task::start((Task *)this);
  this[0x24] = (DishToCounterTask)0x0;
  this_00 = (FollowTask *)operator_new(0x50);
  uVar1 = 0;
  uVar2 = 0;
  FollowTask::FollowTask
            (this_00,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x2c),
             *(Cafe **)(this + 0x28),'\0',false);
  *(FollowTask **)(this + 0x3c) = this_00;
  (**(code **)(*(int *)this_00 + 8))(this_00);
  this[0x44] = (DishToCounterTask)0x0;
  return CONCAT44(uVar2,uVar1);
}


