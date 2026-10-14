/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298b7c operator.delete */

/* operator delete(void*, char const*, int) */

void operator_delete(void *param_1,char *param_2,int param_3)

{
  free(param_1);
  return;
}


