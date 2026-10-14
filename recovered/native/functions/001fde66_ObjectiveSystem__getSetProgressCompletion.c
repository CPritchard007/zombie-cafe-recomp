/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fde66 ObjectiveSystem::getSetProgressCompletion */

/* ObjectiveSystem::getSetProgressCompletion() */

int __thiscall ObjectiveSystem::getSetProgressCompletion(ObjectiveSystem *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(this + 8) + 1; iVar4 = iVar4 + 1) {
    iVar1 = *(int *)(iVar4 * 4 + *(int *)(this + 0xc));
    uVar5 = *(uint *)(iVar1 + 4);
    uVar2 = *(uint *)(iVar1 + 8);
    iVar3 = iVar3 + (((int)uVar5 >> 0x1f) - ((int)uVar2 >> 0x1f)) + (uint)(uVar2 <= uVar5);
  }
  return iVar3;
}


