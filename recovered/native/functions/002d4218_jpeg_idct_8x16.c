/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d4218 jpeg_idct_8x16 */

void jpeg_idct_8x16(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_4;
  
  iVar3 = DAT_002d4614;
  piVar4 = *(int **)(param_2 + 0x54);
  *(undefined4 *)(&stack0x00000040 + DAT_002d4614) = param_4;
  *(int *)(&stack0xfffffff8 + DAT_002d4614) = *(int *)(param_1 + 0x150) + 0x80;
  *(short **)(&stack0x0000003c + DAT_002d4614) = param_3 + 8;
  piVar6 = (int *)(&stack0x00000044 + DAT_002d4614);
  do {
    iVar7 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
    iVar9 = (int)param_3[0x20] * piVar4[0x20];
    *(int *)(&stack0x00000000 + DAT_002d4614) = iVar7 + iVar9 * -0x1151;
    *(int *)(&stack0xfffffff4 + DAT_002d4614) = iVar7 - iVar9 * DAT_002d4618;
    iVar8 = piVar4[0x10];
    sVar2 = param_3[0x10];
    *(int *)((int)&iStack_4 + DAT_002d4614) = iVar7 + iVar9 * 0x1151;
    iVar8 = sVar2 * iVar8;
    *(int *)(&stack0x0000000c + DAT_002d4614) = iVar7 + iVar9 * DAT_002d4618;
    iVar7 = piVar4[0x30] * (int)param_3[0x30];
    *(int *)(&stack0x00000010 + DAT_002d4614) = (iVar8 - iVar7) * DAT_002d461c;
    iVar11 = DAT_002d4620 * (iVar8 - iVar7);
    iVar9 = iVar11 + iVar7 * DAT_002d4624;
    *(int *)(&stack0x00000008 + DAT_002d4614) =
         *(int *)(&stack0x00000010 + DAT_002d4614) + iVar8 * DAT_002d4628;
    iVar11 = iVar11 + iVar8 * DAT_002d462c;
    iVar8 = *(int *)(&stack0x00000010 + DAT_002d4614);
    *(int *)(&stack0x00000010 + DAT_002d4614) = *(int *)(&stack0x0000000c + DAT_002d4614) + iVar9;
    iVar8 = iVar8 + DAT_002d4630 * iVar7;
    *(int *)(&stack0x00000004 + DAT_002d4614) = *(int *)(&stack0x0000000c + DAT_002d4614) - iVar9;
    *(int *)(&stack0x00000018 + DAT_002d4614) =
         *(int *)((int)&iStack_4 + DAT_002d4614) + *(int *)(&stack0x00000008 + DAT_002d4614);
    iVar7 = *(int *)(&stack0x00000000 + DAT_002d4614);
    *(int *)((int)&iStack_4 + DAT_002d4614) =
         *(int *)((int)&iStack_4 + DAT_002d4614) - *(int *)(&stack0x00000008 + DAT_002d4614);
    *(int *)(&stack0x00000000 + DAT_002d4614) = *(int *)(&stack0x00000000 + DAT_002d4614) - iVar11;
    iVar12 = *(int *)(&stack0xfffffff4 + DAT_002d4614);
    *(int *)(&stack0x00000008 + DAT_002d4614) = iVar7 + iVar11;
    iVar9 = piVar4[8];
    *(int *)(&stack0xfffffff4 + DAT_002d4614) = *(int *)(&stack0xfffffff4 + DAT_002d4614) - iVar8;
    sVar2 = param_3[8];
    iVar7 = piVar4[0x18];
    *(int *)(&stack0x00000020 + DAT_002d4614) = iVar12 + iVar8;
    iVar9 = sVar2 * iVar9;
    iVar7 = iVar7 * param_3[0x18];
    *(int *)(&stack0xfffffff0 + DAT_002d4614) = piVar4[0x28] * (int)param_3[0x28];
    psVar10 = param_3 + 0x38;
    param_3 = param_3 + 1;
    iVar13 = (int)*psVar10 * piVar4[0x38];
    piVar4 = piVar4 + 1;
    *(int *)(&stack0x0000000c + DAT_002d4614) = iVar9 + *(int *)(&stack0xfffffff0 + DAT_002d4614);
    *(int *)(&stack0x00000014 + DAT_002d4614) = (iVar9 + iVar7) * DAT_002d4634;
    *(int *)(&stack0x0000001c + DAT_002d4614) =
         *(int *)(&stack0x0000000c + DAT_002d4614) * DAT_002d4638;
    *(int *)(&stack0x00000024 + DAT_002d4614) = (iVar9 + iVar13) * DAT_002d463c;
    *(int *)(&stack0x00000028 + DAT_002d4614) = (iVar9 - iVar13) * DAT_002d4640;
    *(int *)(&stack0x0000000c + DAT_002d4614) =
         *(int *)(&stack0x0000000c + DAT_002d4614) * DAT_002d4644;
    *(int *)(&stack0x0000002c + DAT_002d4614) = DAT_002d4648 * (iVar9 - iVar7);
    *(int *)(&stack0x00000030 + DAT_002d4614) =
         iVar9 * DAT_002d464c +
         *(int *)(&stack0x00000014 + DAT_002d4614) + *(int *)(&stack0x0000001c + DAT_002d4614) +
         *(int *)(&stack0x00000024 + DAT_002d4614);
    *(int *)(&stack0x00000034 + DAT_002d4614) =
         *(int *)(&stack0x0000002c + DAT_002d4614) +
         *(int *)(&stack0x00000028 + DAT_002d4614) + *(int *)(&stack0x0000000c + DAT_002d4614) +
         iVar9 * DAT_002d4650;
    iVar8 = (iVar7 + *(int *)(&stack0xfffffff0 + DAT_002d4614)) * 0x470;
    *(int *)(&stack0x00000014 + DAT_002d4614) =
         *(int *)(&stack0x00000014 + DAT_002d4614) + iVar8 + iVar7 * 0x24d;
    *(int *)(&stack0x0000001c + DAT_002d4614) =
         *(int *)(&stack0x0000001c + DAT_002d4614) +
         iVar8 + *(int *)(&stack0xfffffff0 + DAT_002d4614) * DAT_002d4654;
    iVar11 = (*(int *)(&stack0xfffffff0 + DAT_002d4614) - iVar7) * DAT_002d4658;
    *(int *)(&stack0x00000038 + DAT_002d4614) =
         *(int *)(&stack0x0000000c + DAT_002d4614) +
         *(int *)(&stack0xfffffff0 + DAT_002d4614) * DAT_002d465c + iVar11;
    iVar8 = (iVar7 + iVar13) * DAT_002d4664;
    *(int *)(&stack0x0000000c + DAT_002d4614) = *(int *)(&stack0x00000014 + DAT_002d4614) + iVar8;
    iVar9 = (iVar7 + iVar13) * DAT_002d466c;
    *(int *)(&stack0x00000014 + DAT_002d4614) =
         *(int *)(&stack0x0000002c + DAT_002d4614) + iVar11 + iVar7 * DAT_002d4660 + iVar9;
    iVar12 = (*(int *)(&stack0xfffffff0 + DAT_002d4614) + iVar13) * DAT_002d4674;
    iVar11 = *(int *)(&stack0x0000001c + DAT_002d4614) + iVar12;
    iVar12 = iVar12 + *(int *)(&stack0x00000024 + DAT_002d4614) + iVar13 * DAT_002d4668 + iVar8;
    iVar7 = DAT_002d4648 * (iVar13 - *(int *)(&stack0xfffffff0 + DAT_002d4614));
    *(int *)(&stack0x0000001c + DAT_002d4614) =
         *(int *)(&stack0x00000028 + DAT_002d4614) + iVar9 + iVar13 * DAT_002d4670 + iVar7;
    *(int *)(&stack0x00000024 + DAT_002d4614) = *(int *)(&stack0x00000038 + DAT_002d4614) + iVar7;
    iVar7 = *(int *)(&stack0x00000030 + DAT_002d4614);
    *piVar6 = *(int *)(&stack0x00000010 + DAT_002d4614) + iVar7 >> 0xb;
    piVar6[0x78] = *(int *)(&stack0x00000010 + DAT_002d4614) - iVar7 >> 0xb;
    iVar7 = *(int *)(&stack0x0000000c + DAT_002d4614);
    piVar6[8] = *(int *)(&stack0x00000018 + DAT_002d4614) + iVar7 >> 0xb;
    iVar8 = *(int *)(&stack0x00000008 + DAT_002d4614);
    piVar6[0x70] = *(int *)(&stack0x00000018 + DAT_002d4614) - iVar7 >> 0xb;
    iVar7 = *(int *)(&stack0x00000020 + DAT_002d4614);
    piVar6[0x10] = iVar8 + iVar11 >> 0xb;
    piVar6[0x68] = iVar8 - iVar11 >> 0xb;
    piVar6[0x18] = iVar7 + iVar12 >> 0xb;
    piVar6[0x60] = iVar7 - iVar12 >> 0xb;
    iVar11 = *(int *)(&stack0x0000001c + DAT_002d4614);
    iVar8 = *(int *)(&stack0xfffffff4 + DAT_002d4614);
    piVar6[0x20] = iVar8 + iVar11 >> 0xb;
    iVar7 = *(int *)(&stack0x00000000 + DAT_002d4614);
    iVar9 = *(int *)(&stack0x00000024 + DAT_002d4614);
    piVar6[0x58] = iVar8 - iVar11 >> 0xb;
    piVar6[0x28] = iVar7 + iVar9 >> 0xb;
    iVar8 = *(int *)((int)&iStack_4 + DAT_002d4614);
    iVar11 = *(int *)(&stack0x00000014 + DAT_002d4614);
    piVar6[0x50] = iVar7 - iVar9 >> 0xb;
    piVar6[0x30] = iVar8 + iVar11 >> 0xb;
    piVar6[0x48] = iVar8 - iVar11 >> 0xb;
    iVar7 = *(int *)(&stack0x00000004 + DAT_002d4614);
    iVar8 = *(int *)(&stack0x00000034 + DAT_002d4614);
    piVar6[0x38] = iVar7 + iVar8 >> 0xb;
    piVar6[0x40] = iVar7 - iVar8 >> 0xb;
    piVar6 = piVar6 + 1;
  } while (param_3 != *(short **)(&stack0x0000003c + DAT_002d4614));
  piVar4 = *(int **)(&stack0x00000040 + DAT_002d4614);
  *(undefined1 **)(&stack0xfffffff4 + DAT_002d4614) = &stack0x00000244 + DAT_002d4614;
  piVar6 = (int *)(&stack0x00000044 + DAT_002d4614);
  do {
    iVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    puVar5 = (undefined1 *)(iVar7 + *(int *)(&stack0x0000025c + iVar3));
    iVar7 = (piVar6[2] + piVar6[6]) * 0x1151;
    iVar8 = iVar7 + DAT_002d467c * piVar6[2];
    iVar7 = iVar7 + piVar6[6] * DAT_002d4678;
    iVar12 = (*piVar6 + 0x10 + piVar6[4]) * 0x2000;
    iVar13 = ((*piVar6 + 0x10) - piVar6[4]) * 0x2000;
    *(int *)(&stack0x00000004 + iVar3) = iVar13 + iVar7;
    iVar9 = piVar6[5];
    iVar11 = piVar6[1];
    *(int *)(&stack0x00000000 + iVar3) = iVar12 - iVar8;
    *(int *)(&stack0x00000008 + iVar3) = iVar13 - iVar7;
    iVar7 = piVar6[3];
    iVar13 = piVar6[7];
    *(int *)((int)&iStack_4 + iVar3) = iVar12 + iVar8;
    iVar8 = DAT_002d4680 * (iVar7 + iVar13 + iVar9 + iVar11);
    *(int *)(&stack0x00000010 + iVar3) = DAT_002d4684 * (iVar7 + iVar13);
    iVar7 = piVar6[7];
    *(int *)(&stack0x00000014 + iVar3) = (iVar9 + iVar11) * DAT_002d4688 + iVar8;
    *(int *)(&stack0x00000010 + iVar3) = *(int *)(&stack0x00000010 + iVar3) + iVar8;
    iVar8 = (iVar7 + iVar11) * DAT_002d468c;
    *(int *)(&stack0x00000018 + iVar3) =
         piVar6[7] * DAT_002d4690 + iVar8 + *(int *)(&stack0x00000010 + iVar3);
    iVar7 = piVar6[5];
    iVar8 = iVar11 * 0x300b + iVar8 + *(int *)(&stack0x00000014 + iVar3);
    iVar9 = (iVar7 + piVar6[3]) * DAT_002d4694;
    piVar1 = piVar6 + 3;
    piVar6 = piVar6 + 8;
    *(int *)(&stack0x0000000c + iVar3) = *piVar1 * DAT_002d469c;
    iVar11 = iVar9 + *(int *)(&stack0x00000014 + iVar3) + iVar7 * DAT_002d4698;
    iVar7 = *(int *)(&stack0x0000000c + iVar3) + iVar9 + *(int *)(&stack0x00000010 + iVar3);
    *puVar5 = *(undefined1 *)
               (*(int *)(&stack0xfffffff8 + iVar3) +
               ((uint)((*(int *)((int)&iStack_4 + iVar3) + iVar8) * 0x10) >> 0x16));
    iVar9 = *(int *)(&stack0xfffffff8 + iVar3);
    iVar12 = *(int *)(&stack0x00000004 + iVar3);
    puVar5[7] = *(undefined1 *)
                 (iVar9 + ((uint)((*(int *)((int)&iStack_4 + iVar3) - iVar8) * 0x10) >> 0x16));
    puVar5[1] = *(undefined1 *)(iVar9 + ((uint)((iVar12 + iVar7) * 0x10) >> 0x16));
    iVar8 = *(int *)(&stack0x00000008 + iVar3);
    iVar13 = *(int *)(&stack0xfffffff8 + iVar3);
    puVar5[6] = *(undefined1 *)(iVar9 + ((uint)((iVar12 - iVar7) * 0x10) >> 0x16));
    puVar5[2] = *(undefined1 *)(iVar9 + ((uint)((iVar8 + iVar11) * 0x10) >> 0x16));
    iVar7 = *(int *)(&stack0x00000000 + iVar3);
    iVar12 = *(int *)(&stack0x00000018 + iVar3);
    puVar5[5] = *(undefined1 *)(iVar9 + ((uint)((iVar8 - iVar11) * 0x10) >> 0x16));
    puVar5[3] = *(undefined1 *)(iVar13 + ((uint)((iVar7 + iVar12) * 0x10) >> 0x16));
    puVar5[4] = *(undefined1 *)(iVar13 + ((uint)((iVar7 - iVar12) * 0x10) >> 0x16));
  } while (piVar6 != *(int **)(&stack0xfffffff4 + iVar3));
  return;
}


