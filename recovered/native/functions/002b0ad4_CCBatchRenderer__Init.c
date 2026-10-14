/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0ad4 CCBatchRenderer::Init */

/* CCBatchRenderer::Init(unsigned int) */

undefined8 CCBatchRenderer::Init(uint param_1)

{
  short sVar1;
  uint *__ptr;
  short *__ptr_00;
  void *pvVar2;
  void *pvVar3;
  void *__ptr_01;
  uint uVar4;
  short sVar5;
  
  __ptr = (uint *)malloc(0x24);
  if (__ptr != (uint *)0x0) {
    *__ptr = param_1;
    __ptr_00 = (short *)malloc(param_1 * 0xc - 2);
    __ptr[3] = (uint)__ptr_00;
    pvVar2 = malloc(param_1 * 0x20);
    __ptr[4] = (uint)pvVar2;
    pvVar3 = malloc(param_1 * 0x20);
    __ptr[5] = (uint)pvVar3;
    __ptr_01 = malloc(param_1 << 4);
    __ptr[6] = (uint)__ptr_01;
    if ((((__ptr_00 != (short *)0x0) && (pvVar2 != (void *)0x0)) && (pvVar3 != (void *)0x0)) &&
       (__ptr_01 != (void *)0x0)) {
      sVar5 = 0;
      for (uVar4 = 0; uVar4 != param_1; uVar4 = uVar4 + 1) {
        if (uVar4 != 0) {
          *__ptr_00 = sVar5 + -1;
          __ptr_00[1] = sVar5;
          __ptr_00 = __ptr_00 + 2;
        }
        __ptr_00[1] = sVar5 + 1;
        *__ptr_00 = sVar5;
        __ptr_00[2] = sVar5 + 2;
        sVar1 = sVar5 + 3;
        sVar5 = sVar5 + 4;
        __ptr_00[3] = sVar1;
        __ptr_00 = __ptr_00 + 4;
      }
      __ptr[1] = 0;
      __ptr[2] = 0;
      __ptr[7] = 0;
      goto LAB_002b0b7c;
    }
    free(__ptr_01);
    free(__ptr_00);
    free((void *)__ptr[4]);
    free((void *)__ptr[5]);
    free(__ptr);
  }
  __ptr = (uint *)0xffffffff;
LAB_002b0b7c:
  return CONCAT44(param_1,__ptr);
}


