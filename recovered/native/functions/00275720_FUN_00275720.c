/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275720 FUN_00275720 */

void FUN_00275720(int param_1,char *param_2,int param_3,int *param_4,byte param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  char *__s1;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  int *piVar10;
  uint uVar11;
  code *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  byte bVar15;
  bool bVar16;
  char *local_c4;
  char *local_b8;
  char *local_b4;
  char *local_ac;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  char *local_94;
  uint local_88;
  uint local_84;
  undefined1 auStack_80 [16];
  byte local_70;
  byte local_6f;
  byte local_6c;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [36];
  int local_1c;
  
  piVar10 = *(int **)(DAT_00275a10 + 0x275730);
  local_1c = *piVar10;
  if (param_2 == (char *)0x0) {
    bVar16 = true;
LAB_00275758:
    if (*(char *)(param_3 + 0x35) == '\x02') {
      bVar16 = true;
      goto LAB_00275770;
    }
LAB_00275762:
    local_a4 = param_6 & 0x80;
    if (local_a4 != 0) goto LAB_00275770;
  }
  else {
    bVar16 = *param_2 == '\0';
    iVar1 = strcmp(param_2,(char *)(DAT_00275a14 + 0x27574a));
    if (iVar1 != 0) {
      if (bVar16) goto LAB_00275758;
      goto LAB_00275762;
    }
LAB_00275770:
    param_5 = param_5 | 2;
    local_a4 = 1;
  }
  if (((int)(param_6 << 0x17) < 0) && (local_a4 != 0 || bVar16)) {
    param_6 = DAT_00275a18 & param_6 | 0x200;
  }
  piVar2 = (int *)FUN_0025f3a8(0x2c);
  iVar1 = 7;
  if (piVar2 == (int *)0x0) goto LAB_00275e1a;
  *(undefined1 *)(piVar2 + 2) = 0;
  *piVar2 = param_3;
  piVar2[7] = (int)piVar2;
  piVar2[8] = 1;
  local_a0 = 0;
  if ((!bVar16) &&
     (((local_a4 == 0 || ((int)(param_6 << 0x19) < 0)) &&
      (local_a0 = param_6 & 0x20000, local_a0 != 0)))) {
    iVar1 = *(int *)(param_1 + 8) + 1;
    __s1 = (char *)FUN_0025edc8(iVar1);
    *(undefined1 *)((int)piVar2 + 9) = 1;
    if (__s1 == (char *)0x0) {
      sqlite3_free(piVar2);
      iVar1 = 7;
      goto LAB_00275e1a;
    }
    if (local_a4 == 0) {
      *__s1 = '\0';
      iVar1 = (**(code **)(param_1 + 0x24))(param_1,param_2,iVar1,__s1);
      if (iVar1 != 0) {
        sqlite3_free(__s1);
        sqlite3_free(piVar2);
        goto LAB_00275e1a;
      }
    }
    else {
      iVar1 = FUN_0025b154(param_2);
      memcpy(__s1,param_2,iVar1 + 1);
    }
    local_a0 = FUN_0025ad68(4);
    sqlite3_mutex_enter();
    uVar7 = FUN_0025ad68(2);
    sqlite3_mutex_enter();
    for (puVar13 = *(undefined4 **)(DAT_00275a1c + 0x2758b8); puVar13 != (undefined4 *)0x0;
        puVar13 = (undefined4 *)puVar13[0x11]) {
      piVar3 = (int *)*puVar13;
      iVar1 = strcmp(__s1,(char *)piVar3[0x24]);
      if ((iVar1 == 0) && (*piVar3 == param_1)) {
        iVar8 = *(int *)(param_3 + 0x14) + -1;
        iVar1 = iVar8 * 0x10;
        goto LAB_002758a4;
      }
    }
    goto LAB_002758ba;
  }
LAB_002758cc:
  piVar3 = (int *)FUN_0025f3a8(0x54);
  if (piVar3 == (int *)0x0) {
    iVar1 = 7;
  }
  else {
    local_88 = 0x400;
    local_98 = 0x28;
    if (0x28 < *(int *)(param_1 + 4)) {
      local_98 = *(int *)(param_1 + 4) + 7U & 0xfffffff8;
    }
    *piVar3 = 0;
    local_c4 = param_2;
    local_b8 = param_2;
    local_ac = param_2;
    if ((param_5 & 2) == 0) {
      if (param_2 == (char *)0x0) {
        local_b4 = (char *)0x0;
        local_9c = 0;
        local_94 = (char *)0x0;
LAB_002759de:
        piVar5 = (int *)FUN_0025f3a8(local_b4 +
                                     (*(int *)(param_1 + 4) + 7U & 0xfffffff8) + 0x101 +
                                     local_98 * 2 + (int)local_b8 * 3);
        if (piVar5 == (int *)0x0) {
          FUN_0025fbda(0,local_c4);
          goto LAB_00275e40;
        }
        piVar5[0x2d] = (int)(piVar5 + 0x30);
        piVar5[0xf] = (int)(piVar5 + 0x3c);
        iVar1 = (int)(piVar5 + 0x3c) + (*(int *)(param_1 + 4) + 7U & 0xfffffff8);
        piVar5[0x11] = iVar1;
        iVar1 = iVar1 + local_98;
        piVar5[0x10] = iVar1;
        pvVar6 = (void *)(iVar1 + local_98);
        piVar5[0x24] = (int)pvVar6;
        if (local_c4 != (char *)0x0) {
          piVar5[0x25] = (int)((int)pvVar6 + (int)(local_b8 + (int)(local_b4 + 1)));
          memcpy(pvVar6,local_c4,(size_t)local_b8);
          if (local_b4 != (char *)0x0) {
            memcpy(local_b8 + piVar5[0x24] + 1,local_94,(size_t)local_b4);
          }
          piVar14 = piVar5 + 0x25;
          memcpy((void *)*piVar14,local_c4,(size_t)local_b8);
          iVar1 = DAT_00275dd8;
          memcpy(local_b8 + *piVar14,(void *)(DAT_00275dd8 + 0x275ad7),9);
          piVar5[0x2f] = (int)(local_b8 + *piVar14 + 9);
          memcpy(local_b8 + *piVar14 + 9,local_c4,(size_t)local_b8);
          memcpy(local_b8 + piVar5[0x2f],(void *)(iVar1 + 0x275ae1),5);
          FUN_0025fbda(0,local_c4);
        }
        *piVar5 = param_1;
        piVar5[0x1e] = param_6;
        if ((local_ac == (char *)0x0) || (*local_ac == '\0')) {
          *(undefined1 *)((int)piVar5 + 0xf) = 1;
          *(undefined1 *)(piVar5 + 4) = 4;
          bVar15 = (byte)param_6 & 1;
          bVar16 = true;
LAB_00275b42:
          iVar1 = FUN_002619f0(piVar5,&local_88,0xffffffff);
          uVar11 = local_88;
          if (iVar1 == 0) {
            local_b8 = (char *)0x0;
            if (local_9c == 0) {
              local_b8 = (char *)(DAT_00275de0 + 0x275b7a);
            }
            pvVar6 = (void *)piVar5[0x2d];
            memset(pvVar6,0,0x30);
            *(undefined4 *)((int)pvVar6 + 0x18) = 0x50;
            *(uint *)((int)pvVar6 + 0x14) = uVar11;
            *(uint *)((int)pvVar6 + 0x1c) = local_9c ^ 1;
            *(char **)((int)pvVar6 + 0x20) = local_b8;
            iVar1 = DAT_00275de4;
            *(undefined4 *)((int)pvVar6 + 0x10) = 100;
            *(int **)((int)pvVar6 + 0x24) = piVar5;
            *(byte *)((int)piVar5 + 6) = ~param_5 & 1;
            piVar5[0x21] = iVar1;
            *(bool *)(piVar5 + 3) = bVar16;
            *(bool *)(piVar5 + 1) = bVar16;
            *(bool *)((int)piVar5 + 0x11) = bVar16;
            *(undefined1 *)((int)piVar5 + 0xe) = (undefined1)local_9c;
            *(byte *)((int)piVar5 + 0xd) = bVar15;
            *(bool *)((int)piVar5 + 7) = bVar16;
            if (!bVar16) {
              *(undefined1 *)(piVar5 + 2) = 1;
              *(undefined1 *)((int)piVar5 + 0xb) = 2;
              *(undefined1 *)((int)piVar5 + 10) = 0x22;
              *(undefined1 *)((int)piVar5 + 9) = 2;
            }
            piVar5[0x22] = -1;
            piVar5[0x23] = -1;
            *(undefined2 *)(piVar5 + 0x1d) = 0x50;
            FUN_00261bd8(piVar5);
            if ((~param_5 & 1) == 0) {
              uVar9 = 2;
LAB_00275c06:
              *(undefined1 *)((int)piVar5 + 5) = uVar9;
            }
            else if (local_9c != 0) {
              uVar9 = 4;
              goto LAB_00275c06;
            }
            piVar5[0x2b] = DAT_00275de8 + 0x275c12;
            *piVar3 = (int)piVar5;
            memset(auStack_80,0,100);
            iVar1 = *(int *)piVar5[0xf];
            if (((iVar1 == 0) ||
                (pcVar12 = *(code **)(iVar1 + 8),
                iVar1 = (*pcVar12)((int *)piVar5[0xf],auStack_80,100,pcVar12,0,0),
                iVar1 == DAT_00275dec)) || (iVar1 == 0)) {
              piVar3[1] = param_3;
              iVar1 = DAT_00275df0;
              iVar8 = *piVar3;
              *(byte *)(piVar3 + 4) = param_5;
              *(int *)(iVar8 + 0x98) = iVar1 + 0x275c58;
              *(int **)(iVar8 + 0x9c) = piVar3;
              piVar2[1] = (int)piVar3;
              iVar1 = *piVar3;
              piVar3[2] = 0;
              piVar3[3] = 0;
              if (*(char *)(iVar1 + 0xd) != '\0') {
                *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 1;
              }
              iVar8 = DAT_00275df4;
              uVar11 = (uint)local_70 << 8 | (uint)local_6f << 0x10;
              piVar3[8] = uVar11;
              if ((uVar11 + iVar8 < 0xfe01) && ((uVar11 & uVar11 - 1) == 0)) {
                uVar11 = (uint)local_6c;
                *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 2;
                iVar8 = FUN_0025ba30(auStack_4c);
                *(char *)((int)piVar3 + 0x11) = '\x01' - (iVar8 == 0);
                iVar8 = FUN_0025ba30(auStack_40);
                *(char *)((int)piVar3 + 0x12) = '\x01' - (iVar8 == 0);
              }
              else {
                uVar11 = 0;
                piVar3[8] = 0;
                if ((local_a4 == 0) && (param_2 != (char *)0x0)) {
                  *(undefined1 *)((int)piVar3 + 0x11) = 0;
                  *(undefined1 *)((int)piVar3 + 0x12) = 0;
                }
                else {
                  uVar11 = 0;
                }
              }
              iVar1 = FUN_002619f0(iVar1,piVar3 + 8,uVar11);
              if (iVar1 == 0) {
                piVar3[9] = piVar3[8] - uVar11;
                if (*(char *)((int)piVar2 + 9) != '\0') {
                  piVar3[0x10] = 1;
                  uVar7 = FUN_0025ad68(2);
                  if (*(int *)(DAT_00275df8 + 0x275d0a) != 0) {
                    iVar1 = FUN_0025ad68(0);
                    piVar3[0xe] = iVar1;
                    if (iVar1 == 0) {
                      *(undefined1 *)(param_3 + 0x36) = 0;
                      goto LAB_00275e40;
                    }
                  }
                  sqlite3_mutex_enter(uVar7);
                  iVar1 = *(int *)(DAT_00275dfc + 0x275d94);
                  *(int **)(DAT_00275dfc + 0x275d94) = piVar3;
                  piVar3[0x11] = iVar1;
                  sqlite3_mutex_leave(uVar7);
                }
                goto LAB_00275d34;
              }
            }
            goto LAB_00275e42;
          }
        }
        else {
          local_84 = 0;
          iVar1 = (**(code **)(param_1 + 0x18))
                            (param_1,piVar5[0x24],piVar5[0xf],param_6 & DAT_00275ddc,&local_84);
          bVar15 = (byte)(local_84 & 1);
          if (iVar1 == 0 && (local_84 & 1) == 0) {
            FUN_00261bd8(piVar5);
            uVar11 = piVar5[0x1f];
            if ((local_88 < uVar11) && (local_88 = uVar11, 0x2000 < uVar11)) {
              local_88 = 0x2000;
            }
            bVar15 = 0;
            bVar16 = false;
            goto LAB_00275b42;
          }
          if (iVar1 == 0) {
            bVar16 = false;
            goto LAB_00275b42;
          }
        }
        FUN_0025acd0(piVar5[0xf]);
        sqlite3_free(piVar5);
      }
      else {
        local_9c = 0;
LAB_0027592c:
        if (*param_2 == '\0') {
          local_c4 = (char *)0x0;
          local_b8 = (char *)0x0;
          local_b4 = (char *)0x0;
          local_94 = (char *)0x0;
          goto LAB_002759de;
        }
        iVar1 = *(int *)(param_1 + 8) + 1;
        local_c4 = (char *)FUN_0025ee10(0,iVar1 * 2);
        if (local_c4 == (char *)0x0) goto LAB_00275e40;
        *local_c4 = '\0';
        iVar1 = (**(code **)(param_1 + 0x24))(param_1,param_2,iVar1,local_c4);
        local_b8 = (char *)FUN_0025b154(local_c4);
        iVar8 = FUN_0025b154(param_2);
        local_94 = param_2 + iVar8 + 1;
        for (local_b4 = local_94; *local_b4 != '\0'; local_b4 = local_b4 + iVar8 + 1 + iVar4 + 1) {
          iVar8 = FUN_0025b154(local_b4);
          iVar4 = FUN_0025b154(local_b4 + iVar8 + 1);
        }
        local_b4 = local_b4 + (1 - (int)local_94);
        if ((iVar1 == 0) &&
           (((int)(local_b8 + 7) < *(int *)(param_1 + 8) ||
            (iVar1 = FUN_0026b474(DAT_00275a20), iVar1 == 0)))) goto LAB_002759de;
        FUN_0025fbda(0,local_c4);
      }
    }
    else {
      if (param_2 == (char *)0x0) {
LAB_00275e32:
        local_9c = 1;
        local_ac = (char *)0x0;
        local_b4 = (char *)0x0;
        local_94 = (char *)0x0;
        goto LAB_002759de;
      }
      local_9c = 1;
      if (*param_2 == '\0') goto LAB_0027592c;
      local_c4 = (char *)FUN_0025f25a(0,param_2);
      if (local_c4 != (char *)0x0) {
        local_b8 = (char *)FUN_0025b154();
        goto LAB_00275e32;
      }
LAB_00275e40:
      iVar1 = 7;
    }
LAB_00275e42:
    if (*piVar3 != 0) {
      FUN_00275670();
    }
  }
  sqlite3_free(piVar3);
  sqlite3_free(piVar2);
  *param_4 = 0;
  goto LAB_00275e0e;
LAB_002758a4:
  if (iVar8 < 0) goto code_r0x002758a8;
  iVar4 = *(int *)(*(int *)(param_3 + 0x10) + iVar1 + 4);
  if ((iVar4 != 0) && (*(undefined4 **)(iVar4 + 4) == puVar13)) {
    sqlite3_mutex_leave(uVar7);
    sqlite3_mutex_leave(local_a0);
    sqlite3_free(__s1);
    sqlite3_free(piVar2);
    iVar1 = 0x13;
    goto LAB_00275e1a;
  }
  iVar8 = iVar8 + -1;
  iVar1 = iVar1 + -0x10;
  goto LAB_002758a4;
code_r0x002758a8:
  piVar2[1] = (int)puVar13;
  puVar13[0x10] = puVar13[0x10] + 1;
LAB_002758ba:
  sqlite3_mutex_leave(uVar7);
  sqlite3_free(__s1);
  if (puVar13 == (undefined4 *)0x0) goto LAB_002758cc;
LAB_00275d34:
  if (*(char *)((int)piVar2 + 9) != '\0') {
    for (iVar1 = 0; iVar1 < *(int *)(param_3 + 0x14); iVar1 = iVar1 + 1) {
      iVar8 = *(int *)(*(int *)(param_3 + 0x10) + iVar1 * 0x10 + 4);
      if ((iVar8 != 0) && (*(char *)(iVar8 + 9) != '\0')) goto LAB_00275d5c;
    }
  }
  goto LAB_00275d9c;
LAB_00275d5c:
  do {
    iVar1 = iVar8;
    iVar8 = *(int *)(iVar1 + 0x18);
  } while (*(int *)(iVar1 + 0x18) != 0);
  if ((uint)piVar2[1] < *(uint *)(iVar1 + 4)) {
    piVar2[5] = iVar1;
    piVar2[6] = 0;
    *(int **)(iVar1 + 0x18) = piVar2;
  }
  else {
    do {
      iVar8 = iVar1;
      iVar1 = *(int *)(iVar8 + 0x14);
      if (iVar1 == 0) break;
    } while (*(uint *)(iVar1 + 4) < (uint)piVar2[1]);
    piVar2[5] = iVar1;
    piVar2[6] = iVar8;
    if (iVar1 != 0) {
      *(int **)(iVar1 + 0x18) = piVar2;
    }
    *(int **)(iVar8 + 0x14) = piVar2;
  }
LAB_00275d9c:
  *param_4 = (int)piVar2;
  iVar1 = piVar2[1];
  FUN_00261f68(piVar2);
  FUN_00262002(piVar2);
  if (*(int *)(iVar1 + 0x30) == 0) {
    FUN_0025c030(*(undefined4 *)piVar2[1],2000);
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
  }
LAB_00275e0e:
  if (local_a0 != 0) {
    sqlite3_mutex_leave(local_a0);
  }
LAB_00275e1a:
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


