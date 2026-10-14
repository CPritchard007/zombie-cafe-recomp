/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d50b4 jpeg_idct_4x8 */

void jpeg_idct_4x8(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_b4;
  int local_98 [33];
  
  piVar2 = *(int **)(param_2 + 0x54);
  iVar4 = *(int *)(param_1 + 0x150) + 0x80;
  local_b4 = 4;
  piVar5 = local_98;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar1 = *piVar2 * (int)*param_3 * 4;
      *piVar5 = iVar1;
      piVar5[4] = iVar1;
      piVar5[8] = iVar1;
      piVar5[0xc] = iVar1;
      piVar5[0x10] = iVar1;
      piVar5[0x14] = iVar1;
      piVar5[0x18] = iVar1;
      piVar5[0x1c] = iVar1;
    }
    else {
      iVar1 = ((int)param_3[0x10] * piVar2[0x10] + (int)param_3[0x30] * piVar2[0x30]) * 0x1151;
      iVar8 = iVar1 + DAT_002d5340 * (int)param_3[0x10] * piVar2[0x10];
      iVar1 = iVar1 + DAT_002d5344 * (int)param_3[0x30] * piVar2[0x30];
      iVar16 = (int)*param_3 * *piVar2 * 0x2000 + 0x400;
      iVar12 = iVar16 + (int)param_3[0x20] * piVar2[0x20] * 0x2000;
      iVar16 = iVar16 + (int)param_3[0x20] * piVar2[0x20] * -0x2000;
      iVar6 = iVar12 + iVar8;
      iVar12 = iVar12 - iVar8;
      iVar9 = iVar16 + iVar1;
      iVar16 = iVar16 - iVar1;
      iVar10 = (int)param_3[0x38] * piVar2[0x38];
      iVar13 = (int)param_3[0x28] * piVar2[0x28];
      iVar7 = piVar2[0x18] * (int)param_3[0x18];
      iVar1 = piVar2[8] * (int)param_3[8];
      iVar8 = DAT_002d5348 * (iVar13 + iVar1 + iVar7 + iVar10);
      iVar14 = DAT_002d534c * (iVar7 + iVar10) + iVar8;
      iVar8 = iVar8 + (iVar13 + iVar1) * DAT_002d5350;
      iVar15 = (iVar10 + iVar1) * DAT_002d5354;
      iVar11 = iVar10 * DAT_002d5358 + iVar15 + iVar14;
      iVar1 = iVar1 * 0x300b + iVar15 + iVar8;
      iVar15 = (iVar13 + iVar7) * DAT_002d535c;
      iVar10 = iVar13 * DAT_002d5360 + iVar8 + iVar15;
      iVar8 = iVar7 * DAT_002d5364 + iVar15 + iVar14;
      *piVar5 = iVar6 + iVar1 >> 0xb;
      piVar5[0x1c] = iVar6 - iVar1 >> 0xb;
      piVar5[0x18] = iVar9 - iVar8 >> 0xb;
      piVar5[4] = iVar9 + iVar8 >> 0xb;
      piVar5[0x14] = iVar16 - iVar10 >> 0xb;
      piVar5[8] = iVar16 + iVar10 >> 0xb;
      piVar5[0xc] = iVar12 + iVar11 >> 0xb;
      piVar5[0x10] = iVar12 - iVar11 >> 0xb;
    }
    piVar5 = piVar5 + 1;
    param_3 = param_3 + 1;
    local_b4 = local_b4 + -1;
    piVar2 = piVar2 + 1;
  } while (local_b4 != 0);
  piVar5 = local_98;
  do {
    iVar1 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = (undefined1 *)(iVar1 + param_5);
    iVar8 = (*piVar5 + 0x10 + piVar5[2]) * 0x2000;
    iVar6 = ((*piVar5 + 0x10) - piVar5[2]) * 0x2000;
    iVar1 = (piVar5[1] + piVar5[3]) * 0x1151;
    piVar2 = piVar5 + 3;
    iVar16 = iVar1 + DAT_002d5340 * piVar5[1];
    piVar5 = piVar5 + 4;
    iVar1 = iVar1 + DAT_002d5344 * *piVar2;
    *puVar3 = *(undefined1 *)(iVar4 + ((uint)((iVar8 + iVar16) * 0x10) >> 0x16));
    puVar3[3] = *(undefined1 *)(iVar4 + ((uint)((iVar8 - iVar16) * 0x10) >> 0x16));
    puVar3[1] = *(undefined1 *)(iVar4 + ((uint)((iVar6 + iVar1) * 0x10) >> 0x16));
    puVar3[2] = *(undefined1 *)(iVar4 + ((uint)((iVar6 - iVar1) * 0x10) >> 0x16));
  } while (piVar5 != local_98 + 0x20);
  return;
}


