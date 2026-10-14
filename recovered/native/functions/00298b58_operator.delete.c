/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298b58 operator.delete */

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}


