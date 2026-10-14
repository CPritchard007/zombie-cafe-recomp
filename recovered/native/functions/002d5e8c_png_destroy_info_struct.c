/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5e8c png_destroy_info_struct */

void png_destroy_info_struct(int param_1,undefined4 *param_2)

{
  void *__s;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     (__s = (void *)*param_2, __s != (void *)0x0)) {
    *param_2 = 0;
    png_free_data(param_1,__s,DAT_002d5ec4,0xffffffff);
    memset(__s,0,0x10c);
    png_free(param_1,__s);
  }
  return;
}


