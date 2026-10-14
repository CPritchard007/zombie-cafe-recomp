/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c883a CharacterInstance::deleteTasks */

/* CharacterInstance::deleteTasks() */

void __thiscall CharacterInstance::deleteTasks(CharacterInstance *this)

{
  int *piVar1;
  
  while (*(int *)(this + 0x7c) != 0) {
    piVar1 = (int *)CapcomLinkedList<Task*>::remove((CapcomLinkedList<Task*> *)(this + 0x6c),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


