/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a081c ResourceManager::loadForLater */

/* ResourceManager::loadForLater(String, int, unsigned char) */

Resource * ResourceManager::loadForLater(String *param_1,int param_2,int param_3)

{
  ResourceManager *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  Resource *pRVar4;
  String aSStack_20 [12];
  
  this = (ResourceManager *)CapcomApp::getResourceManager();
  uVar1 = binarySearch(this,param_1,param_2);
  if ((int)uVar1 < 0) {
    if (param_3 == 2) {
      pRVar4 = (Resource *)0x0;
    }
    else {
      String::String(aSStack_20,param_1);
      pRVar4 = (Resource *)operator_new(0x20);
      Resource::Resource(pRVar4,aSStack_20,param_2);
      String::~String(aSStack_20);
      iVar3 = *(int *)(this + 4) + 2;
      if (*(int *)this < iVar3) {
        iVar2 = *(int *)this * 2;
        if (iVar2 < iVar3) {
          iVar2 = iVar3;
        }
        Vector<ResourceManager::Resource*>::resize
                  ((Vector<ResourceManager::Resource*> *)this,iVar2,-1);
      }
      iVar3 = *(int *)(this + 4);
      *(int *)(this + 4) = iVar3 + 1;
      *(Resource **)((iVar3 + 1) * 4 + *(int *)(this + 8)) = pRVar4;
      Vector<ResourceManager::Resource*>::insertElementAt
                ((Vector<ResourceManager::Resource*> *)(this + 0xc),pRVar4,~uVar1);
    }
  }
  else {
    pRVar4 = *(Resource **)(uVar1 * 4 + *(int *)(this + 0x14));
  }
  return pRVar4;
}


