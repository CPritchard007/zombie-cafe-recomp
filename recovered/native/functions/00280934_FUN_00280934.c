/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00280934 FUN_00280934 */

undefined4 FUN_00280934(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  char cVar17;
  int local_50;
  int local_4c;
  int *local_48;
  int local_3c;
  int local_20;
  uint local_1c [2];
  
  piVar15 = (int *)*param_1;
  if (*(char *)((int)piVar15 + 0x36) != '\0') {
    param_1[0x16] = 7;
  }
  if ((void *)param_1[0x30] != (void *)0x0) {
    memset((void *)param_1[0x30],0,param_1[0x2f]);
  }
  iVar2 = param_1[0x2a];
  if (iVar2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
    FUN_0025c41a();
  }
  iVar2 = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  if (param_1[0x10] != 0) {
    for (; iVar2 < (int)(uint)*(ushort *)((int)param_1 + 0x2e); iVar2 = iVar2 + 1) {
      if (*(int *)(param_1[0x10] + iVar2 * 4) != 0) {
        FUN_0027cabc(param_1);
        *(undefined4 *)(param_1[0x10] + iVar2 * 4) = 0;
      }
    }
  }
  if (param_1[2] != 0) {
    FUN_00263b20(param_1[2] + 0x28,param_1[6]);
  }
  while (puVar9 = (undefined4 *)param_1[0x2b], puVar9 != (undefined4 *)0x0) {
    param_1[0x2b] = puVar9[1];
    puVar16 = puVar9 + 0x12 + puVar9[0xf] * 10;
    for (local_50 = 0; local_50 < (int)puVar9[0x10]; local_50 = local_50 + 1) {
      uVar14 = *puVar16;
      puVar16 = puVar16 + 1;
      FUN_0027cabc(*puVar9,uVar14);
    }
    FUN_00263b20(puVar9 + 0x12,puVar9[0xf]);
    FUN_0025fbda(*(undefined4 *)*puVar9,puVar9);
  }
  if (param_1[0xc] != DAT_00280cd4) {
    return 0;
  }
  if (-1 < param_1[0x15]) {
    if (param_1[0x1c] != 0) {
      FUN_002624d0(param_1);
    }
    uVar6 = param_1[0x16] & 0xff;
    if ((((uVar6 == 10) || (uVar6 == 7)) || (uVar6 == 0xd)) || (uVar6 == 9)) {
      if ((uVar6 != 9) || (cVar17 = (char)param_1[0x19] == '\0', (bool)cVar17)) {
        if (((uVar6 != 0xd) && (uVar6 != 7)) || (*(char *)((int)param_1 + 99) == '\0')) {
          FUN_0027cc08(piVar15,0x204);
          FUN_002600ce(piVar15);
          bVar8 = true;
          *(undefined1 *)(piVar15 + 0xd) = 1;
          cVar17 = '\0';
          goto LAB_00280a9a;
        }
        cVar17 = '\x02';
      }
      bVar8 = true;
    }
    else {
      bVar8 = false;
      cVar17 = '\0';
    }
LAB_00280a9a:
    if (param_1[0x16] == 0) {
      FUN_0026a9a0(param_1);
    }
    if (((piVar15[0x48] < 1) || (piVar15[0x4e] != 0)) &&
       (((char)piVar15[0xd] != '\0' && (piVar15[0x21] == (uint)((char)param_1[0x19] == '\0'))))) {
      if ((param_1[0x16] == 0) || ((!bVar8 && ((char)param_1[0x17] == '\x03')))) {
        iVar2 = FUN_0026a9a0(param_1,1);
        if (iVar2 == 0) {
          piVar10 = (int *)piVar15[0x4e];
          piVar15[0x4e] = 0;
          local_50 = 0;
          local_48 = piVar10;
          do {
            if (piVar15[0x48] <= local_50) {
              iVar2 = 0;
              break;
            }
            local_4c = 0;
            iVar2 = *local_48;
            local_48 = local_48 + 1;
            piVar13 = *(int **)(iVar2 + 8);
            if ((piVar13 != (int *)0x0) && (*(code **)(*piVar13 + 0x3c) != (code *)0x0)) {
              local_4c = (**(code **)(*piVar13 + 0x3c))(piVar13);
              FUN_0025fbda(piVar15,param_1[0xd]);
              iVar2 = FUN_0025f25a(piVar15,piVar13[2]);
              param_1[0xd] = iVar2;
              sqlite3_free(piVar13[2]);
            }
            local_50 = local_50 + 1;
            iVar2 = local_4c;
          } while (local_4c == 0);
          piVar15[0x4e] = (int)piVar10;
          iVar11 = 0;
          bVar8 = false;
          local_4c = 0;
          while (iVar2 == 0) {
            if (piVar15[5] <= iVar11) {
              if (((bVar8) && ((code *)piVar15[0x2a] != (code *)0x0)) &&
                 (iVar11 = (*(code *)piVar15[0x2a])(piVar15[0x29]), iVar11 != 0)) {
                iVar2 = 0x13;
                goto LAB_00280f0c;
              }
              iVar11 = **(int **)(*(int *)(piVar15[4] + 4) + 4);
              cVar1 = *(char *)(iVar11 + 0xe);
              if (cVar1 == '\0') {
                iVar3 = *(int *)(iVar11 + 0x90);
              }
              else {
                iVar3 = DAT_00280cd8 + 0x280c0e;
              }
              iVar3 = FUN_0025b154(iVar3);
              if (iVar3 == 0) goto LAB_00280c3a;
              if (local_4c < 2) {
                iVar3 = 0;
                goto LAB_00280c3a;
              }
              iVar3 = *piVar15;
              if (cVar1 == '\0') {
                iVar2 = *(int *)(iVar11 + 0x90);
              }
              else {
                iVar2 = DAT_00280cdc + 0x280c84;
              }
              iVar11 = FUN_0025b154(iVar2);
              iVar4 = FUN_0026877c(piVar15,DAT_00280ce0 + 0x280c92,iVar2);
              if (iVar4 == 0) {
                iVar2 = 7;
                goto LAB_00280f0c;
              }
              local_4c = 0;
              iVar12 = DAT_00280ce4 + 0x280caa;
              goto LAB_00280cfe;
            }
            iVar3 = *(int *)(piVar15[4] + iVar11 * 0x10 + 4);
            if ((iVar3 != 0) && (*(char *)(iVar3 + 8) == '\x02')) {
              local_4c = local_4c + (uint)(iVar11 != 1);
              bVar8 = true;
              if (*(int *)(**(int **)(iVar3 + 4) + 0xb8) == 0) {
                iVar2 = FUN_00261bae(**(int **)(iVar3 + 4),4);
              }
            }
            iVar11 = iVar11 + 1;
          }
          goto LAB_00280eee;
        }
        iVar2 = 0x13;
        if ((char)param_1[0x19] != '\0') {
          iVar2 = param_1[0x1c];
          uVar14 = 1;
          goto LAB_00280f00;
        }
        goto LAB_00280f0c;
      }
      goto LAB_00280f0e;
    }
    if (cVar17 != '\0') goto LAB_00280f46;
    if ((param_1[0x16] == 0) || ((char)param_1[0x17] == '\x03')) {
      cVar17 = '\x01';
      goto LAB_00280f46;
    }
    if ((char)param_1[0x17] == '\x02') {
      cVar17 = '\x02';
      goto LAB_00280f46;
    }
    goto LAB_00280f6a;
  }
  goto LAB_00280fb2;
  while( true ) {
    iVar11 = 0;
    if (*(int *)(piVar15[4] + iVar3 * 0x10 + 4) != 0) {
      iVar11 = FUN_002803b0();
    }
    iVar3 = iVar3 + 1;
    if (iVar11 != 0) break;
LAB_00280c3a:
    iVar11 = iVar2;
    if (piVar15[5] <= iVar3) break;
  }
  iVar2 = iVar11;
  iVar11 = 0;
  while (iVar2 == 0) {
    if (piVar15[5] <= iVar11) goto LAB_0028100c;
    if (*(int *)(piVar15[4] + iVar11 * 0x10 + 4) != 0) {
      iVar2 = FUN_00274b70();
    }
    iVar11 = iVar11 + 1;
  }
  goto LAB_00280eee;
LAB_00280e10:
  if (piVar15[5] <= local_3c) goto code_r0x00280e18;
  iVar2 = *(int *)(piVar15[4] + local_3c * 0x10 + 4);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 8) == '\x02')) {
    piVar13 = *(int **)(iVar2 + 4);
    iVar12 = *(int *)(*piVar13 + 0x94);
    if (iVar12 != 0) {
      if (!bVar8) {
        FUN_00261f68();
        cVar1 = *(char *)(*piVar13 + 7);
        FUN_00262002(iVar2);
        if (cVar1 == '\0') {
          bVar8 = true;
        }
      }
      iVar2 = FUN_0025b154(iVar12);
      iVar2 = FUN_0025ace6(piVar10,iVar12,iVar2 + 1);
      FUN_0025b154(iVar12);
      if (iVar2 != 0) {
        FUN_0025acd0(piVar10);
        sqlite3_free(piVar10);
        pcVar7 = *(code **)(iVar3 + 0x1c);
        goto LAB_00280e5a;
      }
    }
  }
  local_3c = local_3c + 1;
  goto LAB_00280e10;
