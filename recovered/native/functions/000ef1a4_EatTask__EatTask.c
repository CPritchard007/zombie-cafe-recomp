/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef1a4 EatTask::EatTask */

/* EatTask::EatTask(CharacterInstance*, Cafe*, bool, long) */

EatTask * __thiscall
EatTask::EatTask(EatTask *this,CharacterInstance *param_1,Cafe *param_2,bool param_3,long param_4)

{
  WaitTask *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_000ef234 + 0xef1b2);
  *(EatTask **)(this + 0x10) = this + 8;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (EatTask)0x0;
  this[5] = (EatTask)0x0;
  iVar1 = DAT_000ef238;
  *(Cafe **)(this + 0x24) = param_2;
  piVar2 = *(int **)(iVar1 + 0xef1d0);
  iVar3 = *piVar2;
  *(CharacterInstance **)(this + 0x20) = param_1;
  iVar3 = iVar3 + 1;
  *piVar2 = iVar3;
  iVar1 = DAT_000ef23c;
  *(int *)(this + 0x1c) = iVar3;
  *(int *)this = *(int *)(iVar1 + 0xef1e4) + 8;
  this[0x39] = (EatTask)param_3;
  if (param_4 == 0) {
    param_4 = **(long **)(DAT_000ef240 + 0xef1f4);
  }
  *(long *)(this + 0x3c) = param_4;
  this[0x2c] = (EatTask)0x5;
  this_00 = (WaitTask *)operator_new(0x2c);
  WaitTask::WaitTask(this_00,param_1,1,false);
  *(WaitTask **)(this + 0x28) = this_00;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (EatTask)0x0;
  this[0x3a] = (EatTask)0x0;
  this[0x40] = (EatTask)0x0;
  return this;
}


