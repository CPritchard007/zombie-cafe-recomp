/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a02d2 ResourceManager::setModified */

/* ResourceManager::setModified(ResourceManager::Resource*, String, int) */

undefined8 ResourceManager::setModified(int param_1,String *param_2,undefined4 param_3)

{
  int iStack_18;
  String *pSStack_14;
  undefined4 uStack_10;
  
  iStack_18 = param_1;
  pSStack_14 = param_2;
  if (param_1 != 0) {
    uStack_10 = param_3;
    String::String((String *)&iStack_18,param_2);
    String::operator=((String *)(param_1 + 8),(String *)&iStack_18);
    String::~String((String *)&iStack_18);
    *(short *)(param_1 + 0x10) = (short)param_3;
  }
  return CONCAT44(pSStack_14,iStack_18);
}


