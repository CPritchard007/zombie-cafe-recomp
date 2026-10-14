/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e3d2 CharacterInstance::isMoving */

/* CharacterInstance::isMoving() */

undefined4 __thiscall CharacterInstance::isMoving(CharacterInstance *this)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(this + 0x7c)) {
    piVar1 = (int *)CapcomLinkedList<Task*>::get((CapcomLinkedList<Task*> *)(this + 0x6c),0);
    uVar2 = (**(code **)(*piVar1 + 0x1c))();
  }
  return uVar2;
}


