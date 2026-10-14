/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eb874 DaydreamTask::DaydreamTask */

/* DaydreamTask::DaydreamTask(CharacterInstance*, long, Cafe*, unsigned char, unsigned char) */

DaydreamTask * __thiscall
DaydreamTask::DaydreamTask
          (DaydreamTask *this,CharacterInstance *param_1,long param_2,Cafe *param_3,uchar param_4,
          uchar param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_000eb900;
  *(long *)(this + 0x24) = param_2;
  *(int *)this = *(int *)(iVar3 + 0xeb882) + 8;
  *(DaydreamTask **)(this + 0x10) = this + 8;
  iVar3 = DAT_000eb904;
  *(CharacterInstance **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  piVar1 = *(int **)(iVar3 + 0xeb89a);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  iVar4 = *piVar1;
  this[4] = (DaydreamTask)0x0;
  this[5] = (DaydreamTask)0x0;
  iVar4 = iVar4 + 1;
  *(int *)(this + 0x1c) = iVar4;
  this[0x28] = (DaydreamTask)0x0;
  iVar3 = *(int *)(DAT_000eb908 + 0xeb8b4);
  *piVar1 = iVar4;
  *(int *)this = iVar3 + 8;
  *(Cafe **)(this + 0x34) = param_3;
  this[0x29] = (DaydreamTask)param_5;
  this[0x2a] = (DaydreamTask)param_4;
  uVar2 = Cafe::getNextTile((int)*(short *)(param_1 + 0x2c),
                            (uint)*(byte *)(*(int *)(param_1 + 0x8c) + 0x4c));
  *(undefined4 *)(this + 0x2c) = uVar2;
  this[0x30] = (DaydreamTask)0x0;
  return this;
}


