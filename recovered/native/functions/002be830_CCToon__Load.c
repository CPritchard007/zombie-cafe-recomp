/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be830 CCToon::Load */

/* CCToon::Load(ccToon*, unsigned char const*) */

undefined4 CCToon::Load(ccToon *param_1,uchar *param_2)

{
  void *__dest;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  uchar *__src;
  uint uVar8;
  int *piVar9;
  size_t __size;
  uchar *local_2c;
  
  memcpy(param_1,param_2,0x2c);
  iVar7 = *(int *)(param_1 + 8);
  __size = iVar7 * 0x40;
  sVar6 = *(int *)(param_1 + 0x10) * 8;
  sVar5 = iVar7 * 8;
  __dest = malloc(__size);
  *(void **)(param_1 + 0xc) = __dest;
  pvVar1 = malloc(sVar6);
  *(void **)(param_1 + 0x18) = pvVar1;
  pvVar2 = malloc(sVar5);
  *(void **)(param_1 + 0x20) = pvVar2;
  pvVar3 = malloc(iVar7 * 0x1c);
  *(void **)(param_1 + 0x28) = pvVar3;
  if ((((__dest == (void *)0x0) || (pvVar1 == (void *)0x0)) || (pvVar2 == (void *)0x0)) ||
     (pvVar3 == (void *)0x0)) {
LAB_002be980:
    free(__dest);
    free(*(void **)(param_1 + 0x18));
    free(*(void **)(param_1 + 0x20));
    free(*(void **)(param_1 + 0x28));
    uVar4 = 0;
  }
  else {
    __src = param_2 + 0x2c;
    memcpy(__dest,__src,__size);
    memcpy(*(void **)(param_1 + 0x18),__src + __size,sVar6);
    local_2c = __src + __size + sVar6;
    sVar6 = *(int *)(param_1 + 8) * 4;
    for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x10); uVar8 = uVar8 + 1) {
      iVar7 = *(int *)(param_1 + 0x18);
      pvVar1 = malloc(sVar6);
      *(void **)(iVar7 + uVar8 * 8 + 4) = pvVar1;
      pvVar1 = *(void **)(*(int *)(param_1 + 0x18) + uVar8 * 8 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar7 = (uVar8 + DAT_002be9b8) * 8;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          free(*(void **)(*(int *)(param_1 + 0x18) + iVar7 + 4));
          iVar7 = iVar7 + -8;
        }
        free(*(void **)(param_1 + 0xc));
        free(*(void **)(param_1 + 0x18));
        free(*(void **)(param_1 + 0x20));
        free(*(void **)(param_1 + 0x28));
        return 0;
      }
      memcpy(pvVar1,local_2c,sVar6);
      local_2c = local_2c + sVar6;
    }
    memcpy(*(void **)(param_1 + 0x20),local_2c,sVar5);
    uVar8 = 0;
    local_2c = local_2c + sVar5;
LAB_002be9aa:
    if (uVar8 < *(uint *)(param_1 + 8)) {
      piVar9 = (int *)(*(int *)(param_1 + 0x20) + uVar8 * 8);
      sVar5 = *piVar9 * 0x20;
      pvVar1 = malloc(sVar5);
      piVar9[1] = (int)pvVar1;
      pvVar1 = *(void **)(*(int *)(param_1 + 0x20) + uVar8 * 8 + 4);
      if (pvVar1 != (void *)0x0) goto LAB_002be99a;
      iVar7 = (uVar8 + DAT_002be9b8) * 8;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        free(*(void **)(*(int *)(param_1 + 0x20) + iVar7 + 4));
        iVar7 = iVar7 + -8;
      }
      for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x10); uVar8 = uVar8 + 1) {
        free(*(void **)(*(int *)(param_1 + 0x18) + uVar8 * 8 + 4));
      }
      __dest = *(void **)(param_1 + 0xc);
      goto LAB_002be980;
    }
    uVar4 = 1;
  }
  return uVar4;
LAB_002be99a:
  memcpy(pvVar1,local_2c,sVar5);
  uVar8 = uVar8 + 1;
  local_2c = local_2c + sVar5;
  goto LAB_002be9aa;
}


