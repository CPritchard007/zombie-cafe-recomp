/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00267014 FUN_00267014 */

undefined4 FUN_00267014(int param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  uint local_30;
  uint local_1c [2];
  
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  cVar1 = *param_2;
  piVar13 = (int *)*puVar6;
  psVar4 = (short *)puVar6[1];
  iVar12 = puVar6[3];
  if (cVar1 == -0x67) {
    local_30 = *(byte *)(puVar6 + 7) & 8;
    if ((*(byte *)(puVar6 + 7) & 8) != 0) {
      return 1;
    }
    if (*(uint *)(param_1 + 0xc) != (uint)(byte)param_2[0x23]) {
      return 1;
    }
    puVar5 = *(undefined4 **)(iVar12 + 0x20);
    puVar6 = puVar5;
    for (; (int)local_30 < *(int *)(iVar12 + 0x24); local_30 = local_30 + 1) {
      iVar9 = FUN_0026321e(*puVar6,param_2);
      if (iVar9 == 0) goto LAB_002671c4;
      puVar6 = puVar6 + 4;
    }
    uVar2 = *(undefined1 *)(*(int *)(*(int *)(*piVar13 + 0x10) + 0xc) + 0x4d);
    iVar9 = FUN_00266fc8(*piVar13,puVar5,0x10,iVar12 + 0x24,local_1c);
    *(int *)(iVar12 + 0x20) = iVar9;
    local_30 = local_1c[0];
    if (-1 < (int)local_1c[0]) {
      puVar6 = (undefined4 *)(iVar9 + local_1c[0] * 0x10);
      *puVar6 = param_2;
      iVar9 = piVar13[0x13];
      piVar13[0x13] = iVar9 + 1;
      puVar6[2] = iVar9 + 1;
      uVar8 = *(undefined4 *)(param_2 + 4);
      iVar9 = *piVar13;
      uVar3 = FUN_0025b154(uVar8);
      piVar11 = *(int **)(param_2 + 0x10);
      if (piVar11 != (int *)0x0) {
        piVar11 = (int *)*piVar11;
      }
      uVar3 = FUN_00262898(iVar9,uVar8,uVar3,piVar11,uVar2,0);
      puVar6[1] = uVar3;
      if ((int)((uint)*(ushort *)(param_2 + 2) << 0x1b) < 0) {
        iVar9 = piVar13[0x12];
        puVar6[3] = iVar9;
        piVar13[0x12] = iVar9 + 1;
      }
      else {
        puVar6[3] = 0xffffffff;
      }
    }
LAB_002671c4:
    *(int *)(param_2 + 0x24) = iVar12;
    *(undefined2 *)(param_2 + 0x1e) = (undefined2)local_30;
    return 1;
  }
  if ((cVar1 != -0x66) && (cVar1 != -0x68)) {
    return 0;
  }
  if (psVar4 == (short *)0x0) {
    return 1;
  }
  psVar7 = psVar4 + 4;
  iVar9 = 0;
  while( true ) {
    if (*psVar4 <= iVar9) {
      return 1;
    }
    if (*(int *)(param_2 + 0x18) == *(int *)(psVar7 + 0x10)) break;
    iVar9 = iVar9 + 1;
    psVar7 = psVar7 + 0x20;
  }
  iVar9 = *(int *)(iVar12 + 0x14);
  for (uVar10 = 0; (int)uVar10 < *(int *)(iVar12 + 0x18); uVar10 = uVar10 + 1) {
    if ((*(int *)(iVar9 + 4) == *(int *)(param_2 + 0x18)) &&
       (*(int *)(iVar9 + 8) == (int)*(short *)(param_2 + 0x1c))) goto LAB_00267104;
    iVar9 = iVar9 + 0x18;
  }
  iVar9 = FUN_00266fc8(*piVar13,*(int *)(iVar12 + 0x14),0x18,iVar12 + 0x18,local_1c);
  *(int *)(iVar12 + 0x14) = iVar9;
  uVar10 = local_1c[0];
  if (-1 < (int)local_1c[0]) {
    puVar6 = (undefined4 *)(iVar9 + local_1c[0] * 0x18);
    *puVar6 = *(undefined4 *)(param_2 + 0x28);
    puVar6[1] = *(undefined4 *)(param_2 + 0x18);
    puVar6[2] = (int)*(short *)(param_2 + 0x1c);
    iVar9 = piVar13[0x13];
    piVar13[0x13] = iVar9 + 1;
    puVar6[4] = iVar9 + 1;
    puVar6[3] = 0xffffffff;
    puVar6[5] = param_2;
    piVar13 = *(int **)(iVar12 + 0x10);
    if (piVar13 != (int *)0x0) {
      puVar5 = (undefined4 *)piVar13[2];
      for (iVar9 = 0; iVar9 < *piVar13; iVar9 = iVar9 + 1) {
        pcVar14 = (char *)*puVar5;
        if (((*pcVar14 == -0x68) && (*(int *)(pcVar14 + 0x18) == *(int *)(param_2 + 0x18))) &&
           (*(short *)(pcVar14 + 0x1c) == *(short *)(param_2 + 0x1c))) {
          puVar6[3] = iVar9;
          break;
        }
        puVar5 = puVar5 + 5;
      }
    }
    if ((int)puVar6[3] < 0) {
      iVar9 = *(int *)(iVar12 + 0xc);
      puVar6[3] = iVar9;
      *(int *)(iVar12 + 0xc) = iVar9 + 1;
    }
  }
LAB_00267104:
  *(int *)(param_2 + 0x24) = iVar12;
  *param_2 = -0x66;
  *(short *)(param_2 + 0x1e) = (short)uVar10;
  return 1;
}


