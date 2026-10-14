/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c7510 FUN_002c7510 */

void FUN_002c7510(int *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_r1_01;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  ushort *puStack_38;
  byte *pbStack_34;
  byte *local_30;
  int *piStack_2c;
  int iStack_28;
  int *piStack_1c;
  
  iVar17 = DAT_002c7860 + 0x2c751e;
  if (param_1[0x6e] == 0) {
    if (*(int *)(param_1[0x74] + 0xc) == 0) {
      puVar18 = (undefined4 *)param_1[6];
      iVar8 = puVar18[1];
      pbVar12 = (byte *)*puVar18;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(param_1);
        if (iVar8 == 0) {
          FUN_002c823c();
        }
        pbVar12 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      iVar8 = iVar8 + -1;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(param_1);
        if (iVar8 == 0) {
          FUN_002c823c();
        }
        pbVar12 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      uVar20 = (uint)*pbVar12;
      if ((uVar20 != 0xd8) || (bVar1 != 0xff)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x37;
        *(uint *)(*param_1 + 0x18) = (uint)bVar1;
        *(uint *)(*param_1 + 0x1c) = uVar20;
        (**(code **)*param_1)(param_1);
      }
      param_2 = 0x1b8;
      param_1[0x6e] = uVar20;
      *puVar18 = pbVar12 + 1;
      puVar18[1] = iVar8 + -1;
    }
    else {
      uVar22 = FUN_002c71aa(param_1);
      param_2 = (undefined4)((ulonglong)uVar22 >> 0x20);
      if ((int)uVar22 == 0) {
        FUN_002c823c();
        param_2 = extraout_r1;
      }
    }
  }
  iVar8 = param_1[0x6e];
  if (iVar8 < 0xd0) {
    if (0xcc < iVar8) {
LAB_002c7724:
      *(undefined4 *)(*param_1 + 0x14) = 0x3f;
      FUN_002c821e(0x1b8,param_2,param_1[0x6e],*param_1);
LAB_002c7736:
      iVar8 = DAT_002c7868;
      puVar18 = (undefined4 *)param_1[6];
      local_30 = (byte *)*puVar18;
      iVar17 = puVar18[1];
      if (*(int *)(param_1[0x74] + 0x10) == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x3c;
        strncpy((char *)(*param_1 + 0x18),(char *)(iVar8 + 0x2c7756),0x50);
        (**(code **)*param_1)(param_1);
      }
      if (iVar17 == 0) {
        iVar17 = (*(code *)puVar18[3])(param_1);
        if (iVar17 == 0) {
          FUN_002c823e();
        }
        local_30 = (byte *)*puVar18;
        iVar17 = puVar18[1];
      }
      bVar1 = *local_30;
      iVar17 = iVar17 + -1;
      local_30 = local_30 + 1;
      if (iVar17 == 0) {
        iVar17 = (*(code *)puVar18[3])(param_1);
        if (iVar17 == 0) {
          FUN_002c823e();
        }
        local_30 = (byte *)*puVar18;
        iVar17 = puVar18[1];
      }
      bVar2 = *local_30;
      iVar17 = iVar17 + -1;
      local_30 = local_30 + 1;
      if (iVar17 == 0) {
        iVar17 = (*(code *)puVar18[3])(param_1);
        if (iVar17 == 0) {
          FUN_002c823e();
        }
        local_30 = (byte *)*puVar18;
        iVar17 = puVar18[1];
      }
      uVar20 = (uint)*local_30;
      *(undefined4 *)(*param_1 + 0x14) = 0x69;
      *(uint *)(*param_1 + 0x18) = uVar20;
      (**(code **)(*param_1 + 4))(param_1,1);
      if ((((uint)bVar1 * 0x100 + (uint)bVar2 != (uVar20 + 3) * 2) || (4 < uVar20)) ||
         ((uVar20 == 0 && (param_1[0x38] == 0)))) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      param_1[0x55] = uVar20;
      pbStack_34 = (byte *)0x0;
      piStack_2c = param_1;
      while( true ) {
        local_30 = local_30 + 1;
        iVar17 = iVar17 + -1;
        if ((int)uVar20 <= (int)pbStack_34) break;
        if (iVar17 == 0) {
          iVar17 = (*(code *)puVar18[3])(param_1);
          if (iVar17 == 0) {
            FUN_002c8234();
          }
          local_30 = (byte *)*puVar18;
          iVar17 = puVar18[1];
        }
        iVar17 = iVar17 + -1;
        uVar14 = (uint)*local_30;
        iVar8 = 0;
        piVar5 = param_1;
        while( true ) {
          if ((int)pbStack_34 <= iVar8) goto LAB_002c7892;
          piVar3 = piVar5 + 0x56;
          piVar5 = piVar5 + 1;
          if (uVar14 == *(uint *)*piVar3) break;
          iVar8 = iVar8 + 1;
        }
        iVar8 = *(int *)param_1[0x56];
        piVar5 = param_1;
        for (iVar10 = 1; iVar10 < (int)pbStack_34; iVar10 = iVar10 + 1) {
          if (iVar8 < *(int *)piVar5[0x57]) {
            iVar8 = *(int *)piVar5[0x57];
          }
          piVar5 = piVar5 + 1;
        }
        uVar14 = iVar8 + 1;
LAB_002c7892:
        puVar19 = (uint *)param_1[0x36];
        for (iVar8 = 0; iVar8 < param_1[9]; iVar8 = iVar8 + 1) {
          if (uVar14 == *puVar19) goto LAB_002c78be;
          puVar19 = puVar19 + 0x16;
        }
        *(undefined4 *)(*param_1 + 0x14) = 4;
        *(uint *)(*param_1 + 0x18) = uVar14;
        (**(code **)*param_1)(param_1);
LAB_002c78be:
        piStack_2c[0x56] = (int)puVar19;
        if (iVar17 == 0) {
          iVar17 = (*(code *)puVar18[3])(param_1);
          if (iVar17 == 0) {
            FUN_002c8234();
          }
          local_30 = (byte *)*puVar18;
          iVar17 = puVar18[1];
        }
        else {
          local_30 = local_30 + 1;
        }
        bVar1 = *local_30;
        puVar19[5] = (int)(uint)bVar1 >> 4;
        puVar19[6] = bVar1 & 0xf;
        iVar8 = *param_1;
        *(uint *)(iVar8 + 0x18) = *puVar19;
        *(uint *)(iVar8 + 0x1c) = puVar19[5];
        *(uint *)(iVar8 + 0x20) = puVar19[6];
        *(undefined4 *)(*param_1 + 0x14) = 0x6a;
        (**(code **)(*param_1 + 4))(param_1,1);
        pbStack_34 = (byte *)((int)pbStack_34 + 1);
        piStack_2c = piStack_2c + 1;
      }
      if (iVar17 == 0) {
        iVar17 = (*(code *)puVar18[3])(param_1);
        if (iVar17 == 0) {
          FUN_002c823e();
        }
        local_30 = (byte *)*puVar18;
        iVar17 = puVar18[1];
      }
      iVar17 = iVar17 + -1;
      pbVar12 = local_30 + 1;
      param_1[0x67] = (uint)*local_30;
      if (iVar17 == 0) {
        iVar17 = (*(code *)puVar18[3])(param_1);
        if (iVar17 == 0) {
          FUN_002c823e();
        }
        pbVar12 = (byte *)*puVar18;
        iVar17 = puVar18[1];
      }
      iVar17 = iVar17 + -1;
      param_1[0x68] = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
      if (iVar17 == 0) {
        iVar17 = (*(code *)puVar18[3])(param_1);
        if (iVar17 == 0) {
          FUN_002c823e();
        }
        pbVar12 = (byte *)*puVar18;
        iVar17 = puVar18[1];
      }
      bVar1 = *pbVar12;
      param_1[0x69] = (int)(uint)bVar1 >> 4;
      param_1[0x6a] = bVar1 & 0xf;
      iVar8 = *param_1;
      *(int *)(iVar8 + 0x18) = param_1[0x67];
      *(int *)(iVar8 + 0x1c) = param_1[0x68];
      *(int *)(iVar8 + 0x20) = param_1[0x69];
      *(int *)(iVar8 + 0x24) = param_1[0x6a];
      *(undefined4 *)(*param_1 + 0x14) = 0x6b;
      (**(code **)(*param_1 + 4))(param_1,1);
      *(undefined4 *)(param_1[0x74] + 0x14) = 0;
      if (uVar20 != 0) {
        param_1[0x24] = param_1[0x24] + 1;
      }
      *puVar18 = pbVar12 + 1;
      puVar18[1] = iVar17 + -1;
      param_1[0x6e] = 0;
      FUN_002c823e();
      goto LAB_002c79f6;
    }
    if (iVar8 == 0xc4) {
      FUN_002c72e8(param_1);
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
          uVar6 = 0;
          uVar9 = 1;
          uVar13 = 0;
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
      uVar6 = 0;
      uVar9 = 0;
      uVar13 = uVar9;
LAB_002c771c:
      FUN_002c69c0(param_1,uVar6,uVar9,uVar13);
      FUN_002c820a();
      param_2 = extraout_r1_01;
      goto LAB_002c7724;
    }
    if (iVar8 == 0xc9) {
      uVar6 = 0;
      uVar9 = 0;
      uVar13 = 1;
      goto LAB_002c771c;
    }
    if ((iVar8 < 0xc9) || (iVar8 == 0xcb)) goto LAB_002c7724;
    if (iVar8 < 0xcc) {
      uVar6 = 0;
      uVar9 = 1;
      uVar13 = uVar9;
      goto LAB_002c771c;
    }
  }
  else {
    if (iVar8 == 0xdb) {
      puVar18 = (undefined4 *)param_1[6];
      iVar8 = puVar18[1];
      pbVar12 = (byte *)*puVar18;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(param_1);
        if (iVar8 == 0) {
          FUN_002c823c();
          return;
        }
        pbVar12 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      iVar8 = iVar8 + -1;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      if (iVar8 == 0) {
        iVar8 = (*(code *)puVar18[3])(param_1);
        if (iVar8 == 0) {
          FUN_002c823c();
          return;
        }
        pbVar12 = (byte *)*puVar18;
        iVar8 = puVar18[1];
      }
      pbStack_34 = pbVar12 + 1;
      puStack_38 = (ushort *)((uint)bVar1 * 0x100 + (uint)*pbVar12 + -2);
      iVar8 = iVar8 + -1;
      while (0 < (int)puStack_38) {
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar18[3])(param_1);
          if (iVar8 == 0) {
            FUN_002c823e();
            return;
          }
          pbStack_34 = (byte *)*puVar18;
          iVar8 = puVar18[1];
        }
        iVar10 = (int)(uint)*pbStack_34 >> 4;
        uVar20 = *pbStack_34 & 0xf;
        *(undefined4 *)(*param_1 + 0x14) = 0x53;
        *(uint *)(*param_1 + 0x18) = uVar20;
        *(int *)(*param_1 + 0x1c) = iVar10;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (3 < uVar20) {
          *(undefined4 *)(*param_1 + 0x14) = 0x20;
          *(uint *)(*param_1 + 0x18) = uVar20;
          (**(code **)*param_1)(param_1);
        }
        if (param_1[uVar20 + 0x29] == 0) {
          iVar4 = jpeg_alloc_quant_table(param_1);
          param_1[uVar20 + 0x29] = iVar4;
        }
        iVar21 = 0x40;
        puVar15 = (ushort *)param_1[uVar20 + 0x29];
        iVar11 = (int)puStack_38 + -1;
        iVar4 = DAT_002c7e40;
        if (iVar10 == 0) {
          if (iVar11 < 0x40) {
            iVar4 = 0;
            do {
              *(undefined2 *)((int)puVar15 + iVar4) = 1;
              iVar4 = iVar4 + 2;
              iVar21 = iVar11;
            } while (iVar4 != 0x80);
            goto LAB_002c7c32;
          }
LAB_002c7c6a:
          piStack_1c = *(int **)(iVar17 + iVar4);
        }
        else {
          if (0x7f < iVar11) goto LAB_002c7c6a;
          iVar4 = 0;
          do {
            *(undefined2 *)((int)puVar15 + iVar4) = 1;
            iVar4 = iVar4 + 2;
          } while (iVar4 != 0x80);
          iVar21 = iVar11 >> 1;
LAB_002c7c32:
          iVar16 = DAT_002c7e30;
          if (iVar21 == 0x10) {
LAB_002c7c62:
            piStack_1c = *(int **)(iVar17 + iVar16);
          }
          else {
            iVar4 = DAT_002c7e40;
            if (iVar21 < 0x11) {
              iVar16 = DAT_002c7e2c;
              if ((iVar21 != 4) && (iVar16 = DAT_002c7e44, iVar21 != 9)) goto LAB_002c7c6a;
            }
            else {
              iVar16 = DAT_002c7e38;
              if (iVar21 != 0x24) {
                iVar16 = DAT_002c7e3c;
                if (iVar21 != 0x31) {
                  if (iVar21 == 0x19) {
                    iVar4 = DAT_002c7e34;
                  }
                  goto LAB_002c7c6a;
                }
                goto LAB_002c7c62;
              }
            }
            piStack_1c = *(int **)(iVar17 + iVar16);
          }
        }
        iStack_28 = 0;
        while( true ) {
          pbStack_34 = pbStack_34 + 1;
          iVar8 = iVar8 + -1;
          if (iVar21 <= iStack_28) break;
          if (iVar10 == 0) {
            if (iVar8 == 0) {
              iVar8 = (*(code *)puVar18[3])(param_1);
              if (iVar8 == 0) {
                FUN_002c823e();
                return;
              }
              pbStack_34 = (byte *)*puVar18;
              iVar8 = puVar18[1];
            }
            uVar7 = (ushort)*pbStack_34;
          }
          else {
            if (iVar8 == 0) {
              iVar8 = (*(code *)puVar18[3])(param_1);
              if (iVar8 == 0) {
                FUN_002c823e();
                return;
              }
              pbStack_34 = (byte *)*puVar18;
              iVar8 = puVar18[1];
            }
            bVar1 = *pbStack_34;
            iVar8 = iVar8 + -1;
            pbStack_34 = pbStack_34 + 1;
            if (iVar8 == 0) {
              iVar8 = (*(code *)puVar18[3])(param_1);
              if (iVar8 == 0) {
                FUN_002c823c();
                return;
              }
              pbStack_34 = (byte *)*puVar18;
              iVar8 = puVar18[1];
            }
            uVar7 = (ushort)*pbStack_34 + (ushort)bVar1 * 0x100;
          }
          iVar4 = *piStack_1c;
          piStack_1c = piStack_1c + 1;
          puVar15[iVar4] = uVar7;
          iStack_28 = iStack_28 + 1;
        }
        if (1 < *(int *)(*param_1 + 0x68)) {
          iStack_28 = 8;
          puStack_38 = puVar15;
          do {
            iVar4 = *param_1;
            *(uint *)(iVar4 + 0x18) = (uint)*puStack_38;
            *(uint *)(iVar4 + 0x1c) = (uint)puStack_38[1];
            *(uint *)(iVar4 + 0x20) = (uint)puStack_38[2];
            *(uint *)(iVar4 + 0x24) = (uint)puStack_38[3];
            *(uint *)(iVar4 + 0x28) = (uint)puStack_38[4];
            *(uint *)(iVar4 + 0x2c) = (uint)puStack_38[5];
            *(uint *)(iVar4 + 0x30) = (uint)puStack_38[6];
            *(uint *)(iVar4 + 0x34) = (uint)puStack_38[7];
            *(undefined4 *)(*param_1 + 0x14) = 0x5f;
            (**(code **)(*param_1 + 4))(param_1,2);
            iStack_28 = iStack_28 + -1;
            puStack_38 = puStack_38 + 8;
          } while (iStack_28 != 0);
        }
        puStack_38 = (ushort *)(iVar11 - iVar21);
        if (iVar10 != 0) {
          puStack_38 = (ushort *)((int)puStack_38 - iVar21);
        }
      }
      if (puStack_38 != (ushort *)0x0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      *puVar18 = pbStack_34;
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
        puVar18 = (undefined4 *)param_1[6];
        iVar17 = puVar18[1];
        pbVar12 = (byte *)*puVar18;
        if (iVar17 == 0) {
          iVar17 = (*(code *)puVar18[3])(param_1);
          if (iVar17 == 0) {
            FUN_002c823c();
            return;
          }
          pbVar12 = (byte *)*puVar18;
          iVar17 = puVar18[1];
        }
        bVar1 = *pbVar12;
        iVar17 = iVar17 + -1;
        pbVar12 = pbVar12 + 1;
        if (iVar17 == 0) {
          iVar17 = (*(code *)puVar18[3])(param_1);
          if (iVar17 == 0) {
            FUN_002c823c();
            return;
          }
          pbVar12 = (byte *)*puVar18;
          iVar17 = puVar18[1];
        }
        iVar17 = iVar17 + -1;
        if ((uint)bVar1 * 0x100 + (uint)*pbVar12 != 4) {
          *(undefined4 *)(*param_1 + 0x14) = 0xc;
          (**(code **)*param_1)(param_1);
        }
        pbVar12 = pbVar12 + 1;
        if (iVar17 == 0) {
          iVar17 = (*(code *)puVar18[3])(param_1);
          if (iVar17 == 0) {
            FUN_002c823e();
            return;
          }
          pbVar12 = (byte *)*puVar18;
          iVar17 = puVar18[1];
        }
        iVar17 = iVar17 + -1;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (iVar17 == 0) {
          iVar17 = (*(code *)puVar18[3])(param_1);
          if (iVar17 == 0) {
            FUN_002c823c();
            return;
          }
          pbVar12 = (byte *)*puVar18;
          iVar17 = puVar18[1];
        }
        iVar8 = (uint)*pbVar12 + (uint)bVar1 * 0x100;
        *(undefined4 *)(*param_1 + 0x14) = 0x54;
        *(int *)(*param_1 + 0x18) = iVar8;
        (**(code **)(*param_1 + 4))(param_1,1);
        param_1[0x46] = iVar8;
        *puVar18 = pbVar12 + 1;
        puVar18[1] = iVar17 + -1;
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
      *(undefined4 *)(*param_1 + 0x14) = 0x68;
      (**(code **)(*param_1 + 4))(param_1,1);
      if (*(int *)(param_1[0x74] + 0xc) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x40;
        (**(code **)*param_1)(param_1);
      }
      iVar17 = 0;
      piVar5 = param_1;
      do {
        *(undefined1 *)(piVar5 + 0x3a) = 0;
        *(undefined1 *)(piVar5 + 0x3e) = 1;
        iVar17 = iVar17 + 1;
        *(undefined1 *)(piVar5 + 0x42) = 5;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar17 != 0x10);
      param_1[0x46] = 0;
      param_1[10] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x47] = 0;
      *(undefined1 *)(param_1 + 0x48) = 1;
      *(undefined1 *)((int)param_1 + DAT_002c7864) = 1;
      *(undefined1 *)((int)param_1 + 0x122) = 0;
      *(undefined2 *)(param_1 + 0x49) = 1;
      *(undefined2 *)((int)param_1 + 0x126) = 1;
      param_1[0x4a] = 0;
      *(undefined1 *)(param_1 + 0x4b) = 0;
      *(undefined4 *)(param_1[0x74] + 0xc) = 1;
      FUN_002c8228();
LAB_002c76f0:
      uVar6 = 1;
      uVar9 = 0;
      uVar13 = uVar9;
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
    *(undefined4 *)(*param_1 + 0x14) = 0x57;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x6e] = 0;
    FUN_002c823e();
  }
  puVar18 = (undefined4 *)param_1[6];
  iVar8 = puVar18[1];
  pbVar12 = (byte *)*puVar18;
  if (iVar8 == 0) {
    iVar17 = (*(code *)puVar18[3])(param_1);
    if (iVar17 == 0) {
      FUN_002c8238();
    }
    pbVar12 = (byte *)*puVar18;
    iVar8 = puVar18[1];
  }
  iVar8 = iVar8 + -1;
  bVar1 = *pbVar12;
  pbVar12 = pbVar12 + 1;
  if (iVar8 == 0) {
    iVar17 = (*(code *)puVar18[3])(param_1);
    if (iVar17 == 0) {
      FUN_002c823c();
    }
    pbVar12 = (byte *)*puVar18;
    iVar8 = puVar18[1];
  }
  puStack_38 = (ushort *)(pbVar12 + 1);
  piStack_2c = (int *)((uint)bVar1 * 0x100 + (uint)*pbVar12 + -2);
  iVar8 = iVar8 + -1;
  while (0 < (int)piStack_2c) {
    if (iVar8 == 0) {
      iVar17 = (*(code *)puVar18[3])(param_1);
      if (iVar17 == 0) {
        FUN_002c823e();
        return;
      }
      puStack_38 = (ushort *)*puVar18;
      iVar8 = puVar18[1];
    }
    iVar8 = iVar8 + -1;
    uVar20 = (uint)(byte)*puStack_38;
    if (iVar8 == 0) {
      iVar17 = (*(code *)puVar18[3])(param_1);
      if (iVar17 == 0) {
        FUN_002c823c();
        return;
      }
      pbVar12 = (byte *)*puVar18;
      iVar8 = puVar18[1];
    }
    else {
      pbVar12 = (byte *)((int)puStack_38 + 1);
    }
    bVar1 = *pbVar12;
    uVar14 = (uint)bVar1;
    puStack_38 = (ushort *)(pbVar12 + 1);
    *(undefined4 *)(*param_1 + 0x14) = 0x51;
    piStack_2c = (int *)((int)piStack_2c + -2);
    *(uint *)(*param_1 + 0x18) = uVar20;
    *(uint *)(*param_1 + 0x1c) = uVar14;
    iVar8 = iVar8 + -1;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (uVar20 < 0x20) {
      if (0xf < uVar20) goto LAB_002c7ad8;
      *(char *)((int)param_1 + uVar20 + 0xe8) = (char)(uVar14 & 0xf);
      *(byte *)((int)param_1 + uVar20 + 0xf8) = bVar1 >> 4;
      if ((uint)(bVar1 >> 4) < (uVar14 & 0xf)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x1e;
        *(uint *)(*param_1 + 0x18) = uVar14;
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1d;
      *(uint *)(*param_1 + 0x18) = uVar20;
      (**(code **)*param_1)(param_1);
LAB_002c7ad8:
      *(byte *)((int)param_1 + uVar20 + 0xf8) = bVar1;
    }
  }
  if (piStack_2c != (int *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  *puVar18 = puStack_38;
LAB_002c7d72:
  puVar18[1] = iVar8;
  FUN_002c8228();
  return;
}


