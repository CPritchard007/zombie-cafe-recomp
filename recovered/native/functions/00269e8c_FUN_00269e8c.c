/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00269e8c FUN_00269e8c */

uint FUN_00269e8c(int param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  int local_50;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c [4];
  undefined4 *local_1c;
  
  uVar3 = *(ushort *)(param_2 + 2);
  puVar12 = *(undefined4 **)(param_1 + 0x10);
  piVar13 = (int *)*puVar12;
  uVar8 = uVar3 & 4;
  if ((uVar3 & 4) != 0) {
    return 1;
  }
  uVar5 = uVar3 | 4;
  bVar1 = *param_2;
  *(short *)(param_2 + 2) = (short)uVar5;
  if (bVar1 != 0x74) {
    if (0x74 < bVar1) {
      if (bVar1 == 0x85) {
        if ((*(byte *)(puVar12 + 7) & 4) != 0) {
          FUN_00268e48(piVar13,DAT_0026a108 + 0x26a0b2);
        }
        goto LAB_0026a0b4;
      }
      if (bVar1 < 0x86) {
        if (bVar1 == 0x76) {
          pcVar6 = *(char **)(param_2 + 0xc);
          if (*pcVar6 == '\x1a') {
            uVar5 = *(uint *)(*(int *)(param_2 + 8) + 4);
            uVar11 = *(undefined4 *)(pcVar6 + 4);
          }
          else {
            uVar8 = *(uint *)(*(int *)(param_2 + 8) + 4);
            uVar11 = *(undefined4 *)(*(int *)(pcVar6 + 0xc) + 4);
            uVar5 = *(uint *)(*(int *)(pcVar6 + 8) + 4);
          }
          goto LAB_00269f18;
        }
        goto LAB_0026a0b4;
      }
      if ((bVar1 != 0x97) && (bVar1 != 0x9b)) goto LAB_0026a0b4;
      piVar9 = *(int **)(param_2 + 0x10);
      local_50 = (int)piVar9;
      if (piVar9 != (int *)0x0) {
        local_50 = *piVar9;
      }
      iVar14 = *piVar13;
      uVar10 = *(undefined4 *)(param_2 + 4);
      uVar2 = *(undefined1 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + 0x4d);
      uVar11 = FUN_0025b154(uVar10);
      iVar14 = FUN_00262898(iVar14,uVar10,uVar11,local_50,uVar2,0);
      if (iVar14 == 0) {
        iVar14 = FUN_00262898(*piVar13,uVar10,uVar11,0xfffffffe,uVar2,0);
        if (iVar14 != 0) {
          bVar16 = false;
          bVar4 = true;
          goto LAB_00269f86;
        }
        iVar14 = DAT_0026a0f8 + 0x269fd6;
        bVar16 = false;
      }
      else {
        bVar16 = *(int *)(iVar14 + 0xc) == 0;
        bVar4 = false;
LAB_00269f86:
        iVar7 = FUN_00268e90(piVar13,0x1f,0,*(undefined4 *)(iVar14 + 0x18),0);
        if (iVar7 != 0) {
          if (iVar7 == 1) {
            FUN_00268e48(piVar13,DAT_0026a0f0 + 0x269fa8,*(undefined4 *)(iVar14 + 0x18));
            puVar12[6] = puVar12[6] + 1;
          }
          *param_2 = 0x62;
          return 1;
        }
        if ((bVar16 == false) || ((*(byte *)(puVar12 + 7) & 1) != 0)) {
          if (bVar4) {
            FUN_00268e48(piVar13,DAT_0026a0fc + 0x269ff2,uVar11,uVar10);
            puVar12[6] = puVar12[6] + 1;
          }
          if (bVar16 != false) {
            bVar16 = true;
            *(byte *)(puVar12 + 7) = *(byte *)(puVar12 + 7) & 0xfe;
          }
          goto LAB_0026a00c;
        }
        iVar14 = DAT_0026a0f4 + 0x269fd0;
        bVar16 = (bool)(*(byte *)(puVar12 + 7) & 1);
      }
      FUN_00268e48(piVar13,iVar14,uVar11,uVar10);
      puVar12[6] = puVar12[6] + 1;
LAB_0026a00c:
      FUN_0025c8d4(param_1,piVar9);
      if (bVar16 == false) {
        return 1;
      }
      *param_2 = 0x99;
      param_2[0x23] = 0;
      iVar14 = DAT_0026a100 + 0x26a030;
      puVar15 = puVar12;
      do {
        if (puVar15 == (undefined4 *)0x0) {
LAB_0026a06c:
          *(byte *)(puVar12 + 7) = *(byte *)(puVar12 + 7) | 1;
          return 1;
        }
        uVar11 = puVar15[1];
        memset(local_2c,0,0x14);
        local_1c = &local_38;
        local_34 = 0;
        local_30 = 0;
        local_38 = uVar11;
        local_2c[0] = iVar14;
        FUN_0025c8d4(local_2c,*(undefined4 *)(param_2 + 0x10));
        if ((0 < local_34) || (local_30 == 0)) {
          *(byte *)(puVar15 + 7) = *(byte *)(puVar15 + 7) | 2;
          goto LAB_0026a06c;
        }
        param_2[0x23] = param_2[0x23] + 1;
        puVar15 = (undefined4 *)puVar15[4];
      } while( true );
    }
    if (bVar1 == 0x1a) {
      uVar11 = *(undefined4 *)(param_2 + 4);
      uVar5 = uVar8;
LAB_00269f18:
      uVar8 = FUN_002699e4(piVar13,uVar8,uVar5,uVar11,puVar12,param_2);
      return uVar8;
    }
    if ((bVar1 != 0x48) && (bVar1 != 0x14)) goto LAB_0026a0b4;
  }
  if ((int)(uVar5 << 0x14) < 0) {
    iVar14 = puVar12[5];
    if ((int)((uint)*(byte *)(puVar12 + 7) << 0x1d) < 0) {
      FUN_00268e48(piVar13,DAT_0026a104 + 0x26a08a);
    }
    FUN_0025c7ba(param_1,*(undefined4 *)(param_2 + 0x10));
    if (iVar14 != puVar12[5]) {
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
    }
  }
LAB_0026a0b4:
  uVar8 = 2;
  if ((piVar13[0x11] == 0) && (uVar8 = (uint)*(byte *)(*piVar13 + 0x36), uVar8 != 0)) {
    uVar8 = 2;
  }
  return uVar8;
}


