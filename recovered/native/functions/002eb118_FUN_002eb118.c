/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb118 FUN_002eb118 */

void * FUN_002eb118(void *param_1,uint param_2,size_t *param_3)

{
  void *__dest;
  size_t __size;
  uint __n;
  
  __size = *param_3;
  if ((param_2 < 0x81) || (__size < 0x81)) {
    __dest = param_1;
    if ((param_2 + 7 & 0xfffffff8) != (__size + 7 & 0xfffffff8)) {
      __dest = (void *)FUN_002eb02c(param_3);
      __n = *param_3;
      if (param_2 < *param_3) {
        __n = param_2;
      }
      memcpy(__dest,param_1,__n);
      FUN_002eb068(param_1,param_2);
    }
  }
  else {
    __dest = realloc(param_1,__size);
  }
  return __dest;
}


