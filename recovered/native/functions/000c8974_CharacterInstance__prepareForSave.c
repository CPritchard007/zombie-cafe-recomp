/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8974 CharacterInstance::prepareForSave */

/* CharacterInstance::prepareForSave() */

undefined8 CharacterInstance::prepareForSave(void)

{
  CapcomLinkedList<Task*> *in_r0;
  int *piVar1;
  int in_r1;
  int iVar2;
  CapcomLinkedList<Task*> *local_20;
  int local_1c;
  
  local_20 = in_r0;
  local_1c = in_r1;
  if (*(int *)(in_r0 + 0x7c) != 0) {
    local_20 = in_r0 + 0x6c;
    piVar1 = (int *)CapcomLinkedList<Task*>::get(local_20,0);
    (**(code **)(*piVar1 + 0x30))();
    for (iVar2 = 1; iVar2 < *(int *)(in_r0 + 0x7c); iVar2 = iVar2 + 1) {
      piVar1 = (int *)CapcomLinkedList<Task*>::get(local_20,iVar2);
      local_1c = (**(code **)(*piVar1 + 0x2c))();
      if (local_1c == 2) {
        piVar1 = (int *)CapcomLinkedList<Task*>::get(local_20,iVar2);
        *(undefined1 *)(*(int *)(in_r0 + 0x8c) + 0x44) = 2;
        (**(code **)(*piVar1 + 8))();
        (**(code **)(*piVar1 + 0x14))(piVar1,0);
        (**(code **)(*piVar1 + 0x30))(piVar1);
      }
    }
  }
  return CONCAT44(local_1c,local_20);
}


