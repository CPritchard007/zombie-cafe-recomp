/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe45c ObjectiveSystem::createRaidObjective */

/* ObjectiveSystem::createRaidObjective() */

undefined2 * __thiscall ObjectiveSystem::createRaidObjective(ObjectiveSystem *this)

{
  int iVar1;
  undefined2 *puVar2;
  int extraout_r1;
  undefined4 uVar3;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  puVar2 = (undefined2 *)operator_new(0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[6] = 0xffff;
  if (((*(uint *)(this + 0x18) & 3) == 0) && (-1 < *(int *)(iVar1 + DAT_001fe4c0 + 4))) {
    iVar1 = arc4random();
    __aeabi_idivmod(iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,3);
    if (extraout_r1 == 1) {
      uVar3 = 2;
    }
    else {
      if (extraout_r1 != 2) goto LAB_001fe4a8;
      uVar3 = 1;
    }
    *puVar2 = (short)uVar3;
  }
  else {
LAB_001fe4a8:
    *puVar2 = 0;
    uVar3 = 2;
  }
  *(undefined4 *)(puVar2 + 4) = uVar3;
  return puVar2;
}


