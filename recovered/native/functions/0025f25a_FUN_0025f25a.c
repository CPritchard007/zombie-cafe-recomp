/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f25a FUN_0025f25a */

void * FUN_0025f25a(undefined4 param_1,void *param_2)

{
  int iVar1;
  void *__dest;
  
  __dest = param_2;
  if (param_2 != (void *)0x0) {
    iVar1 = FUN_0025b154(param_2);
    __dest = (void *)FUN_0025ee10(param_1,iVar1 + 1U);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,iVar1 + 1U);
    }
  }
  return __dest;
}


