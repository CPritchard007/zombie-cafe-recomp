/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d963c png_realloc_array */

void * png_realloc_array(undefined4 param_1,void *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  void *__dest;
  
  if ((((param_5 == 0) || (param_4 < 1)) || (param_3 < 0)) ||
     ((0 < param_3 && (param_2 == (void *)0x0)))) {
    png_error(param_1,DAT_002d96b8 + 0x2d9664);
  }
  __dest = (void *)0x0;
  if (param_4 <= DAT_002d96bc - param_3) {
    uVar1 = __udivsi3(0xffffffff,param_5);
    if (((uint)(param_3 + param_4) <= uVar1) &&
       (__dest = (void *)png_malloc_base(param_1,(param_3 + param_4) * param_5),
       __dest != (void *)0x0)) {
      if (param_3 != 0) {
        memcpy(__dest,param_2,param_5 * param_3);
      }
      memset((void *)((int)__dest + param_5 * param_3),0,param_4 * param_5);
    }
  }
  return __dest;
}


