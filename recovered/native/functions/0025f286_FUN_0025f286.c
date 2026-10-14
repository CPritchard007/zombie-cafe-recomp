/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f286 FUN_0025f286 */

void * FUN_0025f286(undefined4 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  __dest = param_2;
  if ((param_2 != (void *)0x0) &&
     (__dest = (void *)FUN_0025ee10(param_1,param_3 + 1), __dest != (void *)0x0)) {
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((int)__dest + param_3) = 0;
  }
  return __dest;
}


