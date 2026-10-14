/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0520 ResourceManager::removeResource */

/* ResourceManager::removeResource(ResourceManager::Resource*) */

void __thiscall ResourceManager::removeResource(ResourceManager *this,Resource *param_1)

{
  int iVar1;
  
  for (iVar1 = 0;
      (iVar1 <= *(int *)(this + 4) && (*(Resource **)(iVar1 * 4 + *(int *)(this + 8)) != param_1));
      iVar1 = iVar1 + 1) {
  }
  Vector<ResourceManager::Resource*>::removeElementAt((int)this);
  binarySearch(this,param_1 + 8,(int)*(short *)(param_1 + 0x10));
  Vector<ResourceManager::Resource*>::removeElementAt((int)(this + 0xc));
  (**(code **)(*(int *)param_1 + 4))(param_1);
  return;
}


