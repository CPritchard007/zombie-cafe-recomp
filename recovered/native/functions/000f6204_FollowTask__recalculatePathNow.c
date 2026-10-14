/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f6204 FollowTask::recalculatePathNow */

/* FollowTask::recalculatePathNow() */

undefined4 __thiscall FollowTask::recalculatePathNow(FollowTask *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(this + 0x48);
  if (piVar4 == (int *)0x0) {
    this[5] = (FollowTask)0x0;
    goto LAB_000f626a;
  }
  iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4);
  if (iVar1 == 3) {
    iVar1 = *(int *)(*(int *)(this + 0x48) + 0x94);
  }
  else {
    iVar1 = (int)*(short *)(*(int *)(this + 0x48) + 0x2c);
  }
  *(int *)(this + 0x28) = iVar1;
  iVar1 = CafeObject::isAdjacentTo(*(CafeObject **)(this + 0x20),*(int *)(this + 0x28));
  if (iVar1 == 0) {
LAB_000f6252:
    if ((int)*(short *)(*(int *)(this + 0x20) + 0x2c) != *(int *)(this + 0x28)) {
      iVar1 = CFPathFinder::isNodeEnabled
                        (*(CFPathFinder **)(*(int *)(this + 0x20) + 0x80),*(int *)(this + 0x28));
      if (iVar1 == 0) {
        CFPathFinder::setNodeEnabled
                  (*(CFPathFinder **)(*(int *)(this + 0x20) + 0x80),*(int *)(this + 0x28),true);
      }
      uVar3 = MoveTask::recalculatePathNow((MoveTask *)this);
      if (iVar1 != 0) {
        return uVar3;
      }
      CFPathFinder::setNodeEnabled
                (*(CFPathFinder **)(*(int *)(this + 0x20) + 0x80),*(int *)(this + 0x28),false);
      return uVar3;
    }
  }
  else {
    iVar1 = Cafe::isInside(*(Cafe **)(this + 0x40),(int)*(short *)(*(int *)(this + 0x20) + 0x2c));
    iVar2 = Cafe::isInside(*(Cafe **)(this + 0x40),*(int *)(this + 0x28));
    if (iVar1 != iVar2) goto LAB_000f6252;
  }
  *(undefined4 *)(*(int *)(this + 0x20) + 0x88) = 0;
  this[5] = (FollowTask)0x1;
LAB_000f626a:
  Task::finish((Task *)this);
  return 0;
}


