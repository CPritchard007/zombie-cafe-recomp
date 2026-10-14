/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229ad8 StealFoodTask::tick */

/* StealFoodTask::tick(long) */

void __thiscall StealFoodTask::tick(StealFoodTask *this,long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00229b90;
  if (this[4] != (StealFoodTask)0x0) {
    return;
  }
  iVar4 = *(int *)(this + 0x34);
  bVar2 = SUB41(iVar4,0);
  if (iVar4 != 0) {
    if ((iVar4 == 1) && (0 < *(int *)(*(ServingCounter **)(this + 0x2c) + 100))) {
      iVar4 = *(int *)(this + 0x30);
      *(long *)(this + 0x30) = param_1 + iVar4;
      if (param_1 + iVar4 < **(int **)(iVar3 + 0x229b70)) {
        return;
      }
      uVar1 = ServingCounter::getNewRandomFoodStack(*(ServingCounter **)(this + 0x2c),bVar2);
      *(undefined4 *)(this + 0x24) = uVar1;
    }
    else {
      bVar2 = false;
    }
    Task::finish((Task *)this,bVar2);
    return;
  }
  (**(code **)(**(int **)(this + 0x40) + 0x14))();
  if (*(char *)(*(int *)(this + 0x40) + 4) == '\0') {
    return;
  }
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\b',0xff,bVar2);
  CharacterInstance::turnToward
            (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x2c) + 4));
  if (this[0x44] == (StealFoodTask)0x0) {
    iVar3 = *(int *)(this + 0x34);
    if (*(char *)(*(int *)(this + 0x40) + 5) == '\0') {
      if (iVar3 == 0) {
        Task::finish((Task *)this,false);
        goto LAB_00229b4a;
      }
      iVar3 = iVar3 + -1;
    }
    else {
      iVar3 = iVar3 + 1;
    }
    *(int *)(this + 0x34) = iVar3;
  }
  else if (this[4] == (StealFoodTask)0x0) {
    FUN_00229a84(this);
  }
LAB_00229b4a:
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))();
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


