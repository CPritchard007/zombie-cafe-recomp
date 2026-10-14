/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c905c CharacterInstance::clearTasks */

/* CharacterInstance::clearTasks() */

void CharacterInstance::clearTasks(void)

{
  CharacterInstance *in_r0;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(in_r0 + 0x7c)) {
    piVar1 = (int *)CapcomLinkedList<Task*>::get((CapcomLinkedList<Task*> *)(in_r0 + 0x6c),0);
    (**(code **)(*piVar1 + 0x10))();
    while (0 < *(int *)(in_r0 + 0x7c)) {
      piVar1 = (int *)CapcomLinkedList<Task*>::remove((CapcomLinkedList<Task*> *)(in_r0 + 0x6c),0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  *(undefined1 *)(*(int *)(in_r0 + 0x8c) + 0x44) = 0;
  iVar3 = *(int *)(in_r0 + 0x8c);
  iVar2 = __aeabi_fcmple(*(undefined4 *)(iVar3 + 0x40),0);
  if (iVar2 == 0) {
    setCurrentAnimation(in_r0,'\x01',*(uchar *)(iVar3 + 0x4c),true);
  }
  return;
}


