/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5ae8 png_info_init_3 */

void png_info_init_3(undefined4 *param_1,uint param_2)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    if (param_2 <= DAT_002d5b18) {
      *param_1 = 0;
      free(__ptr);
      __ptr = (void *)png_malloc_base(0,0x10c);
      *param_1 = __ptr;
    }
    memset(__ptr,0,0x10c);
  }
  return;
}


