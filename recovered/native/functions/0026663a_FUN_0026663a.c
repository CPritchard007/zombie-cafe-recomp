/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026663a FUN_0026663a */

void FUN_0026663a(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_30;
  uint local_2c;
  
  piVar2 = (int *)*param_1;
  iVar5 = param_1[3];
  iVar7 = *piVar2;
  iVar14 = piVar2[2];
  FUN_0025cb7c();
  local_30 = param_1[7];
  while (local_30 = local_30 + -1, -1 < local_30) {
    puVar12 = (uint *)(param_1 + local_30 * 0x14 + 0xe);
    FUN_0025c384(iVar14,puVar12[0xb]);
    if (*(char *)((int)puVar12 + 0x35) != -0x6b) {
      FUN_0026641e(iVar14,*(char *)((int)puVar12 + 0x35),puVar12[0xe],puVar12[0xf]);
      FUN_0025c3b8(iVar14,*(undefined1 *)((int)puVar12 + 0x36));
    }
    if (((*puVar12 & 0xf1000) != 0) && (0 < (int)puVar12[0x10])) {
      FUN_0025c384(iVar14,puVar12[10]);
      local_2c = puVar12[0x10];
      puVar13 = (undefined4 *)(puVar12[0x11] + (local_2c - 1) * 8);
      for (; 0 < (int)local_2c; local_2c = local_2c - 1) {
        FUN_002624c2(iVar14,puVar13[1] + 1);
        FUN_0026641e(iVar14,0x5f,*puVar13,puVar13[1]);
        piVar1 = puVar13 + 1;
        puVar13 = puVar13 + -2;
        FUN_002624c2(iVar14,*piVar1 + -1);
      }
      FUN_0025fbda(iVar7,puVar12[0x11]);
    }
    FUN_0025c384(iVar14,puVar12[9]);
    if (puVar12[6] != 0) {
      uVar3 = FUN_002665da(iVar14,0x78);
      if (-1 < (int)(*puVar12 << 8)) {
        FUN_002665da(iVar14,0x42,*(undefined4 *)(iVar5 + local_30 * 0x40 + 0x28));
      }
      if (-1 < (int)puVar12[8]) {
        FUN_002665da(iVar14,0x42);
      }
      if (*(char *)((int)puVar12 + 0x35) == '\x03') {
        uVar8 = puVar12[0xe];
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
        uVar8 = 0;
      }
      FUN_0026641e(iVar14,uVar6,uVar8,puVar12[0xc]);
      FUN_002624c2(iVar14,uVar3);
    }
  }
  FUN_0025c384(iVar14,param_1[6]);
  puVar12 = (uint *)(param_1 + 0xe);
  local_2c = 0;
  do {
    if (param_1[7] <= (int)local_2c) {
      iVar5 = param_1[0xb];
      piVar2[0x6e] = param_1[10];
      piVar2[0x6f] = iVar5;
      FUN_0026123e(iVar7,param_1);
      return;
    }
    iVar10 = iVar5 + (uint)(byte)puVar12[0xd] * 0x40 + 8;
    iVar9 = *(int *)(iVar10 + 0xc);
    if ((((*(byte *)(iVar9 + 0x22) & 2) == 0) && (*(int *)(iVar9 + 0x1c) == 0)) &&
       (-1 < (int)((uint)*(ushort *)(param_1 + 1) << 0x1b))) {
      uVar8 = *puVar12;
      if ((*(char *)((int)param_1 + 6) == '\0') && (-1 < (int)(uVar8 << 8))) {
        FUN_002665da(iVar14,0x2d,*(undefined4 *)(iVar10 + 0x20));
      }
      if (((uVar8 & 0xf0000) != 0) && (-1 < (int)(uVar8 << 2))) {
        FUN_002665da(iVar14,0x2d,puVar12[8]);
      }
    }
    if ((*puVar12 & 0xf0000) == 0) {
      if ((int)(*puVar12 << 3) < 0) {
        uVar8 = puVar12[0x10];
        goto LAB_002667d6;
      }
    }
    else {
      uVar8 = puVar12[4];
LAB_002667d6:
      if ((uVar8 != 0) && (*(char *)(iVar7 + 0x36) == '\0')) {
        local_30 = param_1[4];
        pcVar4 = (char *)FUN_0025c3cc(iVar14,local_30);
        iVar9 = *(int *)(iVar14 + 0x1c);
        for (; local_30 < iVar9; local_30 = local_30 + 1) {
          if (*(uint *)(pcVar4 + 4) == puVar12[7]) {
            if (*pcVar4 == '\x1d') {
              for (iVar10 = 0; iVar10 < *(int *)(uVar8 + 0x24); iVar10 = iVar10 + 1) {
                if (*(int *)(pcVar4 + 8) == *(int *)(iVar10 * 4 + *(int *)(uVar8 + 4))) {
                  *(int *)(pcVar4 + 8) = iVar10;
                  *(uint *)(pcVar4 + 4) = puVar12[8];
                  break;
                }
              }
            }
            else if (*pcVar4 == 'A') {
              uVar11 = puVar12[8];
              *pcVar4 = 'c';
              *(uint *)(pcVar4 + 4) = uVar11;
            }
          }
          pcVar4 = pcVar4 + 0x14;
        }
      }
    }
    puVar12 = puVar12 + 0x14;
    local_2c = local_2c + 1;
  } while( true );
}


