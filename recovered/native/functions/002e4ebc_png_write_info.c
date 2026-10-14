/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4ebc png_write_info */

void png_write_info(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_1c;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    png_write_info_before_PLTE(param_1,param_2);
    if (*(int *)(param_2 + 8) << 0x1c < 0) {
      png_write_PLTE(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x14));
    }
    else if (*(char *)(param_2 + 0x19) == '\x03') {
      png_error(param_1,DAT_002e50b8 + 0x2e4ef4);
    }
    if (*(int *)(param_2 + 8) << 0x1b < 0) {
      if ((*(int *)(param_1 + 0x13c) << 0xc < 0) && (*(char *)(param_2 + 0x19) == '\x03')) {
        for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(param_2 + 0x16); iVar3 = iVar3 + 1) {
          pbVar2 = (byte *)(*(int *)(param_2 + 0x9c) + iVar3);
          *pbVar2 = ~*pbVar2;
        }
      }
      png_write_tRNS(param_1,*(undefined4 *)(param_2 + 0x9c),param_2 + 0xa0,
                     *(undefined2 *)(param_2 + 0x16),*(undefined1 *)(param_2 + 0x19));
    }
    if (*(int *)(param_2 + 8) << 0x1a < 0) {
      png_write_bKGD(param_1,param_2 + 0xaa,*(undefined1 *)(param_2 + 0x19));
    }
    if (*(int *)(param_2 + 8) << 0x19 < 0) {
      png_write_hIST(param_1,*(undefined4 *)(param_2 + 0xcc),*(undefined2 *)(param_2 + 0x14));
    }
    if (*(int *)(param_2 + 8) << 0x17 < 0) {
      png_write_oFFs(param_1,*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),
                     *(undefined1 *)(param_2 + 0xbc));
    }
    if (*(int *)(param_2 + 8) << 0x15 < 0) {
      png_write_pCAL(param_1,*(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd4),
                     *(undefined4 *)(param_2 + 0xd8),*(undefined1 *)(param_2 + 0xe4),
                     *(undefined1 *)(param_2 + 0xe5),*(undefined4 *)(param_2 + 0xdc),
                     *(undefined4 *)(param_2 + 0xe0));
    }
    if (*(int *)(param_2 + 8) << 0x11 < 0) {
      png_write_sCAL_s(param_1,*(undefined1 *)(param_2 + 0xfc),*(undefined4 *)(param_2 + 0x100),
                       *(undefined4 *)(param_2 + 0x104));
    }
    if (*(int *)(param_2 + 8) << 0x18 < 0) {
      png_write_pHYs(param_1,*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4),
                     *(undefined1 *)(param_2 + 200));
    }
    if ((*(uint *)(param_2 + 8) & 0x200) != 0) {
      png_write_tIME(param_1,param_2 + 0x8c);
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x200;
    }
    iVar3 = 0;
    if (*(int *)(param_2 + 8) << 0x12 < 0) {
      for (; iVar3 < *(int *)(param_2 + 0xf8); iVar3 = iVar3 + 1) {
        png_write_sPLT(param_1,*(int *)(param_2 + 0xf4) + iVar3 * 0x10);
      }
    }
    piVar5 = (int *)(param_2 + 0x88);
    for (local_1c = 0; local_1c < *(int *)(param_2 + 0x80); local_1c = local_1c + 1) {
      piVar1 = (int *)(*piVar5 + local_1c * 0x1c);
      iVar3 = *piVar1;
      if (iVar3 < 1) {
        if (iVar3 == 0) {
          png_write_zTXt(param_1,piVar1[1],piVar1[2],0,0);
          iVar4 = *piVar5;
          iVar3 = 2;
          goto LAB_002e508c;
        }
        if (iVar3 == -1) {
          png_write_tEXt(param_1,piVar1[1],piVar1[2],0);
          goto LAB_002e5088;
        }
      }
      else {
        png_write_iTXt(param_1,iVar3,piVar1[1],piVar1[5],piVar1[6],piVar1[2]);
LAB_002e5088:
        iVar4 = *piVar5;
        iVar3 = 3;
LAB_002e508c:
        *(int *)(iVar4 + local_1c * 0x1c) = -iVar3;
      }
    }
    if (*(int *)(param_2 + 0xf0) != 0) {
      FUN_002e4d20(param_1,param_2,2);
    }
  }
  return;
}


