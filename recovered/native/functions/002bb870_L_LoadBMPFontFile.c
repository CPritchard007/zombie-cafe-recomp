/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb870 L_LoadBMPFontFile */

/* L_LoadBMPFontFile(STextRenderer*, char const*, char const*) */

void * L_LoadBMPFontFile(STextRenderer *param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t __size;
  void *__ptr;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  ccTexture2D *pcVar12;
  uint *local_34;
  uint local_30;
  uint *local_2c;
  
  iVar1 = CCAssetManager::doesFileExist(param_2);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  __size = CCAssetManager::fileSize(param_2);
  __ptr = malloc(__size);
  if (__ptr == (void *)0x0) {
    return (void *)0x0;
  }
  CCAssetManager::readFile(param_2,__ptr,__size);
  iVar7 = *(int *)((int)__ptr + 5) + 0xe;
  iVar1 = iVar7 + *(int *)((int)__ptr + *(int *)((int)__ptr + 5) + 10);
  iVar9 = iVar1 + 5 + *(int *)((int)__ptr + iVar1 + 1);
  uVar11 = *(undefined4 *)((int)__ptr + iVar9 + 1);
  uVar2 = __floatsisf((int)*(short *)((int)__ptr + iVar7));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar1 = __udivsi3(uVar11,0x14);
  local_2c = (uint *)((int)__ptr + iVar9 + 5);
  *(int *)(param_1 + 0x14) = iVar1;
  local_34 = (uint *)0x0;
  puVar6 = local_2c;
  for (iVar7 = 0; iVar7 != iVar1; iVar7 = iVar7 + 1) {
    if (local_34 < *puVar6) {
      local_34 = (uint *)*puVar6;
    }
    puVar6 = puVar6 + 5;
  }
  if (DAT_002bbb8c < local_34) {
    *(undefined4 *)(param_1 + 0x118) = 1;
    pvVar3 = malloc(0x20000);
    iVar1 = 0;
    *(void **)(param_1 + 0x11c) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_002bb95e;
    do {
      iVar7 = 0;
      do {
        iVar9 = iVar7 + iVar1;
        iVar7 = iVar7 + 8;
        *(undefined4 *)(*(int *)(param_1 + 0x11c) + iVar9) = 0xffffffff;
        *(undefined4 *)(*(int *)(param_1 + 0x11c) + iVar9 + 4) = 0xffffffff;
      } while (iVar7 != 0x200);
      iVar1 = iVar1 + 0x200;
    } while (iVar1 != 0x20000);
    puVar6 = local_2c;
    for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x14); uVar8 = uVar8 + 1) {
      uVar4 = *puVar6;
      pvVar3 = *(void **)(param_1 + 0x11c);
      uVar5 = 0;
      iVar1 = (uVar4 & 0xff) << 9;
      while( true ) {
        if ((*(int *)((int)pvVar3 + iVar1) == -1) || (0x3f < uVar5)) break;
        uVar5 = uVar5 + 1;
        iVar1 = iVar1 + 8;
      }
      puVar6 = puVar6 + 5;
      if (uVar5 == 0x40) goto LAB_002bba38;
      *(uint *)((int)pvVar3 + iVar1) = uVar4;
      *(uint *)(*(int *)(param_1 + 0x11c) + iVar1 + 4) = uVar8;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
    pvVar3 = malloc(((int)local_34 + 1U) * 4);
    uVar8 = 0;
    *(void **)(param_1 + 0x1c) = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_002bb95e:
      free(__ptr);
      return pvVar3;
    }
    do {
      iVar1 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x1c)) = 0xffffffff;
    } while (uVar8 <= local_34);
    puVar6 = local_2c;
    for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x14); uVar8 = uVar8 + 1) {
      uVar4 = *puVar6;
      puVar6 = puVar6 + 5;
      *(uint *)(uVar4 * 4 + *(int *)(param_1 + 0x1c)) = uVar8;
    }
  }
  pcVar12 = (ccTexture2D *)(param_1 + 0x24);
  *(uint **)(param_1 + 0x18) = local_34;
  iVar1 = CCTexture2D::LoadFromImageFile(pcVar12,param_3);
  if (iVar1 != 0) {
    iVar1 = CCMaterial::SetupSimple((ccMaterial *)(param_1 + 0x50),pcVar12);
    if (iVar1 != 0) {
      CCMaterial::EnableBlending((ccMaterial *)(param_1 + 0x50),6,7);
      pvVar3 = malloc(*(int *)(param_1 + 0x14) * 0x34);
      *(void **)(param_1 + 0x20) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        local_34 = local_2c + 3;
        iVar1 = 0;
        for (local_30 = 0; local_30 < *(uint *)(param_1 + 0x14); local_30 = local_30 + 1) {
          iVar7 = *(int *)(param_1 + 0x20);
          uVar2 = __floatsisf((int)(short)local_2c[4]);
          *(undefined4 *)(iVar7 + iVar1 + 0x20) = uVar2;
          iVar7 = *(int *)(param_1 + 0x20);
          uVar2 = __floatsisf((short)*local_34 + -1);
          *(undefined4 *)(iVar7 + iVar1 + 0x24) = uVar2;
          iVar7 = *(int *)(param_1 + 0x20);
          uVar2 = __floatsisf(*(short *)((int)local_34 + 2) + -1);
          *(undefined4 *)(iVar7 + iVar1 + 0x28) = uVar2;
          iVar7 = *(int *)(param_1 + 0x20);
          uVar2 = __floatsisf((ushort)local_34[-1] + 2);
          *(undefined4 *)(iVar7 + iVar1 + 0x2c) = uVar2;
          iVar7 = *(int *)(param_1 + 0x20);
          uVar2 = __floatsisf(*(ushort *)((int)local_34 + -2) + 2);
          *(undefined4 *)(iVar7 + iVar1 + 0x30) = uVar2;
          iVar7 = *(int *)(param_1 + 0x20);
          uVar2 = __floatunsisf((short)local_2c[1]);
          uVar2 = __subsf3(uVar2,0x3f800000);
          uVar11 = __floatunsisf(*(undefined4 *)(param_1 + 0x28));
          uVar2 = __divsf3(uVar2,uVar11);
          puVar10 = (undefined4 *)(iVar7 + iVar1);
          puVar10[4] = uVar2;
          *puVar10 = uVar2;
          uVar2 = __floatunsisf(*(undefined2 *)((int)local_2c + 6));
          uVar2 = __subsf3(uVar2,0x3f800000);
          uVar11 = __floatunsisf(*(undefined4 *)(param_1 + 0x2c));
          uVar2 = __divsf3(uVar2,uVar11);
          puVar10[3] = uVar2;
          puVar10[1] = uVar2;
          iVar1 = iVar1 + 0x34;
          uVar2 = __floatsisf((uint)(ushort)local_2c[1] + (uint)(ushort)local_34[-1] + 1);
          uVar11 = __floatunsisf(*(undefined4 *)(param_1 + 0x28));
          uVar2 = __divsf3(uVar2,uVar11);
          puVar10[6] = uVar2;
          puVar10[2] = uVar2;
          uVar2 = __floatsisf((uint)*(ushort *)((int)local_2c + 6) +
                              (uint)*(ushort *)((int)local_34 + -2) + 1);
          uVar11 = __floatunsisf(*(undefined4 *)(param_1 + 0x2c));
          uVar2 = __divsf3(uVar2,uVar11);
          puVar10[7] = uVar2;
          puVar10[5] = uVar2;
          local_2c = local_2c + 5;
          local_34 = local_34 + 5;
        }
        free(__ptr);
        return (void *)0x1;
      }
      CCTexture2D::Free(pcVar12);
    }
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    pvVar3 = *(void **)(param_1 + 0x1c);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x11c);
  }
LAB_002bba38:
  free(pvVar3);
  free(__ptr);
  return (void *)0x0;
}


