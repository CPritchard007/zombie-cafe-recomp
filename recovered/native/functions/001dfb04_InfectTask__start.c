/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfb04 InfectTask::start */

/* InfectTask::start() */

undefined8 __thiscall InfectTask::start(InfectTask *this)

{
  int iVar1;
  FollowTask *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x7e8);
  Task::start((Task *)this);
  this_00 = (FollowTask *)operator_new(0x50);
  uVar2 = 0x13;
  uVar3 = 1;
  FollowTask::FollowTask
            (this_00,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x24),
             *(Cafe **)(this + 0x2c),'\x13',true);
  *(FollowTask **)(this + 0x28) = this_00;
  (**(code **)(*(int *)this_00 + 8))(this_00);
  return CONCAT44(uVar3,uVar2);
}


