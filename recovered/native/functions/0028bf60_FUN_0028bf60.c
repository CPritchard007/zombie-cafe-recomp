/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028bf60 FUN_0028bf60 */

undefined4 *
FUN_0028bf60(int *param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8,undefined1 param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *__src;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int local_68;
  undefined4 *local_64;
  void *local_60;
  int *local_5c;
  int local_58;
  undefined4 *local_50;
  void *local_4c;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  
  iVar15 = *param_1;
  local_34 = (int *)0x0;
  if (*(char *)(iVar15 + 0x36) != '\0') {
LAB_0028c622:
    local_64 = (undefined4 *)0x0;
    puVar14 = local_64;
    goto LAB_0028c5ea;
  }
  if (*(char *)((int)param_1 + DAT_0028c2c0) != '\0') {
LAB_0028c608:
    local_64 = (undefined4 *)0x0;
    puVar14 = local_64;
    goto LAB_0028c5ea;
  }
  iVar2 = FUN_00287abc();
  if (iVar2 != 0) {
LAB_0028c612:
    local_64 = (undefined4 *)0x0;
    puVar14 = local_64;
    goto LAB_0028c5ea;
  }
  if (param_4 != 0) {
    local_58 = FUN_00268f60(param_1,param_2,param_3,&local_34);
    if (-1 < local_58) {
      if ((((*(char *)(iVar15 + 0x7d) == '\0') &&
           (iVar2 = FUN_00288584(param_1,param_4), iVar2 != 0)) && (*(int *)(param_3 + 4) == 0)) &&
         (*(int *)(iVar2 + 0x44) == *(int *)(*(int *)(iVar15 + 0x10) + 0x1c))) {
        local_58 = 1;
      }
      if (local_58 != 1) {
        local_24 = *(undefined4 *)(local_58 * 0x10 + *(int *)(*param_1 + 0x10));
        local_1c = local_34;
        local_20 = DAT_0028c2c4 + 0x28bffa;
        local_28 = param_1;
        FUN_0026a3dc(&local_28,param_4);
      }
      piVar3 = (int *)FUN_00287f90(param_1,0,*(undefined4 *)(param_4 + 0xc),
                                   *(undefined4 *)(param_4 + 8));
      if (piVar3 == (int *)0x0) goto LAB_0028c612;
      if (*(char *)(iVar15 + 0x36) != '\0') {
        local_64 = (undefined4 *)0x0;
        puVar14 = (undefined4 *)0x0;
        goto LAB_0028c5ea;
      }
      goto LAB_0028c034;
    }
LAB_0028c60e:
    local_64 = (undefined4 *)0x0;
    puVar14 = local_64;
    goto LAB_0028c5ea;
  }
  piVar3 = (int *)param_1[0x7f];
  if (piVar3 == (int *)0x0) goto LAB_0028c622;
  local_58 = FUN_0025d12c(iVar15,piVar3[0x11]);
LAB_0028c034:
  iVar9 = *(int *)(iVar15 + 0x10);
  iVar2 = sqlite3_strnicmp(*piVar3,DAT_0028c2c8 + 0x28c040,7);
  if (iVar2 == 0) {
    iVar13 = *piVar3;
    iVar2 = memcmp((void *)(iVar13 + 7),(void *)(DAT_0028c2cc + 0x28c056),9);
    if (iVar2 != 0) {
      FUN_00268e48(param_1,DAT_0028c2d0 + 0x28c066,iVar13);
      goto LAB_0028c60e;
    }
  }
  if (piVar3[7] != 0) {
    FUN_00268e48(param_1,DAT_0028c2d4 + 0x28c078);
    goto LAB_0028c608;
  }
  puVar14 = (undefined4 *)(*(byte *)((int)piVar3 + 0x22) & 0x10);
  if ((*(byte *)((int)piVar3 + 0x22) & 0x10) != 0) {
    FUN_00268e48(param_1,DAT_0028c2d8 + 0x28c092);
    puVar14 = (undefined4 *)0x0;
    local_64 = (undefined4 *)0x0;
    goto LAB_0028c5ea;
  }
  iVar2 = local_58 * 0x10;
  puVar5 = (undefined4 *)(iVar9 + iVar2);
  if (local_34 == (int *)0x0) {
    iVar9 = 1;
    for (iVar13 = piVar3[4]; iVar13 != 0; iVar13 = *(int *)(iVar13 + 0x14)) {
      iVar9 = iVar9 + 1;
    }
    local_64 = (undefined4 *)FUN_0026877c(iVar15,DAT_0028c2e4 + 0x28c136,*piVar3,iVar9);
    if (local_64 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
      goto LAB_0028c5ea;
    }
LAB_0028c140:
    uVar6 = *puVar5;
    if (local_58 == 1) {
      iVar9 = DAT_0028c2e8 + 0x28c152;
    }
    else {
      iVar9 = DAT_0028c2ec + 0x28c158;
    }
    iVar9 = FUN_00268e90(param_1,0x12,iVar9,0,uVar6);
    puVar14 = (undefined4 *)0x0;
    if (iVar9 != 0) goto LAB_0028c5ea;
    uVar7 = 3;
    if (local_58 != 1) {
      uVar7 = 1;
    }
    iVar9 = FUN_00268e90(param_1,uVar7,local_64,*piVar3,uVar6);
    puVar14 = (undefined4 *)0x0;
    if (iVar9 != 0) goto LAB_0028c5ea;
    if (param_5 == (int *)0x0) {
      local_30 = *(undefined4 *)((piVar3[2] + -1) * 0x18 + piVar3[3]);
      local_2c = FUN_0025b154();
      param_5 = (int *)FUN_00267228(param_1,0,0);
      if (param_5 == (int *)0x0) {
        puVar14 = (undefined4 *)0x0;
        goto LAB_0028c5ea;
      }
      FUN_0025f2f2(param_1,param_5,&local_30,0);
      *(undefined1 *)(param_5[2] + 0xc) = param_9;
    }
    local_68 = 0;
    for (iVar9 = 0; iVar13 = *param_5, iVar9 < iVar13; iVar9 = iVar9 + 1) {
      iVar13 = *(int *)(iVar9 * 0x14 + param_5[2]);
      if ((iVar13 != 0) && (puVar14 = *(undefined4 **)(iVar13 + 0x14), puVar14 != (undefined4 *)0x0)
         ) {
        iVar13 = FUN_0025b154(*puVar14);
        local_68 = local_68 + iVar13 + 1;
      }
    }
    iVar9 = FUN_0025b154(local_64);
    iVar10 = iVar13 * 4;
    puVar14 = (undefined4 *)
              FUN_0025f04c(iVar15,iVar13 * 9 + iVar9 + 0x31 + local_68 +
                                  (iVar10 + 0xbU & 0xfffffff8));
    if (*(char *)(iVar15 + 0x36) == '\0') {
      puVar14[2] = puVar14 + 0xc;
      iVar11 = (int)(puVar14 + 0xc) + ((iVar13 + 2) * 4 & 0xfffffff8U);
      puVar14[8] = iVar11;
      iVar11 = iVar11 + iVar10;
      puVar14[1] = iVar11;
      iVar11 = iVar11 + iVar10;
      pvVar4 = (void *)(iVar11 + iVar13);
      puVar14[7] = iVar11;
      local_4c = (void *)((int)pvVar4 + iVar9 + 1U);
      *puVar14 = pvVar4;
      memcpy(pvVar4,local_64,iVar9 + 1U);
      puVar14[3] = piVar3;
      puVar14[9] = *param_5;
      *(undefined1 *)(puVar14 + 0xb) = (undefined1)param_6;
      *(bool *)((int)puVar14 + 0x2d) = local_34 == (int *)0x0;
      puVar14[6] = *(undefined4 *)(*(int *)(iVar15 + 0x10) + iVar2 + 0xc);
      bVar1 = *(byte *)(puVar5[3] + 0x4c);
      local_5c = (int *)param_5[2];
      pvVar4 = (void *)(DAT_0028c2f0 + 0x28c2bc);
      for (local_68 = 0; local_68 < *param_5; local_68 = local_68 + 1) {
        local_50 = (undefined4 *)piVar3[3];
        iVar9 = local_5c[1];
        local_60 = (void *)0x0;
        while (((int)local_60 < piVar3[2] &&
               (iVar13 = sqlite3_stricmp(iVar9,*local_50), iVar13 != 0))) {
          local_60 = (void *)((int)local_60 + 1);
          local_50 = local_50 + 6;
        }
        if (piVar3[2] <= (int)local_60) {
          FUN_00268e48(param_1,DAT_0028c628 + 0x28c338,*piVar3,iVar9);
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          goto LAB_0028c5d4;
        }
        *(void **)(puVar14[1] + local_68 * 4) = local_60;
        if ((*local_5c == 0) ||
           (puVar5 = *(undefined4 **)(*local_5c + 0x14), puVar5 == (undefined4 *)0x0)) {
          local_60 = *(void **)(piVar3[3] + (int)local_60 * 0x18 + 0x10);
          if (local_60 == (void *)0x0) {
            local_60 = pvVar4;
          }
        }
        else {
          __src = (void *)*puVar5;
          iVar9 = FUN_0025b154(__src);
          memcpy(local_4c,__src,iVar9 + 1U);
          local_60 = local_4c;
          local_4c = (void *)((int)local_4c + iVar9 + 1U);
        }
        if ((*(char *)(iVar15 + 0x7d) == '\0') &&
           (iVar9 = FUN_0026e718(param_1,local_60), iVar9 == 0)) goto LAB_0028c5d4;
        *(void **)(puVar14[8] + local_68 * 4) = local_60;
        *(byte *)(puVar14[7] + local_68) = *(byte *)(local_5c + 3) & (bVar1 < 4) - 1U;
        local_5c = local_5c + 5;
      }
      FUN_0025cd74(puVar14);
      if (piVar3 == (int *)param_1[0x7f]) {
        for (iVar9 = piVar3[4]; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x14)) {
          if (*(int *)(iVar9 + 0x24) == puVar14[9]) {
            local_68 = 0;
            while (((local_68 < *(int *)(iVar9 + 0x24) &&
                    (iVar13 = local_68 * 4,
                    *(int *)(*(int *)(iVar9 + 4) + iVar13) == *(int *)(puVar14[1] + iVar13))) &&
                   ((*(int *)(*(int *)(iVar9 + 0x20) + iVar13) == *(int *)(puVar14[8] + iVar13) ||
                    (iVar13 = sqlite3_stricmp(), iVar13 == 0))))) {
              local_68 = local_68 + 1;
            }
            if (local_68 == *(int *)(iVar9 + 0x24)) {
              if (*(char *)(iVar9 + 0x2c) == *(char *)(puVar14 + 0xb)) goto LAB_0028c5d4;
              if ((*(char *)(iVar9 + 0x2c) != 'c') && (*(char *)(puVar14 + 0xb) != 'c')) {
                FUN_00268e48(param_1,DAT_0028c62c + 0x28c460,0);
              }
              pcVar12 = (char *)(iVar9 + 0x2c);
              if (*pcVar12 != 'c') goto LAB_0028c5d4;
              cVar8 = *(char *)(puVar14 + 0xb);
              goto LAB_0028c4a8;
            }
          }
        }
      }
      if (*(char *)(iVar15 + 0x7d) == '\0') {
        iVar13 = param_1[0x13] + 1;
        param_1[0x13] = iVar13;
        iVar9 = FUN_002662b8(param_1);
        if (iVar9 != 0) {
          FUN_00275f2c(param_1,1,local_58);
          FUN_0026641e(iVar9,0x68,local_58,iVar13);
          local_68 = param_7;
          if (param_7 != 0) {
            if (param_6 == 0) {
              iVar10 = DAT_0028c630 + 0x28c502;
            }
            else {
              iVar10 = DAT_0028c634 + 0x28c508;
            }
            local_68 = FUN_0026877c(iVar15,DAT_0028c638 + 0x28c512,iVar10,(*param_8 - *local_34) + 1
                                    ,*local_34);
          }
          if (local_58 == 1) {
            iVar10 = DAT_0028c63c + 0x28c532;
          }
          else {
            iVar10 = DAT_0028c640 + 0x28c538;
          }
          FUN_00285af0(param_1,DAT_0028c644 + 0x28c542,
                       *(undefined4 *)(*(int *)(iVar15 + 0x10) + iVar2),iVar10,*puVar14,*piVar3,
                       iVar13,local_68);
          FUN_0025fbda(iVar15,local_68);
          if (param_4 != 0) {
            FUN_00270900(param_1,puVar14,iVar13);
            FUN_002668cc(param_1,local_58);
            uVar6 = FUN_0026877c(iVar15,DAT_0028c648 + 0x28c57a,*puVar14);
            FUN_0026690a(iVar9,local_58,uVar6);
            FUN_002665da(iVar9,0x81,0);
          }
          goto LAB_0028c590;
        }
      }
      else {
        uVar7 = *puVar14;
        uVar6 = FUN_0025b154(uVar7);
        iVar2 = FUN_00260d1c(puVar14[6] + 0x18,uVar7,uVar6,puVar14);
        if (iVar2 == 0) {
          *(uint *)(iVar15 + 0x18) = *(uint *)(iVar15 + 0x18) | 0x200;
          if (param_4 != 0) {
            puVar14[10] = *(undefined4 *)(iVar15 + 0x78);
          }
LAB_0028c590:
          if ((param_4 == 0) || (*(char *)(iVar15 + 0x7d) != '\0')) {
            iVar2 = piVar3[4];
            if ((param_6 == 5) && ((iVar2 != 0 && (*(char *)(iVar2 + 0x2c) != '\x05')))) {
              do {
                iVar9 = iVar2;
                iVar2 = *(int *)(iVar9 + 0x14);
                if (iVar2 == 0) break;
              } while (*(char *)(iVar2 + 0x2c) != '\x05');
              puVar14[5] = iVar2;
              *(undefined4 **)(iVar9 + 0x14) = puVar14;
            }
            else {
              puVar14[5] = iVar2;
              piVar3[4] = (int)puVar14;
            }
            goto LAB_0028c5ea;
          }
        }
        else {
          pcVar12 = (char *)(iVar15 + 0x36);
          cVar8 = '\x01';
LAB_0028c4a8:
          *pcVar12 = cVar8;
        }
      }
    }
LAB_0028c5d4:
    if (puVar14 == (undefined4 *)0x0) goto LAB_0028c5ea;
    FUN_0025fbda(iVar15,puVar14[4]);
    FUN_0025fbda(iVar15,puVar14);
  }
  else {
    local_64 = (undefined4 *)FUN_0025f2ac(iVar15);
    if (local_64 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
      goto LAB_0028c5ea;
    }
    iVar9 = FUN_00268fd4(param_1,local_64);
    if (iVar9 != 0) goto LAB_0028c5ea;
    if ((*(char *)(iVar15 + 0x7d) == '\0') &&
       (iVar9 = FUN_0026460e(iVar15,local_64,puVar14), iVar9 != 0)) {
      FUN_00268e48(param_1,DAT_0028c2dc + 0x28c0ea,local_64);
      goto LAB_0028c5ea;
    }
    iVar9 = FUN_00264662(iVar15,local_64,*puVar5);
    if (iVar9 == 0) goto LAB_0028c140;
    if (param_10 == 0) {
      FUN_00268e48(param_1,DAT_0028c2e0 + 0x28c10e,local_64);
      puVar14 = (undefined4 *)0x0;
      goto LAB_0028c5ea;
    }
    FUN_00275ec4(param_1,local_58);
  }
  puVar14 = (undefined4 *)0x0;
LAB_0028c5ea:
  FUN_00261102(iVar15,param_5);
  FUN_00260fde(iVar15,param_4);
  FUN_0025fbda(iVar15,local_64);
  return puVar14;
}


