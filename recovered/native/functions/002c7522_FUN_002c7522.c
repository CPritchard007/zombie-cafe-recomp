/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c7522 FUN_002c7522 */

void FUN_002c7522(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_r1_01;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  int *unaff_r4;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  ushort *puStack00000000;
  byte *pbStack00000004;
  byte *in_stack_00000008;
  int iStack00000010;
  int *piStack0000001c;
  
  if (unaff_r4[0x6e] == 0) {
    if (*(int *)(unaff_r4[0x74] + 0xc) == 0) {
      puVar18 = (undefined4 *)unaff_r4[6];
      iVar8 = puVar18[1];
      pbVar13 = (byte *)*puVar18;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823c();
        }
        pbVar13 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      iVar8 = iVar8 + -1;
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823c();
        }
        pbVar13 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      uVar20 = (uint)*pbVar13;
      if ((uVar20 != 0xd8) || (bVar1 != 0xff)) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x37;
        *(uint *)(*unaff_r4 + 0x18) = (uint)bVar1;
        *(uint *)(*unaff_r4 + 0x1c) = uVar20;
        (**(code **)*unaff_r4)(unaff_r4);
      }
      param_2 = 0x1b8;
      unaff_r4[0x6e] = uVar20;
      *puVar18 = pbVar13 + 1;
      puVar18[1] = iVar8 + -1;
    }
    else {
      uVar22 = FUN_002c71aa(unaff_r4);
      param_2 = (undefined4)((ulonglong)uVar22 >> 0x20);
      if ((int)uVar22 == 0) {
        FUN_002c823c();
        param_2 = extraout_r1;
      }
    }
  }
  iVar8 = unaff_r4[0x6e];
  if (iVar8 < 0xd0) {
    if (0xcc < iVar8) {
LAB_002c7724:
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x3f;
      FUN_002c821e(0x1b8,param_2,unaff_r4[0x6e],*unaff_r4);
LAB_002c7736:
      iVar10 = DAT_002c7868;
      puVar18 = (undefined4 *)unaff_r4[6];
      in_stack_00000008 = (byte *)*puVar18;
      iVar8 = puVar18[1];
      if (*(int *)(unaff_r4[0x74] + 0x10) == 0) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x3c;
        strncpy((char *)(*unaff_r4 + 0x18),(char *)(iVar10 + 0x2c7756),0x50);
        (**(code **)*unaff_r4)(unaff_r4);
      }
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823e();
        }
        in_stack_00000008 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      bVar1 = *in_stack_00000008;
      iVar8 = iVar8 + -1;
      in_stack_00000008 = in_stack_00000008 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823e();
        }
        in_stack_00000008 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      bVar2 = *in_stack_00000008;
      iVar8 = iVar8 + -1;
      in_stack_00000008 = in_stack_00000008 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823e();
        }
        in_stack_00000008 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      uVar20 = (uint)*in_stack_00000008;
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x69;
      *(uint *)(*unaff_r4 + 0x18) = uVar20;
      (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
      if ((((uint)bVar1 * 0x100 + (uint)bVar2 != (uVar20 + 3) * 2) || (4 < uVar20)) ||
         ((uVar20 == 0 && (unaff_r4[0x38] == 0)))) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
        (**(code **)*unaff_r4)(unaff_r4);
      }
      unaff_r4[0x55] = uVar20;
      pbStack00000004 = (byte *)0x0;
      piVar4 = unaff_r4;
      while( true ) {
        in_stack_00000008 = in_stack_00000008 + 1;
        iVar8 = iVar8 + -1;
        if ((int)uVar20 <= (int)pbStack00000004) break;
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c8234();
          }
          in_stack_00000008 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        iVar8 = iVar8 + -1;
        uVar15 = (uint)*in_stack_00000008;
        iVar10 = 0;
        piVar6 = unaff_r4;
        while( true ) {
          if ((int)pbStack00000004 <= iVar10) goto LAB_002c7892;
          piVar3 = piVar6 + 0x56;
          piVar6 = piVar6 + 1;
          if (uVar15 == *(uint *)*piVar3) break;
          iVar10 = iVar10 + 1;
        }
        iVar10 = *(int *)unaff_r4[0x56];
        piVar6 = unaff_r4;
        for (iVar11 = 1; iVar11 < (int)pbStack00000004; iVar11 = iVar11 + 1) {
          if (iVar10 < *(int *)piVar6[0x57]) {
            iVar10 = *(int *)piVar6[0x57];
          }
          piVar6 = piVar6 + 1;
        }
        uVar15 = iVar10 + 1;
