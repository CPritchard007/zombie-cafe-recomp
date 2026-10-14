/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00288000 FUN_00288000 */

int * FUN_00288000(int param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  short *psVar10;
  int *piVar11;
  short *psVar12;
  undefined4 uVar13;
  char *pcVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 *puVar21;
  bool bVar22;
  int local_6c;
  uint local_68;
  uint local_64;
  short *local_60;
  int local_5c;
  short *local_54;
  int local_50;
  int local_40;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  piVar18 = *(int **)(param_1 + 8);
  iVar4 = *piVar18;
  if (*(char *)(iVar4 + 0x36) != '\0') {
    return (int *)0x2;
  }
  psVar10 = (short *)param_2[10];
  if (psVar10 == (short *)0x0) {
    return (int *)0x1;
  }
  uVar3 = *(ushort *)((int)param_2 + 6);
  local_64 = uVar3 & 0x10;
  if ((uVar3 & 0x10) != 0) {
    return (int *)0x1;
  }
  piVar11 = (int *)*param_2;
  *(ushort *)((int)param_2 + 6) = uVar3 | 0x10;
  FUN_0025cdb0(piVar18);
  iVar5 = DAT_00288388 + 0x28804e;
  psVar12 = psVar10 + 4;
  for (; (int)local_64 < (int)*psVar10; local_64 = local_64 + 1) {
    if (*(int *)(psVar12 + 6) != 0) {
      return (int *)0x1;
    }
    if (*(int *)(psVar12 + 2) == 0) {
      puVar19 = *(undefined4 **)(psVar12 + 8);
      FUN_0025c7ba(param_1,puVar19);
      puVar6 = (undefined4 *)FUN_0025f04c(iVar4,0x4c);
      *(undefined4 **)(psVar12 + 6) = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        return (int *)0x2;
      }
      *(undefined2 *)(puVar6 + 8) = 1;
      uVar13 = FUN_0026877c(iVar4,iVar5,puVar6);
      *puVar6 = uVar13;
      do {
        puVar21 = puVar19;
        puVar19 = (undefined4 *)puVar21[0xf];
      } while (puVar19 != (undefined4 *)0x0);
      FUN_00268794(piVar18,*puVar21,puVar6 + 2,puVar6 + 3);
      puVar6[1] = 0xffffffff;
      puVar6[6] = DAT_0028838c;
      *(byte *)((int)puVar6 + 0x22) = *(byte *)((int)puVar6 + 0x22) | 2;
    }
    else {
      iVar8 = FUN_00287f90(piVar18,0,*(int *)(psVar12 + 2),*(undefined4 *)psVar12);
      *(int *)(psVar12 + 6) = iVar8;
      if (iVar8 == 0) {
        return (int *)0x2;
      }
      *(short *)(iVar8 + 0x20) = *(short *)(iVar8 + 0x20) + 1;
      if ((*(int *)(iVar8 + 0x1c) != 0) || ((int)((uint)*(byte *)(iVar8 + 0x22) << 0x1b) < 0)) {
        iVar7 = FUN_0026d134(piVar18,iVar8);
        if (iVar7 != 0) {
          return (int *)0x2;
        }
        uVar13 = FUN_002607da(iVar4,*(undefined4 *)(iVar8 + 0x1c));
        *(undefined4 *)(psVar12 + 8) = uVar13;
        FUN_0025c7ba(param_1,uVar13);
      }
    }
    iVar8 = FUN_00269304(piVar18,psVar12);
    if (iVar8 != 0) {
      return (int *)0x2;
    }
    psVar12 = psVar12 + 0x20;
  }
  if (*(char *)(iVar4 + 0x36) != '\0') {
    return (int *)0x2;
  }
  psVar12 = (short *)param_2[10];
  local_54 = psVar12 + 4;
  piVar17 = (int *)(psVar12 + 0x36);
  for (local_60 = (short *)0x1; (int)local_60 + -1 < *psVar12 + -1;
      local_60 = (short *)((int)local_60 + 1)) {
    iVar5 = piVar17[-6];
    if ((iVar5 != 0) && (*(int *)(local_54 + 6) != 0)) {
      bVar22 = (*(byte *)(piVar17 + -2) & 0x20) != 0;
      if ((*(byte *)(piVar17 + -2) & 4) != 0) {
        if ((*piVar17 != 0) || (piVar17[1] != 0)) {
          uVar13 = 0;
          iVar4 = DAT_00288390 + 0x288190;
LAB_0028827c:
          FUN_00268e48(piVar18,iVar4,uVar13);
          return (int *)0x2;
        }
        for (local_6c = 0; local_6c < *(int *)(iVar5 + 8); local_6c = local_6c + 1) {
          iVar8 = FUN_00264778(psVar12,local_60,
                               *(undefined4 *)(local_6c * 0x18 + *(int *)(iVar5 + 0xc)),&local_28,
                               &local_24);
          if (iVar8 != 0) {
            FUN_00269170(piVar18,psVar12,local_28,local_24,local_60,local_6c,bVar22,param_2 + 0xb);
          }
        }
      }
      if (*piVar17 != 0) {
        if (piVar17[1] != 0) {
          FUN_00268e48(piVar18,DAT_00288394 + 0x2881f2);
          return (int *)0x2;
        }
        if (bVar22) {
          FUN_0025d158(*piVar17,piVar17[-1]);
        }
        iVar8 = FUN_00262684(*piVar18,param_2[0xb],*piVar17);
        param_2[0xb] = iVar8;
        *piVar17 = 0;
      }
      piVar9 = (int *)piVar17[1];
      local_68 = 0;
      if (piVar9 != (int *)0x0) {
        for (; (int)local_68 < piVar9[1]; local_68 = local_68 + 1) {
          local_6c = 0;
          uVar13 = *(undefined4 *)(local_68 * 8 + *piVar9);
          while( true ) {
            if (*(int *)(iVar5 + 8) <= local_6c) goto LAB_00288274;
            iVar8 = sqlite3_stricmp(*(undefined4 *)(local_6c * 0x18 + *(int *)(iVar5 + 0xc)),uVar13)
            ;
            if (iVar8 == 0) break;
            local_6c = local_6c + 1;
          }
          if ((local_6c < 0) ||
             (iVar8 = FUN_00264778(psVar12,local_60,uVar13,&local_28,&local_24), iVar8 == 0)) {
LAB_00288274:
            iVar4 = DAT_00288398 + 0x28827e;
            goto LAB_0028827c;
          }
          FUN_00269170(piVar18,psVar12,local_28,local_24,local_60,local_6c,bVar22,param_2 + 0xb);
        }
      }
    }
    piVar17 = piVar17 + 0x10;
    local_54 = local_54 + 0x20;
  }
  iVar8 = 0;
  for (iVar5 = 0; iVar5 < *piVar11; iVar5 = iVar5 + 1) {
    puVar19 = (undefined4 *)piVar11[2];
    cVar2 = **(char **)((int)puVar19 + iVar8);
    if ((cVar2 == 'q') ||
       ((cVar2 == 'v' && (**(char **)(*(char **)((int)puVar19 + iVar8) + 0xc) == 'q')))) {
      piVar17 = (int *)0x0;
      uVar1 = (uint)((*(uint *)(*piVar18 + 0x18) & 0xc00) + DAT_0028839c == 0);
      local_40 = 0;
      iVar5 = DAT_002883a0 + 0x28831c;
      goto LAB_00288536;
    }
    iVar8 = iVar8 + 0x14;
  }
