/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be244 CCTileRenderer::Init */

/* CCTileRenderer::Init(unsigned int, unsigned int, float, float, float, float) */

undefined8
CCTileRenderer::Init
          (uint param_1,uint param_2,float param_3,float param_4,float param_5,float param_6)

{
  short sVar1;
  uint *__ptr;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *__ptr_00;
  void *__ptr_01;
  uint in_r2;
  int iVar6;
  short sVar7;
  uint in_r3;
  uint in_stack_00000000;
  uint in_stack_00000004;
  void *local_20;
  
  __ptr = (uint *)malloc(0x44);
  local_20 = (void *)param_1;
  if (__ptr != (uint *)0x0) {
    *__ptr = param_1;
    __ptr[1] = param_2;
    __ptr[2] = in_r2;
    __ptr[3] = in_r3;
    __ptr[4] = in_stack_00000000;
    __ptr[5] = in_stack_00000004;
    uVar2 = __divsf3(in_stack_00000000,in_r2);
    __subsf3(uVar2,DAT_002be340);
    iVar3 = __fixsfsi();
    __ptr[6] = iVar3 + 2U;
    uVar2 = __divsf3(in_stack_00000004,in_r3);
    __subsf3(uVar2,DAT_002be340);
    iVar4 = __fixsfsi();
    __ptr[7] = iVar4 + 2U;
    iVar3 = (iVar3 + 2U) * (iVar4 + 2U);
    uVar5 = iVar3 * 6 - 2;
    __ptr[0xd] = uVar5;
    local_20 = malloc(uVar5 * 2);
    __ptr[0xe] = (uint)local_20;
    __ptr_00 = malloc(iVar3 * 0x30);
    __ptr[0xf] = (uint)__ptr_00;
    __ptr_01 = malloc(iVar3 * 0x20);
    __ptr[0x10] = (uint)__ptr_01;
    if (((__ptr_00 != (void *)0x0) && (__ptr_01 != (void *)0x0)) && (local_20 != (void *)0x0)) {
      sVar7 = 0;
      iVar6 = 0;
      for (iVar4 = 0; iVar4 != iVar3; iVar4 = iVar4 + 1) {
        if (iVar4 != 0) {
          *(short *)(__ptr[0xe] + iVar6 + -2) = sVar7;
          *(short *)(__ptr[0xe] + iVar6 + -4) = sVar7 + -1;
        }
        *(short *)(__ptr[0xe] + iVar6) = sVar7;
        *(short *)(__ptr[0xe] + iVar6 + 2) = sVar7 + 1;
        *(short *)(__ptr[0xe] + iVar6 + 4) = sVar7 + 2;
        sVar1 = sVar7 + 3;
        sVar7 = sVar7 + 4;
        *(short *)(__ptr[0xe] + iVar6 + 6) = sVar1;
        iVar6 = iVar6 + 0xc;
      }
      __ptr[0xc] = 0;
      goto LAB_002be33c;
    }
    free(__ptr_00);
    free(__ptr_01);
    free((void *)__ptr[0xe]);
    free(__ptr);
  }
  __ptr = (uint *)0xffffffff;
LAB_002be33c:
  return CONCAT44(local_20,__ptr);
}


