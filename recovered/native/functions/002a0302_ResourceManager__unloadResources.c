/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0302 ResourceManager::unloadResources */

/* ResourceManager::unloadResources() */

void ResourceManager::unloadResources(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = CapcomApp::getResourceManager();
  iVar3 = *(int *)(iVar2 + 0x10);
  iVar4 = iVar3 << 2;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x14) + iVar4);
    iVar4 = iVar4 + -4;
    (**(code **)(*(int *)*puVar1 + 0xc))();
  }
  return;
}


