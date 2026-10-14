/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298b74 operator.new[] */

/* operator new[](unsigned int, char const*, int) */

void * operator_new__(uint param_1,char *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  return pvVar1;
}


