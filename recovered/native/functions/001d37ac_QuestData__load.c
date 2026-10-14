/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d37ac QuestData::load */

/* QuestData::load(String) */

void QuestData::load(String *param_1)

{
  Resource *this;
  InputStream *pIVar1;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_28,(char *)(DAT_001d3844 + 0x1d37b8));
  String::operator+=(aSStack_28,(char *)(DAT_001d3848 + 0x1d37c4));
  String::String(aSStack_20,param_1);
  String::operator+=(aSStack_28,aSStack_20);
  String::~String(aSStack_20);
  String::operator+=(aSStack_28,(char *)(DAT_001d384c + 0x1d37e4));
  String::String(aSStack_18,aSStack_28);
  this = (Resource *)ResourceManager::loadBinary(aSStack_18,0);
  String::~String(aSStack_18);
  pIVar1 = (InputStream *)ResourceManager::Resource::createInputStream(this);
  load(pIVar1);
  (**(code **)(*(int *)pIVar1 + 0xc))(pIVar1);
  (**(code **)(*(int *)pIVar1 + 4))(pIVar1);
  ResourceManager::Resource::releaseHandle(this);
  String::~String(aSStack_28);
  return;
}


