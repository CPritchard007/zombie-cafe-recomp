/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00211044 ReanimateTask::ReanimateTask */

/* ReanimateTask::ReanimateTask(CharacterInstance*, Cafe*) */

ReanimateTask * __thiscall
ReanimateTask::ReanimateTask(ReanimateTask *this,CharacterInstance *param_1,Cafe *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_002110c4 + 0x211050);
  *(ReanimateTask **)(this + 0x10) = this + 8;
  *(int *)this = iVar3 + 8;
  this[4] = (ReanimateTask)0x0;
  this[5] = (ReanimateTask)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  iVar3 = DAT_002110c8;
  *(CharacterInstance **)(this + 0x20) = param_1;
  *(Cafe **)(this + 0x24) = param_2;
  iVar2 = **(int **)(iVar3 + 0x21106e) + 1;
  **(int **)(iVar3 + 0x21106e) = iVar2;
  iVar3 = DAT_002110cc;
  *(int *)(this + 0x1c) = iVar2;
  *(int *)this = *(int *)(iVar3 + 0x21107e) + 8;
  sVar1 = *(short *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_2 + 0xcc);
  iVar2 = *(int *)(param_2 + 0xd0) + 2;
  if (iVar3 < iVar2) {
    iVar3 = iVar3 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    Vector<long>::resize((Vector<long> *)(param_2 + 0xcc),iVar3,-1);
  }
  iVar3 = *(int *)(param_2 + 0xd0);
  *(int *)(param_2 + 0xd0) = iVar3 + 1;
  *(int *)((iVar3 + 1) * 4 + *(int *)(param_2 + 0xd4)) = (int)sVar1;
  return this;
}


