/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e6768 Constants::load */

/* Constants::load() */

void Constants::load(void)

{
  Resource *this;
  InputStream *pIVar1;
  int iVar2;
  String aSStack_28 [8];
  int local_20 [2];
  String aSStack_18 [8];
  
  L_PrintLog((char *)(DAT_000e6818 + 0xe6774),(char *)(DAT_000e681c + 0xe6776));
  String::String(aSStack_28,(char *)(DAT_000e6820 + 0xe6780));
  String::String(aSStack_18,aSStack_28);
  this = (Resource *)ResourceManager::load(aSStack_18,0,1);
  String::~String(aSStack_18);
  String::~String(aSStack_28);
  if (this == (Resource *)0x0) {
    L_PrintLog((char *)(DAT_000e6824 + 0xe67b8),(char *)(DAT_000e6828 + 0xe67ba));
  }
  else {
    pIVar1 = (InputStream *)ResourceManager::Resource::createInputStream(this);
    iVar2 = DAT_000e682c;
    DataInputStream::DataInputStream((DataInputStream *)local_20,pIVar1);
    iVar2 = *(int *)(iVar2 + 0xe67d4);
    load((DataInputStream *)local_20);
    (**(code **)(*(int *)pIVar1 + 0xc))(pIVar1);
    (**(code **)(*(int *)pIVar1 + 4))(pIVar1);
    ResourceManager::Resource::releaseHandle(this);
    local_20[0] = iVar2 + 8;
    InputStream::~InputStream((InputStream *)local_20);
  }
  return;
}


