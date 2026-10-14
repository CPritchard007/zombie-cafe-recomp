/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d2370 jpeg_idct_15x15 */

void jpeg_idct_15x15(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int iStack_4;
  
  iVar3 = DAT_002d276c;
  *(undefined4 *)(&stack0x0000002c + DAT_002d276c) = param_4;
  iVar7 = *(int *)(param_1 + 0x150);
  piVar4 = *(int **)(param_2 + 0x54);
  *(short **)(&stack0x00000034 + DAT_002d276c) = param_3 + 8;
  *(int *)(&stack0x00000038 + DAT_002d276c) = iVar7 + 0x80;
  piVar5 = (int *)(&stack0x0000003c + DAT_002d276c);
  do {
    iVar8 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
    iVar9 = (int)param_3[0x10] * piVar4[0x10];
    *(int *)((int)&iStack_4 + DAT_002d276c) = (int)param_3[0x20] * piVar4[0x20];
    sVar1 = param_3[0x30];
    iVar7 = piVar4[0x30];
    *(int *)(&stack0xfffffff8 + DAT_002d276c) = iVar7 * sVar1 * 0xdfc;
    iVar10 = iVar7 * sVar1 * DAT_002d2770;
    *(int *)(&stack0xfffffff4 + DAT_002d276c) = iVar8 + iVar10;
    iVar7 = iVar8 - *(int *)(&stack0xfffffff8 + DAT_002d276c);
    *(int *)(&stack0xfffffff8 + DAT_002d276c) =
         iVar8 + (iVar10 - *(int *)(&stack0xfffffff8 + DAT_002d276c)) * -2;
    *(int *)(&stack0x00000000 + DAT_002d276c) = iVar9 - *(int *)((int)&iStack_4 + DAT_002d276c);
    iVar8 = *(int *)((int)&iStack_4 + DAT_002d276c) + iVar9;
    *(int *)(&stack0x00000010 + DAT_002d276c) = iVar8;
    iVar8 = iVar8 * DAT_002d2774;
    *(int *)(&stack0x00000008 + DAT_002d276c) = *(int *)(&stack0x00000000 + DAT_002d276c) * 0x176;
    *(int *)((int)&iStack_4 + DAT_002d276c) = iVar9 * DAT_002d2778;
    *(int *)(&stack0x00000004 + DAT_002d276c) =
         *(int *)(&stack0xfffffff4 + DAT_002d276c) + iVar8 +
         *(int *)(&stack0x00000008 + DAT_002d276c);
    *(int *)(&stack0x00000008 + DAT_002d276c) =
         (iVar7 - iVar8) + *(int *)(&stack0x00000008 + DAT_002d276c) +
         *(int *)((int)&iStack_4 + DAT_002d276c);
    iVar8 = *(int *)(&stack0x00000010 + DAT_002d276c);
    *(int *)(&stack0x0000000c + DAT_002d276c) =
         (*(int *)(&stack0xfffffff4 + DAT_002d276c) -
         *(int *)(&stack0x00000010 + DAT_002d276c) * DAT_002d277c) -
         *(int *)(&stack0x00000000 + DAT_002d276c) * DAT_002d2780;
    *(int *)((int)&iStack_4 + DAT_002d276c) =
         ((iVar7 + *(int *)(&stack0x00000010 + DAT_002d276c) * DAT_002d277c) -
         *(int *)(&stack0x00000000 + DAT_002d276c) * DAT_002d2780) -
         *(int *)((int)&iStack_4 + DAT_002d276c);
    iVar9 = *(int *)(&stack0x00000000 + DAT_002d276c) * 0xb50;
    *(int *)(&stack0x00000010 + DAT_002d276c) = iVar7 + DAT_002d2784 * iVar8 + iVar9;
    iVar11 = *(int *)(&stack0xfffffff4 + DAT_002d276c);
    iVar10 = piVar4[0x18];
    iVar7 = *(int *)(&stack0x00000000 + DAT_002d276c) * 0x16a0;
    *(int *)(&stack0xfffffff4 + DAT_002d276c) = iVar7;
    *(int *)(&stack0x00000018 + DAT_002d276c) = *(int *)(&stack0xfffffff8 + DAT_002d276c) + iVar7;
    sVar1 = param_3[8];
    iVar7 = piVar4[8];
    *(int *)(&stack0x00000014 + DAT_002d276c) = (iVar11 - DAT_002d2784 * iVar8) + iVar9;
    iVar7 = sVar1 * iVar7;
    sVar1 = param_3[0x28];
    iVar8 = piVar4[0x28];
    *(int *)(&stack0x00000024 + DAT_002d276c) = param_3[0x18] * iVar10;
    sVar2 = param_3[0x38];
    iVar9 = piVar4[0x38];
    *(int *)(&stack0xfffffff0 + DAT_002d276c) = sVar1 * iVar8 * 0x2731;
    param_3 = param_3 + 1;
    iVar9 = iVar9 * sVar2;
    piVar4 = piVar4 + 1;
    *(int *)(&stack0x00000000 + DAT_002d276c) =
         DAT_002d2788 * (iVar7 + (*(int *)(&stack0x00000024 + DAT_002d276c) - iVar9));
    *(int *)(&stack0x0000001c + DAT_002d276c) =
         *(int *)(&stack0x00000000 + DAT_002d276c) + iVar7 * 0x1071;
    *(int *)(&stack0x00000000 + DAT_002d276c) =
         *(int *)(&stack0x00000000 + DAT_002d276c) +
         DAT_002d278c * (*(int *)(&stack0x00000024 + DAT_002d276c) - iVar9);
    *(int *)(&stack0x00000020 + DAT_002d276c) =
         *(int *)(&stack0x00000024 + DAT_002d276c) * DAT_002d2790;
    *(int *)(&stack0x00000024 + DAT_002d276c) =
         *(int *)(&stack0x00000024 + DAT_002d276c) * DAT_002d2794;
    *(int *)(&stack0x00000030 + DAT_002d276c) =
         *(int *)(&stack0xfffffff0 + DAT_002d276c) + (iVar7 - iVar9) * DAT_002d2798;
    *(int *)(&stack0x00000028 + DAT_002d276c) =
         (iVar9 * DAT_002d279c + *(int *)(&stack0x00000030 + DAT_002d276c)) -
         *(int *)(&stack0x00000024 + DAT_002d276c);
    *(int *)(&stack0x00000030 + DAT_002d276c) =
         *(int *)(&stack0x00000030 + DAT_002d276c) + iVar7 * DAT_002d27a0 +
         *(int *)(&stack0x00000020 + DAT_002d276c);
    iVar10 = (iVar7 - iVar9) * 0x2731 - *(int *)(&stack0xfffffff0 + DAT_002d276c);
    iVar11 = DAT_002d27a4 * (iVar7 + iVar9);
    iVar8 = *(int *)(&stack0x00000020 + DAT_002d276c) +
            ((DAT_002d27a8 * iVar7 + iVar11) - *(int *)(&stack0xfffffff0 + DAT_002d276c));
    *(int *)(&stack0x00000020 + DAT_002d276c) =
         *(int *)(&stack0x00000024 + DAT_002d276c) +
         DAT_002d27ac * iVar9 + iVar11 + *(int *)(&stack0xfffffff0 + DAT_002d276c);
    *piVar5 = *(int *)(&stack0x00000004 + DAT_002d276c) + *(int *)(&stack0x00000028 + DAT_002d276c)
              >> 0xb;
    piVar5[0x70] = *(int *)(&stack0x00000004 + DAT_002d276c) -
                   *(int *)(&stack0x00000028 + DAT_002d276c) >> 0xb;
    iVar7 = *(int *)(&stack0x0000001c + DAT_002d276c);
    piVar5[8] = *(int *)(&stack0x00000010 + DAT_002d276c) + iVar7 >> 0xb;
    iVar9 = *(int *)(&stack0x00000018 + DAT_002d276c);
    piVar5[0x68] = *(int *)(&stack0x00000010 + DAT_002d276c) - iVar7 >> 0xb;
    piVar5[0x10] = iVar9 + iVar10 >> 0xb;
    piVar5[0x60] = iVar9 - iVar10 >> 0xb;
    iVar9 = *(int *)(&stack0x00000008 + DAT_002d276c);
    iVar7 = *(int *)(&stack0x00000014 + DAT_002d276c);
    iVar10 = *(int *)(&stack0x00000000 + DAT_002d276c);
    piVar5[0x18] = iVar9 + iVar8 >> 0xb;
    piVar5[0x58] = iVar9 - iVar8 >> 0xb;
    piVar5[0x20] = iVar7 + iVar10 >> 0xb;
    iVar9 = *(int *)(&stack0x00000020 + DAT_002d276c);
    iVar8 = *(int *)(&stack0x0000000c + DAT_002d276c);
    piVar5[0x50] = iVar7 - iVar10 >> 0xb;
    piVar5[0x28] = iVar8 + iVar9 >> 0xb;
    iVar7 = *(int *)((int)&iStack_4 + DAT_002d276c);
    iVar10 = *(int *)(&stack0x00000030 + DAT_002d276c);
    piVar5[0x48] = iVar8 - iVar9 >> 0xb;
    piVar5[0x30] = iVar7 + iVar10 >> 0xb;
    piVar5[0x40] = iVar7 - iVar10 >> 0xb;
    psVar12 = *(short **)(&stack0x00000034 + DAT_002d276c);
    piVar5[0x38] = *(int *)(&stack0xfffffff8 + DAT_002d276c) +
                   *(int *)(&stack0xfffffff4 + DAT_002d276c) * -2 >> 0xb;
    piVar5 = piVar5 + 1;
  } while (param_3 != psVar12);
  iVar7 = *(int *)(&stack0x00000038 + DAT_002d276c);
  *(undefined1 **)(&stack0x00000030 + DAT_002d276c) = &stack0x0000021c + DAT_002d276c;
  piVar5 = (int *)(&stack0x0000003c + DAT_002d276c);
  do {
    iVar8 = piVar5[6];
    iVar9 = **(int **)(&stack0x0000002c + iVar3);
    *(int **)(&stack0x0000002c + iVar3) = *(int **)(&stack0x0000002c + iVar3) + 1;
    puVar6 = (undefined1 *)(iVar9 + *(int *)(&stack0x00000234 + iVar3));
    iVar11 = (*piVar5 + 0x10) * 0x2000;
    iVar10 = iVar11 + iVar8 * -0xdfc;
    iVar9 = iVar11 + iVar8 * DAT_002d2770;
    *(int *)((int)&iStack_4 + iVar3) = iVar11 + (iVar8 * DAT_002d2770 + iVar8 * -0xdfc) * -2;
    iVar8 = piVar5[4] + piVar5[2];
    *(int *)(&stack0x00000000 + iVar3) = piVar5[2] - piVar5[4];
    *(int *)(&stack0x00000014 + iVar3) = iVar8;
    iVar8 = iVar8 * DAT_002d2774;
    iVar11 = piVar5[2];
    *(int *)(&stack0xfffffff4 + iVar3) = *(int *)(&stack0x00000000 + iVar3) * 0x176;
    *(int *)(&stack0xfffffff8 + iVar3) = iVar11 * DAT_002d2778;
    *(int *)(&stack0x00000004 + iVar3) = iVar9 + iVar8 + *(int *)(&stack0xfffffff4 + iVar3);
    *(int *)(&stack0x00000008 + iVar3) =
         (iVar10 - iVar8) + *(int *)(&stack0xfffffff4 + iVar3) + *(int *)(&stack0xfffffff8 + iVar3);
    *(int *)(&stack0x00000010 + iVar3) = *(int *)(&stack0x00000014 + iVar3) * DAT_002d277c;
    *(int *)(&stack0xfffffff4 + iVar3) = *(int *)(&stack0x00000000 + iVar3) * DAT_002d2780;
    *(int *)(&stack0x0000000c + iVar3) =
         (iVar9 - *(int *)(&stack0x00000010 + iVar3)) - *(int *)(&stack0xfffffff4 + iVar3);
    *(int *)(&stack0x00000010 + iVar3) =
         ((iVar10 + *(int *)(&stack0x00000010 + iVar3)) - *(int *)(&stack0xfffffff4 + iVar3)) -
         *(int *)(&stack0xfffffff8 + iVar3);
    iVar13 = *(int *)(&stack0x00000014 + iVar3);
    iVar11 = *(int *)(&stack0x00000000 + iVar3) * 0xb50;
    *(int *)(&stack0x00000014 + iVar3) = iVar10 + DAT_002d2784 * iVar13 + iVar11;
    iVar8 = piVar5[5];
    *(int *)(&stack0x00000018 + iVar3) = (iVar9 - DAT_002d2784 * iVar13) + iVar11;
    iVar10 = *(int *)(&stack0x00000000 + iVar3) * 0x16a0;
    *(int *)(&stack0xfffffff4 + iVar3) = iVar10;
    *(int *)(&stack0x00000038 + iVar3) = iVar8 * 0x2731;
    iVar8 = piVar5[3];
    iVar9 = piVar5[7];
    *(int *)(&stack0x00000000 + iVar3) = *(int *)((int)&iStack_4 + iVar3) + iVar10;
    iVar10 = piVar5[1];
    iVar11 = DAT_002d2788 * (iVar10 + (iVar8 - iVar9));
    *(int *)(&stack0x00000020 + iVar3) = iVar11 + DAT_002d278c * (iVar8 - iVar9);
    iVar9 = piVar5[3];
    *(int *)(&stack0x0000001c + iVar3) = iVar11 + iVar10 * 0x1071;
    *(int *)(&stack0x00000024 + iVar3) = iVar9 * DAT_002d2790;
    iVar8 = piVar5[7];
    *(int *)(&stack0xfffffff8 + iVar3) = iVar9 * DAT_002d2794;
    iVar9 = piVar5[7];
    *(int *)(&stack0x00000034 + iVar3) =
         *(int *)(&stack0x00000038 + iVar3) + (iVar10 - iVar8) * DAT_002d2798;
    *(int *)(&stack0x00000028 + iVar3) =
         (iVar9 * DAT_002d279c + *(int *)(&stack0x00000034 + iVar3)) -
         *(int *)(&stack0xfffffff8 + iVar3);
    *(int *)(&stack0x00000034 + iVar3) =
         *(int *)(&stack0x00000034 + iVar3) + iVar10 * DAT_002d28d8 +
         *(int *)(&stack0x00000024 + iVar3);
    iVar8 = (iVar10 - iVar8) * 0x2731 - *(int *)(&stack0x00000038 + iVar3);
    iVar9 = DAT_002d28dc * (piVar5[7] + iVar10);
    piVar4 = piVar5 + 7;
    iVar10 = *(int *)(&stack0x00000024 + iVar3) +
             ((DAT_002d28e0 * iVar10 + iVar9) - *(int *)(&stack0x00000038 + iVar3));
    piVar5 = piVar5 + 8;
    iVar13 = *(int *)(&stack0xfffffff8 + iVar3) +
             DAT_002d28e4 * *piVar4 + iVar9 + *(int *)(&stack0x00000038 + iVar3);
    iVar9 = *(int *)(&stack0x00000028 + iVar3);
    *puVar6 = *(undefined1 *)
               (iVar7 + ((uint)((*(int *)(&stack0x00000004 + iVar3) + iVar9) * 0x10) >> 0x16));
    iVar11 = *(int *)(&stack0x00000014 + iVar3);
    puVar6[0xe] = *(undefined1 *)
                   (iVar7 + ((uint)((*(int *)(&stack0x00000004 + iVar3) - iVar9) * 0x10) >> 0x16));
    iVar9 = *(int *)(&stack0x00000014 + iVar3);
    puVar6[1] = *(undefined1 *)
                 (iVar7 + ((uint)((iVar11 + *(int *)(&stack0x0000001c + iVar3)) * 0x10) >> 0x16));
    iVar11 = *(int *)(&stack0x00000000 + iVar3);
    puVar6[0xd] = *(undefined1 *)
                   (iVar7 + ((uint)((iVar9 - *(int *)(&stack0x0000001c + iVar3)) * 0x10) >> 0x16));
    puVar6[2] = *(undefined1 *)(iVar7 + ((uint)((iVar11 + iVar8) * 0x10) >> 0x16));
    iVar9 = *(int *)(&stack0x00000008 + iVar3);
    iVar14 = *(int *)(&stack0x00000020 + iVar3);
    puVar6[0xc] = *(undefined1 *)(iVar7 + ((uint)((iVar11 - iVar8) * 0x10) >> 0x16));
    puVar6[3] = *(undefined1 *)(iVar7 + ((uint)((iVar9 + iVar10) * 0x10) >> 0x16));
    iVar11 = *(int *)(&stack0x00000018 + iVar3);
    iVar8 = *(int *)(&stack0x0000000c + iVar3);
    puVar6[0xb] = *(undefined1 *)(iVar7 + ((uint)((iVar9 - iVar10) * 0x10) >> 0x16));
    puVar6[4] = *(undefined1 *)(iVar7 + ((uint)((iVar11 + iVar14) * 0x10) >> 0x16));
    iVar9 = *(int *)(&stack0x00000010 + iVar3);
    puVar6[10] = *(undefined1 *)(iVar7 + ((uint)((iVar11 - iVar14) * 0x10) >> 0x16));
    puVar6[5] = *(undefined1 *)(iVar7 + ((uint)((iVar8 + iVar13) * 0x10) >> 0x16));
    iVar10 = *(int *)(&stack0x00000034 + iVar3);
    puVar6[9] = *(undefined1 *)(iVar7 + ((uint)((iVar8 - iVar13) * 0x10) >> 0x16));
    puVar6[6] = *(undefined1 *)(iVar7 + ((uint)((iVar9 + iVar10) * 0x10) >> 0x16));
    iVar8 = *(int *)((int)&iStack_4 + iVar3);
    puVar6[8] = *(undefined1 *)(iVar7 + ((uint)((iVar9 - iVar10) * 0x10) >> 0x16));
    puVar6[7] = *(undefined1 *)
                 (iVar7 + ((uint)((iVar8 + *(int *)(&stack0xfffffff4 + iVar3) * -2) * 0x10) >> 0x16)
                 );
  } while (piVar5 != *(int **)(&stack0x00000030 + iVar3));
  return;
}


