/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e610 FUN_0025e610 */

undefined8 FUN_0025e610(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = param_1;
  if ((param_1 != (void *)0x0) && (pvVar2 = param_2, param_2 != (void *)0x0)) {
    for (iVar3 = 0; iVar3 < *(short *)((int)param_1 + 0x4e); iVar3 = iVar3 + 1) {
      pvVar2 = *(void **)(iVar3 * 4 + *(int *)((int)param_1 + 0x48));
      if (((pvVar2 != (void *)0x0) && (iVar1 = memcmp(pvVar2,param_2,param_3), iVar1 == 0)) &&
         (*(char *)((int)pvVar2 + param_3) == '\0')) {
        pvVar2 = (void *)(iVar3 + 1);
        goto LAB_0025e65c;
      }
    }
    pvVar2 = (void *)0x0;
  }
LAB_0025e65c:
  return CONCAT44(param_3,pvVar2);
}


