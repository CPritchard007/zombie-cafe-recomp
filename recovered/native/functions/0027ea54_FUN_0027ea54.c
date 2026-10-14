/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027ea54 FUN_0027ea54 */

void FUN_0027ea54(void)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  void *pvVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  int *piVar22;
  int iVar23;
  byte *pbVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined4 *puVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  void *__src;
  bool bVar35;
  uint uStack00000010;
  uint uStack00000014;
  int iStack00000018;
  uint uStack0000001c;
  byte *pbStack00000020;
  uint uStack00000024;
  size_t *psStack00000028;
  int *piStack0000002c;
  int *piStack00000030;
  uint uStack00000034;
  undefined1 *puStack00000038;
  uint uStack0000003c;
  int in_stack_00000040;
  byte *pbStack00000044;
  int iStack00000048;
  uint uStack0000004c;
  uint uStack00000054;
  int in_stack_00000058;
  uint uStack00000064;
  int in_stack_00000074;
  int *in_stack_0000007c;
  undefined4 in_stack_00000090;
  int in_stack_00000094;
  int in_stack_00000098;
  byte *in_stack_0000009c;
  byte *in_stack_000000a0;
  int in_stack_000000ac;
  int in_stack_000000b8;
  int in_stack_000000c4;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  int in_stack_00000134;
  
  while( true ) {
    pbVar24 = (byte *)(int)*(short *)(in_stack_00000040 + 0x5e);
    iVar33 = *(int *)((int)(pbVar24 + 0x22) * 4 + in_stack_00000040);
    pbStack00000044 = pbVar24;
    if (pbVar24 != (byte *)0x0) break;
    if (*(char *)(iVar33 + 1) == '\0') {
      FUN_0027f5f4();
    }
    iVar25 = *(int *)(iVar33 + 0x34);
    in_stack_0000009c = pbVar24;
    in_stack_000000a0 = pbVar24;
    in_stack_00000098 = FUN_002733c4(*(undefined4 *)(iVar33 + 0x44));
    if (in_stack_00000098 == 0) {
      in_stack_00000098 =
           FUN_0027daa4(iVar25,&stack0x0000009c,&stack0x000000a0,*(undefined4 *)(iVar33 + 0x48));
      if (in_stack_00000098 == 0) {
        FUN_0027e092(iVar33,in_stack_0000009c,&stack0x00000098);
      }
      if (*(char *)(iVar25 + 0x11) != '\0') {
        FUN_0027df1c(iVar25,in_stack_000000a0,5,*(undefined4 *)(iVar33 + 0x48));
      }
    }
    if (in_stack_00000098 == 0) {
      memcpy(in_stack_0000009c + 0x14,(void *)(iVar33 + 0x14),(uint)*(byte *)(iVar33 + 1) << 1);
      memcpy(in_stack_0000009c + 0x20,(void *)(iVar33 + 0x20),(uint)*(byte *)(iVar33 + 1) << 2);
      in_stack_0000009c[1] = *(byte *)(iVar33 + 1);
      FUN_0026b790(iVar33,**(byte **)(in_stack_0000009c + 0x38) & 0xf7);
      FUN_0025ba48(*(int *)(iVar33 + 0x38) + *(byte *)(iVar33 + 5) + 8,in_stack_000000a0);
      *(byte **)(in_stack_00000040 + 0x8c) = in_stack_0000009c;
    }
    else {
      *(undefined4 *)(in_stack_00000040 + 0x8c) = 0;
      FUN_00274a30();
      if (in_stack_00000098 != 0) {
        FUN_0027f5f4();
      }
    }
    *(undefined2 *)(in_stack_00000040 + 0x5e) = 1;
    *(undefined2 *)(in_stack_00000040 + 0x60) = 0;
    *(undefined2 *)(in_stack_00000040 + 0x62) = 0;
  }
  if ((*(char *)(iVar33 + 1) == '\0') && ((int)(uint)*(ushort *)(iVar33 + 0xe) <= in_stack_00000074)
     ) {
    FUN_0027f5f4();
  }
  iVar31 = *(int *)((int)(pbStack00000044 + 0x21) * 4 + in_stack_00000040);
  uVar13 = (uint)*(ushort *)((int)(pbStack00000044 + 0x2f) * 2 + in_stack_00000040);
  iVar25 = FUN_002733c4(*(undefined4 *)(iVar31 + 0x44));
  if (iVar25 != 0) {
    FUN_0027f5d8();
  }
  if ((((*(char *)(iVar33 + 4) != '\0') && (*(char *)(iVar33 + 1) == '\x01')) &&
      (*(short *)(iVar33 + 0x10) == *(short *)(iVar33 + 0x14))) &&
     ((*(int *)(iVar31 + 0x48) != 1 && (*(ushort *)(iVar31 + 0x10) == uVar13)))) {
    iVar34 = *(int *)(iVar33 + 0x34);
    if (*(short *)(iVar33 + 0x10) == 0) {
      iVar25 = FUN_0026b4e4(DAT_0027ed74);
      FUN_0027f5d8();
    }
    in_stack_00000098 = FUN_0027daa4(iVar34,&stack0x00000094,&stack0x0000009c,iVar25);
    if (in_stack_00000098 == 0) {
      in_stack_000000a0 = *(byte **)(iVar33 + 0x20);
      in_stack_00000090._2_2_ = FUN_00260b9e(iVar33);
      FUN_0026b790(in_stack_00000094,0xd);
      FUN_0025e360(in_stack_00000094,1,&stack0x000000a0,(int)&stack0x00000090 + 2);
      if (((*(char *)(iVar34 + 0x11) != '\0') &&
          (FUN_0027df1c(iVar34,in_stack_0000009c,5,*(undefined4 *)(iVar31 + 0x48)),
          *(ushort *)(in_stack_00000094 + 10) < in_stack_00000090._2_2_)) &&
         (in_stack_00000098 == 0)) {
        FUN_0027dfbc(in_stack_00000094,in_stack_000000a0,&stack0x00000098);
      }
      iVar25 = (*(ushort *)(iVar33 + 0x10) - 1) * 2;
      pbVar7 = (byte *)(*(int *)(iVar33 + 0x38) +
                       (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar33 + 0x40) + iVar25),
                                       *(undefined1 *)(*(int *)(iVar33 + 0x40) + iVar25 + 1)) &
                             *(ushort *)(iVar33 + 0x12)));
      pbVar24 = pbVar7;
      do {
        in_stack_000000a0 = pbVar24;
        pbVar24 = in_stack_000000a0 + 1;
        if (-1 < (int)((uint)*in_stack_000000a0 << 0x18)) break;
      } while (pbVar24 < pbVar7 + 9);
      pbVar5 = in_stack_000000a0 + 10;
      pbVar7 = &stack0x00000128;
      in_stack_000000a0 = pbVar24;
      do {
        bVar1 = *in_stack_000000a0;
        in_stack_000000a0 = in_stack_000000a0 + 1;
        *pbVar7 = bVar1;
        pbVar7 = pbVar7 + 1;
        if (-1 < (int)((uint)bVar1 << 0x18)) break;
      } while (in_stack_000000a0 < pbVar5);
      FUN_0027e7d4(iVar31,*(undefined2 *)(iVar31 + 0x10),&stack0x00000124,
                   (int)pbVar7 - (int)&stack0x00000124);
      FUN_0025ba48(*(int *)(iVar31 + 0x38) + *(byte *)(iVar31 + 5) + 8,in_stack_0000009c);
      FUN_00274a30(in_stack_00000094);
    }
    FUN_0027f5d8();
  }
  iVar25 = FUN_0025f320(*(undefined4 *)(*(int *)(in_stack_00000040 + 4) + 0x20));
  uVar14 = (uint)*(byte *)(in_stack_00000040 + 0x5d);
  uStack00000034 = 0;
  in_stack_00000098 = 0;
  iVar34 = *(int *)(iVar31 + 0x34);
  if (iVar25 == 0) {
    FUN_0027f5c8();
  }
  uStack0000003c = (uint)*(byte *)(iVar31 + 1) + (uint)*(ushort *)(iVar31 + 0x10);
  if (1 < uStack0000003c) {
    bVar35 = uVar13 != uStack00000034;
    uStack00000034 = uVar13;
    if ((bVar35) && (uStack00000034 = uVar13 - 1, uVar13 == uStack0000003c)) {
      uStack00000034 = (uVar13 - 2) + uVar14;
    }
    uStack0000003c = 2 - uVar14;
  }
  iVar26 = uStack0000003c + 1;
  uVar13 = (uStack0000003c + uStack00000034) - (uint)*(byte *)(iVar31 + 1);
  if (uVar13 == *(ushort *)(iVar31 + 0x10)) {
    uVar13 = *(byte *)(iVar31 + 5) + 8;
  }
  else {
    iVar15 = uVar13 * 2;
    uVar13 = (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar31 + 0x40) + iVar15),
                             *(undefined1 *)(*(int *)(iVar31 + 0x40) + iVar15 + 1)) &
                   *(ushort *)(iVar31 + 0x12));
  }
  iVar15 = *(int *)(iVar31 + 0x38) + uVar13;
  in_stack_0000009c = (byte *)FUN_0025ba30(iVar15);
  iVar16 = (uStack0000003c - 1) * 4;
  psStack00000028 = (size_t *)(&stack0x000000ec + iVar16);
  piVar12 = (int *)(&stack0x000000a4 + iVar16);
  uStack00000024 = uStack0000003c;
  uStack00000010 = 0;
  do {
    in_stack_00000098 = FUN_00274c54(iVar34,in_stack_0000009c,&stack0x000000ac + uStack00000024);
    if (in_stack_00000098 != 0) {
      iStack00000018 = 0;
      memset(&stack0x000000ac,0,(uStack00000024 + 1) * 4);
      pbStack00000020 = (byte *)0x0;
LAB_0027f598:
      FUN_0025b000(pbStack00000020);
      puVar30 = &stack0x000000ac;
      for (iVar31 = 0; iVar31 < iVar26; iVar31 = iVar31 + 1) {
        uVar8 = *puVar30;
        puVar30 = puVar30 + 1;
        FUN_00274a30(uVar8);
      }
      puVar30 = &stack0x000000c4;
      for (iVar31 = 0; iVar34 = in_stack_00000098, iVar31 < iStack00000018; iVar31 = iVar31 + 1) {
        uVar8 = *puVar30;
        puVar30 = puVar30 + 1;
        FUN_00274a30(uVar8);
      }
      if (in_stack_00000058 != 0) {
        FUN_0025f6b8(in_stack_00000058);
      }
      *(undefined1 *)(iVar33 + 1) = 0;
      FUN_00274a30(iVar33);
      *(short *)(in_stack_00000040 + 0x5e) = *(short *)(in_stack_00000040 + 0x5e) + -1;
      if (iVar34 == 0) {
        FUN_0027ea54();
      }
      if (iVar25 != 0) {
        FUN_0025f6b8(iVar25);
      }
      if (in_stack_00000134 != *in_stack_0000007c) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar34);
      }
      return;
    }
    uStack00000010 =
         uStack00000010 +
         *(ushort *)((&stack0x000000ac)[uStack00000024] + 0x10) + 1 +
         (uint)*(byte *)((&stack0x000000ac)[uStack00000024] + 1);
    if (uStack00000024 == 0) {
      iVar16 = *(int *)(iVar34 + 0x20) + 0x50;
      uVar13 = uStack00000010 + 3 & 0xfffffffc;
      pbStack00000020 = (byte *)FUN_0025af60(iVar16 * iVar26 + *(int *)(iVar34 + 0x20) + uVar13 * 6)
      ;
      if (pbStack00000020 != (byte *)0x0) {
        psStack00000028 = (size_t *)(pbStack00000020 + uVar13 * 4);
        uVar9 = (uint)*(byte *)(in_stack_000000ac + 3);
        iVar10 = uVar9 * 4;
        uVar18 = (uint)*(byte *)(in_stack_000000ac + 4);
        uStack00000064 = uStack00000024;
        uStack00000010 = uStack00000024;
        uStack0000004c = uStack00000024;
        uStack0000001c = uStack00000024;
        for (piStack00000030 = (int *)uStack00000024; (int)piStack00000030 < iVar26;
            piStack00000030 = (int *)((int)piStack00000030 + 1)) {
          pbVar24 = (byte *)((int)psStack00000028 +
                            uStack00000064 + *(int *)(iVar34 + 0x20) + uVar13 * 2);
          *(byte **)((int)&stack0x000000b8 + uStack00000010) = pbVar24;
          memcpy(pbVar24,*(void **)((int)&stack0x000000ac + uStack00000010),0x4c);
          iVar19 = *(int *)((int)&stack0x000000ac + uStack00000010);
          *(byte **)(pbVar24 + 0x38) = pbVar24 + 0x4c;
          memcpy(pbVar24 + 0x4c,*(void **)(iVar19 + 0x38),*(size_t *)(iVar34 + 0x20));
          uVar11 = (uint)*(ushort *)(pbVar24 + 0x10) + (uint)pbVar24[1];
          uStack00000014 = 0;
          if (pbVar24[1] == 0) {
            iVar19 = *(int *)(pbVar24 + 0x38);
            uVar3 = *(ushort *)(pbVar24 + 0x12);
            puStack00000038 = (undefined1 *)(iVar19 + (uint)*(ushort *)(pbVar24 + 0xc));
            for (uStack00000014 = 0; (int)uStack00000014 < (int)uVar11;
                uStack00000014 = uStack00000014 + 1) {
              *(uint *)(pbStack00000020 + uStack00000014 * 4 + uStack0000001c * 4) =
                   iVar19 + (uint)(CONCAT11(*puStack00000038,puStack00000038[1]) & uVar3);
              uVar4 = FUN_00260b9e(pbVar24);
              *(ushort *)((int)psStack00000028 + (uStack0000001c + uStack00000014) * 2) = uVar4;
              puStack00000038 = puStack00000038 + 2;
            }
          }
          else {
            while ((int)uStack00000014 < (int)uVar11) {
              iVar19 = 0;
              uVar20 = uStack00000014;
              uVar2 = (uint)pbVar24[1];
              while (uVar2 - 1 != 0xffffffff) {
                if ((int)(uint)*(ushort *)(pbVar24 + iVar19 + (uint)pbVar24[1] * 2 + 0x12) <=
                    (int)uVar20) {
                  if (*(ushort *)(pbVar24 + iVar19 + (uint)pbVar24[1] * 2 + 0x12) == uVar20) {
                    iVar19 = *(int *)(pbVar24 + (uVar2 + 7) * 4);
                    goto LAB_0027ef58;
                  }
                  uVar20 = uVar20 - 1;
                }
                iVar19 = iVar19 + -2;
                uVar2 = uVar2 - 1;
              }
              iVar19 = *(int *)(pbVar24 + 0x38) +
                       (uint)(CONCAT11(*(undefined1 *)(*(int *)(pbVar24 + 0x40) + uVar20 * 2),
                                       *(undefined1 *)(*(int *)(pbVar24 + 0x40) + uVar20 * 2 + 1)) &
                             *(ushort *)(pbVar24 + 0x12));
LAB_0027ef58:
              *(int *)(pbStack00000020 + uStack00000014 * 4 + uStack0000001c * 4) = iVar19;
              uVar3 = FUN_00260b9e(pbVar24);
              *(ushort *)((int)psStack00000028 + (uStack0000001c + uStack00000014) * 2) = uVar3;
              uStack00000014 = uStack00000014 + 1;
            }
          }
          uStack0000001c = uStack0000001c + ((int)~uVar11 >> 0x1f & uVar11);
          if (((int)piStack00000030 < (int)uStack0000003c) && (uVar18 == 0)) {
            uVar3 = *(ushort *)(&stack0x000000ec + uStack00000010);
            puVar21 = (ushort *)((int)psStack00000028 + uStack0000001c * 2);
            *puVar21 = uVar3;
            pbVar7 = (byte *)((int)psStack00000028 + uStack0000004c + uVar13 * 2);
            uStack0000004c = uStack0000004c + uVar3;
            memcpy(pbVar7,*(void **)(&stack0x000000a4 + uStack00000010),(uint)uVar3);
            *(byte **)(pbStack00000020 + uStack0000001c * 4) = pbVar7 + iVar10;
            uVar11 = (uint)*puVar21 + uVar9 * -4;
            *puVar21 = (ushort)uVar11;
            if (pbVar24[3] == 0) {
              memcpy(*(void **)(pbStack00000020 + uStack0000001c * 4),
                     (void *)(*(int *)(pbVar24 + 0x38) + 8),4);
            }
            else if ((uVar11 & 0xffff) < 4) {
              *puVar21 = 4;
            }
            uStack0000001c = uStack0000001c + 1;
          }
          uStack00000010 = uStack00000010 + 4;
          uStack00000064 = uStack00000064 + iVar16;
        }
        iVar27 = *(int *)(iVar34 + 0x24);
        iVar16 = 0;
        uStack00000010 = 0;
        for (iVar19 = 0; iVar19 < (int)uStack0000001c; iVar19 = iVar19 + 1) {
          iVar16 = iVar16 + *(ushort *)((int)psStack00000028 + iVar19 * 2) + 2;
          if (iVar27 + -0xc + iVar10 < iVar16) {
            iVar28 = uStack00000010 * 4;
            *(uint *)(&stack0x000000ec + iVar28) =
                 iVar16 - (uint)*(ushort *)((int)psStack00000028 + iVar19 * 2);
            uStack00000010 = uStack00000010 + 1;
            *(int *)(&stack0x000000d8 + iVar28) = iVar19;
            iVar19 = iVar19 - (uint)(uVar18 != 0);
            if (4 < (int)uStack00000010) {
              in_stack_00000098 = FUN_0026b4e4(DAT_0027f134);
              iStack00000018 = 0;
              goto LAB_0027f598;
            }
            iVar16 = 0;
          }
        }
        iVar19 = uStack00000010 * 4;
        *(int *)(&stack0x000000ec + iVar19) = iVar16;
        *(uint *)(&stack0x000000d8 + iVar19) = uStack0000001c;
        piVar12 = (int *)(&stack0x000000d8 + (uStack00000010 + -1) * 4);
        for (piVar22 = (int *)(&stack0x000000ec + iVar19); (int *)&stack0x000000ec != piVar22;
            piVar22 = piVar22 + -1) {
          uStack00000014 = *piVar12 + -1;
          iVar16 = piVar22[-1];
          iStack00000018 = *piVar12 - uVar18;
          for (iVar19 = *piVar22;
              (iVar19 == 0 ||
              ((uVar14 == 0 &&
               ((int)(iVar19 + (uint)*(ushort *)((int)psStack00000028 + iStack00000018 * 2) + 1) <
                (int)(iVar16 + (-2 - (uint)*(ushort *)((int)psStack00000028 + uStack00000014 * 2))))
               ))); iVar19 = iVar19 + uVar3 + 2) {
            uVar3 = *(ushort *)((int)psStack00000028 + iStack00000018 * 2);
            iVar16 = iVar16 + (-2 - (uint)*(ushort *)((int)psStack00000028 + uStack00000014 * 2));
            iStack00000018 = *piVar12 + -1;
            uStack00000014 = *piVar12 + -2;
            *piVar12 = iStack00000018;
            iStack00000018 = iStack00000018 - uVar18;
          }
          piVar12 = piVar12 + -1;
          *piVar22 = iVar19;
          piVar22[-1] = iVar16;
        }
        if (1 < *(uint *)(in_stack_000000ac + 0x48)) {
          iVar16 = 0;
          uStack00000014 = 0;
          bVar1 = **(byte **)(in_stack_000000ac + 0x38);
          iStack00000018 = uStack00000014;
          do {
            uStack00000014 = iStack00000018;
            if ((int)uStack00000014 < iVar26) {
              in_stack_000000a0 = *(byte **)((int)&stack0x000000ac + iVar16);
              *(byte **)((int)&stack0x000000c4 + iVar16) = in_stack_000000a0;
              uVar8 = *(undefined4 *)(in_stack_000000a0 + 0x44);
              *(undefined4 *)((int)&stack0x000000ac + iVar16) = 0;
              in_stack_00000098 = FUN_002733c4(uVar8);
joined_r0x0027f23a:
              iStack00000018 = uStack00000014 + 1;
              if (in_stack_00000098 != 0) goto LAB_0027f598;
            }
            else {
              uVar8 = 1;
              if (uVar14 == 0) {
                uVar8 = in_stack_0000009c;
              }
              in_stack_00000098 = FUN_0027daa4(iVar34,&stack0x000000a0,&stack0x0000009c,uVar8);
              iStack00000018 = uStack00000014;
              if (in_stack_00000098 != 0) goto LAB_0027f598;
              *(byte **)((int)&stack0x000000c4 + iVar16) = in_stack_000000a0;
              if (*(char *)(iVar34 + 0x11) != '\0') {
                FUN_0027df1c(iVar34,*(undefined4 *)(in_stack_000000a0 + 0x48),5,
                             *(undefined4 *)(iVar31 + 0x48));
                goto joined_r0x0027f23a;
              }
            }
            iVar16 = iVar16 + 4;
            iStack00000018 = uStack00000014 + 1;
          } while (iStack00000018 <= (int)uStack00000010);
          piStack0000002c = &stack0x000000ac + iStack00000018;
          for (piStack00000030 = (int *)iStack00000018; (int)piStack00000030 < iVar26;
              piStack00000030 = (int *)((int)piStack00000030 + 1)) {
            iVar16 = *piStack0000002c;
            if (in_stack_00000098 == 0) {
              in_stack_00000098 =
                   FUN_0027e534(*(undefined4 *)(iVar16 + 0x34),iVar16,*(undefined4 *)(iVar16 + 0x48)
                               );
            }
            if (in_stack_00000098 != 0) goto LAB_0027f598;
            FUN_00274a30(*piStack0000002c);
            *piStack0000002c = 0;
            piStack0000002c = piStack0000002c + 1;
          }
          piStack00000030 = &stack0x000000c4;
          piVar12 = piStack00000030;
          iVar16 = 0;
          while (piVar22 = piVar12, iVar16 < (int)uStack00000010) {
            iVar32 = *piVar22;
            iVar28 = iVar16 + 1;
            piVar12 = piStack00000030 + iVar28;
            iVar19 = iVar16;
            iVar27 = iVar16;
            uStack00000054 = *(uint *)(iVar32 + 0x48);
            while (iVar23 = iVar27 + 1, iVar27 != uStack00000010) {
              iVar29 = *piVar12;
              piVar12 = piVar12 + 1;
              iVar27 = iVar23;
              if (*(uint *)(iVar29 + 0x48) < uStack00000054) {
                iVar19 = iVar23;
                uStack00000054 = *(uint *)(iVar29 + 0x48);
              }
            }
            bVar35 = iVar16 < iVar19;
            piVar12 = piVar22 + 1;
            iVar16 = iVar28;
            if (bVar35) {
              *piVar22 = piStack00000030[iVar19];
              piStack00000030[iVar19] = iVar32;
            }
          }
          FUN_0025ba48(iVar15,*(undefined4 *)((&stack0x000000c4)[uStack00000014] + 0x48));
          uStack00000010 = 0;
          iStack00000048 = 0;
          iVar15 = 0;
          do {
            iVar16 = (&stack0x000000c4)[uStack00000010];
            FUN_0026b790(iVar16,(uint)bVar1);
            iVar19 = *(int *)(&stack0x000000d8 + uStack00000010 * 4);
            FUN_0025e360(iVar16,iVar19 - iVar15,pbStack00000020 + iVar15 * 4,
                         (ushort *)((int)psStack00000028 + iVar15 * 2));
            if (iVar19 < (int)uStack0000001c) {
              __src = *(void **)(pbStack00000020 + iVar19 * 4);
              piStack0000002c =
                   (int *)((uint)*(ushort *)((int)psStack00000028 + iVar19 * 2) + iVar10);
              pvVar17 = (void *)(iVar25 + iStack00000048);
              if (*(char *)(iVar16 + 3) == '\0') {
                memcpy((void *)(*(int *)(iVar16 + 0x38) + 8),__src,4);
                pvVar17 = __src;
              }
              else if (uVar18 == 0) {
                pvVar17 = (void *)((int)__src + -4);
                if (*(ushort *)((int)psStack00000028 + iVar19 * 2) == 4) {
                  piStack0000002c = (int *)FUN_00260b9e(iVar31,pvVar17);
                }
              }
              else {
                iVar19 = iVar19 + -1;
                FUN_00260a6c(iVar16,*(undefined4 *)(pbStack00000020 + iVar19 * 4),&stack0x00000100);
                iVar15 = FUN_00260960((int)pvVar17 + 4,extraout_r1,in_stack_00000100,
                                      in_stack_00000104);
                piStack0000002c = (int *)(iVar15 + 4);
              }
              FUN_0027e7d4(iVar31,uStack00000034,pvVar17,piStack0000002c);
              if (in_stack_00000098 != 0) goto LAB_0027f598;
              iVar19 = iVar19 + 1;
              iStack00000048 = iStack00000048 + (int)piStack0000002c;
              uStack00000034 = uStack00000034 + 1;
            }
            uStack00000010 = uStack00000010 + 1;
            iVar15 = iVar19;
          } while ((int)uStack00000010 < iStack00000018);
          if (-1 < (int)((uint)bVar1 << 0x1c)) {
            memcpy((void *)(*(int *)((&stack0x000000c4)[uStack00000014] + 0x38) + 8),
                   (void *)(*(int *)((&stack0x000000b8)[uStack0000003c] + 0x38) + 8),4);
          }
          iVar15 = in_stack_000000c4;
          if (((pbStack00000044 == (byte *)0x1) && (*(short *)(iVar31 + 0x10) == 0)) &&
             ((ushort)*(byte *)(iVar31 + 5) <= *(ushort *)(in_stack_000000c4 + 0xe))) {
            if (in_stack_00000098 == 0) {
              FUN_0027e092(in_stack_000000c4,iVar31,&stack0x00000098);
            }
            if (in_stack_00000098 == 0) {
              in_stack_00000098 =
                   FUN_0027e534(*(undefined4 *)(iVar15 + 0x34),iVar15,*(undefined4 *)(iVar15 + 0x48)
                               );
            }
            goto LAB_0027f598;
          }
          if (*(char *)(iVar34 + 0x11) == '\0') goto LAB_0027f598;
          uStack00000034 = (uint)*(byte *)(in_stack_000000b8 + 1);
          puStack00000038 = (undefined1 *)(*(ushort *)(in_stack_000000b8 + 0x10) + uStack00000034);
          if (uStack00000034 == 0) {
            uStack00000014 = 0xffffffff;
          }
          else {
            uStack00000014 = (uint)*(ushort *)(in_stack_000000b8 + 0x14);
          }
          uStack0000003c = 0;
          piStack0000002c = (int *)0x0;
          uStack00000010 = 0;
          uVar13 = (uint)(uVar18 == 0);
          iVar31 = in_stack_000000b8;
          pbStack00000044 = pbStack00000020;
          do {
            if ((int)uStack0000001c <= (int)uStack00000010) {
              if (uVar9 == 0) {
                for (; (int)uStack00000024 < iStack00000018; uStack00000024 = uStack00000024 + 1) {
                  iVar31 = *piStack00000030;
                  piStack00000030 = piStack00000030 + 1;
                  uVar8 = FUN_0025ba30(*(int *)(iVar31 + 0x38) + 8);
                  FUN_0027df1c(iVar34,uVar8,5,*(undefined4 *)(iVar31 + 0x48));
                }
              }
              goto LAB_0027f598;
            }
            uVar14 = 0;
            while ((undefined1 *)uStack00000010 == puStack00000038) {
              piStack0000002c = (int *)((int)piStack0000002c + 1);
              iVar31 = (&stack0x000000b8)[(int)piStack0000002c];
              uVar11 = (uint)*(byte *)(iVar31 + 1);
              puStack00000038 =
                   (undefined1 *)
                   (uStack00000010 + uVar13 + (uint)*(ushort *)(iVar31 + 0x10) + uVar11);
              uVar14 = uVar13;
              if (uVar11 != 0) {
                uStack00000014 = uStack00000010 + uVar13 + (uint)*(ushort *)(iVar31 + 0x14);
                uStack00000034 = uVar11;
              }
            }
            if (uStack00000010 == uStack00000014) {
              uStack00000034 = uStack00000034 - 1;
              if ((int)uStack00000034 < 1) {
                uStack00000014 = uStack00000010;
              }
              else {
                uStack00000014 = uStack00000010 + 1;
              }
              uVar14 = 1;
            }
            if (uStack00000010 == *(uint *)(&stack0x000000d8 + uStack0000003c * 4)) {
              uStack0000003c = uStack0000003c + 1;
              iVar15 = (&stack0x000000c4)[uStack0000003c];
              if (uVar18 != 0) goto LAB_0027f4fc;
            }
            else {
LAB_0027f4fc:
              if ((uVar14 != 0) || (*(int *)(iVar31 + 0x48) != *(int *)(iVar15 + 0x48))) {
                if (uVar9 == 0) {
                  uVar8 = FUN_0025ba30(*(undefined4 *)pbStack00000044);
                  FUN_0027df1c(iVar34,uVar8,5,*(undefined4 *)(iVar15 + 0x48));
                }
                if ((*(ushort *)(iVar15 + 10) < *(ushort *)psStack00000028) &&
                   (in_stack_00000098 == 0)) {
                  FUN_0027dfbc(iVar15,*(undefined4 *)pbStack00000044,&stack0x00000098);
                }
              }
            }
            uStack00000010 = uStack00000010 + 1;
            psStack00000028 = (size_t *)((int)psStack00000028 + 2);
            pbStack00000044 = pbStack00000044 + 4;
          } while( true );
        }
        in_stack_00000098 = FUN_0026b4e4(DAT_0027f4d4);
LAB_0027f1b6:
        iStack00000018 = 0;
        goto LAB_0027f598;
      }
      in_stack_00000098 = 7;
      iStack00000018 = 0;
      goto LAB_0027f598;
    }
    uVar13 = (uStack00000024 - 1) + uStack00000034;
    if ((uVar13 == *(ushort *)(iVar31 + 0x14)) && (*(byte *)(iVar31 + 1) != 0)) {
      iVar16 = *(int *)(iVar31 + 0x20);
      *piVar12 = iVar16;
      in_stack_0000009c = (byte *)FUN_0025ba30(iVar16);
      sVar6 = FUN_00260b9e(iVar31,iVar16);
      *psStack00000028 = sVar6;
      *(undefined1 *)(iVar31 + 1) = 0;
    }
    else {
      iVar16 = (uVar13 - *(byte *)(iVar31 + 1)) * 2;
      pvVar17 = (void *)(*(int *)(iVar31 + 0x38) +
                        (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar31 + 0x40) + iVar16),
                                        *(undefined1 *)(*(int *)(iVar31 + 0x40) + iVar16 + 1)) &
                              *(ushort *)(iVar31 + 0x12)));
      *piVar12 = (int)pvVar17;
      in_stack_0000009c = (byte *)FUN_0025ba30(pvVar17);
      sVar6 = FUN_00260b9e(iVar31,pvVar17);
      *psStack00000028 = sVar6;
      if ((*(ushort *)(iVar34 + 0x16) & 4) != 0) {
        if (*(int *)(iVar34 + 0x24) < (int)((int)pvVar17 + (sVar6 - *(int *)(iVar31 + 0x38)))) {
          in_stack_00000098 = FUN_0026b4e4(DAT_0027f130);
          memset(&stack0x000000ac,0,uStack00000024 << 2);
          pbStack00000020 = (byte *)0x0;
          goto LAB_0027f1b6;
        }
        memcpy((void *)((int)pvVar17 + (iVar25 - *(int *)(iVar31 + 0x38))),pvVar17,sVar6);
        *piVar12 = (int)pvVar17 + (iVar25 - *(int *)(iVar31 + 0x38));
      }
      if (in_stack_00000098 == 0) {
        FUN_0026b9bc(iVar31,uVar13 - *(byte *)(iVar31 + 1),sVar6,&stack0x00000098);
      }
    }
    piVar12 = piVar12 + -1;
    psStack00000028 = psStack00000028 + -1;
    uStack00000024 = uStack00000024 - 1;
  } while( true );
}


