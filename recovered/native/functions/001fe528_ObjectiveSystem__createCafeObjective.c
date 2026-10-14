/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe528 ObjectiveSystem::createCafeObjective */

/* ObjectiveSystem::createCafeObjective() */

undefined2 * ObjectiveSystem::createCafeObjective(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = CapcomApp::getInstance();
  iVar4 = *(int *)(iVar1 + 4);
  puVar2 = (undefined2 *)operator_new(0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[6] = 0xffff;
  iVar1 = arc4random();
  if ((iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f) << 0x1f < 0) {
    *puVar2 = 3;
    puVar3 = (undefined4 *)(DAT_001fe580 + 0x1fe56e);
  }
  else {
    *puVar2 = 6;
    puVar3 = (undefined4 *)(DAT_001fe57c + 0x1fe564);
  }
  *(int *)(puVar2 + 4) = *(int *)(iVar4 + 0x680) * *(int *)*puVar3;
  return puVar2;
}


