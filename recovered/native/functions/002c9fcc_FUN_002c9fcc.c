/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9fcc FUN_002c9fcc */

void FUN_002c9fcc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iStack_4;
  
  iVar2 = DAT_002ca2e8;
  *(undefined4 *)(&stack0x00000004 + DAT_002ca2e8) = param_1;
  iVar14 = *(int *)(&stack0x00000004 + DAT_002ca2e8);
  puVar3 = *(undefined4 **)(DAT_002ca2f0 + 0x2c9fe2);
  *(int *)(&stack0x00000028 + DAT_002ca2e8) = param_4 >> 2;
  uVar9 = *puVar3;
  iVar8 = (param_4 >> 2) * 0x20;
  *(int *)(&stack0x00000024 + DAT_002ca2e8) = param_3 >> 3;
  *(undefined4 *)(&stack0xffffffec + DAT_002ca2ec + DAT_002ca2e8) = uVar9;
  iVar12 = (param_2 >> 2) * 0x20;
  iVar16 = iVar12 + 4;
  iVar12 = iVar12 + 0x1c;
  *(undefined4 *)(&stack0x0000002c + DAT_002ca2e8) =
       *(undefined4 *)(*(int *)(iVar14 + 0x1e4) + 0x18);
  iVar10 = (param_3 >> 3) * 0x20;
  *(int *)(&stack0x00000008 + DAT_002ca2e8) = iVar8 + 4;
  uVar9 = *(undefined4 *)(iVar14 + 0x84);
  *(undefined4 **)(&stack0x00000034 + DAT_002ca2e8) = puVar3;
  *(undefined4 *)(&stack0x0000000c + DAT_002ca2e8) = uVar9;
  iVar8 = iVar8 + 0x1c;
  *(int *)(&stack0x00000020 + DAT_002ca2e8) = param_2 >> 2;
  *(int *)(&stack0xfffffff8 + DAT_002ca2e8) = iVar16;
  iVar14 = iVar10 + 2;
  iVar10 = iVar10 + 0x1e;
  *(int *)(&stack0x00000010 + DAT_002ca2e8) = iVar16 + iVar12 >> 1;
  *(int *)(&stack0xfffffff4 + DAT_002ca2e8) = iVar8;
  *(int *)((int)&iStack_4 + DAT_002ca2e8) = iVar14;
  *(int *)(&stack0x00000014 + DAT_002ca2e8) = iVar14 + iVar10 >> 1;
  *(int *)(&stack0x00000018 + DAT_002ca2e8) = *(int *)(&stack0x00000008 + DAT_002ca2e8) + iVar8 >> 1
  ;
  *(undefined4 *)(&stack0x00000000 + DAT_002ca2e8) = DAT_002ca2f4;
  iVar14 = 0;
  *(int *)(&stack0x0000001c + DAT_002ca2e8) = *(int *)(&stack0x00000004 + DAT_002ca2e8) + 0x88;
  *(int *)(&stack0x00000038 + DAT_002ca2e8) = iVar10;
  do {
    if (*(int *)(&stack0x0000000c + DAT_002ca2e8) <= iVar14) {
      iVar8 = 0;
      piVar15 = (int *)(&stack0x00000048 + DAT_002ca2e8);
      for (iVar14 = 0; iVar14 < *(int *)(&stack0x0000000c + DAT_002ca2e8); iVar14 = iVar14 + 1) {
        iVar10 = *piVar15;
        piVar15 = piVar15 + 1;
        if (iVar10 <= *(int *)(&stack0x00000000 + DAT_002ca2e8)) {
          (&stack0x000004c8)[iVar8 + DAT_002ca2e8] = (char)iVar14;
          iVar8 = iVar8 + 1;
        }
      }
      puVar3 = (undefined4 *)(&stack0x00000048 + DAT_002ca2e8);
      do {
        *puVar3 = DAT_002ca2f4;
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined4 *)(&stack0x00000248 + DAT_002ca2e8));
      *(undefined1 **)(&stack0xfffffff0 + DAT_002ca2e8) = &stack0x000004c8 + DAT_002ca2e8;
      *(int *)(&stack0x00000040 + DAT_002ca2e8) = *(int *)(&stack0x00000004 + DAT_002ca2e8) + 0x88;
      for (iVar14 = 0; iVar14 < iVar8; iVar14 = iVar14 + 1) {
        piVar15 = (int *)**(int **)(&stack0x00000040 + iVar2);
        bVar1 = (&stack0xffffffec)[DAT_002ca2f8 + iVar14 + iVar2];
        uVar4 = (uint)bVar1;
        iVar17 = (*(int *)(&stack0xfffffff8 + iVar2) - (uint)*(byte *)(*piVar15 + uVar4)) * 2;
        iVar16 = *(int *)((int)&iStack_4 + iVar2) - (uint)*(byte *)(piVar15[1] + uVar4);
        iVar10 = iVar16 * 3;
        iVar12 = *(int *)(&stack0x00000008 + iVar2) - (uint)*(byte *)(piVar15[2] + uVar4);
        *(int *)(&stack0x00000018 + iVar2) = (iVar17 + 8) * 0x20;
        iVar16 = iVar16 * 0x48;
        *(int *)(&stack0x0000001c + iVar2) = (iVar12 + 4) * 0x10;
        *(int *)(&stack0x00000014 + iVar2) = iVar17 * iVar17 + iVar10 * iVar10 + iVar12 * iVar12;
        *(int *)(&stack0x00000030 + iVar2) = iVar16 + 0x90;
        puVar5 = &stack0x00000448 + iVar2;
        *(undefined1 **)(&stack0xfffffff4 + iVar2) = &stack0x00000048 + iVar2;
        *(int *)(&stack0x00000038 + iVar2) = iVar16 + 0x990;
        *(int *)(&stack0x0000003c + iVar2) = *(int *)(&stack0x0000001c + iVar2) + 0x200;
        do {
          iVar10 = *(int *)(&stack0x00000030 + iVar2);
          *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(&stack0x00000014 + iVar2);
          *(undefined1 **)(&stack0x00000000 + iVar2) = puVar5;
          *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(&stack0xfffffff4 + iVar2);
          do {
            iVar16 = *(int *)(&stack0x0000001c + iVar2);
            iVar12 = *(int *)(&stack0x00000010 + iVar2);
            *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(&stack0x00000000 + iVar2);
            piVar15 = *(int **)(&stack0x00000004 + iVar2);
            do {
              if (iVar12 < *piVar15) {
                pbVar7 = *(byte **)(&stack0x0000000c + iVar2);
                *piVar15 = iVar12;
                *pbVar7 = bVar1;
              }
              iVar12 = iVar12 + iVar16;
              iVar16 = iVar16 + 0x80;
              *(int *)(&stack0x0000000c + iVar2) = *(int *)(&stack0x0000000c + iVar2) + 1;
              piVar15 = piVar15 + 1;
            } while (iVar16 != *(int *)(&stack0x0000003c + iVar2));
            iVar12 = *(int *)(&stack0x00000010 + iVar2) + iVar10;
            iVar10 = iVar10 + 0x120;
            *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + 0x10;
            *(int *)(&stack0x00000000 + iVar2) = *(int *)(&stack0x00000000 + iVar2) + 4;
            *(int *)(&stack0x00000010 + iVar2) = iVar12;
          } while (iVar10 != *(int *)(&stack0x00000038 + iVar2));
          puVar5 = puVar5 + 0x20;
          *(int *)(&stack0xfffffff4 + iVar2) = *(int *)(&stack0xfffffff4 + iVar2) + 0x80;
          *(int *)(&stack0x00000014 + iVar2) =
               *(int *)(&stack0x00000014 + iVar2) + *(int *)(&stack0x00000018 + iVar2);
          *(int *)(&stack0x00000018 + iVar2) = *(int *)(&stack0x00000018 + iVar2) + 0x200;
        } while (puVar5 != *(undefined1 **)(&stack0xfffffff0 + iVar2));
      }
      *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0x00000020 + iVar2) << 2;
      iVar14 = 0;
      puVar5 = &stack0x00000448 + iVar2;
      *(int *)((int)&iStack_4 + iVar2) =
           (*(int *)(&stack0x00000028 + iVar2) * 4 + *(int *)(&stack0x00000024 + iVar2) * 0x100) * 2
      ;
      do {
        iVar10 = *(int *)(&stack0xfffffff8 + iVar2);
        iVar8 = 0;
        puVar11 = puVar5;
        do {
          iVar12 = 0;
          psVar13 = (short *)(*(int *)(*(int *)(&stack0x0000002c + iVar2) + iVar10 * 4 + iVar14) +
                             iVar8 + *(int *)((int)&iStack_4 + iVar2));
          do {
            pbVar7 = puVar11 + iVar12;
            iVar12 = iVar12 + 1;
            *psVar13 = *pbVar7 + 1;
            psVar13 = psVar13 + 1;
          } while (iVar12 != 4);
          iVar8 = iVar8 + 0x40;
          puVar11 = puVar11 + 4;
        } while (iVar8 != 0x200);
        iVar14 = iVar14 + 4;
        puVar5 = puVar5 + 0x20;
      } while (iVar14 != 0x10);
      if (*(int *)(&stack0xffffffec + DAT_002ca2ec + iVar2) != **(int **)(&stack0x00000034 + iVar2))
      {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    piVar15 = (int *)**(undefined4 **)(&stack0x0000001c + DAT_002ca2e8);
    uVar4 = (uint)*(byte *)(*piVar15 + iVar14);
    if ((int)uVar4 < *(int *)(&stack0xfffffff8 + DAT_002ca2e8)) {
      iVar10 = (uVar4 - *(int *)(&stack0xfffffff8 + DAT_002ca2e8)) * 2;
      iVar10 = iVar10 * iVar10;
      iVar8 = iVar12;
LAB_002ca06c:
      iVar8 = (uVar4 - iVar8) * 2;
      iVar8 = iVar8 * iVar8;
    }
    else {
      if (iVar12 < (int)uVar4) {
        iVar10 = (uVar4 - iVar12) * 2;
        iVar8 = *(int *)(&stack0xfffffff8 + DAT_002ca2e8);
        iVar10 = iVar10 * iVar10;
        goto LAB_002ca06c;
      }
      if (*(int *)(&stack0x00000010 + DAT_002ca2e8) < (int)uVar4) {
        iVar8 = (uVar4 - *(int *)(&stack0xfffffff8 + DAT_002ca2e8)) * 2;
        iVar8 = iVar8 * iVar8;
      }
      else {
        iVar8 = (uVar4 - iVar12) * 2;
        iVar8 = iVar8 * iVar8;
      }
      iVar10 = 0;
    }
    uVar4 = (uint)*(byte *)(piVar15[1] + iVar14);
    if ((int)uVar4 < *(int *)((int)&iStack_4 + DAT_002ca2e8)) {
      iVar16 = (uVar4 - *(int *)((int)&iStack_4 + DAT_002ca2e8)) * 3;
      iVar10 = iVar10 + iVar16 * iVar16;
LAB_002ca0de:
      iVar16 = *(int *)(&stack0x00000038 + DAT_002ca2e8);
LAB_002ca0e4:
      iVar16 = (uVar4 - iVar16) * 3;
      iVar16 = iVar16 * iVar16;
    }
    else {
      if ((int)uVar4 <= *(int *)(&stack0x00000038 + DAT_002ca2e8)) {
        if ((int)uVar4 <= *(int *)(&stack0x00000014 + DAT_002ca2e8)) goto LAB_002ca0de;
        iVar16 = *(int *)((int)&iStack_4 + DAT_002ca2e8);
        goto LAB_002ca0e4;
      }
      iVar16 = uVar4 - *(int *)(&stack0x00000038 + DAT_002ca2e8);
      *(int *)(&stack0x00000030 + DAT_002ca2e8) = iVar16;
      iVar16 = iVar16 * 2 + *(int *)(&stack0x00000030 + DAT_002ca2e8);
      iVar10 = iVar10 + iVar16 * iVar16;
      iVar16 = (uVar4 - *(int *)((int)&iStack_4 + DAT_002ca2e8)) * 3;
      iVar16 = iVar16 * iVar16;
    }
    uVar4 = (uint)*(byte *)(piVar15[2] + iVar14);
    if ((int)uVar4 < *(int *)(&stack0x00000008 + DAT_002ca2e8)) {
      iVar6 = uVar4 - *(int *)(&stack0x00000008 + DAT_002ca2e8);
      iVar17 = *(int *)(&stack0xfffffff4 + DAT_002ca2e8);
      iVar10 = iVar10 + iVar6 * iVar6;
LAB_002ca12a:
      iVar17 = (uVar4 - iVar17) * (uVar4 - iVar17);
    }
    else {
      if (*(int *)(&stack0xfffffff4 + DAT_002ca2e8) < (int)uVar4) {
        iVar17 = uVar4 - *(int *)(&stack0xfffffff4 + DAT_002ca2e8);
        iVar10 = iVar10 + iVar17 * iVar17;
        iVar17 = *(int *)(&stack0x00000008 + DAT_002ca2e8);
      }
      else {
        if (*(int *)(&stack0x00000018 + DAT_002ca2e8) < (int)uVar4) {
          iVar17 = *(int *)(&stack0x00000008 + DAT_002ca2e8);
          goto LAB_002ca12a;
        }
        iVar17 = *(int *)(&stack0xfffffff4 + DAT_002ca2e8);
      }
      iVar17 = (uVar4 - iVar17) * (uVar4 - iVar17);
    }
    iVar17 = iVar8 + iVar16 + iVar17;
    *(int *)(&stack0x00000048 + iVar14 * 4 + DAT_002ca2e8) = iVar10;
    if (iVar17 < *(int *)(&stack0x00000000 + DAT_002ca2e8)) {
      *(int *)(&stack0x00000000 + DAT_002ca2e8) = iVar17;
    }
    iVar14 = iVar14 + 1;
  } while( true );
}


