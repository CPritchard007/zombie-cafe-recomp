/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002699e4 FUN_002699e4 */

undefined4 FUN_002699e4(int *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  uint uVar9;
  char cVar10;
  undefined2 uVar11;
  short *psVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  int local_64;
  int local_60;
  int local_54;
  short *local_4c;
  uint local_48;
  int local_40;
  int local_38;
  int local_34;
  undefined4 *local_30;
  
  iVar6 = *param_1;
  param_6[0x18] = -1;
  param_6[0x19] = -1;
  param_6[0x1a] = -1;
  param_6[0x1b] = -1;
  param_6[0x28] = '\0';
  param_6[0x29] = '\0';
  param_6[0x2a] = '\0';
  param_6[0x2b] = '\0';
  bVar1 = false;
  local_40 = 0;
  local_4c = (short *)0x0;
  local_34 = 0;
  local_60 = 0;
  local_64 = 0;
  local_54 = param_5;
LAB_00269cd6:
  while (local_64 == 0) {
    if (local_54 == 0) {
      if ((param_3 == 0) && ((int)((uint)*(ushort *)(param_6 + 2) << 0x19) < 0)) {
        *param_6 = '^';
        param_6[0x28] = '\0';
        param_6[0x29] = '\0';
        param_6[0x2a] = '\0';
        param_6[0x2b] = '\0';
        goto LAB_00269e70;
      }
      break;
    }
    psVar12 = *(short **)(local_54 + 4);
    if (psVar12 == (short *)0x0) {
      local_64 = 0;
    }
    else {
      psVar7 = psVar12 + 4;
      local_64 = 0;
      for (local_38 = 0; local_38 < *psVar12; local_38 = local_38 + 1) {
        piVar15 = *(int **)(psVar7 + 6);
        iVar14 = FUN_0025d12c(iVar6,piVar15[0x11]);
        if (param_3 == 0) {
LAB_00269a7c:
          iVar4 = local_60 + 1;
          if (local_60 == 0) {
            uVar5 = *(undefined4 *)(psVar7 + 0x10);
            *(int **)(param_6 + 0x28) = piVar15;
            *(undefined4 *)(param_6 + 0x18) = uVar5;
            local_40 = piVar15[0x11];
            local_4c = psVar7;
          }
          local_30 = (undefined4 *)piVar15[3];
          for (local_60 = 0; local_60 < piVar15[2]; local_60 = local_60 + 1) {
            iVar14 = sqlite3_stricmp(*local_30,param_4);
            if (iVar14 == 0) {
              if (local_64 != 1) {
LAB_00269ae8:
                uVar5 = *(undefined4 *)(psVar7 + 0x10);
                *(int **)(param_6 + 0x28) = piVar15;
                *(undefined4 *)(param_6 + 0x18) = uVar5;
                local_40 = piVar15[0x11];
                local_64 = local_64 + 1;
                if (local_60 == piVar15[1]) {
                  uVar11 = (undefined2)DAT_00269dfc;
                }
                else {
                  uVar11 = (undefined2)local_60;
                }
                *(undefined2 *)(param_6 + 0x1c) = uVar11;
                local_4c = psVar7;
                break;
              }
              local_48 = *(byte *)(psVar7 + 0xe) & 4;
              if ((*(byte *)(psVar7 + 0xe) & 4) == 0) {
                piVar13 = *(int **)(psVar7 + 0x14);
                if (piVar13 == (int *)0x0) goto LAB_00269ae8;
                while( true ) {
                  if (piVar13[1] <= (int)local_48) goto LAB_00269ae8;
                  iVar14 = sqlite3_stricmp(*(undefined4 *)(local_48 * 8 + *piVar13),param_4);
                  if (iVar14 == 0) break;
                  local_48 = local_48 + 1;
                }
              }
            }
            local_30 = local_30 + 6;
          }
        }
        else {
          iVar2 = *(int *)(psVar7 + 4);
          iVar3 = param_3;
          iVar4 = local_60;
          if (iVar2 == 0) {
            if ((*piVar15 != 0) && (iVar3 = sqlite3_stricmp(*piVar15,param_3), iVar3 == 0)) {
              if (param_2 == 0) goto LAB_00269a7c;
              iVar2 = *(int *)(iVar14 * 0x10 + *(int *)(iVar6 + 0x10));
              iVar3 = param_2;
              goto LAB_00269a74;
            }
          }
          else {
LAB_00269a74:
            iVar14 = sqlite3_stricmp(iVar2,iVar3);
            if (iVar14 == 0) goto LAB_00269a7c;
          }
        }
        local_60 = iVar4;
        psVar7 = psVar7 + 0x20;
      }
    }
    if ((((param_3 != 0) && (param_2 == 0)) && (local_64 == 0)) && (param_1[0x6d] != 0)) {
      iVar14 = param_1[0x72];
      if ((char)iVar14 == 'j') {
LAB_00269b8a:
        iVar14 = sqlite3_stricmp(DAT_00269e04 + 0x269b92,param_3);
        if (iVar14 != 0) goto LAB_00269c28;
        param_6[0x18] = '\0';
        param_6[0x19] = '\0';
        param_6[0x1a] = '\0';
        param_6[0x1b] = '\0';
      }
      else {
        iVar3 = sqlite3_stricmp(DAT_00269e00 + 0x269b7a,param_3);
        if (iVar3 != 0) {
          if ((char)iVar14 == 'i') goto LAB_00269c28;
          goto LAB_00269b8a;
        }
        param_6[0x18] = '\x01';
        param_6[0x19] = '\0';
        param_6[0x1a] = '\0';
        param_6[0x1b] = '\0';
      }
      iVar14 = param_1[0x6d];
      if (iVar14 != 0) {
        local_40 = *(int *)(iVar14 + 0x44);
        local_60 = local_60 + 1;
        for (uVar16 = 0; (int)uVar16 < *(int *)(iVar14 + 8); uVar16 = uVar16 + 1) {
          iVar3 = sqlite3_stricmp(*(undefined4 *)(uVar16 * 0x18 + *(int *)(iVar14 + 0xc)),param_4);
          if (iVar3 == 0) {
            if (uVar16 == *(uint *)(iVar14 + 4)) {
              uVar16 = 0xffffffff;
            }
            break;
          }
        }
        if ((*(int *)(iVar14 + 8) <= (int)uVar16) && (iVar3 = FUN_00264820(param_4), iVar3 != 0)) {
          uVar16 = 0xffffffff;
        }
        if ((int)uVar16 < *(int *)(iVar14 + 8)) {
          if ((int)uVar16 < 0) {
            param_6[1] = 'd';
          }
          else {
            if (*(int *)(param_6 + 0x18) == 0) {
              iVar3 = 0x1c0;
            }
            else {
              iVar3 = 0x1c4;
            }
            uVar9 = 1 << (uVar16 & 0xff);
            if (0x1f < (int)uVar16) {
              uVar9 = 0xffffffff;
            }
            *(uint *)((int)param_1 + iVar3) = uVar9 | *(uint *)((int)param_1 + iVar3);
          }
          *(short *)(param_6 + 0x1c) = (short)uVar16;
          *(int *)(param_6 + 0x28) = iVar14;
          bVar1 = true;
          local_64 = 1;
        }
      }
    }
LAB_00269c28:
    if (local_60 != 1) goto LAB_00269c52;
    if (local_64 == 0) {
      iVar14 = FUN_00264820(param_4);
      if (iVar14 == 0) goto LAB_00269c56;
      param_6[0x1c] = -1;
      param_6[0x1d] = -1;
      param_6[1] = 'd';
      local_64 = 1;
    }
  }
  if (local_64 == 1) goto LAB_00269d58;
  if (local_64 == 0) {
    iVar14 = DAT_00269e10 + 0x269d0c;
  }
  else {
    iVar14 = DAT_00269e14 + 0x269d12;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      iVar3 = DAT_00269e1c + 0x269d3c;
      param_2 = param_3;
      goto LAB_00269d3a;
    }
    FUN_00268e48(param_1,DAT_00269e20 + 0x269d4a,iVar14,param_4);
  }
  else {
    iVar3 = DAT_00269e18 + 0x269d24;
    param_4 = param_3;
LAB_00269d3a:
    FUN_00268e48(param_1,iVar3,iVar14,param_2,param_4);
  }
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + 1;
LAB_00269d58:
  if ((local_4c != (short *)0x0) && ((int)(~(uint)*(ushort *)(param_6 + 0x1c) << 0x10) < 0)) {
    iVar14 = (int)(short)*(ushort *)(param_6 + 0x1c);
    if (0x3f < iVar14) {
      iVar14 = 0x3f;
    }
    uVar17 = __ashldi3(1,0,iVar14);
    *(uint *)(local_4c + 0x18) = (uint)uVar17 | *(uint *)(local_4c + 0x18);
    *(uint *)(local_4c + 0x1a) = (uint)((ulonglong)uVar17 >> 0x20) | *(uint *)(local_4c + 0x1a);
  }
  FUN_002610aa(iVar6,*(undefined4 *)(param_6 + 8));
  uVar5 = *(undefined4 *)(param_6 + 0xc);
  param_6[8] = '\0';
  param_6[9] = '\0';
  param_6[10] = '\0';
  param_6[0xb] = '\0';
  FUN_002610aa(iVar6,uVar5);
  param_6[0xc] = '\0';
  param_6[0xd] = '\0';
  param_6[0xe] = '\0';
  param_6[0xf] = '\0';
  cVar10 = -0x68;
  if (bVar1) {
    cVar10 = '<';
  }
  *param_6 = cVar10;
  uVar5 = 2;
  if (local_64 == 1) {
LAB_00269db0:
    psVar12 = *(short **)(local_54 + 4);
    if ((*(int *)(*param_1 + 0x10c) != 0) && (iVar6 = FUN_0025d12c(*param_1,local_40), -1 < iVar6))
    {
      if (*param_6 == '<') {
        puVar8 = (undefined4 *)param_1[0x6d];
      }
      else {
        psVar7 = psVar12;
        for (iVar14 = 0; iVar14 < *psVar12; iVar14 = iVar14 + 1) {
          if (*(int *)(param_6 + 0x18) == *(int *)(psVar7 + 0x14)) {
            puVar8 = *(undefined4 **)(psVar12 + iVar14 * 0x20 + 10);
            goto LAB_00269e2e;
          }
          psVar7 = psVar7 + 0x20;
        }
        puVar8 = (undefined4 *)0x0;
      }
LAB_00269e2e:
      if (puVar8 != (undefined4 *)0x0) {
        iVar14 = (int)*(short *)(param_6 + 0x1c);
        if ((iVar14 < 0) && (iVar14 = puVar8[1], iVar14 < 0)) {
          iVar14 = DAT_00269e88 + 0x269e50;
        }
        else {
          iVar14 = *(int *)(iVar14 * 0x18 + puVar8[3]);
        }
        iVar6 = FUN_00269950(param_1,*puVar8,iVar14,iVar6);
        if (iVar6 == 2) {
          *param_6 = 'b';
        }
      }
    }
    for (; *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 1, param_5 != local_54;
        param_5 = *(int *)(param_5 + 0x10)) {
    }
LAB_00269e70:
    uVar5 = 1;
  }
  return uVar5;
LAB_00269c52:
  if (local_64 == 0) {
LAB_00269c56:
    piVar15 = *(int **)(local_54 + 8);
    if ((piVar15 != (int *)0x0) && (param_3 == 0)) {
      for (iVar14 = 0; iVar14 < *piVar15; iVar14 = iVar14 + 1) {
        iVar3 = *(int *)(piVar15[2] + iVar14 * 0x14 + 4);
        if ((iVar3 != 0) && (iVar4 = sqlite3_stricmp(iVar3,param_4), iVar4 == 0)) {
          if ((-1 < (int)((uint)*(byte *)(local_54 + 0x1c) << 0x1f)) &&
             ((*(ushort *)(*(int *)(piVar15[2] + iVar14 * 0x14) + 2) & 2) != 0)) {
            FUN_00268e48(param_1,DAT_00269e08 + 0x269caa,iVar3);
            return 2;
          }
          FUN_002691c8(param_1,piVar15,iVar14,param_6,DAT_00269e0c + 0x269cba,local_34);
          goto LAB_00269db0;
        }
      }
    }
    local_54 = *(int *)(local_54 + 0x10);
    local_34 = local_34 + 1;
    local_64 = 0;
  }
  goto LAB_00269cd6;
}


