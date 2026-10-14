/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe584 ObjectiveSystem::createServingObjective */

/* ObjectiveSystem::createServingObjective() */

void ObjectiveSystem::createServingObjective(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  puVar2 = (undefined2 *)operator_new(0x10);
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[6] = 0xffff;
  *puVar2 = 3;
  *(int *)(puVar2 + 4) = *(int *)(iVar1 + 0x680) * **(int **)(DAT_001fe5b8 + 0x1fe5ae);
  return;
}


