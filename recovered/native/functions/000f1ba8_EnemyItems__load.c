/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1ba8 EnemyItems::load */

/* EnemyItems::load() */

void EnemyItems::load(void)

{
  Resource *this;
  InputStream *pIVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_20,(char *)(DAT_000f1c10 + 0xf1bb4));
  String::String(aSStack_18,aSStack_20);
  this = (Resource *)ResourceManager::load(aSStack_18,0,1);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  pIVar1 = (InputStream *)ResourceManager::Resource::createInputStream(this);
  load(pIVar1);
  (**(code **)(*(int *)pIVar1 + 0xc))(pIVar1);
  (**(code **)(*(int *)pIVar1 + 4))(pIVar1);
  ResourceManager::Resource::releaseHandle(this);
  return;
}


