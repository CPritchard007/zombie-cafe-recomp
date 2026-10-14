/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f55c8 MoveTask::recalculatePathNow */

/* MoveTask::recalculatePathNow() */

undefined8 __thiscall MoveTask::recalculatePathNow(MoveTask *this)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  CFPathFinder *this_00;
  int iVar4;
  int iVar5;
  float extraout_s0;
  
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
    *(undefined4 *)(this + 0x30) = 0;
  }
  iVar4 = *(int *)(this + 0x24);
  iVar5 = *(int *)(this + 0x28);
  this_00 = *(CFPathFinder **)(*(int *)(this + 0x20) + 0x80);
  uVar1 = Character::getMSPerCostUnit();
  iVar2 = __mulsf3(uVar1,*(undefined4 *)(this + 0x38));
  uVar1 = *(undefined4 *)(this + 0x2c);
  piVar3 = (int *)CFPathFinder::createPathTween(this_00,iVar4,iVar5,extraout_s0,iVar2);
  *(int **)(this + 0x30) = piVar3;
  if (piVar3 == (int *)0x0) {
    this[5] = (MoveTask)0x0;
    if (this[4] == (MoveTask)0x0) {
      FUN_001f5598(this);
    }
  }
  else {
    (**(code **)(*piVar3 + 0xc))();
  }
  iVar4 = DAT_001f5640;
  iVar2 = DAT_001f563c;
  this[0x34] = (MoveTask)0x0;
  L_PrintLog((char *)(iVar2 + 0x1f5630),(char *)(iVar4 + 0x1f5632));
  return CONCAT44(uVar1,(uint)(*(int *)(this + 0x30) != 0));
}


