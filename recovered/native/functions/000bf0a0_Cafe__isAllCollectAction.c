/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bf0a0 Cafe::isAllCollectAction */

/* Cafe::isAllCollectAction() */

uint Cafe::isAllCollectAction(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(uint *)(*(int *)(iVar1 + 4) + 0x7e8);
  if (uVar2 != 0) {
    uVar2 = (uint)(*(short *)(uVar2 + 0x7e) != 0);
  }
  return uVar2;
}


