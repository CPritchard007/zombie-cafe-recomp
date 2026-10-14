/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1628 png_handle_tRNS */

void png_handle_tRNS(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  byte local_124;
  byte local_123;
  byte local_122;
  byte local_121;
  byte local_120;
  byte local_11f;
  undefined1 auStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002e17a0 + 0x2e1634);
  local_1c = *piVar5;
  iVar4 = *(int *)(param_1 + 0x134);
  iVar2 = param_1;
  if (-1 < iVar4 << 0x1f) {
    iVar2 = png_chunk_error(param_1,DAT_002e17a4 + 0x2e164e);
  }
  if (iVar4 << 0x1d < 0) {
    png_crc_finish(iVar2,param_3);
    iVar2 = DAT_002e17a8 + 0x2e1660;
  }
  else if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x1b)) {
    cVar1 = *(char *)(param_1 + DAT_002e17b0);
    if (cVar1 == '\0') {
      if (param_3 == 2) {
        png_crc_read(param_1,&local_124,2);
        *(undefined2 *)(param_1 + 0x210) = 1;
        sVar3 = (ushort)local_124 * 0x100 + (ushort)local_123;
        iVar2 = 0x280;
LAB_002e1700:
        *(short *)(param_1 + iVar2) = sVar3;
LAB_002e1764:
        iVar2 = png_crc_finish(param_1,0);
        if (iVar2 == 0) {
          png_set_tRNS(param_1,param_2,auStack_11c,*(undefined2 *)(param_1 + 0x210),param_1 + 0x278)
          ;
        }
        else {
          *(undefined2 *)(param_1 + 0x210) = 0;
        }
        goto LAB_002e178e;
      }
      png_crc_finish(param_1,param_3);
      iVar2 = DAT_002e17b4 + 0x2e1690;
    }
    else if (cVar1 == '\x02') {
      if (param_3 == 6) {
        png_crc_read(param_1,&local_124,6);
        *(undefined2 *)(param_1 + 0x210) = 1;
        *(ushort *)(param_1 + DAT_002e17bc) = (ushort)local_124 * 0x100 + (ushort)local_123;
        *(ushort *)(param_1 + 0x27c) = (ushort)local_122 * 0x100 + (ushort)local_121;
        sVar3 = (ushort)local_120 * 0x100 + (ushort)local_11f;
        iVar2 = DAT_002e17c0;
        goto LAB_002e1700;
      }
      png_crc_finish(param_1,param_3);
      iVar2 = DAT_002e17b8 + 0x2e16c8;
    }
    else if (cVar1 == '\x03') {
      if (iVar4 << 0x1e < 0) {
        if (((param_3 < 0x101) && (param_3 <= *(ushort *)(param_1 + 0x208))) && (param_3 != 0)) {
          png_crc_read(param_1,auStack_11c,param_3);
          *(short *)(param_1 + 0x210) = (short)param_3;
          goto LAB_002e1764;
        }
        png_crc_finish(param_1,param_3);
        iVar2 = DAT_002e17c8 + 0x2e173e;
      }
      else {
        png_crc_finish(param_1,param_3);
        iVar2 = DAT_002e17c4 + 0x2e171a;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      iVar2 = DAT_002e17cc + 0x2e175e;
    }
  }
  else {
    png_crc_finish(iVar2,param_3);
    iVar2 = DAT_002e17ac + 0x2e1676;
  }
  png_chunk_benign_error(param_1,iVar2);
LAB_002e178e:
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


