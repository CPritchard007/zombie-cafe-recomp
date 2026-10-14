/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000de0ec CleanupTask::CleanupTask */

/* CleanupTask::CleanupTask(CharacterInstance*, Cafe*, Furniture*) */

CleanupTask * __thiscall
CleanupTask::CleanupTask
          (CleanupTask *this,CharacterInstance *param_1,Cafe *param_2,Furniture *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000de144;
  *(CharacterInstance **)(this + 0x20) = param_1;
  piVar1 = *(int **)(DAT_000de148 + 0xde0fe);
  *(int *)this = *(int *)(iVar2 + 0xde0fa) + 8;
  *(CleanupTask **)(this + 0x10) = this + 8;
  iVar3 = *piVar1;
  *(undefined4 *)(this + 0xc) = 0;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  iVar2 = DAT_000de14c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  iVar2 = *(int *)(iVar2 + 0xde11c);
  this[4] = (CleanupTask)0x0;
  this[5] = (CleanupTask)0x0;
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0x1c) = iVar3;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(Cafe **)(this + 0x28) = param_2;
  *(Furniture **)(this + 0x2c) = param_3;
  Vector<Furniture*>::removeElement((Vector<Furniture*> *)(param_2 + 0xbc),param_3);
  return this;
}


