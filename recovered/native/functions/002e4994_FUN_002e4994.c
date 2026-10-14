/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4994 FUN_002e4994 */

void FUN_002e4994(int *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  ushort *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iStack_4;
  
  iVar3 = DAT_002e4c64;
  iVar12 = *param_1;
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_002e4c64);
  uVar7 = **(undefined4 **)(DAT_002e4c60 + 0x2e49a0);
  *(undefined4 **)(&stack0x00000040 + DAT_002e4c64) = *(undefined4 **)(DAT_002e4c60 + 0x2e49a0);
  *(undefined4 *)(&stack0x00000450 + DAT_002e4c64) = uVar7;
  puVar15 = (ushort *)param_1[3];
  *(undefined4 *)(&stack0x0000000c + DAT_002e4c64) = *(undefined4 *)(iVar12 + 0x18);
  if (0x100 < *(uint *)(&stack0x0000000c + DAT_002e4c64)) {
    *(undefined4 *)(&stack0x0000000c + DAT_002e4c64) = 0x100;
  }
  uVar5 = *(uint *)(iVar12 + 0x10);
  *(uint *)(&stack0x00000018 + DAT_002e4c64) = uVar5;
  uVar16 = (uVar5 & 3) + 1;
  *(uint *)(&stack0xfffffff4 + DAT_002e4c64) = (uint)((uVar5 & 0x21) == 0x21);
  *(uint *)(&stack0x00000000 + DAT_002e4c64) = uVar5 & 0x10;
  if ((uVar5 & 0x10) != 0) {
    *(undefined4 *)(&stack0x00000000 + DAT_002e4c64) = 2;
  }
  memset(&stack0x00000350 + DAT_002e4c64,0xff,0x100);
  memset(&stack0x00000050 + iVar3,0,0x300);
  uVar9 = *(uint *)(&stack0x00000000 + iVar3) ^ 2;
  *(uint *)(&stack0x00000024 + iVar3) = uVar9 << 1;
  *(uint *)(&stack0x0000002c + iVar3) = *(uint *)(&stack0x00000000 + iVar3) << 1;
  *(undefined4 *)(&stack0x00000020 + iVar3) = 0;
  if (*(int *)(&stack0xfffffff4 + iVar3) == 0) {
    *(uint *)(&stack0x00000020 + iVar3) = (uVar5 & 3) * 2;
  }
  iVar8 = *(int *)(&stack0xfffffff4 + iVar3);
  iVar10 = iVar8 + uVar9;
  *(int *)(&stack0x0000001c + iVar3) = iVar10;
  *(int *)(&stack0x00000030 + iVar3) = iVar10 * 2;
  *(int *)(&stack0x00000034 + iVar3) = (iVar8 + 1) * 2;
  *(undefined4 *)(&stack0x00000014 + iVar3) = 1;
  *(int *)(&stack0x00000038 + iVar3) = (iVar8 + *(int *)(&stack0x00000000 + iVar3)) * 2;
  *(int *)(&stack0x00000004 + iVar3) = (int)puVar15 + iVar8;
  *(uint *)(&stack0x00000028 + iVar3) = uVar16 * 2;
  *(int *)(&stack0x0000003c + iVar3) = iVar8 << 1;
  puVar11 = &stack0x00000052 + iVar3;
  *(undefined4 *)((int)&iStack_4 + iVar3) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(uint *)(&stack0x00000044 + iVar3) = -(uint)(*(int *)(&stack0xfffffff4 + iVar3) == 0) & 3;
  *(int *)(&stack0x00000048 + iVar3) = iVar12;
  do {
    if (*(int *)(&stack0x0000000c + iVar3) <= *(int *)(&stack0xfffffff8 + iVar3)) {
      puVar14 = *(undefined4 **)(&stack0x00000048 + iVar3);
      png_set_PLTE(*(undefined4 *)*puVar14,((undefined4 *)*puVar14)[1],&stack0x00000050 + iVar3,
                   *(undefined4 *)(&stack0x0000000c + iVar3));
      if (0 < *(int *)((int)&iStack_4 + iVar3)) {
        uVar7 = *(undefined4 *)*puVar14;
        uVar6 = ((undefined4 *)*puVar14)[1];
        *puVar17 = 0;
        png_set_tRNS(uVar7,uVar6,&stack0x00000350 + iVar3,*(undefined4 *)((int)&iStack_4 + iVar3));
      }
      puVar14[6] = *(undefined4 *)(&stack0x0000000c + iVar3);
      if (*(int *)(&stack0x00000450 + iVar3) != **(int **)(&stack0x00000040 + iVar3)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(int *)(&stack0x00000018 + iVar3) << 0x1d < 0) {
      if ((uVar16 & 1) == 0) {
        *(undefined4 *)(&stack0x00000008 + iVar3) = 0;
        uVar2 = *(ushort *)((int)puVar15 + *(int *)(&stack0x00000020 + iVar3));
        uVar9 = (uint)uVar2;
        uVar5 = uVar9 * 0xff + DAT_002e4c70 >> 0x10 & 0xff;
        *(uint *)(&stack0x00000010 + iVar3) = uVar5;
        if ((uVar5 - 1 & 0xff) < 0xfe) {
          uVar7 = __divsi3((uint)(uVar2 >> 1) + DAT_002e4c74,uVar9);
          *(undefined4 *)(&stack0x00000008 + iVar3) = uVar7;
        }
        iVar12 = *(int *)(&stack0x00000010 + iVar3);
        (&stack0x00000350)[*(int *)(&stack0xfffffff8 + iVar3) + iVar3] = (&stack0x00000010)[iVar3];
        if (iVar12 != 0xff) {
          *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(&stack0x00000014 + iVar3);
        }
        if (uVar16 < 3) {
          uVar4 = FUN_002e4930(*(undefined2 *)((int)puVar15 + *(int *)(&stack0x0000003c + iVar3)),
                               uVar9,*(undefined4 *)(&stack0x00000008 + iVar3));
          puVar11[-1] = uVar4;
          puVar11[-2] = uVar4;
          *puVar11 = uVar4;
        }
        else {
          uVar4 = FUN_002e4930(*(undefined2 *)((int)puVar15 + *(int *)(&stack0x00000030 + iVar3)),
                               uVar9,*(undefined4 *)(&stack0x00000008 + iVar3));
          iVar12 = *(int *)(&stack0x00000034 + iVar3);
          *puVar11 = uVar4;
          uVar4 = FUN_002e4930(*(undefined2 *)((int)puVar15 + iVar12),uVar9,
                               *(undefined4 *)(&stack0x00000008 + iVar3));
          iVar12 = *(int *)(&stack0x00000038 + iVar3);
          puVar11[-1] = uVar4;
          uVar4 = FUN_002e4930(*(undefined2 *)((int)puVar15 + iVar12),uVar9,
                               *(undefined4 *)(&stack0x00000008 + iVar3));
          puVar11[-2] = uVar4;
        }
      }
      else {
        iVar12 = *(int *)(DAT_002e4c68 + 0x2e4a74);
        iVar8 = *(int *)(DAT_002e4c6c + 0x2e4a76);
        if (uVar16 < 3) {
          iVar10 = (int)((uint)*puVar15 * 0xff) >> 0xf;
          uVar4 = (undefined1)
                  ((uint)*(ushort *)(iVar12 + iVar10 * 2) +
                   ((int)((uint)*(byte *)(iVar8 + iVar10) * ((uint)*puVar15 * 0x1fe0000 >> 0x11)) >>
                   0xc) >> 8);
          puVar11[-1] = uVar4;
          puVar11[-2] = uVar4;
          *puVar11 = uVar4;
        }
        else {
          iVar10 = (int)((uint)*(ushort *)((int)puVar15 + *(int *)(&stack0x00000024 + iVar3)) * 0xff
                        ) >> 0xf;
          *puVar11 = (char)((uint)*(ushort *)(iVar12 + iVar10 * 2) +
                            ((int)((uint)*(byte *)(iVar8 + iVar10) *
                                  ((uint)*(ushort *)
                                          ((int)puVar15 + *(int *)(&stack0x00000024 + iVar3)) *
                                   0x1fe0000 >> 0x11)) >> 0xc) >> 8);
          iVar10 = (int)((uint)puVar15[1] * 0xff) >> 0xf;
          iVar13 = *(int *)(&stack0x0000002c + iVar3);
          puVar11[-1] = (char)((uint)*(ushort *)(iVar12 + iVar10 * 2) +
                               ((int)((uint)*(byte *)(iVar8 + iVar10) *
                                     ((uint)puVar15[1] * 0x1fe0000 >> 0x11)) >> 0xc) >> 8);
          iVar10 = (int)((uint)*(ushort *)((int)puVar15 + iVar13) * 0xff) >> 0xf;
          puVar11[-2] = (char)((uint)*(ushort *)(iVar12 + iVar10 * 2) +
                               ((int)((uint)*(byte *)(iVar8 + iVar10) *
                                     ((uint)*(ushort *)((int)puVar15 + iVar13) * 0x1fe0000 >> 0x11))
                               >> 0xc) >> 8);
        }
      }
    }
    else {
      iVar12 = *(int *)(&stack0x00000004 + iVar3) - *(int *)(&stack0xfffffff4 + iVar3);
      if (uVar16 != 3) {
        if (uVar16 != 4) {
          if ((uVar16 == 2) &&
             (cVar1 = *(char *)(iVar12 + (*(uint *)(&stack0xfffffff4 + iVar3) ^ 1)),
             (&stack0x00000350)[*(int *)(&stack0xfffffff8 + iVar3) + iVar3] = cVar1, cVar1 != -1)) {
            *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(&stack0x00000014 + iVar3);
          }
          uVar4 = **(undefined1 **)(&stack0x00000004 + iVar3);
          puVar11[-1] = uVar4;
          puVar11[-2] = uVar4;
          *puVar11 = uVar4;
          goto LAB_002e4bfc;
        }
        cVar1 = *(char *)(iVar12 + *(int *)(&stack0x00000044 + iVar3));
        (&stack0x00000350)[*(int *)(&stack0xfffffff8 + iVar3) + iVar3] = cVar1;
        if (cVar1 != -1) {
          *(undefined4 *)((int)&iStack_4 + iVar3) = *(undefined4 *)(&stack0x00000014 + iVar3);
        }
      }
      iVar8 = *(int *)(&stack0x00000000 + iVar3);
      iVar10 = *(int *)(&stack0x00000004 + iVar3);
      *puVar11 = *(undefined1 *)(iVar12 + *(int *)(&stack0x0000001c + iVar3));
      puVar11[-1] = *(undefined1 *)(iVar10 + 1);
      puVar11[-2] = *(undefined1 *)(iVar10 + iVar8);
    }
LAB_002e4bfc:
    puVar11 = puVar11 + 3;
    *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
    *(int *)(&stack0x00000014 + iVar3) = *(int *)(&stack0x00000014 + iVar3) + 1;
    *(uint *)(&stack0x00000004 + iVar3) = *(int *)(&stack0x00000004 + iVar3) + uVar16;
    puVar15 = (ushort *)((int)puVar15 + *(int *)(&stack0x00000028 + iVar3));
  } while( true );
}


