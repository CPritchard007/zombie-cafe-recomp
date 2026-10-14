/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0324 ResourceManager::flushResources */

/* ResourceManager::flushResources() */

void ResourceManager::flushResources(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = CapcomApp::getResourceManager();
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar4 = iVar3 << 2;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    piVar2 = *(int **)(*(int *)(iVar1 + 0x14) + iVar4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar4 = iVar4 + -4;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4) = 0xffffffff;
  return;
}


