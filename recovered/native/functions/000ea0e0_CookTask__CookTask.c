/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ea0e0 CookTask::CookTask */

/* CookTask::CookTask(CharacterInstance*, Stove*, Cafe*) */

CookTask * __thiscall
CookTask::CookTask(CookTask *this,CharacterInstance *param_1,Stove *param_2,Cafe *param_3)

{
  FollowTask *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(DAT_000ea168 + 0xea0f0);
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = iVar2 + 8;
  *(CookTask **)(this + 0x10) = this + 8;
  iVar2 = DAT_000ea16c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  piVar3 = *(int **)(iVar2 + 0xea108);
  *(CharacterInstance **)(this + 0x20) = param_1;
  this[4] = (CookTask)0x0;
  iVar1 = *piVar3;
  this[5] = (CookTask)0x0;
  *(Stove **)(this + 0x28) = param_2;
  iVar1 = iVar1 + 1;
  *piVar3 = iVar1;
  iVar2 = DAT_000ea170;
  *(int *)(this + 0x1c) = iVar1;
  *(int *)this = *(int *)(iVar2 + 0xea120) + 8;
  *(Cafe **)(this + 0x24) = param_3;
  this[0x30] = (CookTask)0x0;
  this_00 = (FollowTask *)operator_new(0x50);
  FollowTask::FollowTask(this_00,param_1,(CafeObject *)param_2,param_3,'\0',false);
  *(FollowTask **)(this + 0x2c) = this_00;
  param_2[0x82] = (Stove)((char)param_2[0x82] + '\x01');
  return this;
}


