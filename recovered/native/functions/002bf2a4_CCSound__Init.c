/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf2a4 CCSound::Init */

/* CCSound::Init(unsigned int, unsigned int, unsigned int) */

undefined8 CCSound::Init(uint param_1,uint param_2,uint param_3)

{
  uint *__ptr;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1;
  uVar3 = param_2;
  uVar5 = param_3;
  __ptr = (uint *)malloc(0x38);
  if (__ptr != (uint *)0x0) {
    javaInitSound(param_1,param_2,(param_3 - (param_3 - 1)) - (uint)(param_3 == 0),param_3 - 1,uVar4
                  ,uVar3,uVar5);
    *__ptr = param_3;
    uVar3 = 0;
    __ptr[1] = 0;
    __ptr[7] = 0;
    __ptr[8] = param_1;
    pvVar1 = malloc(param_1 * 0x118);
    __ptr[9] = (uint)pvVar1;
    if (pvVar1 != (void *)0x0) {
      for (; uVar3 != param_1; uVar3 = uVar3 + 1) {
        iVar2 = uVar3 * 0x118;
        L_ResetEffect((SSoundEffect *)(__ptr[9] + iVar2));
        *(uint *)(__ptr[9] + iVar2 + 0x114) = uVar3;
      }
      uVar3 = 0;
      __ptr[10] = 0;
      __ptr[0xb] = param_2;
      pvVar1 = malloc(param_2 * 0x118);
      __ptr[0xc] = (uint)pvVar1;
      if (pvVar1 != (void *)0x0) {
        for (; uVar3 != param_2; uVar3 = uVar3 + 1) {
          L_ResetEffect((SSoundEffect *)(__ptr[0xc] + uVar3 * 0x118));
          *(uint *)(__ptr[0xc] + uVar3 * 0x118 + 0x114) = uVar3;
        }
        __ptr[2] = 0x3f800000;
        __ptr[3] = 0x3f800000;
        __ptr[4] = 0x3f800000;
        __ptr[5] = 0x3f800000;
        __ptr[6] = 0x3f800000;
        __ptr[0xd] = 0;
        goto LAB_002bf360;
      }
      free((void *)__ptr[9]);
    }
    free(__ptr);
  }
  __ptr = (uint *)0xffffffff;
LAB_002bf360:
  return CONCAT44(uVar4,__ptr);
}


