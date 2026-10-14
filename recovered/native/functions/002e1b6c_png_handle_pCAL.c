/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1b6c png_handle_pCAL */

void png_handle_pCAL(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  
  iVar14 = *(int *)(param_1 + 0x134);
  iVar10 = param_1;
  if (-1 < iVar14 << 0x1f) {
    iVar10 = png_chunk_error(param_1,DAT_002e1cf8 + 0x2e1b86);
  }
  if (iVar14 << 0x1d < 0) {
    png_crc_finish(iVar10,param_3);
    iVar10 = DAT_002e1cfc + 0x2e1b98;
  }
  else if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x15)) {
    pcVar11 = (char *)FUN_002e040c(param_1,param_3 + 1,2);
    if (pcVar11 == (char *)0x0) {
      png_crc_finish(param_1,param_3);
      iVar10 = DAT_002e1d04 + 0x2e1bce;
    }
    else {
      png_crc_read(param_1,pcVar11,param_3);
      iVar10 = png_crc_finish(param_1,0);
      if (iVar10 != 0) {
        return;
      }
      pcVar15 = pcVar11 + param_3;
      *pcVar15 = '\0';
      for (pcVar16 = pcVar11; *pcVar16 != '\0'; pcVar16 = pcVar16 + 1) {
      }
      if (pcVar16 + 0xc < pcVar15) {
        bVar1 = pcVar16[1];
        bVar2 = pcVar16[2];
        bVar3 = pcVar16[4];
        bVar4 = pcVar16[3];
        bVar5 = pcVar16[5];
        bVar6 = pcVar16[6];
        bVar7 = pcVar16[8];
        bVar8 = pcVar16[7];
        uVar18 = (uint)(byte)pcVar16[10];
        bVar9 = pcVar16[9];
        if ((((uVar18 == 2) || (bVar9 != 0)) && ((bVar9 != 1 && bVar9 != 2 || (uVar18 == 3)))) &&
           ((uVar18 == 4 || (bVar9 != 3)))) {
          if (3 < bVar9) {
            png_chunk_benign_error(param_1,DAT_002e1d10 + 0x2e1c70);
          }
          for (pcVar17 = pcVar16 + 0xb; *pcVar17 != '\0'; pcVar17 = pcVar17 + 1) {
          }
          puVar12 = (undefined4 *)png_malloc_warn(param_1,uVar18 << 2);
          if (puVar12 != (undefined4 *)0x0) {
            iVar10 = 0;
            puVar13 = puVar12;
            do {
              if ((int)uVar18 <= iVar10) {
                png_set_pCAL(param_1,param_2,pcVar11,
                             (uint)bVar1 * 0x1000000 + (uint)bVar2 * 0x10000 + (uint)bVar3 +
                             (uint)bVar4 * 0x100,
                             (uint)bVar5 * 0x1000000 + (uint)bVar6 * 0x10000 + (uint)bVar7 +
                             (uint)bVar8 * 0x100,bVar9,uVar18,pcVar16 + 0xb,puVar12);
                png_free(param_1,puVar12);
                return;
              }
              pcVar17 = pcVar17 + 1;
              *puVar13 = pcVar17;
              puVar13 = puVar13 + 1;
              while( true ) {
                if (pcVar15 < pcVar17) {
                  png_free(param_1,puVar12);
                  iVar10 = DAT_002e1d18 + 0x2e1cba;
                  goto LAB_002e1cb8;
                }
                if (*pcVar17 == '\0') break;
                pcVar17 = pcVar17 + 1;
              }
              iVar10 = iVar10 + 1;
            } while( true );
          }
          iVar10 = DAT_002e1d14 + 0x2e1c96;
        }
        else {
          iVar10 = DAT_002e1d0c + 0x2e1c64;
        }
      }
      else {
        iVar10 = DAT_002e1d08 + 0x2e1c0a;
      }
    }
  }
  else {
    png_crc_finish(iVar10,param_3);
    iVar10 = DAT_002e1d00 + 0x2e1bb0;
  }
LAB_002e1cb8:
  png_chunk_benign_error(param_1,iVar10);
  return;
}


