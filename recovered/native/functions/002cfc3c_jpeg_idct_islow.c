/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cfc3c jpeg_idct_islow */

void jpeg_idct_islow(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_13c;
  int local_128;
  int *local_120;
  int local_118 [16];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [9];
  
  piVar3 = *(int **)(param_2 + 0x54);
  iVar6 = *(int *)(param_1 + 0x150) + 0x80;
  local_13c = 8;
  piVar5 = local_118;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar2 = *piVar3 * (int)*param_3 * 4;
      *piVar5 = iVar2;
      piVar5[8] = iVar2;
      piVar5[0x10] = iVar2;
      piVar5[0x18] = iVar2;
      piVar5[0x20] = iVar2;
      piVar5[0x28] = iVar2;
      piVar5[0x30] = iVar2;
      piVar5[0x38] = iVar2;
    }
    else {
      iVar2 = ((int)param_3[0x10] * piVar3[0x10] + (int)param_3[0x30] * piVar3[0x30]) * 0x1151;
      iVar4 = iVar2 + DAT_002cffe8 * (int)param_3[0x10] * piVar3[0x10];
      iVar2 = iVar2 + DAT_002cffec * (int)param_3[0x30] * piVar3[0x30];
      iVar14 = (int)*param_3 * *piVar3 * 0x2000 + 0x400;
      iVar11 = iVar14 + (int)param_3[0x20] * piVar3[0x20] * 0x2000;
      iVar14 = iVar14 + (int)param_3[0x20] * piVar3[0x20] * -0x2000;
      iVar7 = iVar11 + iVar4;
      iVar11 = iVar11 - iVar4;
      iVar10 = iVar14 + iVar2;
      iVar14 = iVar14 - iVar2;
      iVar12 = (int)param_3[0x38] * piVar3[0x38];
      iVar13 = (int)param_3[0x28] * piVar3[0x28];
      iVar4 = piVar3[0x18] * (int)param_3[0x18];
      iVar2 = piVar3[8] * (int)param_3[8];
      iVar9 = DAT_002cfff0 * (iVar13 + iVar2 + iVar4 + iVar12);
      iVar15 = DAT_002cfff4 * (iVar4 + iVar12) + iVar9;
      iVar9 = iVar9 + (iVar13 + iVar2) * DAT_002cfff8;
      iVar16 = (iVar12 + iVar2) * DAT_002cfffc;
      iVar17 = iVar2 * 0x300b + iVar16 + iVar9;
      iVar12 = iVar12 * DAT_002d0000 + iVar16 + iVar15;
      iVar2 = (iVar13 + iVar4) * DAT_002d0004;
      iVar9 = iVar13 * DAT_002d0008 + iVar9 + iVar2;
      iVar2 = iVar4 * DAT_002d000c + iVar2 + iVar15;
      *piVar5 = iVar7 + iVar17 >> 0xb;
      piVar5[0x38] = iVar7 - iVar17 >> 0xb;
      piVar5[8] = iVar10 + iVar2 >> 0xb;
      piVar5[0x30] = iVar10 - iVar2 >> 0xb;
      piVar5[0x10] = iVar14 + iVar9 >> 0xb;
      piVar5[0x28] = iVar14 - iVar9 >> 0xb;
      piVar5[0x18] = iVar11 + iVar12 >> 0xb;
      piVar5[0x20] = iVar11 - iVar12 >> 0xb;
    }
    piVar5 = piVar5 + 1;
    param_3 = param_3 + 1;
    piVar3 = piVar3 + 1;
    local_13c = local_13c + -1;
  } while (local_13c != 0);
  local_128 = 8;
  piVar5 = local_118;
  local_120 = param_4;
  do {
    iVar14 = piVar5[3];
    iVar7 = *local_120;
    local_120 = local_120 + 1;
    iVar2 = piVar5[4];
    iVar9 = piVar5[5];
    iVar4 = piVar5[1];
    puVar8 = (undefined1 *)(iVar7 + param_5);
    iVar12 = piVar5[2];
    iVar10 = piVar5[6];
    iVar7 = piVar5[7];
    if ((((iVar4 == 0) && (iVar12 == 0)) &&
        ((iVar14 == 0 && (((iVar2 == 0 && (iVar9 == 0)) && (iVar10 == 0)))))) && (iVar7 == 0)) {
      uVar1 = *(undefined1 *)(iVar6 + ((uint)((*piVar5 + 0x10) * 0x20000) >> 0x16));
      *puVar8 = uVar1;
      puVar8[1] = uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar1;
      puVar8[4] = uVar1;
      puVar8[5] = uVar1;
      puVar8[6] = uVar1;
      puVar8[7] = uVar1;
    }
    else {
      iVar11 = (iVar12 + iVar10) * 0x1151;
      iVar12 = iVar11 + DAT_002cffe8 * iVar12;
      iVar11 = iVar11 + DAT_002cffec * iVar10;
      iVar10 = *piVar5 + 0x10;
      iVar15 = (iVar2 + iVar10) * 0x2000;
      iVar13 = iVar15 + iVar12;
      iVar10 = (iVar10 - iVar2) * 0x2000;
      iVar15 = iVar15 - iVar12;
      iVar16 = iVar10 + iVar11;
      iVar10 = iVar10 - iVar11;
      iVar12 = DAT_002cfff0 * (iVar7 + iVar14 + iVar9 + iVar4);
      iVar17 = DAT_002cfff4 * (iVar7 + iVar14) + iVar12;
      iVar12 = (iVar9 + iVar4) * DAT_002cfff8 + iVar12;
      iVar2 = DAT_002cfffc * (iVar7 + iVar4);
      iVar11 = iVar7 * DAT_002d0000 + iVar2 + iVar17;
      iVar2 = iVar4 * 0x300b + iVar2 + iVar12;
      iVar4 = (iVar9 + iVar14) * DAT_002d0004;
      iVar14 = iVar14 * DAT_002d000c;
      iVar7 = iVar9 * DAT_002d0008 + iVar4 + iVar12;
      *puVar8 = *(undefined1 *)(iVar6 + ((uint)((iVar13 + iVar2) * 0x10) >> 0x16));
      iVar14 = iVar4 + iVar17 + iVar14;
      puVar8[7] = *(undefined1 *)(iVar6 + ((uint)((iVar13 - iVar2) * 0x10) >> 0x16));
      puVar8[1] = *(undefined1 *)(iVar6 + ((uint)((iVar16 + iVar14) * 0x10) >> 0x16));
      puVar8[6] = *(undefined1 *)(iVar6 + ((uint)((iVar16 - iVar14) * 0x10) >> 0x16));
      puVar8[2] = *(undefined1 *)(iVar6 + ((uint)((iVar10 + iVar7) * 0x10) >> 0x16));
      puVar8[5] = *(undefined1 *)(iVar6 + ((uint)((iVar10 - iVar7) * 0x10) >> 0x16));
      puVar8[3] = *(undefined1 *)(iVar6 + ((uint)((iVar15 + iVar11) * 0x10) >> 0x16));
      puVar8[4] = *(undefined1 *)(iVar6 + ((uint)((iVar15 - iVar11) * 0x10) >> 0x16));
    }
    piVar5 = piVar5 + 8;
    local_128 = local_128 + -1;
  } while (local_128 != 0);
  return;
}


