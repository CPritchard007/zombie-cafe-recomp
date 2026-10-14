/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a03ae ResourceManager::get */

/* ResourceManager::get(String, int) */

undefined4 ResourceManager::get(String *param_1,int param_2)

{
  ResourceManager *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (ResourceManager *)CapcomApp::getResourceManager();
  iVar1 = binarySearch(this,param_1,param_2);
  uVar2 = 0;
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(this + 0x14));
  }
  return uVar2;
}


