/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286d28 sqlite3_step */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00286fc0) */
/* WARNING: Removing unreachable block (ram,0x00286fc0) */

undefined4 sqlite3_step(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  int *piVar21;
  undefined8 uVar22;
  int local_118;
  int *local_110;
  int local_10c;
  int *local_108;
  int local_fc;
  int local_f8;
  void *local_e8;
  int local_e4;
  undefined1 auStack_e0 [204];
  
  if (param_1 == (int *)0x0) {
    iVar5 = DAT_00287028 + 0x286d36;
  }
  else {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      sqlite3_mutex_enter(*(undefined4 *)(iVar5 + 0xc));
      local_fc = 6;
      do {
        if (param_1[0xc] != DAT_00287034) {
          sqlite3_reset(param_1);
        }
        puVar6 = (undefined4 *)*param_1;
        if (*(char *)((int)puVar6 + 0x36) != '\0') goto LAB_00287484;
        if (param_1[0x15] < 1) {
          if (*(char *)((int)param_1 + 0x5f) == '\0') {
            if (param_1[0x15] != 0) {
              if (puVar6[0x20] == 0) {
                puVar6[0x38] = 0;
              }
              if ((puVar6[0x27] != 0) && (*(char *)((int)puVar6 + 0x7d) == '\0')) {
                FUN_0025ed88(*puVar6,param_1 + 0x22);
              }
              puVar6[0x20] = puVar6[0x20] + 1;
              if ((char)param_1[0x19] == '\0') {
                puVar6[0x21] = puVar6[0x21] + 1;
              }
              param_1[0x15] = 0;
            }
            goto LAB_00286de0;
          }
          param_1[0x16] = 0x11;
          uVar20 = 1;
          goto LAB_00287318;
        }
LAB_00286de0:
        if (*(char *)((int)param_1 + 0x5d) == '\0') {
          piVar21 = puVar6 + 0x22;
          *piVar21 = *piVar21 + 1;
          uVar20 = FUN_0028d4b0(param_1);
          *piVar21 = *piVar21 + -1;
          if (uVar20 != 100) goto LAB_00287240;
          goto LAB_00287306;
        }
        iVar15 = param_1[2];
        iVar16 = *param_1;
        local_118 = iVar15 + 0x28;
        FUN_00263b20(local_118,8);
        param_1[5] = 0;
        if (param_1[0x16] == 7) {
          uVar20 = 1;
          *(undefined1 *)(iVar16 + 0x36) = 1;
          goto LAB_00287240;
        }
        cVar1 = *(char *)((int)param_1 + 0x5d);
        iVar12 = param_1[7];
        iVar11 = iVar12;
        if (cVar1 == '\x01') {
          iVar17 = param_1[2];
          iVar18 = iVar17 + 0x168;
          local_110 = (int *)(*(ushort *)(iVar17 + 0x184) & 0x10);
          local_108 = local_110;
          if ((*(ushort *)(iVar17 + 0x184) & 0x10) != 0) {
            local_110 = *(int **)(iVar17 + 0x16c);
            local_108 = (int *)(*(uint *)(iVar17 + 0x180) >> 2);
          }
          piVar21 = local_110;
          for (iVar17 = 0; iVar17 < (int)local_108; iVar17 = iVar17 + 1) {
            iVar4 = *piVar21;
            piVar21 = piVar21 + 1;
            iVar11 = iVar11 + *(int *)(iVar4 + 4);
          }
        }
        else {
          iVar18 = 0;
          local_110 = (int *)0x0;
          local_108 = (int *)0x0;
        }
        do {
          iVar17 = param_1[0x15];
          param_1[0x15] = iVar17 + 1;
          if (iVar11 <= iVar17) {
            param_1[0x16] = 0;
            uVar20 = 0x65;
            goto LAB_00287240;
          }
        } while ((cVar1 == '\x02') && (*(char *)(iVar17 * 0x14 + param_1[1]) != -0x6a));
        if (*(int *)(iVar16 + 0xe0) != 0) {
          param_1[0x16] = 9;
          uVar3 = FUN_0026311c();
          FUN_0026a976(param_1 + 0xd,iVar16,DAT_00287038 + 0x286e9a,uVar3);
          uVar20 = 1;
          goto LAB_00287240;
        }
        if (iVar17 < iVar12) {
          iVar16 = param_1[1];
        }
        else {
          iVar17 = iVar17 - iVar12;
          piVar21 = local_110;
          while( true ) {
            piVar8 = (int *)*piVar21;
            piVar21 = piVar21 + 1;
            iVar16 = piVar8[1];
            if (iVar17 < iVar16) break;
            iVar17 = iVar17 - iVar16;
          }
          iVar16 = *piVar8;
        }
        pbVar13 = (byte *)(iVar16 + iVar17 * 0x14);
        if (cVar1 == '\x01') {
          *(undefined2 *)(iVar15 + 0x44) = 4;
          *(undefined1 *)(iVar15 + 0x46) = 1;
          *(int *)(iVar15 + 0x38) = iVar17;
          uVar3 = DAT_0028703c;
          *(int *)(iVar15 + 0x3c) = iVar17 >> 0x1f;
          *(short *)(iVar15 + 0x6c) = (short)uVar3;
          *(undefined4 *)(iVar15 + 0x54) =
               *(undefined4 *)(DAT_00287040 + (uint)*pbVar13 * 4 + 0x286f3e);
          uVar3 = FUN_0025b154();
          *(undefined4 *)(iVar15 + 0x68) = uVar3;
          local_118 = iVar15 + 0x78;
          *(undefined1 *)(iVar15 + 0x6e) = 3;
          *(undefined1 *)(iVar15 + 0x6f) = 1;
          if (pbVar13[1] == 0xee) {
            piVar21 = (int *)0x0;
            while (((int)piVar21 < (int)local_108 &&
                   (iVar16 = *local_110, local_110 = local_110 + 1,
                   iVar16 != *(int *)(pbVar13 + 0x10)))) {
              piVar21 = (int *)((int)piVar21 + 1);
            }
            if (piVar21 == local_108) {
              iVar15 = ((int)piVar21 + 1) * 4;
              iVar16 = FUN_0026526c(iVar18,iVar15,piVar21 != (int *)0x0);
              if (iVar16 == 0) {
                *(undefined4 *)((int)piVar21 * 4 + *(int *)(iVar18 + 4)) =
                     *(undefined4 *)(pbVar13 + 0x10);
                *(int *)(iVar18 + 0x18) = iVar15;
                *(ushort *)(iVar18 + 0x1c) = *(ushort *)(iVar18 + 0x1c) | 0x10;
              }
            }
          }
        }
        uVar20 = 1;
        *(undefined2 *)(local_118 + 0x1c) = 4;
        iVar16 = *(int *)(pbVar13 + 4);
        *(undefined1 *)(local_118 + 0x1e) = 1;
        *(int *)(local_118 + 0x10) = iVar16;
        *(int *)(local_118 + 0x14) = iVar16 >> 0x1f;
        *(undefined2 *)(local_118 + 0x44) = 4;
        iVar16 = *(int *)(pbVar13 + 8);
        *(int *)(local_118 + 0x38) = iVar16;
        *(int *)(local_118 + 0x3c) = iVar16 >> 0x1f;
        *(undefined1 *)(local_118 + 0x46) = 1;
        *(undefined2 *)(local_118 + 0x6c) = 4;
        iVar16 = *(int *)(pbVar13 + 0xc);
        *(int *)(local_118 + 0x60) = iVar16;
        *(int *)(local_118 + 100) = iVar16 >> 0x1f;
        *(undefined1 *)(local_118 + 0x6e) = 1;
        iVar16 = FUN_0026526c(local_118 + 0x78,0x20,0);
        if (iVar16 != 0) goto LAB_00287240;
        *(short *)(local_118 + 0x94) = (short)DAT_00287044;
        puVar19 = *(undefined1 **)(local_118 + 0x7c);
        puVar10 = puVar19;
        switch(pbVar13[1]) {
        case 0xed:
          puVar10 = (undefined1 *)0x0;
LAB_00287174:
          *puVar19 = (char)puVar10;
          puVar10 = puVar19;
          break;
        case 0xee:
          iVar16 = DAT_00287400 + 0x287162;
          goto LAB_00287160;
        case 0xef:
        case 0xfa:
          iVar15 = *(int *)(pbVar13 + 0x10);
          sqlite3_snprintf(0x20,puVar19,DAT_00287048 + 0x286fe0,*(undefined2 *)(iVar15 + 6));
          iVar16 = FUN_0025b154(puVar19);
          pvVar9 = (void *)(DAT_0028704c + 0x286ff8);
          local_f8 = iVar15;
          for (local_10c = 0; local_10c < (int)(uint)*(ushort *)(iVar15 + 6);
              local_10c = local_10c + 1) {
            puVar14 = *(undefined4 **)(local_f8 + 0xc);
            if (puVar14 == (undefined4 *)0x0) {
              if (iVar16 < 0x16) {
                memcpy(puVar19 + iVar16,pvVar9,4);
                iVar16 = iVar16 + 4;
              }
            }
            else {
              iVar11 = FUN_0025b154(*puVar14);
              if (0x1a < iVar16 + iVar11) {
                memcpy(puVar19 + iVar16,(void *)(DAT_00287050 + 0x287020),4);
                break;
              }
              puVar19[iVar16] = 0x2c;
              iVar12 = iVar16 + 1;
              local_108 = (int *)iVar12;
              if ((*(int *)(iVar15 + 8) != 0) &&
                 (*(char *)(*(int *)(iVar15 + 8) + local_10c) != '\0')) {
                local_108 = (int *)(iVar16 + 2);
                puVar19[iVar12] = 0x2d;
              }
              memcpy(puVar19 + (int)local_108,(void *)*puVar14,iVar11 + 1);
              iVar16 = (int)local_108 + iVar11;
            }
            local_f8 = local_f8 + 4;
          }
          puVar19[iVar16] = 0x29;
          puVar19[iVar16 + 1] = 0;
          break;
        default:
          puVar10 = *(undefined1 **)(pbVar13 + 0x10);
          if (puVar10 == (undefined1 *)0x0) goto LAB_00287174;
          break;
        case 0xf1:
          iVar16 = DAT_002873fc + 0x28715c;
LAB_00287160:
          sqlite3_snprintf(0x20,puVar19,iVar16);
          break;
        case 0xf2:
          uVar3 = *(undefined4 *)(pbVar13 + 0x10);
          iVar16 = DAT_002873e4 + 0x2870ea;
          goto LAB_002870e8;
        case 0xf3:
          puVar14 = *(undefined4 **)(pbVar13 + 0x10);
          iVar16 = DAT_002873e0 + 0x2870de;
          uVar3 = *puVar14;
          uVar7 = puVar14[1];
          goto LAB_00287100;
        case 0xf4:
          puVar14 = *(undefined4 **)(pbVar13 + 0x10);
          iVar16 = DAT_002873e8 + 0x2870fa;
          uVar3 = *puVar14;
          uVar7 = puVar14[1];
LAB_00287100:
          sqlite3_snprintf(0x20,puVar19,iVar16,puVar14,uVar3,uVar7);
          break;
        case 0xf6:
          piVar21 = *(int **)(*(int *)(pbVar13 + 0x10) + 8);
          iVar15 = DAT_002873f8 + 0x28714a;
          iVar16 = *piVar21;
          goto LAB_0028714a;
        case 0xf8:
          puVar14 = *(undefined4 **)(pbVar13 + 0x10);
          uVar20 = (uint)*(ushort *)(puVar14 + 7);
          if (-1 < (int)(uVar20 << 0x1e)) {
            if ((int)(uVar20 << 0x1d) < 0) {
              uVar3 = puVar14[4];
              uVar7 = puVar14[5];
              iVar16 = DAT_002873ec + 0x287124;
            }
            else {
              if (-1 < (int)(uVar20 << 0x1c)) {
                if ((int)(uVar20 << 0x1f) < 0) {
                  iVar16 = DAT_002873f4 + 0x287140;
                  goto LAB_00287160;
                }
                puVar10 = (undefined1 *)(DAT_00287404 + 0x28717e);
                break;
              }
              uVar3 = puVar14[2];
              uVar7 = puVar14[3];
              iVar16 = DAT_002873f0 + 0x287136;
            }
            goto LAB_00287100;
          }
          puVar10 = (undefined1 *)puVar14[1];
          break;
        case 0xfb:
          piVar21 = *(int **)(*(short **)(pbVar13 + 0x10) + 0xc);
          iVar15 = DAT_002873dc + 0x2870d2;
          iVar16 = (int)**(short **)(pbVar13 + 0x10);
LAB_0028714a:
          sqlite3_snprintf(0x20,puVar19,iVar15,piVar21,iVar16);
          break;
        case 0xfc:
          iVar16 = DAT_002873d8 + 0x2870c6;
          uVar3 = **(undefined4 **)(pbVar13 + 0x10);
LAB_002870e8:
          sqlite3_snprintf(0x20,puVar19,iVar16,uVar3);
        }
        if (puVar10 == *(undefined1 **)(local_118 + 0x7c)) {
          uVar3 = FUN_0025b154(puVar10);
          *(undefined4 *)(local_118 + 0x90) = uVar3;
          *(undefined1 *)(local_118 + 0x97) = 1;
        }
        else {
          FUN_0026578c(local_118 + 0x78,puVar10,0xffffffff,1,0);
        }
        *(undefined1 *)(local_118 + 0x96) = 3;
        if (*(char *)((int)param_1 + 0x5d) == '\x01') {
          iVar16 = FUN_0026526c(local_118 + 0xa0,4,0);
          uVar3 = DAT_00287408;
          uVar20 = 1;
          if (iVar16 == 0) {
            *(undefined4 *)(local_118 + 0xb8) = 2;
            *(short *)(local_118 + 0xbc) = (short)uVar3;
            sqlite3_snprintf(3,*(undefined4 *)(local_118 + 0xa4),DAT_0028740c + 0x2871ea,pbVar13[3])
            ;
            *(undefined1 *)(local_118 + 0xbe) = 3;
            *(undefined1 *)(local_118 + 0xbf) = 1;
            *(undefined2 *)(local_118 + 0xe4) = 1;
            *(undefined1 *)(local_118 + 0xe6) = 5;
            goto LAB_00287208;
          }
LAB_00287240:
          if (((puVar6[0x27] != 0) && (*(char *)((int)puVar6 + 0x7d) == '\0')) &&
             (param_1[0x28] != 0)) {
            FUN_0025ed88(*puVar6,&local_e8);
            iVar16 = param_1[0x28];
            uVar3 = puVar6[0x28];
            uVar22 = __muldi3((int)local_e8 - param_1[0x22],
                              (local_e4 - param_1[0x23]) - (uint)(local_e8 < (void *)param_1[0x22]),
                              DAT_002873d0,DAT_002873d4);
            (*(code *)puVar6[0x27])(uVar3,iVar16,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
          }
          if (uVar20 == 0x65) {
            iVar16 = 0;
            for (iVar15 = 0; iVar15 < (int)puVar6[5]; iVar15 = iVar15 + 1) {
              iVar11 = *(int *)(puVar6[4] + iVar15 * 0x10 + 4);
              if (iVar11 != 0) {
                iVar12 = *(int *)(**(int **)(iVar11 + 4) + 0xb8);
                iVar11 = iVar12;
                if (iVar12 != 0) {
                  iVar11 = *(int *)(iVar12 + 0xc);
                  *(undefined4 *)(iVar12 + 0xc) = 0;
                }
                if (((0 < iVar11) && ((code *)puVar6[0x2f] != (code *)0x0)) && (iVar16 == 0)) {
                  iVar16 = (*(code *)puVar6[0x2f])
                                     (puVar6[0x30],puVar6,*(undefined4 *)(puVar6[4] + iVar15 * 0x10)
                                     );
                }
              }
            }
            param_1[0x16] = iVar16;
            if (iVar16 != 0) {
              uVar20 = 1;
            }
          }
        }
        else {
LAB_00287208:
          uVar20 = 100;
          *(ushort *)(param_1 + 0xb) = (3 - (ushort)*(byte *)((int)param_1 + 0x5d)) * 4;
          param_1[5] = param_1[2] + 0x28;
          param_1[0x16] = 0;
        }
LAB_00287306:
        puVar6[0xb] = uVar20;
        iVar16 = FUN_002685e0(*param_1,param_1[0x16]);
        if (iVar16 == 7) {
          param_1[0x16] = 7;
        }
LAB_00287318:
        if (((uVar20 != 100) && (*(char *)((int)param_1 + 0x65) != '\0')) && (uVar20 != 0x65)) {
          uVar20 = FUN_0026863a(param_1);
        }
        uVar20 = puVar6[0xc] & uVar20;
        if ((uVar20 != 0x11) || (local_fc = local_fc + -1, local_fc == 0)) goto LAB_00287488;
        uVar3 = sqlite3_sql(param_1);
        iVar16 = *param_1;
        uVar20 = FUN_00286a40(iVar16,uVar3,0xffffffff,0,param_1,&local_e8,0);
        pvVar9 = local_e8;
        if (uVar20 != 0) {
          if (uVar20 == 7) {
            *(undefined1 *)(iVar16 + 0x36) = 1;
          }
          if ((*(char *)((int)param_1 + 0x65) != '\0') && (*(int *)(iVar5 + 0xd0) != 0)) {
            uVar3 = sqlite3_value_text();
            FUN_0025fbda(iVar5,param_1[0xd]);
            if (*(char *)(iVar5 + 0x36) == '\0') {
              iVar16 = FUN_0025f25a(iVar5,uVar3);
              param_1[0xd] = iVar16;
            }
            else {
              param_1[0xd] = 0;
LAB_00287484:
              uVar20 = 7;
            }
            param_1[0x16] = uVar20;
          }
LAB_00287488:
          uVar3 = FUN_002685e0(iVar5,uVar20);
          sqlite3_mutex_leave(*(undefined4 *)(iVar5 + 0xc));
          return uVar3;
        }
        memcpy(auStack_e0,local_e8,200);
        memcpy(pvVar9,param_1,200);
        memcpy(param_1,auStack_e0,200);
        pvVar2 = local_e8;
        iVar16 = *(int *)((int)pvVar9 + 0x3c);
        *(int *)((int)pvVar9 + 0x3c) = param_1[0xf];
        param_1[0xf] = iVar16;
        iVar16 = *(int *)((int)pvVar9 + 0x38);
        *(int *)((int)pvVar9 + 0x38) = param_1[0xe];
        param_1[0xe] = iVar16;
        iVar16 = *(int *)((int)pvVar9 + 0xa0);
        *(int *)((int)pvVar9 + 0xa0) = param_1[0x28];
        param_1[0x28] = iVar16;
        *(undefined1 *)((int)param_1 + 0x65) = *(undefined1 *)((int)pvVar9 + 0x65);
        sqlite3_mutex_enter(*(undefined4 *)(*param_1 + 0xc));
        for (iVar16 = 0; iVar16 < *(short *)((int)pvVar2 + 0x4c); iVar16 = iVar16 + 1) {
          FUN_00263afe(param_1[0x11] + iVar16 * 0x28,*(int *)((int)pvVar2 + 0x44) + iVar16 * 0x28);
        }
        sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
        *(undefined4 *)((int)local_e8 + 0x58) = 0;
        FUN_002810d0();
        sqlite3_reset(param_1);
      } while( true );
    }
    iVar5 = DAT_0028702c + 0x286d46;
  }
  sqlite3_log(0x15,iVar5);
  uVar3 = FUN_0026adf0(DAT_00287030);
  return uVar3;
}


