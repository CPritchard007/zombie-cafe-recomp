/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe4c4 ObjectiveSystem::createSocialObjective */

/* ObjectiveSystem::createSocialObjective() */

undefined2 * ObjectiveSystem::createSocialObjective(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  puVar2 = (undefined2 *)operator_new(0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[6] = 0xffff;
  if (*(int *)(iVar1 + DAT_001fe524 + 4) != -1) {
    iVar1 = arc4random();
    uVar3 = (iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f) & 3;
    if (uVar3 != 2) {
      uVar5 = 2;
      uVar4 = 7;
      if ((uVar3 != 3) && (uVar4 = 9, uVar3 == 1)) {
        uVar4 = 8;
      }
      *puVar2 = uVar4;
      goto LAB_001fe51c;
    }
  }
  *puVar2 = 5;
  uVar5 = 1;
LAB_001fe51c:
  *(undefined4 *)(puVar2 + 4) = uVar5;
  return puVar2;
}


