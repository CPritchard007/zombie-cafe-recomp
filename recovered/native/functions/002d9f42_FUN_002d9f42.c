/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9f42 FUN_002d9f42 */

void FUN_002d9f42(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r4;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint unaff_r5;
  int iVar12;
  uint uVar13;
  int unaff_r6;
  uint unaff_r7;
  int iVar14;
  uint in_stack_00000020;
  uint in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_0000002c;
  int iStack00000030;
  uint in_stack_00000034;
  uint in_stack_00000038;
  uint uStack0000003c;
  int in_stack_00000044;
  undefined1 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  undefined2 uStack0000006a;
  undefined2 in_stack_0000006c;
  
  do {
    while( true ) {
      while( true ) {
        png_error(unaff_r6,param_2);
        iVar2 = __udivsi3(0xff,in_stack_00000024 - 1);
        if (*(short *)(unaff_r6 + unaff_r4) == 0) {
          uStack0000003c = 0x100;
          iStack00000030 = 0;
        }
        else {
          uStack0000003c = (uint)*(ushort *)(unaff_r6 + 0x280);
          iStack00000030 = 0;
          if (((in_stack_00000038 & unaff_r5) == 0) &&
             (iStack00000030 = 0xff, in_stack_00000028 == 2)) {
            iStack00000030 = DAT_002da0fc;
          }
        }
        uVar9 = 0;
        for (unaff_r5 = 0; unaff_r5 != in_stack_00000024; unaff_r5 = unaff_r5 + 1) {
          uVar6 = in_stack_00000034;
          uVar8 = unaff_r7;
          if (unaff_r5 != uStack0000003c) {
            uVar6 = uVar9;
            uVar8 = uVar9;
          }
          FUN_002d9888(in_stack_0000002c,unaff_r5,uVar6,uVar8);
          uVar9 = uVar9 + iVar2;
        }
        unaff_r4 = 0x218;
        uVar9 = (uint)*(byte *)(unaff_r6 + 0x218);
        FUN_002da836();
        if (0xff < uVar9) break;
        param_2 = DAT_002da110 + 0x2d9fdc;
      }
      in_stack_00000024 = FUN_002d9caa(in_stack_0000002c);
      if (*(short *)(unaff_r6 + 0x218) == 0) {
        FUN_002da84a();
      }
      if ((((in_stack_00000038 & 1) != 0) || (unaff_r7 != in_stack_00000020)) ||
         (in_stack_00000034 != unaff_r7)) break;
LAB_002da07a:
      uVar9 = unaff_r7;
      if (in_stack_00000028 == 2) {
        uVar9 = unaff_r7 * 0xff >> 0xf;
        uVar9 = ((uint)*(byte *)(*(int *)(iStack00000030 + DAT_002da11c) + uVar9) *
                 (unaff_r7 * 0x1fe0000 >> 0x11) >> 0xc) +
                (uint)*(ushort *)(uVar9 * 2 + *(int *)(iStack00000030 + DAT_002da120)) >> 8 & 0xff;
        FUN_002d9888(in_stack_0000002c,uVar9,unaff_r7,unaff_r7);
      }
      uStack00000066 = (undefined2)uVar9;
      unaff_r7 = 0;
      uStack00000064 = 0;
      uVar9 = 0;
      unaff_r5 = 0x100;
      uStack00000068 = uStack00000066;
      uStack0000006a = uStack00000066;
      in_stack_0000006c = uStack00000066;
      png_set_background_fixed(unaff_r6,&stack0x00000064,1);
      unaff_r4 = 0;
      FUN_002da8a0();
LAB_002da0e6:
      if (0xff < uVar9) {
        iVar12 = 0x73;
        iVar2 = 0;
        do {
          uVar3 = __udivsi3(iVar12,0xe7);
          iVar10 = iVar2 + 1;
          FUN_002d9888(in_stack_0000002c,iVar2,uVar3);
          iVar12 = iVar12 + 0x100;
          iVar2 = iVar10;
        } while (iVar10 != 0xe7);
        FUN_002d9888(in_stack_0000002c,0xe7,in_stack_00000034,unaff_r7);
        iVar2 = *(int *)(iStack00000030 + DAT_002da488);
        if (in_stack_00000028 == 1) {
          in_stack_00000034 = (uint)*(ushort *)(iVar2 + in_stack_00000034 * 2);
          unaff_r7 = (uint)*(ushort *)(iVar2 + unaff_r7 * 2);
        }
        iVar10 = in_stack_00000034 * -0x33;
        in_stack_00000028 = in_stack_00000034 * 0xcc;
        in_stack_00000034 = unaff_r7 * 0xcc;
        iVar14 = 0xe8;
        in_stack_00000020 = 0x33;
        iVar12 = *(int *)(iStack00000030 + DAT_002da48c);
        do {
          iVar11 = 0;
          iVar7 = *(int *)(iStack00000030 + DAT_002da490);
          iVar4 = iVar14;
          do {
            puVar1 = (ushort *)(iVar2 + iVar11);
            iVar11 = iVar11 + 0x66;
            iVar5 = in_stack_00000020 * *puVar1;
            uVar13 = in_stack_00000028 + iVar5;
            uVar6 = uVar13 >> 0xf;
            uVar8 = iVar5 + in_stack_00000034;
            uVar9 = uVar8 >> 0xf;
            FUN_002d9888(in_stack_0000002c,iVar4,
                         (uint)*(ushort *)(uVar6 * 2 + iVar7) +
                         ((uint)*(byte *)(iVar12 + uVar6) * (uVar13 & 0x7fff) >> 0xc) >> 8 & 0xff,
                         ((uVar8 & 0x7fff) * (uint)*(byte *)(iVar12 + uVar9) >> 0xc) +
                         (uint)*(ushort *)(uVar9 * 2 + iVar7) >> 8 & 0xff);
            iVar4 = iVar4 + 1;
          } while (iVar11 != 0x264);
          in_stack_00000020 = in_stack_00000020 + 0x33;
          iVar14 = iVar14 + 6;
          in_stack_00000028 = in_stack_00000028 + iVar10;
          in_stack_00000034 = in_stack_00000034 + unaff_r7 * -0x33;
        } while (iVar14 != 0x100);
        FUN_002da8a0();
        return;
      }
      param_2 = (int)&DAT_002da0f0 + DAT_002da124;
    }
    FUN_002d9888(in_stack_0000002c,0xfe,in_stack_00000034,unaff_r7);
    in_stack_00000020 = 1;
    FUN_002da932();
    unaff_r4 = 1;
    uVar9 = *(uint *)(in_stack_00000044 + 0x18);
    unaff_r5 = in_stack_00000038;
    if ((in_stack_00000038 & 1) == 0) {
LAB_002da056:
      unaff_r4 = in_stack_00000038 << 0x1e;
      if (((int)unaff_r4 < 0) &&
         ((unaff_r5 = 1, unaff_r7 != 1 || (unaff_r4 = in_stack_00000034, in_stack_00000034 != 1))))
      goto LAB_002da0e6;
      if (0xff < uVar9) {
        in_stack_00000024 = FUN_002d9caa(in_stack_0000002c);
        goto LAB_002da07a;
      }
      param_2 = DAT_002da118 + 0x2da072;
    }
    else {
      if (0xff < uVar9) {
        in_stack_00000024 = FUN_002d9c20(in_stack_0000002c);
        unaff_r5 = 0xe7;
        FUN_002da8a0();
        goto LAB_002da056;
      }
      param_2 = DAT_002da114 + 0x2da048;
    }
  } while( true );
}


