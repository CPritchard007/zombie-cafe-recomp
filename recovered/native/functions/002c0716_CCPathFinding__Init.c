/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0716 CCPathFinding::Init */

/* CCPathFinding::Init(unsigned int) */

int * CCPathFinding::Init(uint param_1)

{
  int *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  int iVar1;
  
  __ptr = (int *)malloc(0x10);
  if (__ptr != (int *)0x0) {
    iVar1 = param_1 + 1;
    *__ptr = iVar1;
    __ptr_00 = malloc(iVar1 * 0x24);
    __ptr[1] = (int)__ptr_00;
    __ptr_01 = malloc(iVar1 * 4);
    __ptr[3] = (int)__ptr_01;
    if (__ptr_00 != (void *)0x0) {
      if (__ptr_01 != (void *)0x0) {
        return __ptr;
      }
      free(__ptr_00);
    }
    __ptr[1] = 0;
    if (__ptr_01 != (void *)0x0) {
      free(__ptr_01);
    }
    __ptr[3] = 0;
    free(__ptr);
  }
  return (int *)0xffffffff;
}


