/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e50bc png_write_end */

void png_write_end(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  
  if (param_1 != 0) {
    iVar1 = param_1;
    if (-1 < *(int *)(param_1 + 0x134) << 0x1d) {
      iVar1 = png_error(param_1,DAT_002e51b4 + 0x2e50d8);
    }
    if ((int)(uint)*(ushort *)(iVar1 + 0x208) < *(int *)(iVar1 + 0x20c)) {
      png_benign_error(iVar1,DAT_002e51b8 + 0x2e50f0);
    }
    if (param_2 != 0) {
      if (((*(uint *)(param_2 + 8) & 0x200) != 0) && ((*(uint *)(param_1 + 0x134) & 0x200) == 0)) {
        png_write_tIME(param_1,param_2 + 0x8c);
      }
      piVar4 = (int *)(param_2 + 0x88);
      for (local_1c = 0; local_1c < *(int *)(param_2 + 0x80); local_1c = local_1c + 1) {
        piVar2 = (int *)(*piVar4 + local_1c * 0x1c);
        iVar1 = *piVar2;
        if (iVar1 < 1) {
          if (iVar1 == 0) {
            png_write_zTXt(param_1,piVar2[1],piVar2[2],0,0);
            iVar3 = *piVar4;
            iVar1 = 2;
            goto LAB_002e5174;
          }
          if (iVar1 == -1) {
            png_write_tEXt(param_1,piVar2[1],piVar2[2],0);
            goto LAB_002e5170;
          }
        }
        else {
          png_write_iTXt(param_1,iVar1,piVar2[1],piVar2[5],piVar2[6],piVar2[2]);
LAB_002e5170:
          iVar3 = *piVar4;
          iVar1 = 3;
LAB_002e5174:
          *(int *)(iVar3 + local_1c * 0x1c) = -iVar1;
        }
      }
      if (*(int *)(param_2 + 0xf0) != 0) {
        FUN_002e4d20(param_1,param_2,8);
      }
    }
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 8;
    png_write_IEND(param_1);
  }
  return;
}


