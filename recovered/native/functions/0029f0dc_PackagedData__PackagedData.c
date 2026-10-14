/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f0dc PackagedData::PackagedData */

/* PackagedData::PackagedData(String, int) */

PackagedData * __thiscall
PackagedData::PackagedData(PackagedData *this,String *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_20,param_2);
  String::String(aSStack_18,aSStack_20);
  uVar1 = ResourceManager::loadForLater(aSStack_18,param_3,1);
  String::~String(aSStack_18);
  *(undefined4 *)this = uVar1;
  String::~String(aSStack_20);
  *(char *)(*(int *)this + 5) = *(char *)(*(int *)this + 5) + '\x01';
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


