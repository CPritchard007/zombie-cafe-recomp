/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a07a0 ResourceManager::createUserResource */

/* ResourceManager::createUserResource(String, int, unsigned char*) */

Resource * ResourceManager::createUserResource(String *param_1,int param_2,undefined4 param_3)

{
  ResourceManager *this;
  uint uVar1;
  Resource *pRVar2;
  String aSStack_20 [12];
  
  this = (ResourceManager *)CapcomApp::getResourceManager();
  uVar1 = binarySearch(this,param_1,param_2);
  if ((int)uVar1 < 0) {
    String::String(aSStack_20,param_1);
    pRVar2 = (Resource *)operator_new(0x20);
    UserResource::UserResource((UserResource *)pRVar2,aSStack_20,param_2,param_3);
    String::~String(aSStack_20);
    setResident(pRVar2,true);
    Vector<ResourceManager::Resource*>::insertElementAt
              ((Vector<ResourceManager::Resource*> *)(this + 0xc),pRVar2,~uVar1);
  }
  else {
    uVar1 = *(uint *)(uVar1 * 4 + *(int *)(this + 0x14));
    pRVar2 = (Resource *)(uVar1 & -(uint)(*(char *)(uVar1 + 0x1c) == '\x03'));
  }
  return pRVar2;
}


