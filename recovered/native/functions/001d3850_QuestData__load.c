/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3850 QuestData::load */

/* QuestData::load() */

undefined8 QuestData::load(void)

{
  undefined4 in_r0;
  Resource *this;
  InputStream *pIVar1;
  undefined4 in_r1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = in_r0;
  uStack_14 = in_r1;
  String::String((String *)&uStack_18,*(String **)(DAT_001d389c + 0x1d385a));
  this = (Resource *)ResourceManager::loadBinary((String *)&uStack_18,0);
  String::~String((String *)&uStack_18);
  pIVar1 = (InputStream *)ResourceManager::Resource::createInputStream(this);
  load(pIVar1);
  (**(code **)(*(int *)pIVar1 + 0xc))(pIVar1);
  (**(code **)(*(int *)pIVar1 + 4))(pIVar1);
  ResourceManager::Resource::releaseHandle(this);
  return CONCAT44(uStack_14,uStack_18);
}


