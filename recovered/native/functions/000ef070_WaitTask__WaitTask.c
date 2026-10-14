/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef070 WaitTask::WaitTask */

/* WaitTask::WaitTask(CharacterInstance*, long, bool) */

void __thiscall
WaitTask::WaitTask(WaitTask *this,CharacterInstance *param_1,long param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000ef0b4;
  *(CharacterInstance **)(this + 0x20) = param_1;
  piVar1 = *(int **)(DAT_000ef0b8 + 0xef080);
  *(int *)this = *(int *)(iVar2 + 0xef07c) + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (WaitTask)0x0;
  this[5] = (WaitTask)0x0;
  iVar3 = *piVar1;
  *(long *)(this + 0x24) = param_2;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  iVar2 = *(int *)(DAT_000ef0bc + 0xef0a4);
  *(WaitTask **)(this + 0x10) = this + 8;
  *(int *)(this + 0x1c) = iVar3;
  *(int *)this = iVar2 + 8;
  this[0x28] = (WaitTask)param_3;
  return;
}


