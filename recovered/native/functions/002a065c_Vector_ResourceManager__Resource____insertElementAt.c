/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a065c Vector<ResourceManager::Resource*>::insertElementAt */

/* Vector<ResourceManager::Resource*>::insertElementAt(ResourceManager::Resource*, int) */

void __thiscall
Vector<ResourceManager::Resource*>::insertElementAt
          (Vector<ResourceManager::Resource*> *this,Resource *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 + 1 < *(int *)this) {
      if (param_2 <= iVar1) {
        FUN_0029ff06(this,param_2,1);
      }
    }
    else {
      resize(this,iVar1 << 1,param_2);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(Resource **)(param_2 * 4 + *(int *)(this + 8)) = param_1;
  }
  return;
}


