/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dbb64 FUN_002dbb64 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002dbc6a) */
/* WARNING: Removing unreachable block (ram,0x002dbc6a) */

undefined4 FUN_002dbb64(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint local_50;
  int local_4c;
  int local_48;
  byte *local_40;
  int local_38;
  
  puVar11 = (undefined4 *)*param_1;
  iVar9 = *(int *)*puVar11;
  local_38 = 1;
  if (*(char *)(iVar9 + 0x214) != '\0') {
    if (*(char *)(iVar9 + 0x214) != '\x01') {
      png_error(iVar9,DAT_002dbdd4 + 0x2dbb8c);
    }
    local_38 = 7;
  }
  uVar14 = puVar11[3];
  iVar12 = puVar11[2];
  iVar21 = 7;
  uVar15 = param_1[10];
  uVar20 = 0;
  iVar16 = param_1[6];
  iVar17 = param_1[7];
  do {
    if (*(char *)(iVar9 + 0x214) == '\x01') {
      iVar3 = 7;
      uVar10 = iVar21 >> 1;
      if (1 < (int)uVar20) {
        iVar3 = (1 << (uVar10 & 0xff)) + -1;
      }
      uVar18 = (uVar20 & 1) << (3U - ((int)(uVar20 + 1) >> 1) & 0xff);
      uVar6 = 3;
      if (1 < (int)uVar20) {
        uVar6 = uVar10;
      }
      if ((iVar3 - (uVar18 & 7)) + iVar12 >> (uVar6 & 0xff) != 0) {
        uVar18 = uVar18 & 7;
        local_48 = 1 << (uVar10 & 0xff);
        local_50 = (uVar20 & 1 ^ 1) << (3U - ((int)uVar20 >> 1) & 0xff) & 7;
        local_4c = 8;
        if (2 < (int)uVar20) {
          local_4c = 8 >> ((int)(uVar20 - 1) >> 1 & 0xffU);
        }
        goto LAB_002dbc2a;
      }
    }
    else {
      local_50 = 0;
      local_4c = 1;
      local_48 = 1;
      uVar18 = 0;
LAB_002dbc2a:
      local_40 = (byte *)(iVar16 + local_50 * iVar17 + uVar18);
      for (; local_50 < uVar14; local_50 = local_50 + local_4c) {
        pbVar19 = (byte *)param_1[5];
        pbVar4 = local_40 + (iVar12 - uVar18);
        png_read_row(iVar9,pbVar19,0);
        switch(uVar15) {
        case 1:
          for (pbVar13 = local_40; pbVar13 < pbVar4; pbVar13 = pbVar13 + local_48) {
            uVar10 = (uint)pbVar19[1];
            bVar7 = *pbVar19;
            pbVar19 = pbVar19 + 2;
            if (uVar10 < 0xe6) {
              bVar5 = 0xe7;
              if (0x19 < uVar10) {
                bVar5 = (char)((uint)bVar7 * 5 + 0x82 >> 8) + -0x1e +
                        (char)(uVar10 * 5 + 0x82 >> 8) * '\x06';
              }
            }
            else {
              bVar5 = (byte)((uint)bVar7 * 0xe7 + 0x80 >> 8);
            }
            *pbVar13 = bVar5;
          }
          break;
        case 2:
          for (pbVar13 = local_40; pbVar13 < pbVar4; pbVar13 = pbVar13 + local_48) {
            pbVar1 = pbVar19 + 1;
            bVar7 = *pbVar19;
            pbVar19 = pbVar19 + 2;
            if (*pbVar1 == 0) {
              *pbVar13 = 0xfe;
            }
            else if (bVar7 == 0xfe) {
              *pbVar13 = 0xff;
            }
            else {
              *pbVar13 = bVar7;
            }
          }
          break;
        case 3:
          for (pbVar13 = local_40; pbVar13 < pbVar4; pbVar13 = pbVar13 + local_48) {
            bVar7 = *pbVar19;
            pbVar1 = pbVar19 + 1;
            pbVar2 = pbVar19 + 2;
            pbVar19 = pbVar19 + 3;
            *pbVar13 = ((char)((uint)bVar7 * 5 + 0x82 >> 8) * '\x06' +
                       (char)((uint)*pbVar1 * 5 + 0x82 >> 8)) * '\x06' +
                       (char)((uint)*pbVar2 * 5 + 0x82 >> 8);
          }
          break;
        case 4:
          for (pbVar13 = local_40; pbVar13 < pbVar4; pbVar13 = pbVar13 + local_48) {
            if (pbVar19[3] < 0xc4) {
              if (pbVar19[3] < 0x40) {
                bVar7 = 0xd8;
              }
              else {
                bVar7 = *pbVar19;
                cVar8 = -0x1e;
                if (-1 < (char)bVar7) {
                  cVar8 = -0x27;
                }
                if ((bVar7 & 0x40) != 0) {
                  cVar8 = cVar8 + '\t';
                }
                if ((char)bVar7 < '\0') {
                  cVar8 = cVar8 + '\x03';
                }
                if ((bVar7 & 0x40) != 0) {
                  cVar8 = cVar8 + '\x03';
                }
                bVar7 = (cVar8 - ((char)bVar7 >> 7)) + ('\x01' - ((bVar7 & 0x40) == 0));
              }
            }
            else {
              bVar7 = ((char)((uint)*pbVar19 * 5 + 0x82 >> 8) * '\x06' +
                      (char)((uint)pbVar19[1] * 5 + 0x82 >> 8)) * '\x06' +
                      (char)((uint)pbVar19[2] * 5 + 0x82 >> 8);
            }
            *pbVar13 = bVar7;
            pbVar19 = pbVar19 + 4;
          }
        }
        local_40 = local_40 + local_4c * iVar17;
      }
    }
    uVar20 = uVar20 + 1;
    iVar21 = iVar21 + -1;
    if (local_38 <= (int)uVar20) {
      return 1;
    }
  } while( true );
}


