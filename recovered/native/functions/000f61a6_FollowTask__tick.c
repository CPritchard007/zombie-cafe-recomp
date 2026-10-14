/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f61a6 FollowTask::tick */

/* FollowTask::tick(long) */

void __thiscall FollowTask::tick(FollowTask *this,long param_1)

{
  code *pcVar1;
  
  if (*(int *)(this + 0x48) == 0) {
    (**(code **)(*(int *)this + 0xc))();
    return;
  }
  if (this[4] != (FollowTask)0x0) {
    return;
  }
  if (*(int *)(*(int *)(this + 0x20) + 0x88) == *(int *)(this + 0x48)) {
    if ((this[0x3c] != (FollowTask)0x0) ||
       (*(int *)(this + 0x28) == (int)*(short *)(*(int *)(*(int *)(this + 0x20) + 0x88) + 0x2c)))
    goto LAB_000f61ec;
    pcVar1 = *(code **)(*(int *)this + 0x18);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0xc);
  }
  (*pcVar1)(this);
LAB_000f61ec:
  MoveTask::tick((MoveTask *)this,param_1);
  return;
}


