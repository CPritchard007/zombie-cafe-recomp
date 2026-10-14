/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00225890 ServeTask::ServeTask */

/* ServeTask::ServeTask(CharacterInstance*, Cafe*, CharacterInstance*) */

ServeTask * __thiscall
ServeTask::ServeTask
          (ServeTask *this,CharacterInstance *param_1,Cafe *param_2,CharacterInstance *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_002258ec;
  *(CharacterInstance **)(this + 0x20) = param_1;
  piVar1 = *(int **)(DAT_002258f0 + 0x2258a2);
  *(int *)this = *(int *)(iVar2 + 0x22589e) + 8;
  *(ServeTask **)(this + 0x10) = this + 8;
  iVar3 = *piVar1;
  *(undefined4 *)(this + 0xc) = 0;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  iVar2 = DAT_002258f4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  iVar2 = *(int *)(iVar2 + 0x2258c0);
  this[4] = (ServeTask)0x0;
  this[5] = (ServeTask)0x0;
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0x1c) = iVar3;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(Cafe **)(this + 0x28) = param_2;
  *(CharacterInstance **)(this + 0x40) = param_3;
  this[0x4a] = (ServeTask)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  Vector<CharacterInstance*>::removeElement((Vector<CharacterInstance*> *)(param_2 + 0xa4),param_3);
  return this;
}


