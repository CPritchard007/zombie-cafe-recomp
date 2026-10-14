/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bbbc FUN_0026bbbc */

undefined4 FUN_0026bbbc(int param_1)

{
  ushort uVar1;
  size_t __n;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  void *__src;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  iVar4 = *(int *)(param_1 + 0x38);
  iVar8 = (*(int **)(param_1 + 0x34))[9];
  iVar6 = *(int *)(**(int **)(param_1 + 0x34) + 0xb0);
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar7 = (uint)*(byte *)(param_1 + 5);
  iVar11 = (uint)*(ushort *)(param_1 + 0x10) * 2;
  puVar9 = (undefined1 *)(iVar4 + uVar7 + 5);
  puVar10 = (undefined1 *)(iVar4 + uVar7 + 6);
  uVar5 = (uint)CONCAT11(*puVar9,*puVar10);
  memcpy((void *)(iVar6 + uVar5),(void *)(iVar4 + uVar5),iVar8 - uVar5);
  uVar5 = (uint)uVar1 + iVar11;
  puVar14 = (undefined1 *)(iVar4 + (uint)uVar1);
  puVar12 = puVar14 + iVar11;
  iVar11 = iVar8;
  for (; puVar14 != puVar12; puVar14 = puVar14 + 2) {
    uVar13 = (uint)CONCAT11(*puVar14,puVar14[1]);
    uVar3 = DAT_0026bcb0;
    if ((iVar8 + -4 < (int)uVar13) || (uVar13 < uVar5)) goto LAB_0026bca6;
    __src = (void *)(iVar6 + uVar13);
    __n = FUN_00260b9e(param_1,__src);
    iVar11 = iVar11 - __n;
    uVar3 = DAT_0026bcb4;
    if ((iVar11 < (int)uVar5) || (iVar8 < (int)(uVar13 + __n))) goto LAB_0026bca6;
    memcpy((void *)(iVar4 + iVar11),__src,__n);
    *puVar14 = (char)((uint)iVar11 >> 8);
    puVar14[1] = (char)iVar11;
  }
  *puVar9 = (char)((uint)iVar11 >> 8);
  *puVar10 = (char)iVar11;
  iVar6 = iVar4 + uVar7;
  *(undefined1 *)(iVar6 + 1) = 0;
  *(undefined1 *)(iVar6 + 2) = 0;
  *(undefined1 *)(iVar6 + 7) = 0;
  memset((void *)(iVar4 + uVar5),0,iVar11 - uVar5);
  uVar2 = 0;
  uVar3 = DAT_0026bcb8;
  if (iVar11 - uVar5 != (uint)*(ushort *)(param_1 + 0xe)) {
LAB_0026bca6:
    uVar2 = FUN_0026b4e4(uVar3);
  }
  return uVar2;
}


