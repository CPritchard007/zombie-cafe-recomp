/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d1e68 jpeg_idct_14x14 */

void jpeg_idct_14x14(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_4;
  
  iVar3 = DAT_002d2264;
  iVar4 = *(int *)(param_1 + 0x150);
  *(undefined4 *)(&stack0x00000030 + DAT_002d2264) = param_4;
  piVar5 = *(int **)(param_2 + 0x54);
  *(short **)(&stack0x00000034 + DAT_002d2264) = param_3 + 8;
  *(int *)(&stack0x00000038 + DAT_002d2264) = iVar4 + 0x80;
  piVar6 = (int *)(&stack0x0000003c + DAT_002d2264);
  do {
    iVar4 = *piVar5 * (int)*param_3 * 0x2000 + 0x400;
    iVar10 = (int)param_3[0x20] * piVar5[0x20];
    *(int *)(&stack0x00000000 + DAT_002d2264) = iVar10 * DAT_002d2268;
    *(int *)(&stack0xfffffff8 + DAT_002d2264) = iVar4 + iVar10 * DAT_002d226c;
    *(int *)(&stack0x00000004 + DAT_002d2264) = iVar4 + *(int *)(&stack0x00000000 + DAT_002d2264);
    *(int *)(&stack0x00000018 + DAT_002d2264) =
         iVar4 + (*(int *)(&stack0x00000000 + DAT_002d2264) + iVar10 * DAT_002d226c +
                 iVar10 * -0x1c37) * -2 >> 0xb;
    sVar1 = param_3[0x10];
    iVar8 = piVar5[0x10];
    *(int *)((int)&iStack_4 + DAT_002d2264) = iVar4 + iVar10 * -0x1c37;
    iVar8 = sVar1 * iVar8;
    iVar4 = piVar5[0x30] * (int)param_3[0x30];
    iVar12 = DAT_002d2270 * (iVar8 + iVar4);
    *(int *)(&stack0x00000000 + DAT_002d2264) = iVar12 + iVar8 * DAT_002d2274;
    iVar8 = DAT_002d2280 * iVar8 + DAT_002d227c * iVar4;
    iVar12 = iVar12 + iVar4 * DAT_002d2278;
    *(int *)(&stack0x0000001c + DAT_002d2264) =
         *(int *)(&stack0x00000004 + DAT_002d2264) + *(int *)(&stack0x00000000 + DAT_002d2264);
    *(int *)(&stack0x00000020 + DAT_002d2264) =
         *(int *)(&stack0x00000004 + DAT_002d2264) - *(int *)(&stack0x00000000 + DAT_002d2264);
    iVar10 = *(int *)((int)&iStack_4 + DAT_002d2264);
    *(int *)(&stack0x00000024 + DAT_002d2264) = *(int *)(&stack0xfffffff8 + DAT_002d2264) + iVar12;
    *(int *)(&stack0xfffffff8 + DAT_002d2264) = *(int *)(&stack0xfffffff8 + DAT_002d2264) - iVar12;
    *(int *)((int)&iStack_4 + DAT_002d2264) = *(int *)((int)&iStack_4 + DAT_002d2264) - iVar8;
    sVar1 = param_3[8];
    iVar4 = piVar5[8];
    *(int *)(&stack0x00000028 + DAT_002d2264) = iVar10 + iVar8;
    iVar12 = piVar5[0x18];
    sVar2 = param_3[0x18];
    *(int *)(&stack0x00000010 + DAT_002d2264) = sVar1 * iVar4;
    iVar12 = sVar2 * iVar12;
    iVar4 = piVar5[0x28] * (int)param_3[0x28];
    sVar1 = param_3[0x38];
    iVar8 = piVar5[0x38];
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    *(int *)(&stack0x00000008 + DAT_002d2264) = sVar1 * iVar8;
    *(int *)(&stack0x00000000 + DAT_002d2264) = *(int *)(&stack0x00000010 + DAT_002d2264) + iVar4;
    *(int *)(&stack0xfffffff4 + DAT_002d2264) = sVar1 * iVar8 * 0x2000;
    *(int *)(&stack0x00000004 + DAT_002d2264) =
         (*(int *)(&stack0x00000010 + DAT_002d2264) + iVar12) * DAT_002d2284;
    *(int *)(&stack0x0000000c + DAT_002d2264) =
         *(int *)(&stack0x00000000 + DAT_002d2264) * DAT_002d2288;
    *(int *)(&stack0x0000002c + DAT_002d2264) =
         *(int *)(&stack0x00000010 + DAT_002d2264) * DAT_002d228c +
         *(int *)(&stack0xfffffff4 + DAT_002d2264) +
         *(int *)(&stack0x00000004 + DAT_002d2264) +
         *(int *)(&stack0x00000000 + DAT_002d2264) * DAT_002d2288;
    *(int *)(&stack0x00000000 + DAT_002d2264) =
         *(int *)(&stack0x00000000 + DAT_002d2264) * DAT_002d2290;
    iVar8 = *(int *)(&stack0x00000010 + DAT_002d2264) - iVar12;
    *(int *)(&stack0x00000014 + DAT_002d2264) =
         *(int *)(&stack0x00000000 + DAT_002d2264) +
         *(int *)(&stack0x00000010 + DAT_002d2264) * DAT_002d2294;
    iVar10 = iVar8 * 0xef2 - *(int *)(&stack0xfffffff4 + DAT_002d2264);
    *(int *)(&stack0x00000010 + DAT_002d2264) = iVar10;
    *(int *)(&stack0x00000014 + DAT_002d2264) = *(int *)(&stack0x00000014 + DAT_002d2264) + iVar10;
    *(int *)(&stack0xfffffff0 + DAT_002d2264) =
         DAT_002d2298 * (iVar12 + iVar4) - *(int *)(&stack0xfffffff4 + DAT_002d2264);
    *(int *)(&stack0x00000004 + DAT_002d2264) =
         *(int *)(&stack0x00000004 + DAT_002d2264) +
         iVar12 * DAT_002d229c + *(int *)(&stack0xfffffff0 + DAT_002d2264);
    *(int *)(&stack0x0000000c + DAT_002d2264) =
         *(int *)(&stack0x0000000c + DAT_002d2264) +
         *(int *)(&stack0xfffffff0 + DAT_002d2264) + iVar4 * DAT_002d22a0;
    iVar10 = DAT_002d22a4 * (iVar4 - iVar12);
    *(int *)(&stack0xfffffff0 + DAT_002d2264) = iVar10;
    iVar14 = *(int *)(&stack0xfffffff4 + DAT_002d2264) + iVar10 + iVar4 * DAT_002d22a8 +
             *(int *)(&stack0x00000000 + DAT_002d2264);
    iVar12 = *(int *)(&stack0x00000010 + DAT_002d2264) +
             *(int *)(&stack0xfffffff0 + DAT_002d2264) + DAT_002d22ac * iVar12;
    iVar10 = *(int *)(&stack0x0000001c + DAT_002d2264);
    iVar4 = (iVar8 + *(int *)(&stack0x00000008 + DAT_002d2264)) - iVar4;
    *piVar6 = iVar10 + *(int *)(&stack0x0000002c + DAT_002d2264) >> 0xb;
    piVar6[0x68] = iVar10 - *(int *)(&stack0x0000002c + DAT_002d2264) >> 0xb;
    iVar8 = *(int *)(&stack0x00000004 + DAT_002d2264);
    piVar6[8] = *(int *)(&stack0x00000024 + DAT_002d2264) + iVar8 >> 0xb;
    piVar6[0x60] = *(int *)(&stack0x00000024 + DAT_002d2264) - iVar8 >> 0xb;
    iVar8 = *(int *)(&stack0x0000000c + DAT_002d2264);
    piVar6[0x10] = *(int *)(&stack0x00000028 + DAT_002d2264) + iVar8 >> 0xb;
    iVar8 = *(int *)(&stack0x00000028 + DAT_002d2264) - iVar8;
    *(int *)(&stack0x00000000 + DAT_002d2264) = iVar8;
    piVar6[0x58] = iVar8 >> 0xb;
    iVar10 = *(int *)(&stack0x00000018 + DAT_002d2264);
    piVar6[0x18] = *(int *)(&stack0x00000018 + DAT_002d2264) + iVar4 * 4;
    iVar8 = *(int *)((int)&iStack_4 + DAT_002d2264);
    piVar6[0x50] = iVar10 + iVar4 * -4;
    piVar6[0x20] = iVar8 + iVar14 >> 0xb;
    iVar4 = *(int *)(&stack0xfffffff8 + DAT_002d2264);
    piVar6[0x48] = *(int *)((int)&iStack_4 + DAT_002d2264) - iVar14 >> 0xb;
    piVar6[0x28] = iVar4 + iVar12 >> 0xb;
    piVar6[0x40] = iVar4 - iVar12 >> 0xb;
    iVar4 = *(int *)(&stack0x00000020 + DAT_002d2264);
    iVar8 = *(int *)(&stack0x00000014 + DAT_002d2264);
    psVar9 = *(short **)(&stack0x00000034 + DAT_002d2264);
    piVar6[0x30] = iVar4 + iVar8 >> 0xb;
    piVar6[0x38] = iVar4 - iVar8 >> 0xb;
    piVar6 = piVar6 + 1;
  } while (param_3 != psVar9);
  iVar4 = *(int *)(&stack0x00000038 + DAT_002d2264);
  *(undefined1 **)(&stack0x00000034 + DAT_002d2264) = &stack0x000001fc + DAT_002d2264;
  piVar6 = (int *)(&stack0x0000003c + DAT_002d2264);
  do {
    iVar14 = piVar6[4];
    iVar8 = **(int **)(&stack0x00000030 + iVar3);
    *(int **)(&stack0x00000030 + iVar3) = *(int **)(&stack0x00000030 + iVar3) + 1;
    puVar7 = (undefined1 *)(iVar8 + *(int *)(&stack0x00000214 + iVar3));
    *(int *)(&stack0x00000000 + iVar3) = iVar14 * DAT_002d2268;
    iVar8 = (*piVar6 + 0x10) * 0x2000;
    *(int *)(&stack0xfffffff8 + iVar3) = iVar8 + iVar14 * DAT_002d226c;
    *(int *)(&stack0x00000004 + iVar3) = iVar8 + *(int *)(&stack0x00000000 + iVar3);
    *(int *)(&stack0x00000018 + iVar3) =
         iVar8 + (*(int *)(&stack0x00000000 + iVar3) + iVar14 * DAT_002d226c + iVar14 * -0x1c37) *
                 -2;
    iVar10 = piVar6[2];
    iVar12 = piVar6[6];
    *(int *)((int)&iStack_4 + iVar3) = iVar8 + iVar14 * -0x1c37;
    iVar14 = DAT_002d2270 * (iVar10 + iVar12);
    iVar8 = iVar14 + iVar10 * DAT_002d2274;
    iVar14 = iVar14 + piVar6[6] * DAT_002d2278;
    iVar10 = DAT_002d2280 * piVar6[2] + DAT_002d227c * piVar6[6];
    *(int *)(&stack0x0000001c + iVar3) = *(int *)(&stack0x00000004 + iVar3) + iVar8;
    *(int *)(&stack0x00000020 + iVar3) = *(int *)(&stack0x00000004 + iVar3) - iVar8;
    *(int *)(&stack0x00000024 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + iVar14;
    iVar12 = piVar6[5];
    iVar8 = piVar6[1];
    *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) - iVar14;
    *(int *)(&stack0x00000028 + iVar3) = *(int *)((int)&iStack_4 + iVar3) + iVar10;
    iVar13 = piVar6[3];
    *(int *)((int)&iStack_4 + iVar3) = *(int *)((int)&iStack_4 + iVar3) - iVar10;
    iVar10 = piVar6[7];
    *(int *)(&stack0x00000008 + iVar3) = iVar8 + iVar12;
    iVar8 = iVar10 * 0x2000;
    *(int *)(&stack0x00000000 + iVar3) = (piVar6[1] + iVar13) * DAT_002d2284;
    *(int *)(&stack0x00000004 + iVar3) = *(int *)(&stack0x00000008 + iVar3) * DAT_002d2288;
    *(int *)(&stack0x0000000c + iVar3) =
         piVar6[1] * DAT_002d228c +
         *(int *)(&stack0x00000000 + iVar3) + *(int *)(&stack0x00000008 + iVar3) * DAT_002d2288 +
         iVar8;
    iVar12 = piVar6[1];
    *(int *)(&stack0x00000008 + iVar3) = *(int *)(&stack0x00000008 + iVar3) * DAT_002d2290;
    iVar14 = piVar6[1];
    *(int *)(&stack0x00000038 + iVar3) = iVar14 - iVar13;
    iVar14 = ((iVar14 - iVar13) * 0x10 - *(int *)(&stack0x00000038 + iVar3)) * 0xff +
             *(int *)(&stack0x00000038 + iVar3) + iVar10 * -0x2000;
    *(int *)(&stack0x00000010 + iVar3) =
         *(int *)(&stack0x00000008 + iVar3) + iVar12 * DAT_002d2294 + iVar14;
    iVar12 = piVar6[5];
    *(int *)(&stack0x0000002c + iVar3) = iVar14;
    *(int *)(&stack0x00000014 + iVar3) = DAT_002d2298 * (iVar13 + iVar12) + iVar10 * -0x2000;
    *(int *)(&stack0x00000000 + iVar3) =
         *(int *)(&stack0x00000000 + iVar3) +
         iVar13 * DAT_002d229c + *(int *)(&stack0x00000014 + iVar3);
    iVar10 = piVar6[5];
    *(int *)(&stack0x00000004 + iVar3) =
         *(int *)(&stack0x00000004 + iVar3) +
         *(int *)(&stack0x00000014 + iVar3) + iVar10 * DAT_002d22a0;
    iVar10 = DAT_002d22a4 * (iVar10 - iVar13);
    *(int *)(&stack0x00000014 + iVar3) = iVar10;
    iVar11 = *(int *)(&stack0x00000008 + iVar3) + piVar6[5] * DAT_002d22a8 + iVar10 + iVar8;
    iVar13 = *(int *)(&stack0x0000002c + iVar3) +
             *(int *)(&stack0x00000014 + iVar3) + DAT_002d22ac * iVar13;
    piVar5 = piVar6 + 5;
    piVar6 = piVar6 + 8;
    iVar8 = (*(int *)(&stack0x00000038 + iVar3) - *piVar5) * 0x2000 + iVar8;
    iVar10 = *(int *)(&stack0x0000000c + iVar3);
    *puVar7 = *(undefined1 *)
               (iVar4 + ((uint)((*(int *)(&stack0x0000001c + iVar3) + iVar10) * 0x10) >> 0x16));
    iVar12 = *(int *)(&stack0x00000024 + iVar3);
    puVar7[0xd] = *(undefined1 *)
                   (iVar4 + ((uint)((*(int *)(&stack0x0000001c + iVar3) - iVar10) * 0x10) >> 0x16));
    iVar10 = *(int *)(&stack0x00000024 + iVar3);
    puVar7[1] = *(undefined1 *)
                 (iVar4 + ((uint)((iVar12 + *(int *)(&stack0x00000000 + iVar3)) * 0x10) >> 0x16));
    iVar12 = *(int *)(&stack0x00000028 + iVar3);
    puVar7[0xc] = *(undefined1 *)
                   (iVar4 + ((uint)((iVar10 - *(int *)(&stack0x00000000 + iVar3)) * 0x10) >> 0x16));
    iVar10 = *(int *)(&stack0x00000028 + iVar3);
    puVar7[2] = *(undefined1 *)
                 (iVar4 + ((uint)((iVar12 + *(int *)(&stack0x00000004 + iVar3)) * 0x10) >> 0x16));
    iVar12 = *(int *)(&stack0x00000018 + iVar3);
    puVar7[0xb] = *(undefined1 *)
                   (iVar4 + ((uint)((iVar10 - *(int *)(&stack0x00000004 + iVar3)) * 0x10) >> 0x16));
    puVar7[3] = *(undefined1 *)(iVar4 + ((uint)((iVar12 + iVar8) * 0x10) >> 0x16));
    iVar10 = *(int *)((int)&iStack_4 + iVar3);
    iVar14 = *(int *)(&stack0xfffffff8 + iVar3);
    puVar7[10] = *(undefined1 *)(iVar4 + ((uint)((iVar12 - iVar8) * 0x10) >> 0x16));
    puVar7[4] = *(undefined1 *)(iVar4 + ((uint)((iVar10 + iVar11) * 0x10) >> 0x16));
    puVar7[9] = *(undefined1 *)(iVar4 + ((uint)((iVar10 - iVar11) * 0x10) >> 0x16));
    puVar7[5] = *(undefined1 *)(iVar4 + ((uint)((iVar14 + iVar13) * 0x10) >> 0x16));
    puVar7[8] = *(undefined1 *)(iVar4 + ((uint)((iVar14 - iVar13) * 0x10) >> 0x16));
    iVar8 = *(int *)(&stack0x00000020 + iVar3);
    iVar10 = *(int *)(&stack0x00000010 + iVar3);
    puVar7[6] = *(undefined1 *)(iVar4 + ((uint)((iVar8 + iVar10) * 0x10) >> 0x16));
    puVar7[7] = *(undefined1 *)(iVar4 + ((uint)((iVar8 - iVar10) * 0x10) >> 0x16));
  } while (piVar6 != *(int **)(&stack0x00000034 + iVar3));
  return;
}


