/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b5ac FUN_0026b5ac */

uint FUN_0026b5ac(int param_1)

{
  bool bVar1;
  int iVar2;
  void *__dest;
  ushort *puVar3;
  size_t sVar4;
  size_t __n;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  size_t local_48;
  int local_24;
  int local_20;
  int local_1c [2];
  
  iVar13 = *(int *)(param_1 + 0x10);
  __n = *(size_t *)(iVar13 + 0x80);
  iVar2 = *(int *)(param_1 + 0x14);
  __dest = *(void **)(param_1 + 4);
  if (**(int **)(iVar13 + 0x3c) == 0) {
    iVar2 = 0;
    uVar8 = 0;
    goto LAB_0026b716;
  }
  iVar9 = *(int *)(iVar13 + 0xb8);
  if (((iVar9 == 0) || (uVar5 = *(uint *)(iVar9 + 0x44), uVar5 == 0)) ||
     (*(short *)(iVar9 + 0x28) == 0)) {
LAB_0026b6d0:
    uVar12 = *(undefined4 *)(param_1 + 4);
    uVar15 = __muldi3(iVar2 + -1,0,*(int *)(iVar13 + 0x80),*(int *)(iVar13 + 0x80) >> 0x1f);
    pcVar7 = *(code **)(**(int **)(iVar13 + 0x3c) + 8);
    uVar8 = (*pcVar7)(*(int **)(iVar13 + 0x3c),uVar12,__n,pcVar7,uVar15);
    uVar8 = uVar8 & -(uint)(uVar8 + DAT_0026b738 != 0);
  }
  else {
    uVar8 = 0;
    for (uVar11 = uVar5 + 0x21 >> 0xc; (uVar8 == 0 && (-1 < (int)uVar11)); uVar11 = uVar11 - 1) {
      uVar8 = FUN_0026835a(iVar9,uVar11,&local_24,&local_20,local_1c);
      if (uVar8 != 0) goto LAB_0026b704;
      local_48 = DAT_0026b730;
      uVar8 = 0;
      for (uVar6 = (uint)(iVar2 * 0xbf80000) >> 0x13; puVar3 = (ushort *)(uVar6 * 2 + local_24),
          *puVar3 != 0; uVar6 = uVar6 + 1 & 0x1fff) {
        if (((uint)*puVar3 + local_1c[0] <= uVar5) &&
           (*(int *)(local_20 + (uint)*puVar3 * 4) == iVar2)) {
          uVar8 = (uint)*puVar3 + local_1c[0];
        }
        local_48 = local_48 + -1;
        if (local_48 == 0) {
          uVar8 = FUN_0026b4e4(DAT_0026b734);
          bVar1 = false;
          goto LAB_0026b6c8;
        }
      }
    }
    if (uVar8 == 0) goto LAB_0026b6d0;
    piVar10 = *(int **)(iVar9 + 8);
    sVar4 = (*(ushort *)(iVar9 + 0x42) & 0xfe00) + (*(ushort *)(iVar9 + 0x42) & 1) * 0x10000;
    iVar9 = *piVar10;
    local_48 = sVar4;
    if ((int)__n < (int)sVar4) {
      local_48 = __n;
    }
    lVar14 = __muldi3(uVar8 - 1,0,sVar4 + 0x18,0);
    pcVar7 = *(code **)(iVar9 + 8);
    uVar8 = (*pcVar7)(piVar10,__dest,local_48,pcVar7,lVar14 + 0x38);
    bVar1 = true;
LAB_0026b6c8:
    if ((uVar8 == 0) && (!bVar1)) goto LAB_0026b6d0;
  }
LAB_0026b704:
  if (iVar2 != 1) {
    return uVar8;
  }
  __dest = (void *)(iVar13 + 100);
  if (uVar8 == 0) {
    memcpy(__dest,(void *)(*(int *)(param_1 + 4) + 0x18),0x10);
    return 0;
  }
  iVar2 = 0xff;
  __n = 0x10;
LAB_0026b716:
  memset(__dest,iVar2,__n);
  return uVar8;
}


