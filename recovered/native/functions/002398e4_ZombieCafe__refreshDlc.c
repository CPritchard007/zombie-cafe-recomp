/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002398e4 ZombieCafe::refreshDlc */

/* ZombieCafe::refreshDlc(void (*)(void*), void*) */

longlong ZombieCafe::refreshDlc(_func_void_void_ptr *param_1,void *param_2)

{
  void *__ptr;
  undefined4 in_r2;
  StringUtil aSStack_10 [8];
  
  *(void **)(param_1 + DAT_00239924) = param_2;
  *(undefined4 *)(param_1 + 0x970) = in_r2;
  StringUtil::getEncodingString(aSStack_10,'\x01');
  __ptr = (void *)String::getBytes(*(String **)(DAT_00239928 + 0x239902),aSStack_10,0);
  String::~String((String *)aSStack_10);
  free(__ptr);
  return ZEXT48(param_2) << 0x20;
}


