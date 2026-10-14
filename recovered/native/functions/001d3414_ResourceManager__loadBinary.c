/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3414 ResourceManager::loadBinary */

/* ResourceManager::loadBinary(String, int) */

undefined8 ResourceManager::loadBinary(String *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  String *pSStack_10;
  undefined4 uStack_c;
  
  pSStack_10 = param_1;
  uStack_c = param_2;
  String::String((String *)&pSStack_10,param_1);
  uVar1 = load((String *)&pSStack_10,param_2,1);
  String::~String((String *)&pSStack_10);
  return CONCAT44(pSStack_10,uVar1);
}


