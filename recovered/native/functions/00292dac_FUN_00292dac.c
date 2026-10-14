/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292dac FUN_00292dac */

void FUN_00292dac(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *__dest;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  uint extraout_r1;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  int *piVar14;
  uint uStack_4;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint *puVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  undefined4 *puVar29;
  
  iVar1 = DAT_00293068;
  piVar14 = (int *)(&stack0xffffffec + DAT_00293068);
  puVar15 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar16 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar17 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar18 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar19 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar20 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar21 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar22 = (uint *)(&stack0xffffffec + DAT_00293068);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_00293068);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_00293068);
  puVar25 = (uint *)(&stack0xffffffec + DAT_00293068);
  piVar26 = (int *)(&stack0xffffffec + DAT_00293068);
  piVar27 = (int *)(&stack0xffffffec + DAT_00293068);
  piVar28 = (int *)(&stack0xffffffec + DAT_00293068);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_00293068);
  *(undefined4 *)(&stack0xffffffec + DAT_00293068) = param_4;
  *(undefined4 *)(&stack0xfffffff4 + DAT_00293068) = param_2;
  puVar8 = *(undefined4 **)(DAT_0029306c + 0x292dc0);
  uVar6 = *puVar8;
  *(undefined4 *)(&stack0x00000010 + DAT_00293068) = param_1;
  *(undefined4 *)(&stack0x0000001c + DAT_00293068) =
       *(undefined4 *)(&stack0x000004bc + DAT_00293068);
  *(undefined4 *)(&stack0x000004a0 + DAT_00293068) = uVar6;
  *(undefined4 **)(&stack0x00000020 + DAT_00293068) = puVar8;
  *(uint *)((int)&uStack_4 + DAT_00293068) = *(uint *)(&stack0xffffffec + DAT_00293068) & 0xffffff00
  ;
  uVar5 = *(uint *)(&stack0xffffffec + DAT_00293068) & 4;
  *(uint *)(&stack0xfffffff8 + DAT_00293068) = uVar5;
  *(uint *)(&stack0x00000008 + DAT_00293068) = uVar5;
  if (uVar5 != 0) {
    iVar7 = *(int *)((int)&uStack_4 + DAT_00293068);
    if ((iVar7 + DAT_00293070 == 0) || (iVar7 + DAT_00293074 == 0)) {
      *(undefined4 *)(&stack0x00000008 + DAT_00293068) = 1;
    }
    else {
      *(uint *)(&stack0x00000008 + DAT_00293068) = (uint)(iVar7 + DAT_00293078 == 0);
    }
  }
  memset(param_3,0,0x2c);
  iVar7 = DAT_00293088;
  if (*(int *)((int)&uStack_4 + iVar1) == 0x100) {
    iVar7 = (**(code **)(DAT_0029307c + 0x292e5a))
                      (*(undefined4 *)(&stack0xfffffff4 + iVar1),&stack0x0000002c + iVar1);
    if (iVar7 == 0) {
      FUN_0025bb6c();
      for (piVar11 = *(int **)(DAT_00293080 + 0x292e96); piVar11 != (int *)0x0;
          piVar11 = (int *)piVar11[8]) {
        if (((*piVar11 == *(int *)(&stack0x0000002c + iVar1)) &&
            (*(int *)(&stack0x00000030 + iVar1) == 0)) &&
           ((piVar11[1] == *(int *)(&stack0x0000008c + iVar1) &&
            (*(int *)(&stack0x00000090 + iVar1) == 0)))) {
          piVar9 = piVar11 + 7;
          goto LAB_00292e60;
        }
      }
LAB_00292e70:
      FUN_0025bb7a();
      if (piVar11 == (int *)0x0) goto LAB_00292e7c;
      iVar13 = *piVar11;
    }
    else {
LAB_00292e7c:
      piVar11 = (int *)sqlite3_malloc(0xc);
      iVar7 = 7;
      if (piVar11 == (int *)0x0) goto LAB_002932be;
      iVar13 = -1;
    }
    param_3[7] = piVar11;
    puVar12 = *(undefined1 **)(&stack0xfffffff4 + iVar1);
  }
  else {
    if (*(int *)(&stack0xfffffff4 + iVar1) == 0) {
      *(undefined4 *)(DAT_00293088 + 0x292f24) = **(undefined4 **)(DAT_00293084 + 0x292ea4);
      if (*(int *)(iVar7 + 0x292f28) == 0) {
        pcVar2 = getenv((char *)(DAT_0029308c + 0x292eb8));
        *(char **)(iVar7 + 0x292f28) = pcVar2;
      }
      iVar7 = DAT_00293094;
      piVar11 = (int *)(DAT_00293090 + 0x292f40);
      *(int *)(&stack0xfffffff0 + iVar1) = DAT_00293090 + 0x292f58;
      do {
        pcVar2 = (char *)*piVar11;
        piVar11 = piVar11 + 1;
        if (piVar11 == *(int **)(&stack0xfffffff0 + iVar1)) {
          if (pcVar2 == (char *)0x0) {
            pcVar2 = (char *)(DAT_00293098 + 0x292f0c);
          }
          break;
        }
      } while ((((pcVar2 == (char *)0x0) ||
                (iVar13 = (**(code **)(iVar7 + 0x292f02))(pcVar2,&stack0x0000002c + iVar1),
                iVar13 != 0)) || ((*(uint *)(&stack0x0000003c + iVar1) & 0xf000) != 0x4000)) ||
              (iVar13 = (**(code **)(iVar7 + 0x292eea))(pcVar2,7), iVar13 != 0));
      sVar4 = strlen(pcVar2);
      iVar7 = 1;
      if (DAT_0029309c < sVar4 + 0x19) goto LAB_002932be;
      *(int *)(&stack0x00000000 + iVar1) = DAT_002930a0 + 0x292f22;
      do {
        sqlite3_snprintf(0x1f0,&stack0x0000029c + iVar1,*(undefined4 *)(&stack0x00000000 + iVar1),
                         pcVar2);
        sVar4 = strlen(&stack0x0000029c + iVar1);
        *(size_t *)(&stack0x00000004 + iVar1) = sVar4;
        *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x0000029c + sVar4 + iVar1;
        sqlite3_randomness(0xf,&stack0x0000029c + sVar4 + iVar1);
        iVar7 = 0;
        iVar13 = DAT_002930a4 + 0x292f4e;
        do {
          __aeabi_uidivmod(*(undefined1 *)(*(int *)(&stack0xfffffff0 + iVar1) + iVar7),0x3e);
          *(undefined1 *)(*(int *)(&stack0xfffffff0 + iVar1) + iVar7) =
               *(undefined1 *)(iVar13 + (extraout_r1 & 0xff));
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0xf);
        iVar7 = *(int *)(&stack0x00000004 + iVar1);
        puVar12 = &stack0x0000029c + iVar1;
        puVar12[iVar7 + 0xf] = 0;
        puVar12[iVar7 + 0x10] = 0;
        iVar7 = (**(code **)(DAT_002930a8 + 0x292f96))(puVar12);
      } while (iVar7 == 0);
      puVar12 = &stack0x0000029c + iVar1;
    }
    else {
      puVar12 = *(undefined1 **)(&stack0xfffffff4 + iVar1);
    }
    iVar13 = -1;
  }
  uVar5 = *puVar15;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 2;
  *(uint *)(&stack0x00000004 + iVar1) = uVar5 & 2;
  if ((uVar5 & 2) == 0) {
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  }
  if (*(int *)(&stack0xfffffff8 + iVar1) != 0) {
    *(uint *)(&stack0xfffffff0 + iVar1) = *(uint *)(&stack0xfffffff0 + iVar1) | 0x40;
  }
  uVar5 = *puVar16;
  *(uint *)(&stack0x00000018 + iVar1) = uVar5 & 0x10;
  if ((uVar5 & 0x10) != 0) {
    *(uint *)(&stack0xfffffff0 + iVar1) = *(uint *)(&stack0xfffffff0 + iVar1) | DAT_002930ac;
  }
  uVar5 = *puVar18;
  *(uint *)(&stack0xfffffff8 + iVar1) = *puVar17 & 8;
  *(uint *)(&stack0x00000014 + iVar1) = uVar5 & 1;
  if (iVar13 < 0) {
    if ((*puVar19 & DAT_002930b0) == 0) {
      if (*(int *)(&stack0xfffffff8 + iVar1) == 0) {
        *(undefined4 *)(&stack0x00000000 + iVar1) = 0;
        *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
        uVar5 = 0;
      }
      else {
        *(undefined4 *)(&stack0x00000000 + iVar1) = 0;
        *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
        uVar5 = 0x180;
      }
    }
    else {
      sVar4 = FUN_0025b154(puVar12);
      do {
        sVar4 = sVar4 - 1;
      } while (puVar12[sVar4] != '-');
      __dest = &stack0x00000098 + iVar1;
      memcpy(__dest,puVar12,sVar4);
      __dest[sVar4] = 0;
      iVar13 = (**(code **)(DAT_002930b4 + 0x293036))(__dest,&stack0x0000002c + iVar1);
      iVar7 = DAT_00293348;
      if (iVar13 != 0) goto LAB_002932be;
      uVar5 = *(uint *)(&stack0x0000003c + iVar1) & 0x1ff;
      *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(&stack0x00000044 + iVar1);
      *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000048 + iVar1);
    }
    uVar3 = *(uint *)(&stack0xfffffff0 + iVar1);
    *(uint *)(&stack0xfffffff0 + iVar1) = uVar3 | 0x20000;
    iVar13 = FUN_0025e6c4(puVar12,uVar3 | 0x20000,uVar5);
    if (-1 < iVar13) {
LAB_002930ce:
      if ((*puVar22 & DAT_0029330c) != 0) {
        (**(code **)(DAT_00293310 + 0x2931d4))
                  (iVar13,*(undefined4 *)(&stack0x0000000c + iVar1),
                   *(undefined4 *)(&stack0x00000000 + iVar1));
      }
      goto LAB_002930e6;
    }
    piVar11 = (int *)__errno();
    if (((*piVar11 != 0x15) && (*(int *)(&stack0x00000018 + iVar1) == 0)) &&
       ((*(int *)(&stack0x00000004 + iVar1) != 0 &&
        (iVar13 = FUN_0025e6c4(puVar12,*(uint *)(&stack0xfffffff0 + iVar1) & 0xffffffbd,uVar5),
        -1 < iVar13)))) {
      *puVar21 = *puVar20 & 0xfffffff9 | 1;
      *(undefined4 *)(&stack0x00000014 + iVar1) = 1;
      goto LAB_002930ce;
    }
    uVar6 = FUN_0026b474(DAT_002930b8);
    iVar7 = FUN_0026c154(uVar6,DAT_002930bc + 0x293062,puVar12,DAT_002930b8);
  }
  else {
LAB_002930e6:
    if (*(undefined4 **)(&stack0x0000001c + iVar1) != (undefined4 *)0x0) {
      **(undefined4 **)(&stack0x0000001c + iVar1) = *puVar23;
    }
    if ((int *)param_3[7] != (int *)0x0) {
      *(int *)param_3[7] = iVar13;
      *(undefined4 *)(param_3[7] + 4) = *puVar24;
    }
    uVar5 = *(uint *)(&stack0xfffffff8 + iVar1);
    if (uVar5 != 0) {
      uVar5 = 0x20;
      (**(code **)(DAT_00293314 + 0x2931d2))(puVar12);
    }
    if (*(int *)(&stack0x00000014 + iVar1) != 0) {
      uVar5 = uVar5 | 2;
    }
    if (*(int *)((int)&uStack_4 + iVar1) != 0x100) {
      uVar5 = uVar5 | 0x80;
    }
    if (*(int *)(&stack0x00000008 + iVar1) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((*puVar25 & 0x40) != 0) {
      uVar5 = uVar5 | 0x40;
    }
    uVar6 = *(undefined4 *)(&stack0x00000010 + iVar1);
    param_3[8] = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    param_3[3] = iVar13;
    param_3[1] = uVar6;
    *(ushort *)((int)param_3 + 0x12) = (ushort)uVar5 & 0xff;
    uVar3 = uVar5 & 0x40;
    if (uVar3 != 0) {
      uVar3 = *(uint *)(&stack0xfffffff4 + iVar1);
    }
    iVar7 = sqlite3_uri_boolean(uVar3,DAT_00293318 + 0x29315e,1);
    if (iVar7 != 0) {
      *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x10;
    }
    iVar7 = memcmp(*(void **)(*(int *)(&stack0x00000010 + iVar1) + 0x10),
                   (void *)(DAT_0029331c + 0x293178),10);
    if (iVar7 == 0) {
      *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 1;
    }
    if ((uVar5 & 0x80) == 0) {
      iVar7 = (*(code *)**(undefined4 **)(*(int *)(&stack0x00000010 + iVar1) + 0x14))
                        (*(undefined4 *)(&stack0xfffffff4 + iVar1),param_3);
      *piVar26 = iVar7;
      if (iVar7 == DAT_00293320 + 0x2931ae) {
        FUN_0025bb6c();
        iVar7 = (**(code **)(DAT_00293324 + 0x2931f4))(param_3[3],&stack0x0000002c + iVar1);
        if (iVar7 == 0) {
          *(undefined4 *)(&stack0x00000024 + iVar1) = *(undefined4 *)(&stack0x0000002c + iVar1);
          *(undefined4 *)(&stack0x00000028 + iVar1) = *(undefined4 *)(&stack0x0000008c + iVar1);
          for (puVar8 = *(undefined4 **)(DAT_00293328 + 0x293238); puVar8 != (undefined4 *)0x0;
              puVar8 = (undefined4 *)puVar8[8]) {
            iVar7 = memcmp(&stack0x00000024 + iVar1,puVar8,8);
            if (iVar7 == 0) {
              puVar8[4] = puVar8[4] + 1;
              goto LAB_00293232;
            }
          }
          puVar8 = (undefined4 *)sqlite3_malloc(0x28);
          if (puVar8 == (undefined4 *)0x0) {
            iVar7 = 7;
            goto LAB_0029323a;
          }
          memset(puVar8,0,0x28);
          uVar6 = *(undefined4 *)(&stack0x00000024 + iVar1);
          puVar8[9] = 0;
          *puVar8 = uVar6;
          puVar8[1] = *(undefined4 *)(&stack0x00000028 + iVar1);
          puVar8[4] = 1;
          iVar7 = *(int *)(DAT_0029332c + 0x293280);
          puVar8[8] = iVar7;
          if (iVar7 != 0) {
            *(undefined4 **)(iVar7 + 0x24) = puVar8;
          }
          *(undefined4 **)(DAT_00293330 + 0x29328e) = puVar8;
LAB_00293232:
          param_3[2] = puVar8;
          iVar7 = 0;
        }
        else {
          piVar11 = (int *)__errno();
          iVar10 = *piVar11;
          iVar7 = 0x16;
          param_3[5] = iVar10;
          if (iVar10 != 0x4b) {
            iVar7 = 10;
          }
LAB_0029323a:
          FUN_0026c198(param_3,iVar13,DAT_00293334);
          iVar13 = -1;
        }
        FUN_0025bb7a();
      }
      else {
        iVar7 = 0;
        if (*piVar27 == DAT_00293338 + 0x29326c) {
          sVar4 = strlen(*(char **)(&stack0xfffffff4 + iVar1));
          *(size_t *)((int)&uStack_4 + iVar1) = sVar4 + 6;
          iVar10 = sqlite3_malloc();
          *(int *)(&stack0xfffffff0 + iVar1) = iVar10;
          iVar7 = 7;
          if (iVar10 != 0) {
            sqlite3_snprintf(*(undefined4 *)((int)&uStack_4 + iVar1),
                             *(undefined4 *)(&stack0xfffffff0 + iVar1),DAT_0029333c + 0x29327c,
                             *(undefined4 *)(&stack0xfffffff4 + iVar1));
            iVar7 = 0;
          }
          param_3[6] = *(undefined4 *)(&stack0xfffffff0 + iVar1);
        }
      }
    }
    else {
      *piVar28 = DAT_00293340 + 2700000;
      iVar7 = 0;
    }
    param_3[5] = 0;
    if (iVar7 == 0) {
      *param_3 = *puVar29;
      goto LAB_002932be;
    }
    if (iVar13 != -1) {
      FUN_0026c198(param_3,iVar13,DAT_00293344);
    }
  }
  if (iVar7 != 0) {
    sqlite3_free(param_3[7]);
  }
LAB_002932be:
  if (*(int *)(&stack0x000004a0 + iVar1) == **(int **)(&stack0x00000020 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
LAB_00292e60:
  piVar11 = (int *)*piVar9;
  if (piVar11 == (int *)0x0) goto LAB_00292e70;
  if (piVar11[1] == *piVar14) {
    *piVar9 = piVar11[2];
    goto LAB_00292e70;
  }
  piVar9 = piVar11 + 2;
  goto LAB_00292e60;
}


