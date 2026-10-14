/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0280 ResourceManager::UserResource::UserResource */

/* ResourceManager::UserResource::UserResource(String, int, unsigned char*) */

undefined8 __thiscall
ResourceManager::UserResource::UserResource
          (UserResource *this,String *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  UserResource *pUStack_18;
  String *pSStack_14;
  
  pUStack_18 = this;
  pSStack_14 = param_2;
  String::String((String *)&pUStack_18,param_2);
  Resource::Resource((Resource *)this,(String *)&pUStack_18,param_3);
  String::~String((String *)&pUStack_18);
  iVar1 = DAT_002a02c4;
  *(undefined4 *)(this + 0x14) = param_4;
  *(int *)this = *(int *)(iVar1 + 0x2a02a8) + 8;
  this[0x1c] = (UserResource)0x3;
  this[0x12] = (UserResource)0x1;
  *(undefined4 *)(this + 0x18) = 0;
  return CONCAT44(pUStack_18,this);
}


