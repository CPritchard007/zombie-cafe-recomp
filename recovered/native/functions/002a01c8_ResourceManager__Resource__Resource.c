/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a01c8 ResourceManager::Resource::Resource */

/* ResourceManager::Resource::Resource(String, int) */

Resource * __thiscall
ResourceManager::Resource::Resource(Resource *this,String *param_2,undefined2 param_3)

{
  *(int *)this = *(int *)(DAT_002a01f4 + 0x2a01d4) + 8;
  String::String((String *)(this + 8),param_2);
  this[0x1c] = (Resource)0x1;
  *(undefined2 *)(this + 0x10) = param_3;
  this[4] = (Resource)0x0;
  this[5] = (Resource)0x0;
  this[0x12] = (Resource)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}


