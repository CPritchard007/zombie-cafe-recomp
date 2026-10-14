/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002718d4 FUN_002718d4 */

int FUN_002718d4(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                undefined4 param_7,undefined4 *param_8,undefined4 *param_9)

{
  ushort uVar1;
  int iVar2;
  uint *__s;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  size_t __n;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  uint local_dc;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c4;
  int local_c0;
  undefined2 *local_bc;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  undefined2 *local_90;
  int local_8c;
  undefined8 local_88;
  uint local_80 [27];
  
  local_a0 = 0;
  if (*(char *)(param_1 + 0x2e) != '\0') {
    return 8;
  }
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,10),
     iVar2 != 0)) {
    return iVar2;
  }
  *(undefined1 *)(param_1 + 0x2d) = 1;
  local_d0 = param_2;
  if (param_2 != 0) {
    iVar2 = FUN_0025c126(param_1,param_3,param_4,0,1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      if (iVar2 != 5) goto LAB_00271d9a;
      local_d0 = 0;
    }
  }
  iVar2 = FUN_002712f4(param_1,&local_a0);
  if (iVar2 != 0) goto LAB_00271d9a;
  uVar16 = *(uint *)(param_1 + 0x44);
  if ((uVar16 == 0) ||
     ((*(ushort *)(param_1 + 0x42) & 0xfe00) + (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 ==
      param_6)) {
    uVar1 = *(ushort *)(param_1 + 0x42);
    iVar11 = **(int **)(param_1 + 0x20);
    if (*(uint *)(iVar11 + 0x60) < uVar16) {
      uVar14 = uVar16 + 0x21 >> 0xc;
      __n = (uVar16 + 0xe + uVar14 * 10) * 2;
      __s = (uint *)FUN_0025af60(__n);
      if (__s == (uint *)0x0) {
        iVar2 = 7;
      }
      else {
        uVar14 = uVar14 + 1;
        memset(__s,0,__n);
        __s[1] = uVar14;
        uVar8 = uVar16;
        if (0x1000 < uVar16) {
          uVar8 = 0x1000;
        }
        iVar3 = FUN_0025af60(uVar8 << 1);
        iVar12 = iVar2;
        if (iVar3 == 0) {
          iVar12 = 7;
        }
        local_dc = 0;
        puVar15 = __s;
        while (((int)local_dc < (int)uVar14 && (iVar12 == 0))) {
          iVar12 = FUN_0026835a(param_1,local_dc,&local_9c,&local_94,&local_98);
          if (iVar12 == 0) {
            uVar8 = local_94 + 4;
            if (local_dc + 1 == uVar14) {
              local_c4 = uVar16 - local_98;
            }
            else {
              local_c4 = (int)(local_9c - uVar8) >> 2;
            }
            puVar5 = (undefined2 *)((int)__s + (__s[1] * 10 + local_98) * 2 + 8);
            local_98 = local_98 + 1;
            puVar9 = puVar5;
            for (iVar2 = 0; iVar2 < local_c4; iVar2 = iVar2 + 1) {
              *puVar9 = (short)iVar2;
              puVar9 = puVar9 + 1;
            }
            uVar17 = 0;
            local_90 = (undefined2 *)0x0;
            local_88._0_4_ = (undefined2 *)0x0;
            local_94 = uVar8;
            memset(local_80,0,0x68);
            local_bc = puVar5;
            for (local_cc = 0; local_cc < local_c4; local_cc = local_cc + 1) {
              local_90 = (undefined2 *)0x1;
              local_88._0_4_ = local_bc;
              for (uVar17 = 0; (local_cc >> (uVar17 & 0xff) & 1U) != 0; uVar17 = uVar17 + 1) {
                FUN_0025e238(uVar8,local_80[uVar17 * 2 + 1],local_80[uVar17 * 2],&local_88,&local_90
                             ,iVar3);
              }
              local_80[uVar17 * 2 + 1] = (uint)(undefined2 *)local_88;
              local_80[uVar17 * 2] = (uint)local_90;
              local_bc = local_bc + 1;
            }
            while (uVar17 = uVar17 + 1, (int)uVar17 < 0xd) {
              if ((local_c4 >> (uVar17 & 0xff) & 1U) != 0) {
                FUN_0025e238(uVar8,local_80[uVar17 * 2 + 1],local_80[uVar17 * 2],&local_88,&local_90
                             ,iVar3);
              }
            }
            puVar15[5] = (uint)local_90;
            puVar15[6] = local_98;
            puVar15[3] = (uint)puVar5;
            puVar15[4] = local_94;
          }
          puVar15 = puVar15 + 5;
          local_dc = local_dc + 1;
        }
        FUN_0025b000(iVar3);
        iVar2 = iVar12;
        if (iVar12 == 0) {
          local_c0 = param_3;
          if (local_d0 == 0) {
            local_c0 = local_d0;
          }
          local_dc = *(uint *)(param_1 + 0x44);
          iVar2 = 0;
          iVar3 = 1;
          uVar16 = *(uint *)(param_1 + 0x48);
          do {
            uVar14 = *(uint *)(iVar11 + iVar3 * 4 + 100);
            if (uVar14 < local_dc) {
              iVar2 = FUN_0025c126(param_1,local_c0,param_4,iVar3 + 3,1);
              if (iVar2 == 0) {
                uVar14 = local_dc;
                if (iVar3 != 1) {
                  uVar14 = 0xffffffff;
                }
                *(uint *)(iVar11 + iVar3 * 4 + 100) = uVar14;
                FUN_00261c56(param_1,iVar3 + 3,1);
              }
              else {
                if (iVar2 != 5) goto LAB_00271d70;
                local_c0 = 0;
                local_dc = uVar14;
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 5);
          if (*(uint *)(iVar11 + 0x60) < local_dc) {
            uVar20 = 1;
            iVar2 = FUN_0025c126(param_1,local_c0,param_4,3,1);
            if (iVar2 == 0) {
              iVar3 = (uVar1 & 0xfe00) + (uVar1 & 1) * 0x10000;
              uVar14 = *(uint *)(iVar11 + 0x60);
              if (param_5 == 0) {
LAB_00271bd4:
                local_88 = __muldi3(uVar16,0,iVar3,0);
                iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x18))
                                  (*(int **)(param_1 + 4),&local_90);
                if (iVar2 == 0) {
                  if ((local_88._4_4_ != local_8c && local_8c <= local_88._4_4_) ||
                     ((local_88._4_4_ == local_8c && (local_90 < (undefined2 *)local_88)))) {
                    (**(code **)(**(int **)(param_1 + 4) + 0x28))
                              (*(int **)(param_1 + 4),5,&local_88);
                  }
                  local_d4 = 0;
                  do {
                    do {
                      uVar17 = *__s;
                      uVar10 = __s[1];
                      uVar8 = 0xffffffff;
LAB_00271cd4:
                      uVar10 = uVar10 - 1;
                      if (-1 < (int)uVar10) {
                        puVar15 = __s + uVar10 * 5 + 2;
                        while (uVar6 = *puVar15, (int)uVar6 < (int)puVar15[3]) {
                          uVar4 = (uint)*(ushort *)(uVar6 * 2 + puVar15[1]);
                          uVar13 = *(uint *)(uVar4 * 4 + puVar15[2]);
                          if (uVar17 < uVar13) {
                            if (uVar13 < uVar8) {
                              local_d4 = uVar4 + puVar15[4];
                              uVar8 = uVar13;
                            }
                            break;
                          }
                          *puVar15 = uVar6 + 1;
                        }
                        goto LAB_00271cd4;
                      }
                      *__s = uVar8;
                      if (uVar8 == 0xffffffff) {
                        if (local_dc == *(uint *)(**(int **)(param_1 + 0x20) + 0x10)) {
                          uVar19 = __muldi3(*(undefined4 *)(param_1 + 0x48),0,iVar3,0,uVar20);
                          pcVar7 = *(code **)(**(int **)(param_1 + 4) + 0x10);
                          iVar2 = (*pcVar7)(*(int **)(param_1 + 4),pcVar7,(int)uVar19,
                                            (int)((ulonglong)uVar19 >> 0x20));
                          if ((iVar2 == 0) && (param_5 != 0)) {
                            iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x14))
                                              (*(int **)(param_1 + 4),param_5);
                          }
                          if (iVar2 != 0) goto LAB_00271d24;
                        }
                        iVar2 = 0;
                        *(uint *)(iVar11 + 0x60) = local_dc;
                        goto LAB_00271d24;
                      }
                    } while (((local_d4 <= uVar14) || (local_dc < local_d4)) || (uVar16 < uVar8));
                    lVar18 = __muldi3(local_d4 - 1,0,iVar3 + 0x18,0);
                    pcVar7 = *(code **)(**(int **)(param_1 + 8) + 8);
                    iVar2 = (*pcVar7)(*(int **)(param_1 + 8),param_7,iVar3,pcVar7,lVar18 + 0x38);
                    if (iVar2 != 0) break;
                    uVar20 = __muldi3(uVar8 - 1,0,iVar3,0);
                    iVar2 = FUN_0025ace6(*(undefined4 *)(param_1 + 4),param_7,iVar3);
                  } while (iVar2 == 0);
                }
              }
              else {
                iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))
                                  (*(int **)(param_1 + 8),param_5);
                if (iVar2 == 0) goto LAB_00271bd4;
              }
LAB_00271d24:
              FUN_00261c56(param_1,3,1);
            }
          }
          if (iVar2 == 5) {
            iVar2 = iVar12;
          }
          if (((iVar2 == 0) && (local_d0 != 0)) &&
             ((iVar2 = 5, *(uint *)(param_1 + 0x44) <= *(uint *)(iVar11 + 0x60) &&
              (iVar2 = iVar12, local_d0 == 2)))) {
            iVar2 = FUN_0025c126(param_1,local_c0,param_4,4,4);
            if (iVar2 == 0) {
              FUN_00261c56(param_1,4,4);
            }
          }
        }
LAB_00271d70:
        FUN_0025b000(__s);
      }
    }
  }
  else {
    iVar2 = FUN_0026b4e4(DAT_00271cc4);
  }
  if ((iVar2 == 5) || (iVar2 == 0)) {
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_1 + 0x44);
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x60);
    }
  }
LAB_00271d9a:
  if (local_a0 != 0) {
    memset((void *)(param_1 + 0x34),0,0x30);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_00261c56(param_1,0,1);
    *(char *)(param_1 + 0x2c) = '\0';
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  FUN_00261c56(param_1,1,1);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if ((param_2 != local_d0) && (iVar2 == 0)) {
    iVar2 = 5;
  }
  return iVar2;
}


