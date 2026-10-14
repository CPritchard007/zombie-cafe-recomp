/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c765c CharacterInstance::addTask */

/* CharacterInstance::addTask(Task*) */

void __thiscall CharacterInstance::addTask(CharacterInstance *this,Task *param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(this + 0x7c) == 0) {
    (**(code **)(*(int *)param_1 + 8))(param_1);
  }
  puVar1 = (undefined4 *)operator_new(8);
  puVar1[1] = 0;
  *(undefined4 **)(*(int *)(this + 0x74) + 4) = puVar1;
  *(undefined4 **)(this + 0x74) = puVar1;
  *puVar1 = param_1;
  *(undefined4 *)(*(int *)(this + 0x74) + 4) = 0;
  *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
  return;
}


