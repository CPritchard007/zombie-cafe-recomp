/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cf92c jpeg_idct_ifast */

void jpeg_idct_ifast(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_130;
  int *local_11c;
  int local_118 [16];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [9];
  
  piVar3 = *(int **)(param_2 + 0x54);
  iVar8 = *(int *)(param_1 + 0x150) + 0x80;
  local_130 = 8;
  piVar7 = local_118;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar2 = *piVar3 * (int)*param_3;
      *piVar7 = iVar2;
      piVar7[8] = iVar2;
      piVar7[0x10] = iVar2;
      piVar7[0x18] = iVar2;
      piVar7[0x20] = iVar2;
      piVar7[0x28] = iVar2;
      piVar7[0x30] = iVar2;
      piVar7[0x38] = iVar2;
    }
    else {
      iVar13 = (int)*param_3 * *piVar3 + (int)param_3[0x20] * piVar3[0x20];
      iVar4 = (int)*param_3 * *piVar3 - (int)param_3[0x20] * piVar3[0x20];
      iVar10 = (int)param_3[0x10] * piVar3[0x10] + piVar3[0x30] * (int)param_3[0x30];
      iVar5 = iVar13 + iVar10;
      iVar2 = (((int)param_3[0x10] * piVar3[0x10] - piVar3[0x30] * (int)param_3[0x30]) * 0x16a >> 8)
              - iVar10;
      iVar13 = iVar13 - iVar10;
      iVar14 = iVar4 + iVar2;
      iVar4 = iVar4 - iVar2;
      iVar2 = piVar3[8] * (int)param_3[8];
      iVar6 = (int)param_3[0x28] * piVar3[0x28] + (int)param_3[0x18] * piVar3[0x18];
      iVar12 = (int)param_3[0x28] * piVar3[0x28] - (int)param_3[0x18] * piVar3[0x18];
      iVar15 = iVar2 + piVar3[0x38] * (int)param_3[0x38];
      iVar2 = iVar2 - piVar3[0x38] * (int)param_3[0x38];
      iVar10 = iVar15 + iVar6;
      iVar11 = (iVar12 + iVar2) * 0x1d9 >> 8;
      iVar12 = ((DAT_002cfc38 * iVar12 >> 8) + iVar11) - iVar10;
      iVar15 = ((iVar15 - iVar6) * 0x16a >> 8) - iVar12;
      iVar2 = ((iVar2 * 0x115 >> 8) - iVar11) + iVar15;
      *piVar7 = iVar5 + iVar10;
      piVar7[0x38] = iVar5 - iVar10;
      piVar7[8] = iVar14 + iVar12;
      piVar7[0x30] = iVar14 - iVar12;
      piVar7[0x10] = iVar4 + iVar15;
      piVar7[0x28] = iVar4 - iVar15;
      piVar7[0x20] = iVar13 + iVar2;
      piVar7[0x18] = iVar13 - iVar2;
    }
    piVar7 = piVar7 + 1;
    param_3 = param_3 + 1;
    piVar3 = piVar3 + 1;
    local_130 = local_130 + -1;
  } while (local_130 != 0);
  local_130 = 8;
  piVar7 = local_118;
  local_11c = param_4;
  do {
    iVar4 = piVar7[7];
    iVar13 = piVar7[1];
    iVar5 = *piVar7;
    iVar2 = *local_11c;
    local_11c = local_11c + 1;
    puVar9 = (undefined1 *)(iVar2 + param_5);
    iVar14 = piVar7[2];
    iVar2 = piVar7[3];
    iVar15 = piVar7[4];
    iVar10 = piVar7[5];
    iVar11 = piVar7[6];
    if ((((iVar13 == 0) && (iVar14 == 0)) &&
        ((iVar2 == 0 && (((iVar15 == 0 && (iVar10 == 0)) && (iVar11 == 0)))))) && (iVar4 == 0)) {
      uVar1 = *(undefined1 *)(iVar8 + ((uint)(iVar5 << 0x11) >> 0x16));
      *puVar9 = uVar1;
      puVar9[1] = uVar1;
      puVar9[2] = uVar1;
      puVar9[3] = uVar1;
      puVar9[4] = uVar1;
      puVar9[5] = uVar1;
      puVar9[6] = uVar1;
      puVar9[7] = uVar1;
    }
    else {
      iVar16 = iVar14 + iVar11;
      iVar6 = iVar5 + iVar15 + iVar16;
      iVar12 = ((iVar14 - iVar11) * 0x16a >> 8) - iVar16;
      iVar11 = (iVar5 - iVar15) - iVar12;
      iVar16 = (iVar5 + iVar15) - iVar16;
      iVar12 = (iVar5 - iVar15) + iVar12;
      iVar14 = iVar13 + iVar4 + iVar10 + iVar2;
      iVar15 = ((iVar10 - iVar2) + (iVar13 - iVar4)) * 0x1d9 >> 8;
      iVar5 = ((DAT_002cfc38 * (iVar10 - iVar2) >> 8) + iVar15) - iVar14;
      *puVar9 = *(undefined1 *)(iVar8 + ((uint)((iVar6 + iVar14) * 0x20000) >> 0x16));
      iVar10 = (((iVar13 + iVar4) - (iVar10 + iVar2)) * 0x16a >> 8) - iVar5;
      iVar2 = (((iVar13 - iVar4) * 0x115 >> 8) - iVar15) + iVar10;
      puVar9[7] = *(undefined1 *)(iVar8 + ((uint)((iVar6 - iVar14) * 0x20000) >> 0x16));
      puVar9[1] = *(undefined1 *)(iVar8 + ((uint)((iVar12 + iVar5) * 0x20000) >> 0x16));
      puVar9[6] = *(undefined1 *)(iVar8 + ((uint)((iVar12 - iVar5) * 0x20000) >> 0x16));
      puVar9[2] = *(undefined1 *)(iVar8 + ((uint)((iVar11 + iVar10) * 0x20000) >> 0x16));
      puVar9[5] = *(undefined1 *)(iVar8 + ((uint)((iVar11 - iVar10) * 0x20000) >> 0x16));
      puVar9[4] = *(undefined1 *)(iVar8 + ((uint)((iVar16 + iVar2) * 0x20000) >> 0x16));
      puVar9[3] = *(undefined1 *)(iVar8 + ((uint)((iVar16 - iVar2) * 0x20000) >> 0x16));
    }
    piVar7 = piVar7 + 8;
    local_130 = local_130 + -1;
  } while (local_130 != 0);
  return;
}


