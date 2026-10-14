/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d304 ResourceManager::loadImage */

/* ResourceManager::loadImage(String, int) */

undefined8 ResourceManager::loadImage(String *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  String *pSStack_10;
  undefined4 uStack_c;
  
  pSStack_10 = param_1;
  uStack_c = param_2;
  String::String((String *)&pSStack_10,param_1);
  uVar1 = load((String *)&pSStack_10,param_2,2);
  String::~String((String *)&pSStack_10);
  return CONCAT44(pSStack_10,uVar1);
}


