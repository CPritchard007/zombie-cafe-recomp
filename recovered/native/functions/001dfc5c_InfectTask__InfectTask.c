/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfc5c InfectTask::InfectTask */

/* InfectTask::InfectTask(CharacterInstance*, CharacterInstance*) */

void __thiscall
InfectTask::InfectTask(InfectTask *this,CharacterInstance *param_1,CharacterInstance *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001dfc9c;
  *(CharacterInstance **)(this + 0x20) = param_1;
  piVar1 = *(int **)(DAT_001dfca0 + 0x1dfc6c);
  *(int *)this = *(int *)(iVar2 + 0x1dfc68) + 8;
  *(InfectTask **)(this + 0x10) = this + 8;
  iVar3 = *piVar1;
  *(undefined4 *)(this + 0xc) = 0;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  iVar2 = DAT_001dfca4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  iVar2 = *(int *)(iVar2 + 0x1dfc8a);
  this[4] = (InfectTask)0x0;
  this[5] = (InfectTask)0x0;
  *(int *)(this + 0x1c) = iVar3;
  *(int *)this = iVar2 + 8;
  *(CharacterInstance **)(this + 0x24) = param_2;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


