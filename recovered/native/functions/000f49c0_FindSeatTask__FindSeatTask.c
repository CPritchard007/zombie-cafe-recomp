/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f49c0 FindSeatTask::FindSeatTask */

/* FindSeatTask::FindSeatTask(CharacterInstance*, Cafe*) */

void __thiscall
FindSeatTask::FindSeatTask(FindSeatTask *this,CharacterInstance *param_1,Cafe *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000f4a04;
  *(CharacterInstance **)(this + 0x20) = param_1;
  piVar1 = *(int **)(DAT_000f4a08 + 0xf49d0);
  *(int *)this = *(int *)(iVar2 + 0xf49cc) + 8;
  *(FindSeatTask **)(this + 0x10) = this + 8;
  iVar3 = *piVar1;
  *(undefined4 *)(this + 0xc) = 0;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  iVar2 = DAT_000f4a0c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  iVar2 = *(int *)(iVar2 + 0xf49ee);
  this[4] = (FindSeatTask)0x0;
  this[5] = (FindSeatTask)0x0;
  *(int *)(this + 0x1c) = iVar3;
  *(int *)this = iVar2 + 8;
  *(Cafe **)(this + 0x24) = param_2;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


