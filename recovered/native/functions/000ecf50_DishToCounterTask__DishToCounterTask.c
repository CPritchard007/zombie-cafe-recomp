/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecf50 DishToCounterTask::DishToCounterTask */

/* DishToCounterTask::DishToCounterTask(CharacterInstance*, Cafe*, Stove*) */

void __thiscall
DishToCounterTask::DishToCounterTask
          (DishToCounterTask *this,CharacterInstance *param_1,Cafe *param_2,Stove *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000ecf9c;
  *(CharacterInstance **)(this + 0x20) = param_1;
  piVar1 = *(int **)(DAT_000ecfa0 + 0xecf60);
  *(int *)this = *(int *)(iVar2 + 0xecf5c) + 8;
  iVar3 = *piVar1 + 1;
  *piVar1 = iVar3;
  iVar2 = DAT_000ecfa4;
  *(DishToCounterTask **)(this + 0x10) = this + 8;
  iVar2 = *(int *)(iVar2 + 0xecf78);
  *(int *)(this + 0x1c) = iVar3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (DishToCounterTask)0x0;
  this[5] = (DishToCounterTask)0x0;
  *(int *)this = iVar2 + 8;
  *(undefined2 *)(this + 0x46) = 0;
  *(Cafe **)(this + 0x28) = param_2;
  *(Stove **)(this + 0x2c) = param_3;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


