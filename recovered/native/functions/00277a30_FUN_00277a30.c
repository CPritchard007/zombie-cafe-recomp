/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00277a30 FUN_00277a30 */

int FUN_00277a30(int *param_1,byte *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 *local_a4;
  int local_9c;
  int *local_98;
  int local_94;
  undefined4 *local_8c;
  uint local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  int *local_70;
  int *local_6c;
  int local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  
  puVar15 = (undefined4 *)param_1[2];
  iVar16 = *param_1;
  pbVar4 = (byte *)0x0;
  local_80 = 0;
  local_7c = 0;
  pbVar8 = param_2;
  if (puVar15 == (undefined4 *)0x0) {
    uVar20 = FUN_00278236();
    pbVar8 = (byte *)((ulonglong)uVar20 >> 0x20);
    pbVar4 = (byte *)uVar20;
  }
  if (pbVar8 == pbVar4) {
LAB_00277b9c:
    uVar7 = 10;
    uVar10 = 0;
LAB_00277d46:
    FUN_0026641e(puVar15,uVar7,uVar10,param_3);
    goto LAB_00278226;
  }
  uVar7 = (uint)*pbVar8;
  if (uVar7 < 0x5c) {
    if (0x51 < uVar7) {
LAB_00277cc0:
      uVar10 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_80);
      uVar5 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),&local_7c);
LAB_00277d30:
      FUN_00266266(puVar15,uVar7,uVar5,uVar10,param_3);
      goto LAB_00278226;
    }
    if (uVar7 < 0x46) {
      if (0x43 < uVar7) goto LAB_00277cc0;
      if (uVar7 == 0x18) {
LAB_00277c14:
        param_3 = FUN_00277a30(param_1,*(undefined4 *)(param_2 + 8),param_3);
        goto LAB_00278226;
      }
      if (uVar7 < 0x19) {
        if (uVar7 == 0x13) {
LAB_00277d36:
          uVar10 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_80);
          goto LAB_00277d46;
        }
        if (uVar7 == 0x14) goto LAB_00277f9e;
      }
      else {
        if (uVar7 == 0x38) {
          if (param_1[0x6d] == 0) {
            FUN_00268e48(param_1,DAT_0027823c + 0x2781ee);
            iVar16 = FUN_00278236();
            return iVar16;
          }
          if (pbVar8[1] == 2) {
            FUN_0025cdea(param_1);
          }
          uVar5 = *(undefined4 *)(param_2 + 4);
          if (param_2[1] != 4) {
            FUN_002662fa(param_1,param_2[1],uVar5,0);
            goto LAB_00278226;
          }
          iVar12 = 0;
          uVar21 = 0;
          uVar10 = 6;
          iVar16 = 4;
          goto LAB_00278212;
        }
        if (uVar7 == 0x3c) {
          iVar16 = *(int *)(pbVar8 + 0x28);
          FUN_0026641e(puVar15,0x74,
                       *(int *)(pbVar8 + 0x18) * (*(int *)(iVar16 + 8) + 1) + 1 +
                       (int)*(short *)(pbVar8 + 0x1c),param_3);
          if ((-1 < *(short *)(param_2 + 0x1c)) &&
             (*(char *)(*(int *)(iVar16 + 0xc) + *(short *)(param_2 + 0x1c) * 0x18 + 0x16) == 'e'))
          {
            FUN_002665da(puVar15,0x16,param_3);
          }
          goto LAB_00278226;
        }
        if (uVar7 == 0x25) {
          iVar16 = FUN_00277a30(param_1,*(undefined4 *)(pbVar8 + 8));
          iVar12 = FUN_0025cbf8(*(undefined4 *)(param_2 + 4));
          if (iVar16 != param_3) {
            FUN_0026641e(puVar15,0xf,iVar16,param_3);
            iVar16 = param_3;
          }
          param_3 = iVar16;
          FUN_002665da(puVar15,iVar12 + 0x2c,param_3);
          FUN_0025cb14(param_1,param_3,1);
          goto LAB_00278226;
        }
      }
    }
    else {
      if (uVar7 < 0x4b) {
        if (0x48 < uVar7) {
          FUN_0026641e(puVar15,7,1,param_3);
          uVar10 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_80);
          uVar10 = FUN_002665da(puVar15,uVar7,uVar10);
          FUN_0026641e(puVar15,0x14,param_3,0xffffffff);
          FUN_002624c2(puVar15,uVar10);
          goto LAB_00278226;
        }
        if (uVar7 == 0x47) {
          uVar9 = *(undefined4 *)(pbVar8 + 8);
          puVar14 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
          uVar11 = *puVar14;
          uVar10 = FUN_002786c2(param_1,uVar9,&local_80);
          uVar5 = FUN_002786c2(param_1,uVar11,&local_7c);
          uVar21 = FUN_002627dc(param_1);
          uVar6 = FUN_002627dc(param_1);
          FUN_0026d3fa(param_1,uVar9,uVar11,0x50,uVar10,uVar5,uVar21,0x10);
          uVar11 = puVar14[5];
          FUN_002627fe(param_1,local_7c);
          uVar5 = FUN_002786c2(param_1,uVar11,&local_7c);
          FUN_0026d3fa(param_1,uVar9,uVar11,0x4e,uVar10,uVar5,uVar6,0x10);
          FUN_00266266(puVar15,0x45,uVar21,uVar6,param_3);
          FUN_002627fe(param_1,uVar21);
          FUN_002627fe(param_1,uVar6);
          goto LAB_00278226;
        }
        if (uVar7 < 0x48) {
LAB_00277c88:
          uVar10 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_80);
          uVar5 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),&local_7c);
          uVar21 = *(undefined4 *)(param_2 + 8);
          uVar7 = 0x4c - (uVar7 != 0x46);
          uVar6 = *(undefined4 *)(param_2 + 0xc);
          uVar9 = 0x90;
          goto LAB_00277cba;
        }
        uVar5 = FUN_00266020(puVar15);
        uVar10 = FUN_00266020(puVar15);
        FUN_0026641e(puVar15,10,0,param_3);
        FUN_0027872c(param_1,param_2,uVar5,uVar10);
        FUN_0026641e(puVar15,7,1,param_3);
        FUN_0025c384(puVar15,uVar5);
        FUN_0026641e(puVar15,0x14,param_3,0);
        goto LAB_002781d4;
      }
      if (uVar7 < 0x51) {
        uVar10 = FUN_002786c2(param_1,*(undefined4 *)(pbVar8 + 8),&local_80);
        uVar5 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),&local_7c);
        uVar21 = *(undefined4 *)(param_2 + 8);
        uVar6 = *(undefined4 *)(param_2 + 0xc);
        uVar9 = 0x10;
