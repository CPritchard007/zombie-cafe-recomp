/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8a38 CharacterInstance::stopTasks */

/* CharacterInstance::stopTasks() */

void __thiscall CharacterInstance::stopTasks(CharacterInstance *this)

{
  int *piVar1;
  
  if (*(int *)(this + 0x7c) != 0) {
    piVar1 = (int *)CapcomLinkedList<Task*>::get((CapcomLinkedList<Task*> *)(this + 0x6c),0);
    (**(code **)(*piVar1 + 0xc))();
    *(undefined1 *)(*(int *)(this + 0x8c) + 0x44) = 0;
    while (1 < *(int *)(this + 0x7c)) {
      piVar1 = (int *)CapcomLinkedList<Task*>::remove((CapcomLinkedList<Task*> *)(this + 0x6c),1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  return;
}


