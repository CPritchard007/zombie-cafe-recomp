/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f6088 MoveTask::stop */

/* MoveTask::stop() */

void __thiscall MoveTask::stop(MoveTask *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  this[0x3c] = (MoveTask)0x1;
  this[0x34] = (MoveTask)0x0;
  iVar2 = *(int *)(this + 0x30);
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
    iVar3 = *(ushort *)(iVar2 + 0x10) + 2;
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    *(int *)(*(int *)(iVar2 + 0xc) + 8) = iVar3;
  }
  return;
}