code_r0x00280e18:
  if (((bVar8) && (uVar6 = (**(code **)(*piVar10 + 0x30))(piVar10), (uVar6 & 0x400) == 0)) &&
     (iVar2 = (**(code **)(*piVar10 + 0x14))(piVar10,2), iVar2 != 0)) {
    FUN_0025acd0(piVar10);
    sqlite3_free(piVar10);
    pcVar7 = *(code **)(iVar3 + 0x1c);
LAB_00280e5a:
    (*pcVar7)(iVar3,iVar4,0);
    FUN_0025fbda(piVar15,iVar4);
    goto LAB_00280eee;
  }
  iVar12 = 0;
  do {
    iVar2 = iVar11;
    if (piVar15[5] <= iVar12) break;
    iVar5 = *(int *)(piVar15[4] + iVar12 * 0x10 + 4);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = FUN_002803b0(iVar5,iVar4);
    }
    iVar12 = iVar12 + 1;
  } while (iVar2 == 0);
  FUN_0025acd0(piVar10);
  sqlite3_free(piVar10);
  if (iVar2 != 0) goto LAB_00280e9e;
  iVar2 = (**(code **)(iVar3 + 0x1c))(iVar3,iVar4,1);
  FUN_0025fbda(piVar15,iVar4);
  if (iVar2 != 0) goto LAB_00280eee;
  FUN_0025ad28();
  for (iVar2 = 0; iVar2 < piVar15[5]; iVar2 = iVar2 + 1) {
    iVar11 = *(int *)(piVar15[4] + iVar2 * 0x10 + 4);
    if (iVar11 != 0) {
      FUN_00274b70(iVar11,1);
    }
  }
  FUN_0025ad3c();
