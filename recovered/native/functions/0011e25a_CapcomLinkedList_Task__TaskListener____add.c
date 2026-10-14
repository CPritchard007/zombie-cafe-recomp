/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e25a CapcomLinkedList<Task::TaskListener*>::add */

/* CapcomLinkedList<Task::TaskListener*>::add(Task::TaskListener*) */

void __thiscall
CapcomLinkedList<Task::TaskListener*>::add
          (CapcomLinkedList<Task::TaskListener*> *this,TaskListener *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  puVar1[1] = 0;
  *(undefined4 **)(*(int *)(this + 8) + 4) = puVar1;
  *(undefined4 **)(this + 8) = puVar1;
  *puVar1 = param_1;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


