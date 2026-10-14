/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d28e8 jpeg_idct_16x16 */

void jpeg_idct_16x16(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_4;
  
  iVar2 = DAT_002d2ce4;
  iVar3 = *(int *)(param_1 + 0x150);
  *(undefined4 *)(&stack0x00000034 + DAT_002d2ce4) = param_4;
  piVar4 = *(int **)(param_2 + 0x54);
  *(short **)(&stack0x0000003c + DAT_002d2ce4) = param_3 + 8;
  *(int *)(&stack0x00000040 + DAT_002d2ce4) = iVar3 + 0x80;
  piVar5 = (int *)(&stack0x00000044 + DAT_002d2ce4);
  do {
    iVar8 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
    iVar11 = (int)param_3[0x20] * piVar4[0x20];
    *(int *)((int)&iStack_4 + DAT_002d2ce4) = iVar8 + iVar11 * -0x1151;
    *(int *)(&stack0xfffffff4 + DAT_002d2ce4) = iVar8 - iVar11 * DAT_002d2ce8;
    sVar1 = param_3[0x10];
    iVar7 = piVar4[0x10];
    *(int *)(&stack0xfffffff8 + DAT_002d2ce4) = iVar8 + iVar11 * 0x1151;
    iVar7 = sVar1 * iVar7;
    sVar1 = param_3[0x30];
    iVar3 = piVar4[0x30];
    *(int *)(&stack0x00000004 + DAT_002d2ce4) = iVar8 + iVar11 * DAT_002d2ce8;
    iVar3 = iVar3 * sVar1;
    *(int *)(&stack0x00000008 + DAT_002d2ce4) = (iVar7 - iVar3) * DAT_002d2cec;
    iVar8 = (iVar7 - iVar3) * DAT_002d2cf0;
    iVar13 = iVar3 * DAT_002d2cf4 + iVar8;
    iVar11 = *(int *)(&stack0x00000008 + DAT_002d2ce4) + iVar7 * DAT_002d2cf8;
    iVar8 = DAT_002d2cfc * iVar7 + iVar8;
    iVar3 = *(int *)(&stack0x00000008 + DAT_002d2ce4) + DAT_002d2d00 * iVar3;
    *(int *)(&stack0x00000014 + DAT_002d2ce4) = *(int *)(&stack0x00000004 + DAT_002d2ce4) + iVar13;
    *(int *)(&stack0x00000000 + DAT_002d2ce4) = *(int *)(&stack0x00000004 + DAT_002d2ce4) - iVar13;
    *(int *)(&stack0x00000018 + DAT_002d2ce4) = *(int *)(&stack0xfffffff8 + DAT_002d2ce4) + iVar11;
    *(int *)(&stack0xfffffff8 + DAT_002d2ce4) = *(int *)(&stack0xfffffff8 + DAT_002d2ce4) - iVar11;
    iVar11 = *(int *)(&stack0xfffffff4 + DAT_002d2ce4);
    *(int *)(&stack0x0000001c + DAT_002d2ce4) = *(int *)((int)&iStack_4 + DAT_002d2ce4) + iVar8;
    *(int *)((int)&iStack_4 + DAT_002d2ce4) = *(int *)((int)&iStack_4 + DAT_002d2ce4) - iVar8;
    iVar7 = piVar4[8];
    *(int *)(&stack0xfffffff4 + DAT_002d2ce4) = *(int *)(&stack0xfffffff4 + DAT_002d2ce4) - iVar3;
    sVar1 = param_3[8];
    *(int *)(&stack0x00000020 + DAT_002d2ce4) = iVar11 + iVar3;
    iVar7 = sVar1 * iVar7;
    iVar3 = piVar4[0x18] * (int)param_3[0x18];
    *(int *)(&stack0xfffffff0 + DAT_002d2ce4) = piVar4[0x28] * (int)param_3[0x28];
    sVar1 = param_3[0x38];
    iVar8 = piVar4[0x38];
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
    *(int *)(&stack0x0000000c + DAT_002d2ce4) = iVar7 + *(int *)(&stack0xfffffff0 + DAT_002d2ce4);
    *(int *)(&stack0xffffffec + DAT_002d2ce4) = sVar1 * iVar8;
    *(int *)(&stack0x00000004 + DAT_002d2ce4) = DAT_002d2d04 * (iVar7 + iVar3);
    *(int *)(&stack0x00000008 + DAT_002d2ce4) =
         *(int *)(&stack0x0000000c + DAT_002d2ce4) * DAT_002d2d08;
    *(int *)(&stack0x00000010 + DAT_002d2ce4) =
         DAT_002d2d0c * (*(int *)(&stack0xffffffec + DAT_002d2ce4) + iVar7);
    *(int *)(&stack0x00000024 + DAT_002d2ce4) =
         DAT_002d2d10 * (iVar7 - *(int *)(&stack0xffffffec + DAT_002d2ce4));
    *(int *)(&stack0x0000000c + DAT_002d2ce4) =
         *(int *)(&stack0x0000000c + DAT_002d2ce4) * DAT_002d2d14;
    *(int *)(&stack0x00000028 + DAT_002d2ce4) = DAT_002d2d18 * (iVar7 - iVar3);
    *(int *)(&stack0x0000002c + DAT_002d2ce4) =
         iVar7 * DAT_002d2d1c +
         *(int *)(&stack0x00000004 + DAT_002d2ce4) + *(int *)(&stack0x00000008 + DAT_002d2ce4) +
         *(int *)(&stack0x00000010 + DAT_002d2ce4);
    *(int *)(&stack0x00000030 + DAT_002d2ce4) =
         *(int *)(&stack0x00000028 + DAT_002d2ce4) +
         *(int *)(&stack0x00000024 + DAT_002d2ce4) + *(int *)(&stack0x0000000c + DAT_002d2ce4) +
         DAT_002d2d20 * iVar7;
    iVar8 = (iVar3 + *(int *)(&stack0xfffffff0 + DAT_002d2ce4)) * 0x470;
    iVar7 = *(int *)(&stack0xfffffff0 + DAT_002d2ce4);
    *(int *)(&stack0x00000038 + DAT_002d2ce4) =
         *(int *)(&stack0x00000008 + DAT_002d2ce4) + iVar8 + iVar7 * DAT_002d2d24;
    iVar11 = DAT_002d2d2c * (iVar7 - iVar3);
    *(int *)(&stack0x0000000c + DAT_002d2ce4) =
         *(int *)(&stack0x0000000c + DAT_002d2ce4) + iVar11 + iVar7 * DAT_002d2d28;
    *(int *)(&stack0x00000008 + DAT_002d2ce4) =
         *(int *)(&stack0x00000028 + DAT_002d2ce4) + iVar11 + iVar3 * DAT_002d2d30;
    iVar11 = (iVar3 + *(int *)(&stack0xffffffec + DAT_002d2ce4)) * DAT_002d2d34;
    *(int *)(&stack0x00000004 + DAT_002d2ce4) =
         *(int *)(&stack0x00000004 + DAT_002d2ce4) + iVar8 + iVar3 * 0x24d + iVar11;
    iVar7 = *(int *)(&stack0x00000010 + DAT_002d2ce4);
    iVar3 = (iVar3 + *(int *)(&stack0xffffffec + DAT_002d2ce4)) * DAT_002d2d3c;
    *(int *)(&stack0x00000010 + DAT_002d2ce4) =
         *(int *)(&stack0x00000024 + DAT_002d2ce4) +
         iVar3 + *(int *)(&stack0xffffffec + DAT_002d2ce4) * DAT_002d2d40;
    *(int *)(&stack0x00000008 + DAT_002d2ce4) = *(int *)(&stack0x00000008 + DAT_002d2ce4) + iVar3;
    iVar8 = DAT_002d2d44 *
            (*(int *)(&stack0xfffffff0 + DAT_002d2ce4) + *(int *)(&stack0xffffffec + DAT_002d2ce4));
    iVar3 = DAT_002d2d18 *
            (*(int *)(&stack0xffffffec + DAT_002d2ce4) - *(int *)(&stack0xfffffff0 + DAT_002d2ce4));
    iVar13 = *(int *)(&stack0x00000038 + DAT_002d2ce4) + iVar8;
    iVar8 = iVar8 + iVar7 + iVar11 + *(int *)(&stack0xffffffec + DAT_002d2ce4) * DAT_002d2d38;
    *(int *)(&stack0x00000010 + DAT_002d2ce4) = *(int *)(&stack0x00000010 + DAT_002d2ce4) + iVar3;
    *(int *)(&stack0x0000000c + DAT_002d2ce4) = *(int *)(&stack0x0000000c + DAT_002d2ce4) + iVar3;
    iVar3 = *(int *)(&stack0x00000014 + DAT_002d2ce4);
    *piVar5 = iVar3 + *(int *)(&stack0x0000002c + DAT_002d2ce4) >> 0xb;
    piVar5[0x78] = iVar3 - *(int *)(&stack0x0000002c + DAT_002d2ce4) >> 0xb;
    iVar3 = *(int *)(&stack0x00000004 + DAT_002d2ce4);
    piVar5[8] = *(int *)(&stack0x00000018 + DAT_002d2ce4) + iVar3 >> 0xb;
    iVar7 = *(int *)(&stack0x0000001c + DAT_002d2ce4);
    piVar5[0x70] = *(int *)(&stack0x00000018 + DAT_002d2ce4) - iVar3 >> 0xb;
    piVar5[0x10] = iVar7 + iVar13 >> 0xb;
    piVar5[0x68] = iVar7 - iVar13 >> 0xb;
    iVar7 = *(int *)(&stack0x00000020 + DAT_002d2ce4);
    iVar3 = *(int *)(&stack0xfffffff4 + DAT_002d2ce4);
    iVar11 = *(int *)(&stack0x00000010 + DAT_002d2ce4);
    piVar5[0x18] = iVar7 + iVar8 >> 0xb;
    piVar5[0x60] = iVar7 - iVar8 >> 0xb;
    piVar5[0x20] = iVar3 + iVar11 >> 0xb;
    iVar8 = *(int *)(&stack0x0000000c + DAT_002d2ce4);
    iVar7 = *(int *)((int)&iStack_4 + DAT_002d2ce4);
    piVar5[0x58] = iVar3 - iVar11 >> 0xb;
    piVar5[0x28] = iVar7 + iVar8 >> 0xb;
    iVar3 = *(int *)(&stack0xfffffff8 + DAT_002d2ce4);
    iVar11 = *(int *)(&stack0x00000008 + DAT_002d2ce4);
    piVar5[0x50] = iVar7 - iVar8 >> 0xb;
    piVar5[0x30] = iVar3 + iVar11 >> 0xb;
    piVar5[0x48] = iVar3 - iVar11 >> 0xb;
    iVar7 = *(int *)(&stack0x00000030 + DAT_002d2ce4);
    iVar3 = *(int *)(&stack0x00000000 + DAT_002d2ce4);
    piVar5[0x38] = iVar3 + iVar7 >> 0xb;
    piVar5[0x40] = iVar3 - iVar7 >> 0xb;
    piVar5 = piVar5 + 1;
  } while (param_3 != *(short **)(&stack0x0000003c + DAT_002d2ce4));
  iVar3 = *(int *)(&stack0x00000040 + DAT_002d2ce4);
  *(undefined1 **)(&stack0x00000038 + DAT_002d2ce4) = &stack0x00000244 + DAT_002d2ce4;
  piVar5 = (int *)(&stack0x00000044 + DAT_002d2ce4);
  do {
    iVar13 = piVar5[4];
    iVar7 = **(int **)(&stack0x00000034 + iVar2);
    *(int **)(&stack0x00000034 + iVar2) = *(int **)(&stack0x00000034 + iVar2) + 1;
    puVar6 = (undefined1 *)(iVar7 + *(int *)(&stack0x0000025c + iVar2));
    iVar11 = (*piVar5 + 0x10) * 0x2000;
    *(int *)((int)&iStack_4 + iVar2) = iVar11 + iVar13 * -0x1151;
    *(int *)(&stack0xfffffff4 + iVar2) = iVar11 - iVar13 * DAT_002d2ce8;
    iVar8 = piVar5[2];
    iVar7 = piVar5[6];
    *(int *)(&stack0xfffffff8 + iVar2) = iVar11 + iVar13 * 0x1151;
    *(int *)(&stack0x00000004 + iVar2) = iVar11 + iVar13 * DAT_002d2ce8;
    *(int *)(&stack0x00000008 + iVar2) = (iVar8 - iVar7) * DAT_002d2cec;
    iVar7 = (iVar8 - iVar7) * DAT_002d2cf0;
    *(int *)(&stack0x00000000 + iVar2) = piVar5[6] * DAT_002d2cf4 + iVar7;
    iVar11 = *(int *)(&stack0x00000008 + iVar2) + iVar8 * DAT_002d2cf8;
    iVar13 = piVar5[6];
    iVar7 = DAT_002d2cfc * iVar8 + iVar7;
    *(int *)(&stack0x00000014 + iVar2) =
         *(int *)(&stack0x00000004 + iVar2) + *(int *)(&stack0x00000000 + iVar2);
    iVar8 = *(int *)(&stack0x00000008 + iVar2) + DAT_002d2d00 * iVar13;
    *(int *)(&stack0x00000000 + iVar2) =
         *(int *)(&stack0x00000004 + iVar2) - *(int *)(&stack0x00000000 + iVar2);
    *(int *)(&stack0x00000018 + iVar2) = *(int *)(&stack0xfffffff8 + iVar2) + iVar11;
    *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0xfffffff8 + iVar2) - iVar11;
    *(int *)(&stack0x0000001c + iVar2) = *(int *)((int)&iStack_4 + iVar2) + iVar7;
    *(int *)((int)&iStack_4 + iVar2) = *(int *)((int)&iStack_4 + iVar2) - iVar7;
    *(int *)(&stack0x00000020 + iVar2) = *(int *)(&stack0xfffffff4 + iVar2) + iVar8;
    *(int *)(&stack0xfffffff4 + iVar2) = *(int *)(&stack0xfffffff4 + iVar2) - iVar8;
    iVar8 = piVar5[1];
    iVar14 = piVar5[3];
    *(int *)(&stack0x0000000c + iVar2) = iVar8 + piVar5[5];
    *(int *)(&stack0x00000004 + iVar2) = DAT_002d2d04 * (iVar8 + iVar14);
    *(int *)(&stack0x00000008 + iVar2) = *(int *)(&stack0x0000000c + iVar2) * DAT_002d2d08;
    iVar7 = piVar5[7];
    *(int *)(&stack0x00000010 + iVar2) = DAT_002d2d0c * (piVar5[7] + iVar8);
    *(int *)(&stack0x00000024 + iVar2) = DAT_002d2d10 * (iVar8 - iVar7);
    *(int *)(&stack0x0000000c + iVar2) = *(int *)(&stack0x0000000c + iVar2) * DAT_002d2d14;
    *(int *)(&stack0x00000028 + iVar2) = DAT_002d2d18 * (iVar8 - iVar14);
    *(int *)(&stack0x0000002c + iVar2) =
         iVar8 * DAT_002d2ef8 +
         *(int *)(&stack0x00000004 + iVar2) + *(int *)(&stack0x00000008 + iVar2) +
         *(int *)(&stack0x00000010 + iVar2);
    iVar7 = piVar5[5];
    *(int *)(&stack0x00000030 + iVar2) =
         *(int *)(&stack0x00000028 + iVar2) +
         *(int *)(&stack0x00000024 + iVar2) + *(int *)(&stack0x0000000c + iVar2) +
         DAT_002d2efc * iVar8;
    iVar8 = (iVar14 + iVar7) * 0x470;
    *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + iVar8 + iVar14 * 0x24d
    ;
    iVar7 = piVar5[5];
    *(int *)(&stack0x00000008 + iVar2) =
         *(int *)(&stack0x00000008 + iVar2) + iVar8 + iVar7 * DAT_002d2f00;
    iVar12 = DAT_002d2f04 * (iVar7 - iVar14);
    *(int *)(&stack0x0000000c + iVar2) =
         *(int *)(&stack0x0000000c + iVar2) + iVar7 * DAT_002d2f08 + iVar12;
    iVar8 = piVar5[7];
    iVar9 = (iVar14 + iVar8) * DAT_002d2f10;
    *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + iVar9;
    iVar11 = piVar5[7];
    iVar7 = *(int *)(&stack0x00000010 + iVar2);
    iVar10 = (iVar14 + iVar8) * DAT_002d2f18;
    iVar13 = piVar5[7];
    iVar8 = *(int *)(&stack0x00000024 + iVar2);
    *(int *)(&stack0x00000024 + iVar2) =
         *(int *)(&stack0x00000028 + iVar2) + iVar12 + iVar14 * DAT_002d2f0c + iVar10;
    iVar12 = piVar5[5];
    *(int *)(&stack0x00000010 + iVar2) = iVar8 + iVar10 + iVar13 * DAT_002d2f1c;
    iVar14 = DAT_002d2f20 * (iVar12 + iVar13);
    iVar13 = DAT_002d2f24 * (iVar13 - iVar12);
    piVar5 = piVar5 + 8;
    iVar10 = *(int *)(&stack0x00000008 + iVar2) + iVar14;
    iVar8 = *(int *)(&stack0x00000010 + iVar2) + iVar13;
    iVar14 = iVar14 + iVar7 + iVar11 * DAT_002d2f14 + iVar9;
    *(int *)(&stack0x00000008 + iVar2) = *(int *)(&stack0x0000000c + iVar2) + iVar13;
    iVar11 = *(int *)(&stack0x0000002c + iVar2);
    *puVar6 = *(undefined1 *)
               (iVar3 + ((uint)((*(int *)(&stack0x00000014 + iVar2) + iVar11) * 0x10) >> 0x16));
    iVar7 = *(int *)(&stack0x00000018 + iVar2);
    puVar6[0xf] = *(undefined1 *)
                   (iVar3 + ((uint)((*(int *)(&stack0x00000014 + iVar2) - iVar11) * 0x10) >> 0x16));
    iVar11 = *(int *)(&stack0x00000004 + iVar2);
    puVar6[1] = *(undefined1 *)(iVar3 + ((uint)((iVar7 + iVar11) * 0x10) >> 0x16));
    iVar7 = *(int *)(&stack0x0000001c + iVar2);
    puVar6[0xe] = *(undefined1 *)
                   (iVar3 + ((uint)((*(int *)(&stack0x00000018 + iVar2) - iVar11) * 0x10) >> 0x16));
    iVar11 = *(int *)(&stack0x0000001c + iVar2);
    puVar6[2] = *(undefined1 *)(iVar3 + ((uint)((iVar7 + iVar10) * 0x10) >> 0x16));
    iVar7 = *(int *)(&stack0x00000020 + iVar2);
    puVar6[0xd] = *(undefined1 *)(iVar3 + ((uint)((iVar11 - iVar10) * 0x10) >> 0x16));
    puVar6[3] = *(undefined1 *)(iVar3 + ((uint)((iVar7 + iVar14) * 0x10) >> 0x16));
    iVar13 = *(int *)(&stack0xfffffff4 + iVar2);
    iVar11 = *(int *)(&stack0x00000008 + iVar2);
    puVar6[0xc] = *(undefined1 *)(iVar3 + ((uint)((iVar7 - iVar14) * 0x10) >> 0x16));
    puVar6[4] = *(undefined1 *)(iVar3 + ((uint)((iVar13 + iVar8) * 0x10) >> 0x16));
    iVar7 = *(int *)((int)&iStack_4 + iVar2);
    iVar9 = *(int *)(&stack0xfffffff8 + iVar2);
    puVar6[0xb] = *(undefined1 *)(iVar3 + ((uint)((iVar13 - iVar8) * 0x10) >> 0x16));
    puVar6[5] = *(undefined1 *)(iVar3 + ((uint)((iVar7 + iVar11) * 0x10) >> 0x16));
    iVar8 = *(int *)(&stack0x00000024 + iVar2);
    iVar13 = *(int *)(&stack0x00000030 + iVar2);
    puVar6[10] = *(undefined1 *)(iVar3 + ((uint)((iVar7 - iVar11) * 0x10) >> 0x16));
    puVar6[6] = *(undefined1 *)(iVar3 + ((uint)((iVar9 + iVar8) * 0x10) >> 0x16));
    iVar7 = *(int *)(&stack0x00000000 + iVar2);
    puVar6[9] = *(undefined1 *)(iVar3 + ((uint)((iVar9 - iVar8) * 0x10) >> 0x16));
    puVar6[7] = *(undefined1 *)(iVar3 + ((uint)((iVar7 + iVar13) * 0x10) >> 0x16));
    puVar6[8] = *(undefined1 *)(iVar3 + ((uint)((iVar7 - iVar13) * 0x10) >> 0x16));
  } while (piVar5 != *(int **)(&stack0x00000038 + iVar2));
  return;
}


