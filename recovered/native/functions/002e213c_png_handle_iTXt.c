/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e213c png_handle_iTXt */

void png_handle_iTXt(int param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = *(int *)(param_1 + 0x358);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x358) = iVar5 + -1;
    if (iVar5 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      iVar4 = DAT_002e22c8 + 0x2e2170;
      goto LAB_002e22be;
    }
  }
  iVar5 = param_1 + 0xfc;
  uVar6 = *(uint *)(param_1 + 0x134);
  if (-1 < (int)(uVar6 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e22cc + 0x2e2182);
  }
  if ((int)(uVar6 << 0x1d) < 0) {
    *(uint *)(iVar5 + 0x38) = uVar6 | 8;
  }
  iVar5 = FUN_002e040c(param_1,param_3 + 1,1);
  if (iVar5 == 0) {
    png_crc_finish(param_1,param_3);
    iVar4 = DAT_002e22d0 + 0x2e21ac;
  }
  else {
    png_crc_read(param_1,iVar5,param_3);
    uVar6 = png_crc_finish(param_1,0);
    if (uVar6 != 0) {
      return;
    }
    for (; (uVar6 != param_3 && (*(char *)(iVar5 + uVar6) != '\0')); uVar6 = uVar6 + 1) {
    }
    if (uVar6 - 1 < 0x4f) {
      if (param_3 < uVar6 + 5) {
        iVar4 = DAT_002e22dc + 0x2e22ae;
      }
      else {
        cVar2 = *(char *)(iVar5 + uVar6 + 1);
        if (cVar2 != '\0') {
          if (cVar2 != '\x01') {
            iVar4 = DAT_002e22e0 + 0x2e22b4;
            goto LAB_002e22be;
          }
          if (*(char *)(iVar5 + uVar6 + 2) != '\0') {
            iVar4 = DAT_002e22e4 + 0x2e22ba;
            goto LAB_002e22be;
          }
        }
        bVar9 = cVar2 != '\0';
        local_38 = 0;
        uVar8 = uVar6 + 3;
        do {
          uVar3 = uVar8 + 1;
          uVar7 = uVar3;
          if (param_3 <= uVar8) break;
          pcVar1 = (char *)(iVar5 + uVar8);
          uVar8 = uVar3;
        } while (*pcVar1 != '\0');
        do {
          uVar8 = uVar7 + 1;
          if (param_3 <= uVar7) break;
          pcVar1 = (char *)(iVar5 + uVar7);
          uVar7 = uVar8;
        } while (*pcVar1 != '\0');
        if ((param_3 < uVar8) || (bVar9)) {
          if ((param_3 <= uVar8) || (!bVar9)) {
            iVar4 = DAT_002e22e8 + 0x2e22c0;
            goto LAB_002e22be;
          }
          local_38 = -1;
          iVar4 = FUN_002e0588(param_1,param_3,uVar8,&local_38);
          if (iVar4 == 1) {
            iVar5 = *(int *)(param_1 + 0x378);
          }
          else {
            iVar4 = *(int *)(param_1 + 0x15c);
            if (iVar4 != 0) goto LAB_002e22be;
          }
        }
        else {
          local_38 = param_3 - uVar8;
        }
        local_2c = iVar5 + uVar8;
        *(undefined1 *)(local_2c + local_38) = 0;
        local_34 = !bVar9 + 1;
        local_20 = iVar5 + uVar6 + 3;
        local_28 = 0;
        local_1c = iVar5 + uVar3;
        local_24 = local_38;
        local_30 = iVar5;
        iVar5 = png_set_text_2(param_1,param_2,&local_34,1);
        if (iVar5 == 0) {
          return;
        }
        iVar4 = DAT_002e22d4 + 0x2e22a2;
      }
    }
    else {
      iVar4 = DAT_002e22d8 + 0x2e22a8;
    }
  }
LAB_002e22be:
  png_chunk_benign_error(param_1,iVar4);
  return;
}


