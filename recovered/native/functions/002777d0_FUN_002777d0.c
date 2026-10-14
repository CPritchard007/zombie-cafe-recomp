/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002777d0 FUN_002777d0 */

int FUN_002777d0(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  
  iVar13 = param_1[0x12];
  param_1[0x12] = iVar13 + 1;
  uVar2 = FUN_002662b8();
  piVar12 = (int *)(*(ushort *)(param_2 + 2) & 0x800);
  if ((*(ushort *)(param_2 + 2) & 0x800) != 0) {
    piVar12 = *(int **)(param_2 + 0x10);
  }
  if (((((((param_1[0x11] == 0) && (piVar12 != (int *)0x0)) && (piVar12[0xf] == 0)) &&
        (((*(ushort *)((int)piVar12 + 6) & 5) == 0 && (piVar12[0x12] == 0)))) &&
       ((piVar12[0xb] == 0 &&
        ((psVar11 = (short *)piVar12[10], *psVar11 == 1 && (*(int *)(psVar11 + 0xc) == 0)))))) &&
      (puVar14 = *(undefined4 **)(psVar11 + 10), puVar14 != (undefined4 *)0x0)) &&
     (((-1 < (int)((uint)*(byte *)((int)puVar14 + 0x22) << 0x1b) && (*(int *)*piVar12 == 1)) &&
      (pcVar15 = *(char **)((int *)*piVar12)[2], *pcVar15 == -0x68)))) {
    iVar8 = *param_1;
    iVar10 = (int)*(short *)(pcVar15 + 0x1c);
    uVar9 = FUN_0025d12c(iVar8,puVar14[0x11]);
    FUN_00275ec4(param_1,uVar9);
    FUN_00265f96(param_1,uVar9,puVar14[5],0,*puVar14);
    if (iVar10 < 0) {
      uVar6 = FUN_002665e6(param_1);
      FUN_002663cc(param_1,iVar13,uVar9,puVar14,0x27);
      FUN_002624c2(uVar2,uVar6);
      iVar17 = 1;
LAB_002779e4:
      *(int *)(param_2 + 0x18) = iVar13;
      return iVar17;
    }
    iVar17 = 0;
    iVar3 = FUN_0026d3c4(param_1,*(undefined4 *)(param_2 + 8),pcVar15);
    uVar4 = FUN_0025cd42(param_2);
    bVar1 = *(byte *)(puVar14[3] + iVar10 * 0x18 + 0x16);
    for (iVar16 = puVar14[4]; (iVar17 == 0 && (iVar16 != 0)); iVar16 = *(int *)(iVar16 + 0x14)) {
      if (uVar4 != 0x62 && bVar1 != uVar4) goto LAB_00277972;
      iVar17 = 0;
      if (((**(int **)(iVar16 + 4) == iVar10) &&
          (iVar5 = FUN_00261718(iVar8,*(undefined1 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0xc) + 0x4d)
                                ,**(undefined4 **)(iVar16 + 0x20),0), iVar5 == iVar3)) &&
         ((param_3 != (int *)0x0 ||
          ((iVar17 = 0, *(int *)(iVar16 + 0x24) == 1 && (*(char *)(iVar16 + 0x2c) != '\0')))))) {
        uVar6 = FUN_0026e770(param_1,iVar16);
        uVar7 = FUN_002665e6(param_1);
        FUN_002662da(uVar2,0x27,iVar13,*(undefined4 *)(iVar16 + 0x28),uVar9,uVar6,0xfffffff0);
        FUN_002624c2(uVar2,uVar7);
        iVar17 = 3;
        if ((param_3 != (int *)0x0) && (*(char *)(puVar14[3] + iVar10 * 0x18 + 0x14) == '\0')) {
          iVar5 = param_1[0x13];
          param_1[0x13] = iVar5 + 1;
          *param_3 = iVar5 + 1;
          FUN_0026641e(uVar2,10);
        }
      }
    }
    if (iVar17 != 0) goto LAB_002779e4;
  }
LAB_00277972:
  iVar13 = DAT_00277a2c;
  iVar8 = param_1[0x6e];
  iVar10 = param_1[0x6f];
  if (param_3 == (int *)0x0) {
    param_1[0x6e] = DAT_00277a28;
    param_1[0x6f] = iVar13;
    iVar13 = 0;
    if ((*(short *)(*(int *)(param_2 + 8) + 0x1c) < 0) &&
       (iVar17 = 1, (*(ushort *)(param_2 + 2) & 0x800) == 0)) goto LAB_002779c6;
  }
  else {
    iVar13 = param_1[0x13] + 1;
    param_1[0x13] = iVar13;
    *param_3 = iVar13;
    FUN_0026641e(uVar2,10,0,iVar13);
  }
  iVar17 = 2;
LAB_002779c6:
  FUN_002774b0(param_1,param_2,iVar13,iVar17 == 1);
  param_1[0x6e] = iVar8;
  param_1[0x6f] = iVar10;
  return iVar17;
}