LAB_00277cba:
        FUN_0026d3fa(param_1,uVar21,uVar6,uVar7,uVar10,uVar5,param_3,uVar9);
        goto LAB_00278226;
      }
    }
LAB_002780f0:
    piVar18 = (int *)(*(int **)(param_2 + 0x10))[2];
    iVar16 = **(int **)(param_2 + 0x10);
    uVar10 = FUN_00266020(puVar15);
    piVar19 = *(int **)(param_2 + 8);
    local_98 = piVar19;
    if (piVar19 != (int *)0x0) {
      local_48 = *piVar19;
      local_44 = piVar19[1];
      iStack_40 = piVar19[2];
      local_3c = piVar19[3];
      local_38 = piVar19[4];
      iStack_34 = piVar19[5];
      local_30 = piVar19[6];
      iStack_2c = piVar19[7];
      iStack_28 = piVar19[8];
      local_24 = piVar19[9];
      iStack_20 = piVar19[10];
      iStack_1c = piVar19[0xb];
      local_30 = FUN_002786c2(param_1,piVar19,&local_80,auStack_18);
      local_70 = &local_48;
      local_48 = CONCAT31(local_48._1_3_,0x84);
      local_98 = (int *)local_78;
      local_78[0] = 0x4c;
      local_80 = 0;
    }
    for (local_9c = 0; local_9c < iVar16; local_9c = local_9c + 2) {
      param_1[0x17] = param_1[0x17] + 1;
      piVar3 = (int *)*piVar18;
      if (piVar19 != (int *)0x0) {
        piVar3 = local_98;
        local_6c = (int *)*piVar18;
      }
      local_98 = piVar3;
      uVar5 = FUN_00266020(puVar15);
      FUN_00278ac2(param_1,local_98,uVar5,8);
      FUN_002786f4(param_1,piVar18[5],param_3);
      FUN_0026641e(puVar15,1,0,uVar10);
      FUN_002644ac(param_1);
      FUN_0025c384(puVar15,uVar5);
      piVar18 = piVar18 + 10;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      FUN_0026641e(puVar15,10,0,param_3);
    }
    else {
      param_1[0x17] = param_1[0x17] + 1;
      FUN_002786f4(param_1,*(undefined4 *)(param_2 + 0xc),param_3);
      FUN_002644ac(param_1);
    }
  }
  else {
    if (uVar7 == 0x85) {
      FUN_0026641e(puVar15,0xc,(int)*(short *)(pbVar8 + 0x1c),param_3);
      if (*(char *)(*(int *)(param_2 + 4) + 1) != '\0') {
        FUN_00263832(puVar15,0xffffffff,
                     *(undefined4 *)((*(short *)(param_2 + 0x1c) + -1) * 4 + param_1[0x7b]),
                     0xfffffffe);
      }
      goto LAB_00278226;
    }
    if (uVar7 < 0x86) {
      if (uVar7 == 0x74) {
LAB_00277f9e:
        param_3 = FUN_002774b0(param_1,param_2,0,0);
        goto LAB_00278226;
      }
      iVar16 = param_3;
      if (uVar7 < 0x75) {
        if (uVar7 == 0x5e) {
          iVar12 = 0;
          uVar5 = *(undefined4 *)(pbVar8 + 4);
          uVar21 = 0;
          uVar10 = 0x5e;
LAB_00278212:
          FUN_002662da(puVar15,uVar10,iVar12,iVar16,0,uVar5,uVar21);
          goto LAB_00278226;
        }
        if (uVar7 == 0x62) goto LAB_00277b9c;
        if (uVar7 == 0x5d) goto LAB_00277d36;
      }
      else {
        if (uVar7 == 0x82) {
          uVar10 = *(undefined4 *)(param_2 + 4);
          uVar5 = 0;
LAB_00277cfe:
          FUN_0026632e(puVar15,uVar10,uVar5,param_3);
          goto LAB_00278226;
        }
        if (uVar7 < 0x83) {
          if (uVar7 == 0x81) {
            uVar10 = 0;
            pbVar8 = param_2;
LAB_00277cec:
            FUN_00266430(param_1,pbVar8,uVar10,param_3);
            goto LAB_00278226;
          }
        }
        else {
          if (uVar7 == 0x83) {
            iVar17 = *(int *)(param_2 + 4);
            iVar12 = FUN_0025b154(iVar17 + 2);
            uVar5 = FUN_0025ee84(*puVar15,iVar17 + 2,iVar12 + -1);
            iVar12 = (iVar12 + -1) / 2;
            uVar21 = 0xffffffff;
            uVar10 = 0xb;
            goto LAB_00278212;
          }
          if (uVar7 == 0x84) {
            param_3 = *(int *)(param_2 + 0x18);
            goto LAB_00278226;
          }
        }
      }
      goto LAB_002780f0;
    }
    if (uVar7 == 0x99) {
      if (*(int *)(pbVar8 + 0x24) == 0) {
        FUN_00268e48(param_1,DAT_002780e0 + 0x277d98,*(undefined4 *)(param_2 + 4));
      }
      else {
        param_3 = *(int *)(*(int *)(*(int *)(pbVar8 + 0x24) + 0x20) +
                           *(short *)(pbVar8 + 0x1e) * 0x10 + 8);
      }
      goto LAB_00278226;
    }
    if (uVar7 < 0x9a) {
      if (uVar7 != 0x97) {
        if (0x97 < uVar7) {
LAB_00277b5a:
          if (*(int *)(param_2 + 0x18) < 0) {
            param_3 = (int)*(short *)(param_2 + 0x1c) + param_1[0x16];
          }
          else {
            param_3 = FUN_0027074a(param_1,*(undefined4 *)(param_2 + 0x28),
                                   (int)*(short *)(param_2 + 0x1c),*(int *)(param_2 + 0x18),param_3,
                                   param_2[0x23]);
          }
          goto LAB_00278226;
        }
        if (uVar7 == 0x92) goto LAB_00277c88;
        goto LAB_002780f0;
      }
    }
    else if (uVar7 != 0x9b) {
      if (uVar7 < 0x9b) {
        pcVar13 = *(char **)(pbVar8 + 0x24);
        iVar16 = *(int *)(pcVar13 + 0x14) + *(short *)(pbVar8 + 0x1e) * 0x18;
        if (*pcVar13 == '\0') {
          param_3 = *(int *)(iVar16 + 0x10);
          goto LAB_00278226;
        }
        if (pcVar13[1] == '\0') goto LAB_00277b5a;
        uVar5 = *(undefined4 *)(pcVar13 + 8);
        uVar10 = *(undefined4 *)(iVar16 + 0xc);
        uVar7 = 0x1d;
      }
      else {
        if (uVar7 != 0x9c) {
          if (uVar7 == 0x9d) goto LAB_00277c14;
          goto LAB_002780f0;
        }
        pbVar8 = *(byte **)(pbVar8 + 8);
        if (*pbVar8 == 0x81) {
          uVar10 = 1;
          goto LAB_00277cec;
        }
        if (*pbVar8 == 0x82) {
          uVar10 = *(undefined4 *)(pbVar8 + 4);
          uVar5 = 1;
          goto LAB_00277cfe;
        }
        uVar10 = FUN_002627dc(param_1);
        local_80 = uVar10;
        FUN_0026641e(puVar15,7,0,uVar10);
        uVar5 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_7c);
        uVar7 = 0x57;
      }
      goto LAB_00277d30;
    }
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0xc) + 0x4d);
    if ((int)((uint)*(ushort *)(param_2 + 2) << 0x11) < 0) {
      puVar14 = (undefined4 *)0x0;
      local_a4 = (undefined4 *)0x0;
    }
    else {
      puVar14 = *(undefined4 **)(param_2 + 0x10);
      local_a4 = puVar14;
      if (puVar14 != (undefined4 *)0x0) {
        local_a4 = (undefined4 *)*puVar14;
      }
    }
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar10 = FUN_0025b154(uVar5);
    local_9c = FUN_00262898(iVar16,uVar5,uVar10,local_a4,uVar1,0);
    if (local_9c == 0) {
      FUN_00268e48(param_1,DAT_002780e4 + 0x277dfe,uVar10,uVar5);
      goto LAB_00278226;
    }
    if (-1 < (int)((uint)*(byte *)(local_9c + 3) << 0x1a)) {
      local_8c = puVar14;
      if (puVar14 != (undefined4 *)0x0) {
        local_8c = (undefined4 *)FUN_00262834(param_1,local_a4);
        if ((*(byte *)(local_9c + 3) & 0xc0) != 0) {
          cVar2 = **(char **)puVar14[2];
          if ((cVar2 == -0x66) || (cVar2 == -0x68)) {
            (*(char **)puVar14[2])[0x23] = *(byte *)(local_9c + 3);
          }
        }
        param_1[0x17] = param_1[0x17] + 1;
        FUN_00278300(param_1,puVar14,local_8c,1);
        FUN_002644ac(param_1);
      }
      if ((int)local_a4 < 2) {
        if (local_a4 == (undefined4 *)0x1) goto LAB_00277ebe;
      }
      else {
        if ((int)((uint)*(ushort *)(param_2 + 2) << 0x18) < 0) {
          uVar10 = *(undefined4 *)(puVar14[2] + 0x14);
        }
        else {
LAB_00277ebe:
          uVar10 = *(undefined4 *)puVar14[2];
        }
        local_9c = FUN_0026088c(iVar16,local_9c,local_a4,uVar10);
      }
      iVar17 = 0;
      local_94 = 0;
      iVar12 = DAT_002780e8 + 0x277ed8;
      local_88 = 0;
      for (local_98 = (int *)0x0; (int)local_98 < (int)local_a4;
          local_98 = (int *)((int)local_98 + 1)) {
        if ((int)local_98 < 0x20) {
          local_38 = 1;
          local_44 = DAT_002780ec + 0x277ef8;
          local_48 = iVar12;
          FUN_0025c882(&local_48,*(undefined4 *)(puVar14[2] + iVar17));
          if (local_38 != 0) {
            local_88 = local_88 | 1 << ((uint)local_98 & 0xff);
          }
        }
        if ((local_94 == 0) && ((int)((uint)*(byte *)(local_9c + 3) << 0x1c) < 0)) {
          local_94 = FUN_0026cf38(param_1,*(undefined4 *)(puVar14[2] + iVar17));
        }
        iVar17 = iVar17 + 0x14;
      }
      if ((int)((uint)*(byte *)(local_9c + 3) << 0x1c) < 0) {
        if (local_94 == 0) {
          local_94 = *(int *)(iVar16 + 8);
        }
        FUN_002662da(puVar15,0x11,0,0,0,local_94,0xfffffffc);
      }
      FUN_002662da(puVar15,0x12,local_88,local_8c,param_3,local_9c,0xfffffffb);
      FUN_0025c3b8(puVar15,(uint)local_a4 & 0xff);
      if (local_a4 != (undefined4 *)0x0) {
        FUN_0025cbb8(param_1,local_8c,local_a4);
      }
      goto LAB_00278226;
    }
    uVar10 = FUN_00266020(puVar15);
    FUN_002786f4(param_1,*(undefined4 *)puVar14[2],param_3);
    for (iVar16 = 1; iVar16 < (int)local_a4; iVar16 = iVar16 + 1) {
      FUN_0026641e(puVar15,0x4a,param_3,uVar10);
      FUN_0025cb14(param_1,param_3,1);
      param_1[0x17] = param_1[0x17] + 1;
      FUN_002786f4(param_1,*(undefined4 *)(iVar16 * 0x14 + puVar14[2]),param_3);
      FUN_002644ac(param_1);
    }
  }
LAB_002781d4:
  FUN_0025c384(puVar15,uVar10);
LAB_00278226:
  FUN_002627fe(param_1,local_80);
  FUN_002627fe(param_1,local_7c);
  return param_3;
}


