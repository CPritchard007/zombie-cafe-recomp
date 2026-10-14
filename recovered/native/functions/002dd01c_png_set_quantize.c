/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd01c png_set_quantize */

void png_set_quantize(int param_1,byte *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *__s;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  byte *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int *local_28;
  int local_24;
  
  iVar5 = FUN_002dcbd0(param_1,0);
  if (iVar5 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x40;
    if (param_6 == 0) {
      uVar6 = png_malloc(param_1,param_3);
      *(undefined4 *)(param_1 + 0x2cc) = uVar6;
      for (iVar5 = 0; iVar5 < (int)param_3; iVar5 = iVar5 + 1) {
        *(char *)(*(int *)(param_1 + 0x2cc) + iVar5) = (char)iVar5;
      }
    }
    local_3c = param_3;
    if ((int)param_4 < (int)param_3) {
      local_3c = param_4;
      if (param_5 == 0) {
        uVar6 = png_malloc(param_1,param_3);
        *(undefined4 *)(param_1 + 0x344) = uVar6;
        uVar6 = png_malloc(param_1,param_3);
        *(undefined4 *)(param_1 + 0x348) = uVar6;
        for (iVar5 = 0; iVar5 < (int)param_3; iVar5 = iVar5 + 1) {
          *(char *)(*(int *)(param_1 + 0x344) + iVar5) = (char)iVar5;
          *(char *)(*(int *)(param_1 + 0x348) + iVar5) = (char)iVar5;
        }
        piVar7 = (int *)png_calloc(param_1,DAT_002dd5ac);
        local_24 = 0x60;
        piVar23 = (int *)0x0;
        uVar15 = param_3;
        do {
          local_38 = 0;
          local_4c = param_2;
          do {
            if ((int)(uVar15 - 1) <= (int)local_38) {
              if (piVar23 != (int *)0x0) {
                local_48 = (int *)0x0;
                local_28 = piVar7;
                do {
                  for (piVar11 = (int *)*local_28; piVar11 != (int *)0x0; piVar11 = (int *)*piVar11)
                  {
                    iVar5 = *(int *)(param_1 + 0x344);
                    local_38 = (uint)*(byte *)(piVar11 + 1);
                    if (((int)(uint)*(byte *)(iVar5 + local_38) < (int)uVar15) &&
                       (uVar16 = (uint)*(byte *)((int)piVar11 + 5),
                       (int)(uint)*(byte *)(iVar5 + uVar16) < (int)uVar15)) {
                      uVar17 = uVar16;
                      if ((uVar15 & 1) != 0) {
                        uVar17 = local_38;
                        local_38 = uVar16;
                      }
                      uVar15 = uVar15 - 1;
                      pbVar20 = param_2 + uVar15 * 3;
                      pbVar8 = param_2 + (uint)*(byte *)(iVar5 + uVar17) * 3;
                      *pbVar8 = *pbVar20;
                      pbVar8[1] = pbVar20[1];
                      pbVar8[2] = pbVar20[2];
                      local_4c = (byte *)param_6;
                      if (param_6 == 0) {
                        for (; (int)local_4c < (int)param_3; local_4c = (byte *)((int)local_4c + 1))
                        {
                          pcVar9 = (char *)(*(int *)(param_1 + 0x2cc) + (int)local_4c);
                          if (*pcVar9 == *(char *)(*(int *)(param_1 + 0x344) + uVar17)) {
                            *pcVar9 = *(char *)(*(int *)(param_1 + 0x344) + local_38);
                          }
                          pbVar20 = (byte *)(*(int *)(param_1 + 0x2cc) + (int)local_4c);
                          if (*pbVar20 == uVar15) {
                            *pbVar20 = *(byte *)(*(int *)(param_1 + 0x344) + uVar17);
                          }
                        }
                      }
                      *(undefined1 *)
                       (*(int *)(param_1 + 0x344) +
                       (uint)*(byte *)(*(int *)(param_1 + 0x348) + uVar15)) =
                           *(undefined1 *)(*(int *)(param_1 + 0x344) + uVar17);
                      *(undefined1 *)
                       (*(int *)(param_1 + 0x348) +
                       (uint)*(byte *)(*(int *)(param_1 + 0x344) + uVar17)) =
                           *(undefined1 *)(*(int *)(param_1 + 0x348) + uVar15);
                      *(char *)(*(int *)(param_1 + 0x344) + uVar17) = (char)uVar15;
                      *(char *)(*(int *)(param_1 + 0x348) + uVar15) = (char)uVar17;
                    }
                    if ((int)uVar15 <= (int)param_4) goto LAB_002dd422;
                  }
                  local_48 = (int *)((int)local_48 + 1);
                  local_28 = local_28 + 1;
                } while ((int)local_48 <= local_24);
              }
              goto LAB_002dd422;
            }
            pbVar20 = local_4c + 3;
            for (local_48 = (int *)(local_38 + 1); local_48 != (int *)uVar15;
                local_48 = (int *)((int)local_48 + 1)) {
              uVar10 = (int)((uint)*local_4c - (uint)*pbVar20) >> 0x1f;
              uVar16 = (int)((uint)local_4c[1] - (uint)pbVar20[1]) >> 0x1f;
              uVar17 = (int)((uint)local_4c[2] - (uint)pbVar20[2]) >> 0x1f;
              iVar5 = (((uint)*local_4c - (uint)*pbVar20) + uVar10 ^ uVar10) +
                      (((uint)local_4c[1] - (uint)pbVar20[1]) + uVar16 ^ uVar16) +
                      (((uint)local_4c[2] - (uint)pbVar20[2]) + uVar17 ^ uVar17);
              if (iVar5 <= local_24) {
                piVar23 = (int *)png_malloc_warn(param_1,8);
                if (piVar23 == (int *)0x0) goto LAB_002dd5a2;
                *piVar23 = piVar7[iVar5];
                *(undefined1 *)(piVar23 + 1) = (undefined1)local_38;
                *(byte *)((int)piVar23 + 5) = (byte)local_48;
                piVar7[iVar5] = (int)piVar23;
              }
              pbVar20 = pbVar20 + 3;
            }
            local_4c = local_4c + 3;
            local_38 = local_38 + 1;
          } while (piVar23 != (int *)0x0);
LAB_002dd5a2:
          piVar23 = (int *)0x0;
LAB_002dd422:
          local_4c = (byte *)0x0;
          local_48 = piVar7;
          do {
            piVar11 = (int *)*local_48;
            iVar5 = DAT_002dd5b0;
            while (DAT_002dd5b0 = iVar5, piVar11 != (int *)0x0) {
              piVar11 = (int *)*piVar11;
              png_free(param_1);
              piVar23 = piVar11;
              iVar5 = DAT_002dd5b0;
            }
            *local_48 = 0;
            local_48 = local_48 + 1;
            local_4c = (byte *)((int)local_4c + 1);
          } while (local_4c != (byte *)iVar5);
          local_24 = local_24 + 0x60;
        } while ((int)param_4 < (int)uVar15);
        png_free(param_1,piVar7);
        png_free(param_1,*(undefined4 *)(param_1 + 0x348));
        png_free(param_1,*(undefined4 *)(param_1 + 0x344));
        *(undefined4 *)(param_1 + 0x348) = 0;
        *(undefined4 *)(param_1 + 0x344) = 0;
      }
      else {
        uVar6 = png_malloc(param_1,param_3);
        *(undefined4 *)(param_1 + 0x340) = uVar6;
        for (iVar5 = 0; uVar15 = param_3, iVar5 < (int)param_3; iVar5 = iVar5 + 1) {
          *(char *)(*(int *)(param_1 + 0x340) + iVar5) = (char)iVar5;
        }
        do {
          uVar15 = uVar15 - 1;
          if ((int)uVar15 < (int)param_4) break;
          bVar4 = true;
          for (iVar5 = 0; iVar5 < (int)uVar15; iVar5 = iVar5 + 1) {
            bVar2 = *(byte *)(*(int *)(param_1 + 0x340) + iVar5 + 1);
            pbVar20 = (byte *)(*(int *)(param_1 + 0x340) + iVar5);
            bVar1 = *pbVar20;
            if (*(ushort *)((uint)bVar1 * 2 + param_5) < *(ushort *)((uint)bVar2 * 2 + param_5)) {
              *pbVar20 = bVar2;
              bVar4 = false;
              *(byte *)(*(int *)(param_1 + 0x340) + iVar5 + 1) = bVar1;
            }
          }
        } while (!bVar4);
        if (param_6 == 0) {
          uVar15 = param_3;
          pbVar20 = param_2;
          for (iVar5 = 0; iVar5 < (int)param_4; iVar5 = iVar5 + 1) {
            if ((int)param_4 <= (int)(uint)*(byte *)(*(int *)(param_1 + 0x340) + iVar5)) {
              do {
                uVar15 = uVar15 - 1;
              } while ((int)param_4 <= (int)(uint)*(byte *)(*(int *)(param_1 + 0x340) + uVar15));
              pbVar8 = param_2 + uVar15 * 3;
              bVar1 = *pbVar8;
              bVar2 = pbVar8[1];
              bVar3 = pbVar8[2];
              *pbVar8 = *pbVar20;
              pbVar8[1] = pbVar20[1];
              pbVar8[2] = pbVar20[2];
              *pbVar20 = bVar1;
              pbVar20[1] = bVar2;
              pbVar20[2] = bVar3;
              *(char *)(*(int *)(param_1 + 0x2cc) + uVar15) = (char)iVar5;
              *(char *)(*(int *)(param_1 + 0x2cc) + iVar5) = (char)uVar15;
            }
            pbVar20 = pbVar20 + 3;
          }
          for (iVar5 = 0; iVar5 < (int)param_3; iVar5 = iVar5 + 1) {
            pbVar20 = (byte *)(*(int *)(param_1 + 0x2cc) + iVar5);
            uVar15 = (uint)*pbVar20;
            if ((int)param_4 <= (int)uVar15) {
              pbVar13 = param_2 + uVar15 * 3;
              iVar12 = (uint)*pbVar13 - (uint)*param_2;
              uVar15 = iVar12 >> 0x1f;
              iVar18 = (uint)pbVar13[1] - (uint)param_2[1];
              uVar16 = iVar18 >> 0x1f;
              iVar14 = (uint)pbVar13[2] - (uint)param_2[2];
              uVar17 = iVar14 >> 0x1f;
              local_4c = (byte *)((iVar12 + uVar15 ^ uVar15) + (iVar18 + uVar16 ^ uVar16) +
                                 (iVar14 + uVar17 ^ uVar17));
              local_48 = (int *)0x0;
              pbVar8 = param_2;
              for (iVar12 = 1; iVar12 < (int)param_4; iVar12 = iVar12 + 1) {
                iVar18 = (uint)*pbVar13 - (uint)pbVar8[3];
                uVar15 = iVar18 >> 0x1f;
                iVar14 = (uint)pbVar13[1] - (uint)pbVar8[4];
                uVar16 = iVar14 >> 0x1f;
                iVar19 = (uint)pbVar13[2] - (uint)pbVar8[5];
                uVar17 = iVar19 >> 0x1f;
                iVar18 = (iVar18 + uVar15 ^ uVar15) + (iVar14 + uVar16 ^ uVar16) +
                         (iVar19 + uVar17 ^ uVar17);
                if (iVar18 < (int)local_4c) {
                  local_4c = (byte *)iVar18;
                  local_48 = (int *)iVar12;
                }
                pbVar8 = pbVar8 + 3;
              }
              *pbVar20 = (byte)local_48;
            }
          }
        }
        else {
          pbVar20 = param_2;
          for (iVar5 = 0; iVar5 < (int)param_4; iVar5 = iVar5 + 1) {
            if ((int)param_4 <= (int)(uint)*(byte *)(*(int *)(param_1 + 0x340) + iVar5)) {
              do {
                param_3 = param_3 - 1;
              } while ((int)param_4 <= (int)(uint)*(byte *)(*(int *)(param_1 + 0x340) + param_3));
              pbVar8 = param_2 + param_3 * 3;
              *pbVar20 = *pbVar8;
              pbVar20[1] = pbVar8[1];
              pbVar20[2] = pbVar8[2];
            }
            pbVar20 = pbVar20 + 3;
          }
        }
        png_free(param_1,*(undefined4 *)(param_1 + 0x340));
        *(undefined4 *)(param_1 + 0x340) = 0;
      }
    }
    if (*(int *)(param_1 + 0x204) == 0) {
      *(byte **)(param_1 + 0x204) = param_2;
    }
    *(undefined2 *)(param_1 + 0x208) = (undefined2)local_3c;
    if (param_6 != 0) {
      uVar6 = png_calloc(param_1,0x8000);
      *(undefined4 *)(param_1 + 0x2c8) = uVar6;
      __s = (void *)png_malloc(param_1,0x8000);
      memset(__s,0xff,0x8000);
      for (local_44 = 0; local_44 < (int)local_3c; local_44 = local_44 + 1) {
        uVar15 = (uint)(*param_2 >> 3);
        uVar16 = (uint)(param_2[1] >> 3);
        uVar17 = (uint)(param_2[2] >> 3);
        iVar5 = 0;
        do {
          local_40 = uVar15 - iVar5;
          if ((int)uVar15 < iVar5) {
            local_40 = iVar5 - uVar15;
          }
          iVar12 = 0;
          do {
            iVar18 = uVar16 - iVar12;
            if ((int)uVar16 < iVar12) {
              iVar18 = iVar12 - uVar16;
            }
            iVar14 = iVar18;
            if (iVar18 < local_40) {
              iVar14 = local_40;
            }
            uVar10 = 0;
            do {
              uVar21 = iVar5 << 10 | iVar12 << 5 | uVar10;
              iVar19 = uVar17 - uVar10;
              if ((int)uVar17 < (int)uVar10) {
                iVar19 = uVar10 - uVar17;
              }
              iVar22 = iVar19;
              if (iVar19 < iVar14) {
                iVar22 = iVar14;
              }
              iVar19 = iVar22 + local_40 + iVar18 + iVar19;
              pbVar20 = (byte *)((int)__s + uVar21);
              if (iVar19 < (int)(uint)*pbVar20) {
                *pbVar20 = (byte)iVar19;
                *(undefined1 *)(*(int *)(param_1 + 0x2c8) + uVar21) = (undefined1)local_44;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != 0x20);
            iVar12 = iVar12 + 1;
          } while (iVar12 != 0x20);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x20);
        param_2 = param_2 + 3;
      }
      png_free(param_1,__s);
    }
  }
  return;
}


