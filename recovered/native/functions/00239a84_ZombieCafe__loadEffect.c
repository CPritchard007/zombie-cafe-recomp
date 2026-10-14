/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239a84 ZombieCafe::loadEffect */

/* ZombieCafe::loadEffect(int, int) */

void __thiscall ZombieCafe::loadEffect(ZombieCafe *this,int param_1,int param_2)

{
  char *__ptr;
  StringUtil aSStack_20 [12];
  
  StringUtil::getEncodingString(aSStack_20,'\x01');
  __ptr = (char *)String::getBytes((String *)(param_2 * 8 + *(int *)(DAT_00239adc + 0x239aa0)),
                                   aSStack_20,0,0,0);
  String::~String((String *)aSStack_20);
  CCSound::LoadEffect(__ptr,param_1);
  free(__ptr);
  *(int *)(param_1 * 4 + *(int *)(this + 0x400)) = param_2;
  return;
}


