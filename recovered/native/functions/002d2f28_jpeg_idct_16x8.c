/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d2f28 jpeg_idct_16x8 */

void jpeg_idct_16x8(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int local_150;
  int *local_138;
  int local_118 [8];
  int local_f8 [8];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  int iStack_18;
  
  piVar4 = *(int **)(param_2 + 0x54);
  iVar2 = *(int *)(param_1 + 0x150) + 0x80;
  local_150 = 8;
  piVar6 = local_118;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar3 = *piVar4 * (int)*param_3 * 4;
      *piVar6 = iVar3;
      piVar6[8] = iVar3;
      piVar6[0x10] = iVar3;
      piVar6[0x18] = iVar3;
      piVar6[0x20] = iVar3;
      piVar6[0x28] = iVar3;
      piVar6[0x30] = iVar3;
      piVar6[0x38] = iVar3;
    }
    else {
      iVar3 = ((int)param_3[0x10] * piVar4[0x10] + (int)param_3[0x30] * piVar4[0x30]) * 0x1151;
      iVar8 = iVar3 + DAT_002d33bc * (int)param_3[0x10] * piVar4[0x10];
      iVar3 = iVar3 + (int)param_3[0x30] * piVar4[0x30] * DAT_002d33c0;
      iVar19 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
      iVar22 = iVar19 + (int)param_3[0x20] * piVar4[0x20] * 0x2000;
      iVar19 = iVar19 + (int)param_3[0x20] * piVar4[0x20] * -0x2000;
      iVar5 = iVar22 + iVar8;
      iVar22 = iVar22 - iVar8;
      iVar18 = iVar19 + iVar3;
      iVar19 = iVar19 - iVar3;
      iVar11 = (int)param_3[0x38] * piVar4[0x38];
      iVar9 = (int)param_3[0x28] * piVar4[0x28];
      iVar8 = (int)param_3[0x18] * piVar4[0x18];
      iVar3 = piVar4[8] * (int)param_3[8];
      iVar24 = DAT_002d33c4 * (iVar11 + iVar8 + iVar9 + iVar3);
      iVar10 = (iVar11 + iVar8) * DAT_002d33c8 + iVar24;
      iVar24 = (iVar9 + iVar3) * DAT_002d33cc + iVar24;
      iVar12 = (iVar11 + iVar3) * DAT_002d33d4;
      iVar11 = iVar11 * DAT_002d33d0 + iVar12 + iVar10;
      iVar12 = iVar3 * 0x300b + iVar12 + iVar24;
      iVar13 = (iVar9 + iVar8) * DAT_002d33d8;
      iVar3 = DAT_002d33dc * iVar9 + iVar13 + iVar24;
      iVar8 = iVar8 * DAT_002d33e0 + iVar13 + iVar10;
      *piVar6 = iVar5 + iVar12 >> 0xb;
      piVar6[0x38] = iVar5 - iVar12 >> 0xb;
      piVar6[8] = iVar18 + iVar8 >> 0xb;
      piVar6[0x30] = iVar18 - iVar8 >> 0xb;
      piVar6[0x10] = iVar19 + iVar3 >> 0xb;
      piVar6[0x28] = iVar19 - iVar3 >> 0xb;
      piVar6[0x18] = iVar22 + iVar11 >> 0xb;
      piVar6[0x20] = iVar22 - iVar11 >> 0xb;
    }
    piVar6 = piVar6 + 1;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  piVar6 = local_118;
  local_138 = param_4;
  do {
    iVar3 = *local_138;
    local_138 = local_138 + 1;
    puVar7 = (undefined1 *)(iVar3 + param_5);
    iVar3 = piVar6[4];
    iVar8 = (*piVar6 + 0x10) * 0x2000;
    iVar10 = iVar8 + iVar3 * DAT_002d33e4;
    iVar5 = iVar8 - iVar3 * DAT_002d33e4;
    iVar18 = iVar8 + iVar3 * 0x1151;
    iVar8 = iVar8 + iVar3 * -0x1151;
    iVar22 = piVar6[2] - piVar6[6];
    iVar19 = iVar22 * DAT_002d33e8;
    iVar22 = DAT_002d33ec * iVar22;
    iVar11 = iVar22 + piVar6[6] * DAT_002d33f0;
    iVar3 = iVar19 + piVar6[2] * DAT_002d33f4;
    iVar22 = iVar22 + piVar6[2] * DAT_002d33f8;
    iVar19 = iVar19 + piVar6[6] * DAT_002d33fc;
    iVar20 = iVar10 + iVar11;
    iVar10 = iVar10 - iVar11;
    iVar12 = iVar18 + iVar3;
    iVar18 = iVar18 - iVar3;
    iVar13 = iVar8 + iVar22;
    iVar8 = iVar8 - iVar22;
    iVar23 = iVar5 + iVar19;
    iVar24 = piVar6[1];
    iVar5 = iVar5 - iVar19;
    iVar21 = piVar6[7];
    iVar3 = piVar6[3];
    iVar19 = (iVar24 + iVar3) * DAT_002d3400;
    iVar14 = (iVar24 + piVar6[5]) * DAT_002d3404;
    iVar11 = (iVar24 + iVar21) * DAT_002d3408;
    iVar22 = (iVar24 - iVar21) * DAT_002d340c;
    iVar9 = (iVar24 + piVar6[5]) * DAT_002d3410;
    iVar15 = DAT_002d3414 * (iVar24 - iVar3);
    iVar16 = iVar24 * DAT_002d3418 + iVar19 + iVar14 + iVar11;
    iVar25 = iVar15 + iVar22 + iVar9 + iVar24 * DAT_002d341c;
    iVar26 = (iVar3 + piVar6[5]) * 0x470;
    iVar27 = (piVar6[5] - iVar3) * DAT_002d3424;
    piVar4 = piVar6 + 5;
    iVar17 = (iVar3 + iVar21) * DAT_002d3430;
    iVar24 = iVar19 + iVar26 + iVar3 * 0x24d + iVar17;
    iVar19 = DAT_002d3438 * (iVar3 + iVar21);
    iVar3 = iVar15 + iVar27 + iVar3 * DAT_002d342c + iVar19;
    iVar15 = DAT_002d3440 * (piVar6[5] + iVar21);
    iVar14 = iVar14 + iVar26 + piVar6[5] * DAT_002d3420 + iVar15;
    piVar1 = piVar6 + 5;
    iVar15 = iVar15 + iVar11 + iVar21 * DAT_002d3434 + iVar17;
    piVar6 = piVar6 + 8;
    iVar11 = DAT_002d3414 * (iVar21 - *piVar1);
    iVar19 = iVar22 + iVar19 + iVar21 * DAT_002d343c + iVar11;
    iVar11 = iVar9 + *piVar4 * DAT_002d3428 + iVar27 + iVar11;
    *puVar7 = *(undefined1 *)(iVar2 + ((uint)((iVar20 + iVar16) * 0x10) >> 0x16));
    puVar7[0xf] = *(undefined1 *)(iVar2 + ((uint)((iVar20 - iVar16) * 0x10) >> 0x16));
    puVar7[1] = *(undefined1 *)(iVar2 + ((uint)((iVar12 + iVar24) * 0x10) >> 0x16));
    puVar7[0xe] = *(undefined1 *)(iVar2 + ((uint)((iVar12 - iVar24) * 0x10) >> 0x16));
    puVar7[2] = *(undefined1 *)(iVar2 + ((uint)((iVar13 + iVar14) * 0x10) >> 0x16));
    puVar7[0xd] = *(undefined1 *)(iVar2 + ((uint)((iVar13 - iVar14) * 0x10) >> 0x16));
    puVar7[3] = *(undefined1 *)(iVar2 + ((uint)((iVar23 + iVar15) * 0x10) >> 0x16));
    puVar7[0xc] = *(undefined1 *)(iVar2 + ((uint)((iVar23 - iVar15) * 0x10) >> 0x16));
    puVar7[4] = *(undefined1 *)(iVar2 + ((uint)((iVar5 + iVar19) * 0x10) >> 0x16));
    puVar7[0xb] = *(undefined1 *)(iVar2 + ((uint)((iVar5 - iVar19) * 0x10) >> 0x16));
    puVar7[5] = *(undefined1 *)(iVar2 + ((uint)((iVar8 + iVar11) * 0x10) >> 0x16));
    puVar7[10] = *(undefined1 *)(iVar2 + ((uint)((iVar8 - iVar11) * 0x10) >> 0x16));
    puVar7[6] = *(undefined1 *)(iVar2 + ((uint)((iVar18 + iVar3) * 0x10) >> 0x16));
    puVar7[9] = *(undefined1 *)(iVar2 + ((uint)((iVar18 - iVar3) * 0x10) >> 0x16));
    puVar7[7] = *(undefined1 *)(iVar2 + ((uint)((iVar10 + iVar25) * 0x10) >> 0x16));
    puVar7[8] = *(undefined1 *)(iVar2 + ((uint)((iVar10 - iVar25) * 0x10) >> 0x16));
  } while (piVar6 != &iStack_18);
  return;
}


