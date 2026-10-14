/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5ac4 png_create_info_struct */

void * png_create_info_struct(void *param_1)

{
  if ((param_1 != (void *)0x0) &&
     (param_1 = (void *)png_malloc_base(param_1,0x10c), param_1 != (void *)0x0)) {
    memset(param_1,0,0x10c);
  }
  return param_1;
}


