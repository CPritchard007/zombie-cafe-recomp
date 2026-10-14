/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5898 MoveTask::MoveTask */

/* MoveTask::MoveTask(CharacterInstance*, Cafe*, int, unsigned char, bool) */

undefined8 __thiscall
MoveTask::MoveTask(MoveTask *this,CharacterInstance *param_1,Cafe *param_2,int param_3,uchar param_4
                  ,bool param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001f592c;
  *(MoveTask **)(this + 0x10) = this + 8;
  piVar1 = *(int **)(DAT_001f5930 + 0x1f58b8);
  *(int *)this = *(int *)(iVar2 + 0x1f58b4) + 8;
  iVar3 = *piVar1;
  *(undefined4 *)(this + 0xc) = 0;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  iVar2 = DAT_001f5934;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (MoveTask)0x0;
  this[5] = (MoveTask)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  iVar2 = *(int *)(iVar2 + 0x1f58d6);
  *(int *)(this + 0x28) = param_3;
  *(Cafe **)(this + 0x40) = param_2;
  *(CharacterInstance **)(this + 0x20) = param_1;
  *(int *)(this + 0x1c) = iVar3;
  *(int *)this = iVar2 + 8;
  this[0x34] = (MoveTask)0x1;
  this[0x3d] = (MoveTask)param_5;
  if (param_4 == '\0') {
    param_4 = *(uchar *)(*(int *)(param_1 + 0x8c) + 0x54);
  }
  setAnimation(this,param_4);
  this[0x3c] = (MoveTask)0x0;
  this[0x44] = (MoveTask)0x0;
  return CONCAT44(this,this);
}


