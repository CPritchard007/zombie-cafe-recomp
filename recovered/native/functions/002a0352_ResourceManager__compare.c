/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0352 ResourceManager::compare */

/* ResourceManager::compare(String const&, int, ResourceManager::Resource*) const */

undefined4 __thiscall
ResourceManager::compare(ResourceManager *this,String *param_1,int param_2,Resource *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 < *(short *)(param_3 + 0x10)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 <= *(short *)(param_3 + 0x10)) {
    uVar1 = String::compareTo((String *)param_1,(String *)(param_3 + 8));
  }
  return uVar1;
}


