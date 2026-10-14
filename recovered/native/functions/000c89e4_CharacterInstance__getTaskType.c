/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c89e4 CharacterInstance::getTaskType */

/* CharacterInstance::getTaskType() */

undefined4 __thiscall CharacterInstance::getTaskType(CharacterInstance *this)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(this + 0x7c)) {
    piVar1 = (int *)CapcomLinkedList<Task*>::get((CapcomLinkedList<Task*> *)(this + 0x6c),0);
    uVar2 = (**(code **)(*piVar1 + 0x2c))();
  }
  return uVar2;
}


