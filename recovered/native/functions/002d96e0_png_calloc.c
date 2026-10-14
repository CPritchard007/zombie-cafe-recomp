/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d96e0 png_calloc */

void * png_calloc(undefined4 param_1,size_t param_2)

{
  void *__s;
  
  __s = (void *)png_malloc();
  if (__s != (void *)0x0) {
    memset(__s,0,param_2);
  }
  return __s;
}


