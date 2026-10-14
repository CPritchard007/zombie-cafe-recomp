/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229bdc StealFoodTask::StealFoodTask */

/* StealFoodTask::StealFoodTask(CharacterInstance*, Cafe*) */

StealFoodTask * __thiscall
StealFoodTask::StealFoodTask(StealFoodTask *this,CharacterInstance *param_1,Cafe *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_00229c48;
  *(CharacterInstance **)(this + 0x20) = param_1;
  iVar2 = *(int *)(iVar2 + 0x229be8);
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = iVar2 + 8;
  *(StealFoodTask **)(this + 0x10) = this + 8;
  iVar2 = DAT_00229c4c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  piVar3 = *(int **)(iVar2 + 0x229c00);
  this[4] = (StealFoodTask)0x0;
  this[5] = (StealFoodTask)0x0;
  iVar1 = *piVar3;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  iVar1 = iVar1 + 1;
  *piVar3 = iVar1;
  iVar2 = DAT_00229c50;
  *(int *)(this + 0x1c) = iVar1;
  *(undefined4 *)(this + 0x38) = 0;
  iVar2 = *(int *)(iVar2 + 0x229c18);
  *(undefined4 *)(this + 0x3c) = 0;
  *(Cafe **)(this + 0x28) = param_2;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  iVar2 = Cafe::getFoodStackStockSize(param_2);
  if (iVar2 == 0) {
    Task::finish((Task *)this,false);
  }
  *(undefined4 *)(this + 0x40) = 0;
  return this;
}


