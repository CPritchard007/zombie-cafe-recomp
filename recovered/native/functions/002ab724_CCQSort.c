/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab724 CCQSort */

/* CCQSort(void*, unsigned int, unsigned int, int (*)(void const*, void const*)) */

void CCQSort(void *param_1,uint param_2,uint param_3,_func_int_void_ptr_void_ptr *param_4)

{
  qsort(param_1,param_2,param_3,(__compar_fn_t)param_4);
  return;
}


