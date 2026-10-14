/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d95d6 png_malloc_base */

void * png_malloc_base(int param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    if ((param_1 == 0) || (*(code **)(param_1 + 0x334) == (code *)0x0)) {
      param_2 = malloc((size_t)param_2);
    }
    else {
      param_2 = (void *)(**(code **)(param_1 + 0x334))();
    }
  }
  return param_2;
}


