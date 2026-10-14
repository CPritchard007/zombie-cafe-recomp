/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8a00 CharacterInstance::getTaskTarget */

/* CharacterInstance::getTaskTarget() */

undefined4 __thiscall CharacterInstance::getTaskTarget(CharacterInstance *this)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(this + 0x7c)) {
    piVar1 = (int *)CapcomLinkedList<Task*>::get((CapcomLinkedList<Task*> *)(this + 0x6c),0);
    uVar2 = (**(code **)(*piVar1 + 0x28))();
  }
  return uVar2;
}