LAB_002c7892:
        puVar19 = (uint *)unaff_r4[0x36];
        for (iVar10 = 0; iVar10 < unaff_r4[9]; iVar10 = iVar10 + 1) {
          if (uVar15 == *puVar19) goto LAB_002c78be;
          puVar19 = puVar19 + 0x16;
        }
        *(undefined4 *)(*unaff_r4 + 0x14) = 4;
        *(uint *)(*unaff_r4 + 0x18) = uVar15;
        (**(code **)*unaff_r4)(unaff_r4);
LAB_002c78be:
        piVar4[0x56] = (int)puVar19;
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c8234();
          }
          in_stack_00000008 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        else {
          in_stack_00000008 = in_stack_00000008 + 1;
        }
        bVar1 = *in_stack_00000008;
        puVar19[5] = (int)(uint)bVar1 >> 4;
        puVar19[6] = bVar1 & 0xf;
        iVar10 = *unaff_r4;
        *(uint *)(iVar10 + 0x18) = *puVar19;
        *(uint *)(iVar10 + 0x1c) = puVar19[5];
        *(uint *)(iVar10 + 0x20) = puVar19[6];
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
        (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
        pbStack00000004 = (byte *)((int)pbStack00000004 + 1);
        piVar4 = piVar4 + 1;
      }
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823e();
        }
        in_stack_00000008 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      iVar8 = iVar8 + -1;
      pbVar13 = in_stack_00000008 + 1;
      unaff_r4[0x67] = (uint)*in_stack_00000008;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823e();
        }
        pbVar13 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      iVar8 = iVar8 + -1;
      unaff_r4[0x68] = (uint)*pbVar13;
      pbVar13 = pbVar13 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823e();
        }
        pbVar13 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      bVar1 = *pbVar13;
      unaff_r4[0x69] = (int)(uint)bVar1 >> 4;
      unaff_r4[0x6a] = bVar1 & 0xf;
      iVar10 = *unaff_r4;
      *(int *)(iVar10 + 0x18) = unaff_r4[0x67];
      *(int *)(iVar10 + 0x1c) = unaff_r4[0x68];
      *(int *)(iVar10 + 0x20) = unaff_r4[0x69];
      *(int *)(iVar10 + 0x24) = unaff_r4[0x6a];
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x6b;
      (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
      *(undefined4 *)(unaff_r4[0x74] + 0x14) = 0;
      if (uVar20 != 0) {
        unaff_r4[0x24] = unaff_r4[0x24] + 1;
      }
      *puVar18 = pbVar13 + 1;
      puVar18[1] = iVar8 + -1;
      unaff_r4[0x6e] = 0;
      FUN_002c823e();
      goto LAB_002c79f6;
    }
    if (iVar8 == 0xc4) {
      FUN_002c72e8(unaff_r4);
      FUN_002c820a();
      return;
    }
    if (iVar8 < 0xc5) {
      if (iVar8 != 0xc1) {
        if (0xc1 < iVar8) {
          if (iVar8 != 0xc2) {
            if (iVar8 != 0xc3) {
              FUN_002c8210();
              param_2 = extraout_r1_00;
            }
            goto LAB_002c7724;
          }
          uVar5 = 0;
          uVar9 = 1;
          uVar14 = 0;
          goto LAB_002c771c;
        }
        if (iVar8 == 1) {
          FUN_002c81e8();
        }
        if (iVar8 != 0xc0) {
          FUN_002c8210();
        }
        goto LAB_002c76f0;
      }
      uVar5 = 0;
      uVar9 = 0;
      uVar14 = uVar9;
LAB_002c771c:
      FUN_002c69c0(unaff_r4,uVar5,uVar9,uVar14);
      FUN_002c820a();
      param_2 = extraout_r1_01;
      goto LAB_002c7724;
    }
    if (iVar8 == 0xc9) {
      uVar5 = 0;
      uVar9 = 0;
      uVar14 = 1;
      goto LAB_002c771c;
    }
    if ((iVar8 < 0xc9) || (iVar8 == 0xcb)) goto LAB_002c7724;
    if (iVar8 < 0xcc) {
      uVar5 = 0;
      uVar9 = 1;
      uVar14 = uVar9;
      goto LAB_002c771c;
    }
  }
  else {
    if (iVar8 == 0xdb) {
      puVar18 = (undefined4 *)unaff_r4[6];
      iVar8 = puVar18[1];
      pbVar13 = (byte *)*puVar18;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823c();
          return;
        }
        pbVar13 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      iVar8 = iVar8 + -1;
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(unaff_r4);
        if (iVar8 == 0) {
          FUN_002c823c();
          return;
        }
        pbVar13 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      pbStack00000004 = pbVar13 + 1;
      puStack00000000 = (ushort *)((uint)bVar1 * 0x100 + (uint)*pbVar13 + -2);
      iVar8 = iVar8 + -1;
      while (0 < (int)puStack00000000) {
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c823e();
            return;
          }
          pbStack00000004 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        iVar10 = (int)(uint)*pbStack00000004 >> 4;
        uVar20 = *pbStack00000004 & 0xf;
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x53;
        *(uint *)(*unaff_r4 + 0x18) = uVar20;
        *(int *)(*unaff_r4 + 0x1c) = iVar10;
        (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
        if (3 < uVar20) {
          *(undefined4 *)(*unaff_r4 + 0x14) = 0x20;
          *(uint *)(*unaff_r4 + 0x18) = uVar20;
          (**(code **)*unaff_r4)(unaff_r4);
        }
        if (unaff_r4[uVar20 + 0x29] == 0) {
          iVar11 = jpeg_alloc_quant_table(unaff_r4);
          unaff_r4[uVar20 + 0x29] = iVar11;
        }
        iVar21 = 0x40;
        puVar16 = (ushort *)unaff_r4[uVar20 + 0x29];
        iVar12 = (int)puStack00000000 + -1;
        iVar11 = DAT_002c7e40;
        if (iVar10 == 0) {
          if (iVar12 < 0x40) {
            iVar11 = 0;
            do {
              *(undefined2 *)((int)puVar16 + iVar11) = 1;
              iVar11 = iVar11 + 2;
              iVar21 = iVar12;
            } while (iVar11 != 0x80);
            goto LAB_002c7c32;
          }
LAB_002c7c6a:
          piStack0000001c = *(int **)((int)in_stack_00000008 + iVar11);
        }
        else {
          if (0x7f < iVar12) goto LAB_002c7c6a;
          iVar11 = 0;
          do {
            *(undefined2 *)((int)puVar16 + iVar11) = 1;
            iVar11 = iVar11 + 2;
          } while (iVar11 != 0x80);
          iVar21 = iVar12 >> 1;
LAB_002c7c32:
          iVar17 = DAT_002c7e30;
          if (iVar21 == 0x10) {
LAB_002c7c62:
            piStack0000001c = *(int **)((int)in_stack_00000008 + iVar17);
          }
          else {
            iVar11 = DAT_002c7e40;
            if (iVar21 < 0x11) {
              iVar17 = DAT_002c7e2c;
              if ((iVar21 != 4) && (iVar17 = DAT_002c7e44, iVar21 != 9)) goto LAB_002c7c6a;
            }
            else {
              iVar17 = DAT_002c7e38;
              if (iVar21 != 0x24) {
                iVar17 = DAT_002c7e3c;
                if (iVar21 != 0x31) {
                  if (iVar21 == 0x19) {
                    iVar11 = DAT_002c7e34;
                  }
                  goto LAB_002c7c6a;
                }
                goto LAB_002c7c62;
              }
            }
            piStack0000001c = *(int **)((int)in_stack_00000008 + iVar17);
          }
        }
        iStack00000010 = 0;
        while( true ) {
          pbStack00000004 = pbStack00000004 + 1;
          iVar8 = iVar8 + -1;
          if (iVar21 <= iStack00000010) break;
          if (iVar10 == 0) {
            if (iVar8 == 0) {
              iVar8 = (*(code *)puVar18[3])(unaff_r4);
              if (iVar8 == 0) {
                FUN_002c823e();
                return;
              }
              pbStack00000004 = (byte *)*puVar18;
              iVar8 = puVar18[1];
            }
            uVar7 = (ushort)*pbStack00000004;
          }
          else {
            if (iVar8 == 0) {
              iVar8 = (*(code *)puVar18[3])(unaff_r4);
              if (iVar8 == 0) {
                FUN_002c823e();
                return;
              }
              pbStack00000004 = (byte *)*puVar18;
              iVar8 = puVar18[1];
            }
            bVar1 = *pbStack00000004;
            iVar8 = iVar8 + -1;
            pbStack00000004 = pbStack00000004 + 1;
            if (iVar8 == 0) {
              iVar8 = (*(code *)puVar18[3])(unaff_r4);
              if (iVar8 == 0) {
                FUN_002c823c();
                return;
              }
              pbStack00000004 = (byte *)*puVar18;
              iVar8 = puVar18[1];
            }
            uVar7 = (ushort)*pbStack00000004 + (ushort)bVar1 * 0x100;
          }
          iVar11 = *piStack0000001c;
          piStack0000001c = piStack0000001c + 1;
          puVar16[iVar11] = uVar7;
          iStack00000010 = iStack00000010 + 1;
        }
        if (1 < *(int *)(*unaff_r4 + 0x68)) {
          iStack00000010 = 8;
          puStack00000000 = puVar16;
          do {
            iVar11 = *unaff_r4;
            *(uint *)(iVar11 + 0x18) = (uint)*puStack00000000;
            *(uint *)(iVar11 + 0x1c) = (uint)puStack00000000[1];
            *(uint *)(iVar11 + 0x20) = (uint)puStack00000000[2];
            *(uint *)(iVar11 + 0x24) = (uint)puStack00000000[3];
            *(uint *)(iVar11 + 0x28) = (uint)puStack00000000[4];
            *(uint *)(iVar11 + 0x2c) = (uint)puStack00000000[5];
            *(uint *)(iVar11 + 0x30) = (uint)puStack00000000[6];
            *(uint *)(iVar11 + 0x34) = (uint)puStack00000000[7];
            *(undefined4 *)(*unaff_r4 + 0x14) = 0x5f;
            (**(code **)(*unaff_r4 + 4))(unaff_r4,2);
            iStack00000010 = iStack00000010 + -1;
            puStack00000000 = puStack00000000 + 8;
          } while (iStack00000010 != 0);
        }
        puStack00000000 = (ushort *)(iVar12 - iVar21);
        if (iVar10 != 0) {
          puStack00000000 = (ushort *)((int)puStack00000000 - iVar21);
        }
      }
      if (puStack00000000 != (ushort *)0x0) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
        (**(code **)*unaff_r4)(unaff_r4);
      }
      *puVar18 = pbStack00000004;
      goto LAB_002c7d72;
    }
    if (0xdb < iVar8) {
      if (iVar8 < 0xf0) {
        if (0xdf < iVar8) {
          FUN_002c81cc();
        }
        if (iVar8 == 0xdc) {
          FUN_002c8204();
        }
        if (iVar8 != 0xdd) {
          FUN_002c8210();
        }
        puVar18 = (undefined4 *)unaff_r4[6];
        iVar8 = puVar18[1];
        pbVar13 = (byte *)*puVar18;
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c823c();
            return;
          }
          pbVar13 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        bVar1 = *pbVar13;
        iVar8 = iVar8 + -1;
        pbVar13 = pbVar13 + 1;
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c823c();
            return;
          }
          pbVar13 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        iVar8 = iVar8 + -1;
        if ((uint)bVar1 * 0x100 + (uint)*pbVar13 != 4) {
          *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
          (**(code **)*unaff_r4)(unaff_r4);
        }
        pbVar13 = pbVar13 + 1;
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c823e();
            return;
          }
          pbVar13 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        iVar8 = iVar8 + -1;
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(unaff_r4);
          if (iVar8 == 0) {
            FUN_002c823c();
            return;
          }
          pbVar13 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        iVar10 = (uint)*pbVar13 + (uint)bVar1 * 0x100;
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x54;
        *(int *)(*unaff_r4 + 0x18) = iVar10;
        (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
        unaff_r4[0x46] = iVar10;
        *puVar18 = pbVar13 + 1;
        puVar18[1] = iVar8 + -1;
        FUN_002c8228();
        return;
      }
      if (iVar8 == 0xf8) {
        FUN_002c7e48();
      }
      if (iVar8 != 0xfe) {
        FUN_002c8210();
      }
      FUN_002c81da();
