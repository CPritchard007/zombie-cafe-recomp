/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227dcc SpawnTask::SpawnTask */

/* SpawnTask::SpawnTask(CharacterInstance*, unsigned char) */

SpawnTask * __thiscall
SpawnTask::SpawnTask(SpawnTask *this,CharacterInstance *param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(DAT_00227e28 + 0x227dd8);
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = iVar2 + 8;
  *(SpawnTask **)(this + 0x10) = this + 8;
  iVar2 = DAT_00227e2c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  piVar3 = *(int **)(iVar2 + 0x227df0);
  *(CharacterInstance **)(this + 0x20) = param_1;
  this[4] = (SpawnTask)0x0;
  iVar1 = *piVar3;
  this[5] = (SpawnTask)0x0;
  iVar1 = iVar1 + 1;
  *piVar3 = iVar1;
  iVar2 = DAT_00227e30;
  *(int *)(this + 0x1c) = iVar1;
  *(int *)this = *(int *)(iVar2 + 0x227e06) + 8;
  CharacterInstance::setCurrentAnimation(param_1,'*',param_2,true);
  *(CharacterInstance **)(this + 0x24) = param_1;
  *(undefined1 *)(*(int *)(param_1 + 0x90) + 4) = 0;
  return this;
}