LAB_0028854e:
  param_2 = (int *)*param_2;
  if ((param_2 != (int *)0x0) &&
     (iVar5 = *param_2, param_2 = (int *)0x0, *(int *)(iVar4 + 0x54) < iVar5)) {
    FUN_00268e48(piVar18,DAT_00288580 + 0x288568);
  }
  return param_2;
LAB_00288536:
  if (*piVar11 <= local_40) goto LAB_00288542;
  pcVar14 = (char *)*puVar19;
  if (*pcVar14 == 'q') {
    local_6c = 0;
LAB_00288376:
    bVar22 = false;
    local_60 = psVar10 + 4;
    for (local_64 = 0; (int)local_64 < (int)*psVar10; local_64 = local_64 + 1) {
      local_54 = *(short **)(local_60 + 4);
      piVar9 = *(int **)(local_60 + 6);
      if (local_54 == (short *)0x0) {
        local_54 = (short *)*piVar9;
      }
      if (*(char *)(iVar4 + 0x36) != '\0') break;
      if ((local_6c == 0) || (iVar8 = sqlite3_stricmp(local_6c,local_54), iVar8 == 0)) {
        for (local_50 = 0; local_50 < piVar9[2]; local_50 = local_50 + 1) {
          puVar16 = (uint *)(piVar9[3] + local_50 * 0x18);
          uVar15 = *puVar16;
          if (*(char *)((int)puVar16 + 0x17) == '\0') {
            if (((int)(((int)local_64 >> 0x1f) - local_64) < 0) && (local_6c == 0)) {
              if (((int)((uint)*(byte *)(local_60 + 0xe) << 0x1d) < 0) &&
                 (iVar8 = FUN_00264778(psVar10,local_64,uVar15,0,0), iVar8 != 0)) goto LAB_002884da;
              piVar20 = *(int **)(local_60 + 0x14);
              if (piVar20 != (int *)0x0) {
                for (local_5c = 0; local_5c < piVar20[1]; local_5c = local_5c + 1) {
                  iVar8 = sqlite3_stricmp(*(undefined4 *)(local_5c * 8 + *piVar20),uVar15);
                  if (iVar8 == 0) {
                    if (-1 < local_5c) goto LAB_002884da;
                    break;
                  }
                }
              }
            }
            local_5c = FUN_0025f1ba(iVar4,0x1a,uVar15);
            local_68 = uVar1;
            if ((uVar1 != 0) || (1 < *psVar10)) {
              uVar13 = FUN_0025f1ba(iVar4,0x1a,local_54);
              local_5c = FUN_00269118(piVar18,0x76,uVar13,local_5c,0);
              if (uVar1 != 0) {
                uVar15 = FUN_0026877c(iVar4,iVar5,local_54,uVar15);
                local_68 = uVar15;
              }
            }
            piVar17 = (int *)FUN_00267228(piVar18,piVar17,local_5c);
            local_20 = uVar15;
            local_1c = FUN_0025b154(uVar15);
            FUN_0025f2f2(piVar18,piVar17,&local_20,0);
            FUN_0025fbda(iVar4,local_68);
          }
LAB_002884da:
        }
        bVar22 = true;
      }
      local_60 = local_60 + 0x20;
    }
    if (!bVar22) {
      if (local_6c == 0) {
        FUN_00268e48(piVar18,DAT_0028857c + 0x28852c);
      }
      else {
        FUN_00268e48(piVar18,DAT_00288578 + 0x288520);
      }
    }
  }
  else {
    if ((*pcVar14 == 'v') && (**(char **)(pcVar14 + 0xc) == 'q')) {
      local_6c = *(int *)(*(int *)(pcVar14 + 8) + 4);
      goto LAB_00288376;
    }
    piVar17 = (int *)FUN_00267228(piVar18,piVar17);
    if (piVar17 != (int *)0x0) {
      *(undefined4 *)(piVar17[2] + (*piVar17 + -1) * 0x14 + 4) = puVar19[1];
      *(undefined4 *)(piVar17[2] + (*piVar17 + -1) * 0x14 + 8) = puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
    }
    *puVar19 = 0;
  }
  puVar19 = puVar19 + 5;
  local_40 = local_40 + 1;
  goto LAB_00288536;
LAB_00288542:
  FUN_00261102(iVar4,piVar11);
  *param_2 = (int)piVar17;
  goto LAB_0028854e;
}