LAB_002c7662:
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x68;
      (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
      if (*(int *)(unaff_r4[0x74] + 0xc) != 0) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x40;
        (**(code **)*unaff_r4)(unaff_r4);
      }
      iVar8 = 0;
      piVar4 = unaff_r4;
      do {
        *(undefined1 *)(piVar4 + 0x3a) = 0;
        *(undefined1 *)(piVar4 + 0x3e) = 1;
        iVar8 = iVar8 + 1;
        *(undefined1 *)(piVar4 + 0x42) = 5;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (iVar8 != 0x10);
      unaff_r4[0x46] = 0;
      unaff_r4[10] = 0;
      unaff_r4[0x4c] = 0;
      unaff_r4[0x4d] = 0;
      unaff_r4[0x47] = 0;
      *(undefined1 *)(unaff_r4 + 0x48) = 1;
      *(undefined1 *)((int)unaff_r4 + DAT_002c7864) = 1;
      *(undefined1 *)((int)unaff_r4 + 0x122) = 0;
      *(undefined2 *)(unaff_r4 + 0x49) = 1;
      *(undefined2 *)((int)unaff_r4 + 0x126) = 1;
      unaff_r4[0x4a] = 0;
      *(undefined1 *)(unaff_r4 + 0x4b) = 0;
      *(undefined4 *)(unaff_r4[0x74] + 0xc) = 1;
      FUN_002c8228();
LAB_002c76f0:
      uVar5 = 1;
      uVar9 = 0;
      uVar14 = uVar9;
      goto LAB_002c771c;
    }
    if (iVar8 == 0xd8) goto LAB_002c7662;
    if (iVar8 < 0xd8) {
      FUN_002c81e8();
    }
    if (iVar8 != 0xd9) {
      if (iVar8 != 0xda) {
        FUN_002c8210();
      }
      goto LAB_002c7736;
    }
