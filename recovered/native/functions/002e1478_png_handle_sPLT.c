/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1478 png_handle_sPLT */

void png_handle_sPLT(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 local_34;
  char *local_28;
  char local_24;
  int local_20;
  uint local_1c;
  
  iVar4 = *(int *)(param_1 + 0x358);
  if (iVar4 == 0) {
LAB_002e14aa:
    uVar5 = *(uint *)(param_1 + 0x134);
    if (-1 < (int)(uVar5 << 0x1f)) {
      png_chunk_error(param_1,DAT_002e1608 + 0x2e14bc);
    }
    if ((uVar5 & 4) == 0) {
      pcVar2 = (char *)FUN_002e040c(param_1,param_3 + 1,2);
      if (pcVar2 != (char *)0x0) {
        png_crc_read(param_1,pcVar2,param_3);
        iVar4 = png_crc_finish(param_1,0);
        if (iVar4 != 0) {
          return;
        }
        pcVar2[param_3] = '\0';
        pcVar1 = pcVar2;
        do {
          pcVar7 = pcVar1;
          pcVar1 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        if (pcVar2 + param_3 + -2 < pcVar7 + 1) {
          iVar4 = DAT_002e1614 + 0x2e1528;
        }
        else {
          local_24 = pcVar7[1];
          pbVar8 = (byte *)(pcVar7 + 2);
          local_34 = 10;
          if (local_24 == '\b') {
            local_34 = 6;
          }
          __aeabi_uidivmod(pcVar2 + (param_3 - (int)pbVar8),local_34);
          if (extraout_r1 == 0) {
            uVar5 = __udivsi3(pcVar2 + (param_3 - (int)pbVar8),local_34);
            if (DAT_002e161c < uVar5) {
              iVar4 = DAT_002e1620 + 0x2e1568;
            }
            else {
              local_1c = uVar5;
              local_20 = png_malloc_warn(param_1,uVar5 * 10);
              if (local_20 != 0) {
                iVar3 = 0;
                for (iVar4 = 0; iVar4 < (int)local_1c; iVar4 = iVar4 + 1) {
                  puVar6 = (ushort *)(local_20 + iVar3);
                  if (local_24 == '\b') {
                    *puVar6 = (ushort)*pbVar8;
                    puVar6[1] = (ushort)pbVar8[1];
                    puVar6[2] = (ushort)pbVar8[2];
                    pbVar9 = pbVar8 + 4;
                    puVar6[3] = (ushort)pbVar8[3];
                  }
                  else {
                    *puVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
                    puVar6[1] = (ushort)pbVar8[2] * 0x100 + (ushort)pbVar8[3];
                    puVar6[2] = (ushort)pbVar8[4] * 0x100 + (ushort)pbVar8[5];
                    pbVar9 = pbVar8 + 8;
                    puVar6[3] = (ushort)pbVar8[6] * 0x100 + (ushort)pbVar8[7];
                  }
                  puVar6[4] = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
                  pbVar8 = pbVar9 + 2;
                  iVar3 = iVar3 + 10;
                }
                local_28 = pcVar2;
                png_set_sPLT(param_1,param_2,&local_28,1);
                png_free(param_1,local_20);
                return;
              }
              iVar4 = DAT_002e1624 + 0x2e1580;
              local_20 = 0;
            }
          }
          else {
            iVar4 = DAT_002e1618 + 0x2e1554;
          }
        }
        png_warning(param_1,iVar4);
        return;
      }
      png_crc_finish(param_1,param_3);
      iVar4 = DAT_002e1610 + 0x2e14f0;
    }
    else {
      png_crc_finish(param_1,param_3);
      iVar4 = DAT_002e160c + 0x2e14d2;
    }
    png_chunk_benign_error(param_1,iVar4);
  }
  else {
    if (iVar4 != 1) {
      *(int *)(param_1 + 0x358) = iVar4 + -1;
      if (iVar4 + -1 != 1) goto LAB_002e14aa;
      png_warning(param_1,DAT_002e1604 + 0x2e149e);
    }
    png_crc_finish(param_1,param_3);
  }
  return;
}


