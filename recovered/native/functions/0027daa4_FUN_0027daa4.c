/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027daa4 FUN_0027daa4 */

uint FUN_0027daa4(int param_1,uint *param_2,uint *param_3,uint param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_54;
  uint local_50;
  uint local_48;
  int local_2c;
  uint local_20;
  int local_1c [2];
  
  iVar12 = *(int *)(param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 0x2c);
  local_20 = 0;
  uVar1 = FUN_0025ba30(*(int *)(iVar12 + 0x38) + 0x24);
  uVar6 = DAT_0027ddfc;
  if (uVar1 < uVar8) {
    if (uVar1 == 0) {
      uVar1 = FUN_002733c4(*(undefined4 *)(iVar12 + 0x44));
      iVar12 = DAT_0027df10;
      if (uVar1 != 0) {
        return uVar1;
      }
      iVar13 = *(int *)(param_1 + 0x2c);
      iVar11 = iVar13 + 1;
      *(int *)(param_1 + 0x2c) = iVar11;
      iVar12 = __udivsi3(*(undefined4 *)(iVar12 + 0x27de9a),*(undefined4 *)(param_1 + 0x20));
      if (iVar11 == iVar12 + 1) {
        *(int *)(param_1 + 0x2c) = iVar13 + 2;
      }
      if ((*(char *)(param_1 + 0x11) != '\0') &&
         (iVar11 = *(int *)(param_1 + 0x2c), iVar12 = FUN_0025c29c(param_1,iVar11), iVar12 == iVar11
         )) {
        local_1c[0] = 0;
        uVar1 = FUN_00274984(param_1,iVar12,local_1c,1);
        if (uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_002733c4(*(undefined4 *)(local_1c[0] + 0x44));
        FUN_00274a30(local_1c[0]);
        iVar12 = DAT_0027df14;
        if (uVar1 != 0) {
          return uVar1;
        }
        iVar13 = *(int *)(param_1 + 0x2c);
        iVar11 = iVar13 + 1;
        *(int *)(param_1 + 0x2c) = iVar11;
        iVar12 = __udivsi3(*(undefined4 *)(iVar12 + 0x27def2),*(undefined4 *)(param_1 + 0x20));
        if (iVar11 == iVar12 + 1) {
          *(int *)(param_1 + 0x2c) = iVar13 + 2;
        }
      }
      FUN_0025ba48(*(int *)(*(int *)(param_1 + 0xc) + 0x38) + 0x1c,*(undefined4 *)(param_1 + 0x2c));
      uVar1 = *(uint *)(param_1 + 0x2c);
      *param_3 = uVar1;
      uVar1 = FUN_00274984(param_1,uVar1,param_2,1);
      if (uVar1 != 0) {
        return uVar1;
      }
      uVar7 = FUN_002733c4(*(undefined4 *)(*param_2 + 0x44));
      uVar1 = uVar7;
      if (uVar7 != 0) {
        uVar1 = 0;
        FUN_00274a30(*param_2);
      }
    }
    else {
      if ((param_5 == '\0') || (uVar8 < param_4)) {
        local_54 = 0;
      }
      else {
        uVar7 = FUN_00274ed0(param_1,param_4,local_1c,0);
        if (uVar7 != 0) {
          return uVar7;
        }
        local_54 = (uint)((char)local_1c[0] == '\x02');
        *param_3 = param_4;
      }
      uVar7 = FUN_002733c4(*(undefined4 *)(iVar12 + 0x44));
      if (uVar7 != 0) {
        return uVar7;
      }
      FUN_0025ba48(*(int *)(iVar12 + 0x38) + 0x24,uVar1 - 1);
      do {
        uVar1 = local_20;
        if (local_20 == 0) {
          iVar11 = *(int *)(iVar12 + 0x38) + 0x20;
        }
        else {
          iVar11 = *(int *)(local_20 + 0x38);
        }
        uVar2 = FUN_0025ba30(iVar11);
        if (uVar8 < uVar2) {
          uVar3 = FUN_0026b4e4(DAT_0027de00);
        }
        else {
          uVar3 = FUN_00274984(param_1,uVar2,&local_20,0);
        }
        uVar7 = local_20;
        if (uVar3 != 0) {
          local_20 = 0;
          uVar7 = uVar3;
          goto LAB_0027ded4;
        }
        iVar11 = *(int *)(local_20 + 0x38);
        uVar4 = FUN_0025ba30(iVar11 + 4);
        bVar14 = local_54 != 0;
        if ((uVar4 != 0) || (bVar14)) {
          uVar6 = DAT_0027de04;
          if ((*(uint *)(param_1 + 0x24) >> 2) - 2 < uVar4) {
LAB_0027dc2c:
            uVar7 = FUN_0026b4e4(uVar6);
            goto LAB_0027ded4;
          }
          if ((param_4 == uVar2) && (local_54 != 0)) {
            *param_2 = uVar7;
            uVar3 = FUN_002733c4(*(undefined4 *)(uVar7 + 0x44));
            uVar7 = uVar3;
            if (uVar3 != 0) goto LAB_0027ded4;
            if (uVar4 != 0) {
              uVar2 = FUN_0025ba30(*(int *)(local_20 + 0x38) + 8);
              uVar6 = DAT_0027de08;
              if (uVar8 < uVar2) goto LAB_0027dc2c;
              uVar7 = FUN_00274984(param_1,uVar2,local_1c,0);
              if (uVar7 != 0) goto LAB_0027ded4;
              uVar7 = FUN_002733c4(*(undefined4 *)(local_1c[0] + 0x44));
              if (uVar7 != 0) {
                FUN_00274a30();
                goto LAB_0027ded4;
              }
              memcpy(*(void **)(local_1c[0] + 0x38),*(void **)(local_20 + 0x38),4);
              FUN_0025ba48(*(int *)(local_1c[0] + 0x38) + 4,uVar4 - 1);
              memcpy((void *)(*(int *)(local_1c[0] + 0x38) + 8),
                     (void *)(*(int *)(local_20 + 0x38) + 0xc),(uVar4 + DAT_0027de0c) * 4);
              FUN_00274a30(local_1c[0]);
              if (uVar1 == 0) {
                iVar11 = *(int *)(iVar12 + 0x38) + 0x20;
              }
              else {
                uVar7 = FUN_002733c4(*(undefined4 *)(uVar1 + 0x44));
                if (uVar7 != 0) goto LAB_0027ded4;
                iVar11 = *(int *)(uVar1 + 0x38);
              }
              FUN_0025ba48(iVar11,uVar2);
            }
            else {
              if (uVar1 == 0) {
                pvVar5 = (void *)(*(int *)(iVar12 + 0x38) + 0x20);
              }
              else {
                uVar7 = FUN_002733c4(*(undefined4 *)(uVar1 + 0x44));
                if (uVar7 != 0) goto LAB_0027ded4;
                pvVar5 = *(void **)(uVar1 + 0x38);
              }
              memcpy(pvVar5,*(void **)(local_20 + 0x38),4);
            }
            local_20 = 0;
LAB_0027dde6:
            local_54 = 0;
          }
          else if (uVar4 != 0) {
            local_50 = param_4;
            if (param_4 != 0) {
              iVar13 = FUN_0025ba30(iVar11 + 8);
              local_54 = iVar13 - param_4;
              if ((int)local_54 < 0) {
                if (local_54 == -0x80000000) {
                  local_54 = DAT_0027de10;
                }
                else {
                  local_54 = -local_54;
                }
              }
              local_2c = iVar11 + 0xc;
              local_50 = 0;
              for (local_48 = 1; local_48 != uVar4; local_48 = local_48 + 1) {
                iVar13 = FUN_0025ba30(local_2c);
                iVar13 = iVar13 - param_4;
                if (iVar13 < 0) {
                  if (iVar13 != -0x80000000) {
                    iVar13 = -iVar13;
                    goto LAB_0027dd12;
                  }
                }
                else {
LAB_0027dd12:
                  if (iVar13 < (int)local_54) {
                    local_50 = local_48;
                    local_54 = iVar13;
                  }
                }
                local_2c = local_2c + 4;
              }
            }
            pvVar5 = (void *)(iVar11 + (local_50 + 2) * 4);
            uVar2 = FUN_0025ba30(pvVar5);
            uVar6 = DAT_0027de14;
            if (uVar8 < uVar2) goto LAB_0027dc2c;
            if ((uVar2 == param_4) || (local_54 = 1, !bVar14)) {
              *param_3 = uVar2;
              uVar7 = FUN_002733c4(*(undefined4 *)(uVar7 + 0x44));
              if (uVar7 != 0) goto LAB_0027ded4;
              if (local_50 < uVar4 - 1) {
                memcpy(pvVar5,(void *)(iVar11 + (uVar4 + 1) * 4),4);
              }
              FUN_0025ba48(iVar11 + 4,uVar4 - 1);
              puVar9 = *(uint **)(param_1 + 0x3c);
              uVar7 = *param_3;
              puVar10 = puVar9;
              if ((puVar9 != (uint *)0x0) && (puVar10 = (uint *)0x1, uVar7 <= *puVar9)) {
                iVar11 = FUN_00261810(puVar9,uVar7);
                puVar10 = (uint *)(uint)(iVar11 != 0);
              }
              uVar3 = FUN_00274984(param_1,uVar7,param_2,(uint)puVar10 ^ 1);
              local_54 = 0;
              if ((uVar3 == 0) &&
                 (uVar3 = FUN_002733c4(*(undefined4 *)(*param_2 + 0x44)), local_54 = uVar3,
                 uVar3 != 0)) {
                FUN_00274a30(*param_2);
                goto LAB_0027dde6;
              }
            }
          }
        }
        else {
          uVar3 = FUN_002733c4(*(undefined4 *)(uVar7 + 0x44));
          uVar7 = uVar3;
          if (uVar3 != 0) goto LAB_0027ded4;
          *param_3 = uVar2;
          memcpy((void *)(*(int *)(iVar12 + 0x38) + 0x20),*(void **)(local_20 + 0x38),4);
          *param_2 = local_20;
          local_20 = 0;
          local_54 = 0;
        }
        FUN_00274a30(uVar1);
      } while (local_54 != 0);
      uVar1 = 0;
      uVar7 = uVar3;
    }
LAB_0027ded4:
    FUN_00274a30(local_20);
    FUN_00274a30(uVar1);
    if (uVar7 != 0) {
      *param_2 = 0;
      return uVar7;
    }
    if (*(short *)(*(int *)((undefined1 *)*param_2 + 0x44) + 0x1a) < 2) {
      *(undefined1 *)*param_2 = 0;
      return 0;
    }
    FUN_00274a30();
    uVar6 = DAT_0027df18;
  }
  uVar1 = FUN_0026b4e4(uVar6);
  return uVar1;
}