LAB_002c79f6:
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x57;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    unaff_r4[0x6e] = 0;
    FUN_002c823e();
  }
  puVar18 = (undefined4 *)unaff_r4[6];
  iVar8 = puVar18[1];
  pbVar13 = (byte *)*puVar18;
  if (iVar8 == 0) {
    iVar8 = (*(code *)puVar18[3])(unaff_r4);
    if (iVar8 == 0) {
      FUN_002c8238();
    }
    pbVar13 = (byte *)*puVar18;
    iVar8 = puVar18[1];
  }
  iVar8 = iVar8 + -1;
  bVar1 = *pbVar13;
  pbVar13 = pbVar13 + 1;
  if (iVar8 == 0) {
    iVar8 = (*(code *)puVar18[3])(unaff_r4);
    if (iVar8 == 0) {
      FUN_002c823c();
    }
    pbVar13 = (byte *)*puVar18;
    iVar8 = puVar18[1];
  }
  puStack00000000 = (ushort *)(pbVar13 + 1);
  iVar10 = (uint)bVar1 * 0x100 + (uint)*pbVar13 + -2;
  iVar8 = iVar8 + -1;
  while (0 < iVar10) {
    if (iVar8 == 0) {
      iVar8 = (*(code *)puVar18[3])(unaff_r4);
      if (iVar8 == 0) {
        FUN_002c823e();
        return;
      }
      puStack00000000 = (ushort *)*puVar18;
      iVar8 = puVar18[1];
    }
    iVar8 = iVar8 + -1;
    uVar20 = (uint)*(byte *)puStack00000000;
    if (iVar8 == 0) {
      iVar8 = (*(code *)puVar18[3])(unaff_r4);
      if (iVar8 == 0) {
        FUN_002c823c();
        return;
      }
      pbVar13 = (byte *)*puVar18;
      iVar8 = puVar18[1];
    }
    else {
      pbVar13 = (byte *)((int)puStack00000000 + 1);
    }
    bVar1 = *pbVar13;
    uVar15 = (uint)bVar1;
    puStack00000000 = (ushort *)(pbVar13 + 1);
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x51;
    iVar10 = iVar10 + -2;
    *(uint *)(*unaff_r4 + 0x18) = uVar20;
    *(uint *)(*unaff_r4 + 0x1c) = uVar15;
    iVar8 = iVar8 + -1;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    if (uVar20 < 0x20) {
      if (0xf < uVar20) goto LAB_002c7ad8;
      *(char *)((int)unaff_r4 + uVar20 + 0xe8) = (char)(uVar15 & 0xf);
      *(byte *)((int)unaff_r4 + uVar20 + 0xf8) = bVar1 >> 4;
      if ((uint)(bVar1 >> 4) < (uVar15 & 0xf)) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x1e;
        *(uint *)(*unaff_r4 + 0x18) = uVar15;
        (**(code **)*unaff_r4)(unaff_r4);
      }
    }
    else {
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x1d;
      *(uint *)(*unaff_r4 + 0x18) = uVar20;
      (**(code **)*unaff_r4)(unaff_r4);
LAB_002c7ad8:
      *(byte *)((int)unaff_r4 + uVar20 + 0xf8) = bVar1;
    }
  }
  if (iVar10 != 0) {
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
  }
  *puVar18 = puStack00000000;
LAB_002c7d72:
  puVar18[1] = iVar8;
  FUN_002c8228();
  return;
}


