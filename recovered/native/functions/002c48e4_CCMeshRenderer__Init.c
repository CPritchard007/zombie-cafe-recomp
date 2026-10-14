/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c48e4 CCMeshRenderer::Init */

/* CCMeshRenderer::Init(unsigned int) */

uint * CCMeshRenderer::Init(uint param_1)

{
  uint *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *pvVar1;
  
  __ptr = (uint *)malloc(0x18);
  if (__ptr != (uint *)0x0) {
    *__ptr = param_1;
    __ptr_00 = malloc(param_1 * 0x24);
    __ptr[2] = (uint)__ptr_00;
    __ptr_01 = malloc(param_1 * 0x24);
    __ptr[3] = (uint)__ptr_01;
    pvVar1 = malloc(param_1 * 0x18);
    __ptr[4] = (uint)pvVar1;
    if (((__ptr_01 == (void *)0x0) || (__ptr_00 == (void *)0x0)) || (pvVar1 == (void *)0x0)) {
      free(__ptr_01);
      free(__ptr_00);
      free((void *)__ptr[4]);
      free(__ptr);
      __ptr = (uint *)0x0;
    }
    else {
      __ptr[1] = 0;
    }
  }
  return __ptr;
}


