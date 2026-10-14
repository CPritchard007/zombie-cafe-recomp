/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0694 ResourceManager::load */

/* ResourceManager::load(String, int, unsigned char) */

void ResourceManager::load(String *param_1,int param_2,int param_3)

{
  ResourceManager *this;
  char *__src;
  uint uVar1;
  String *this_00;
  int iVar2;
  int *piVar3;
  ImageResource *pIVar4;
  String aSStack_12c [8];
  String aSStack_124 [8];
  char local_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002a0798 + 0x2a06a0);
  local_1c = *piVar3;
  this = (ResourceManager *)CapcomApp::getResourceManager();
  iVar2 = 0;
  do {
    local_11c[iVar2] = '\0';
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  __src = (char *)String::getBytes(param_1);
  strcpy(local_11c,__src);
  L_PrintLog((char *)(DAT_002a079c + 0x2a06d8),local_11c);
  uVar1 = binarySearch(this,param_1,param_2);
  if ((int)uVar1 < 0) {
    if (param_3 == 2) {
      String::String(aSStack_12c,param_1);
      pIVar4 = (ImageResource *)operator_new(0x28);
      ImageResource::ImageResource(pIVar4,aSStack_12c,param_2);
      this_00 = aSStack_12c;
    }
    else {
      String::String(aSStack_124,param_1);
      pIVar4 = (ImageResource *)operator_new(0x20);
      Resource::Resource((Resource *)pIVar4,aSStack_124,param_2);
      this_00 = aSStack_124;
    }
    String::~String(this_00);
    ((Resource *)pIVar4)[5] = (Resource)((char)((Resource *)pIVar4)[5] + '\x01');
    Vector<ResourceManager::Resource*>::insertElementAt
              ((Vector<ResourceManager::Resource*> *)(this + 0xc),(Resource *)pIVar4,~uVar1);
    (**(code **)(*(int *)pIVar4 + 8))(pIVar4);
  }
  else {
    pIVar4 = *(ImageResource **)(uVar1 * 4 + *(int *)(this + 0x14));
    if (((Resource *)pIVar4)[0x12] == (Resource)0x0) {
      (**(code **)(*(int *)pIVar4 + 8))(pIVar4);
    }
    ((Resource *)pIVar4)[5] = (Resource)((char)((Resource *)pIVar4)[5] + '\x01');
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pIVar4);
  }
  return;
}