LAB_0028100c:
  FUN_00260082(piVar15,0x40);
  piVar15[0x7a] = 0;
  piVar15[0x7b] = 0;
  piVar15[6] = DAT_00281040 & piVar15[6];
  goto LAB_00280f16;
LAB_00280cfe:
  sqlite3_randomness(4,local_1c);
  sqlite3_snprintf(0xd,iVar4 + iVar11,iVar12,local_1c[0] >> 8,local_1c[0] & 0xff);
  iVar2 = (**(code **)(iVar3 + 0x20))(iVar3,iVar4,0,&local_20);
  if (iVar2 == 0) {
    if (local_20 == 0) {
LAB_00280d34:
      piVar10 = (int *)FUN_0025f3a8(*(undefined4 *)(iVar3 + 4));
      if (piVar10 == (int *)0x0) {
        iVar2 = 7;
      }
      else {
        iVar11 = (**(code **)(iVar3 + 0x18))(iVar3,iVar4,piVar10,DAT_00280ff8,0);
        if (iVar11 == 0) {
          local_3c = 0;
          bVar8 = false;
          goto LAB_00280e10;
        }
        sqlite3_free(piVar10);
        iVar2 = iVar11;
      }
      goto LAB_00280e9e;
    }
    local_4c = local_4c + 1;
    if (100 < local_4c) {
      sqlite3_log(0xd,DAT_00280ce8 + 0x280cc0,iVar4);
      (**(code **)(iVar3 + 0x1c))(iVar3,iVar4,0);
      goto LAB_00280d34;
    }
    if (local_4c == 1) {
      sqlite3_log(0xd,DAT_00280ff4 + 0x280cfc,iVar4);
    }
    goto LAB_00280cfe;
  }
LAB_00280e9e:
  FUN_0025fbda(piVar15,iVar4);
LAB_00280eee:
  if ((iVar2 == 5) && ((char)param_1[0x19] != '\0')) {
    iVar2 = param_1[0x1c];
    uVar14 = 5;
LAB_00280f00:
    if (iVar2 != 0) {
      FUN_00262504(param_1);
    }
  }
  else {
LAB_00280f0c:
    param_1[0x16] = iVar2;
LAB_00280f0e:
    FUN_0027cc08(piVar15,0);
LAB_00280f16:
    piVar15[0x79] = 0;
    if (cVar17 != '\0') {
LAB_00280f46:
      iVar2 = FUN_0027d57c(param_1,cVar17);
      if (iVar2 != 0) {
        if ((param_1[0x16] == 0x13) || (param_1[0x16] == 0)) {
          param_1[0x16] = iVar2;
          FUN_0025fbda(piVar15,param_1[0xd]);
          param_1[0xd] = 0;
        }
LAB_00280f6a:
        FUN_0027cc08(piVar15,0x204);
        FUN_002600ce(piVar15);
        *(undefined1 *)(piVar15 + 0xd) = 1;
      }
    }
    if (*(char *)((int)param_1 + 0x5e) != '\0') {
      if (cVar17 == '\x02') {
        piVar15[0x11] = 0;
      }
      else {
        iVar2 = param_1[0x1a];
        piVar15[0x11] = iVar2;
        piVar15[0x12] = piVar15[0x12] + iVar2;
      }
      param_1[0x1a] = 0;
    }
    if (param_1[0x1c] != 0) {
      FUN_00262504(param_1);
    }
LAB_00280fb2:
    if ((-1 < param_1[0x15]) && (piVar15[0x20] = piVar15[0x20] + -1, (char)param_1[0x19] == '\0')) {
      piVar15[0x21] = piVar15[0x21] + -1;
    }
    param_1[0xc] = DAT_00280ffc;
    if (*(char *)(*param_1 + 0x36) != '\0') {
      param_1[0x16] = 7;
    }
    uVar14 = 0;
    if (param_1[0x16] == 5) {
      uVar14 = 5;
    }
  }
  return uVar14;
}


