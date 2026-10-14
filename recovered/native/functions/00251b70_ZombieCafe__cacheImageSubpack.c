/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251b70 ZombieCafe::cacheImageSubpack */

/* ZombieCafe::cacheImageSubpack(String, int, int) */

void __thiscall
ZombieCafe::cacheImageSubpack(undefined4 param_1,String *param_2,int param_3,uint param_4)

{
  void *__ptr;
  int *piVar1;
  StringUtil aSStack_60 [8];
  pair apStack_58 [4];
  undefined1 local_54;
  undefined1 auStack_50 [20];
  char *local_3c;
  char acStack_38 [16];
  char *local_28;
  char *local_24;
  uint local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_00251c30 + 0x251b7c);
  local_1c = *piVar1;
  StringUtil::getEncodingString(aSStack_60,'\0');
  __ptr = (void *)String::getBytes(param_2,aSStack_60,0,0,0);
  String::~String((String *)aSStack_60);
  FUN_0024aa7c(auStack_50,__ptr);
  local_28 = acStack_38;
  local_24 = acStack_38;
  std::string::_M_range_initialize(acStack_38,local_3c);
  local_20 = param_4 & 0xffff | param_3 << 0x10;
  FUN_00245344(auStack_50);
  std::priv::
  _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  ::insert_unique(apStack_58);
  free(__ptr);
  FUN_00245344(acStack_38);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_54);
  }
  return;
}


