/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7060 png_colorspace_set_rgb_coefficients */

void png_colorspace_set_rgb_coefficients(int param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c [2];
  
  if (*(char *)(param_1 + DAT_002d715c) != '\0') {
    return;
  }
  if (-1 < (int)((uint)*(ushort *)(param_1 + DAT_002d7160) << 0x1e)) {
    return;
  }
  local_24 = *(int *)(param_1 + 0x3c4);
  local_20 = *(int *)(param_1 + 0x3d0);
  local_1c[0] = *(int *)(param_1 + 0x3dc);
  iVar2 = local_24 + local_20 + local_1c[0];
  if (((((0 < iVar2) && (-1 < local_24)) &&
       (iVar1 = png_muldiv(&local_24,local_24,0x8000,iVar2), iVar1 != 0)) &&
      (((-1 < local_24 && (local_24 < 0x8001)) &&
       ((-1 < local_20 &&
        ((iVar1 = png_muldiv(&local_20,local_20,0x8000,iVar2), iVar1 != 0 && (-1 < local_20))))))))
     && ((local_20 < 0x8001 &&
         ((((-1 < local_1c[0] && (iVar2 = png_muldiv(local_1c,local_1c[0],0x8000,iVar2), iVar2 != 0)
            ) && (-1 < local_1c[0])) && (local_1c[0] < 0x8001)))))) {
    iVar2 = local_24 + local_20 + local_1c[0];
    if (iVar2 <= DAT_002d7164) {
      if (iVar2 == DAT_002d7164) {
        iVar2 = -1;
LAB_002d710e:
        if (local_20 < local_24) {
LAB_002d7120:
          if (local_24 < local_1c[0]) {
LAB_002d712a:
            local_1c[0] = local_1c[0] + iVar2;
          }
          else {
            local_24 = local_24 + iVar2;
          }
        }
        else {
          if (local_20 < local_1c[0]) {
            if (local_20 <= local_24) goto LAB_002d7120;
            goto LAB_002d712a;
          }
          local_20 = local_20 + iVar2;
        }
      }
      else if (iVar2 != 0x8000) {
        iVar2 = 1;
        goto LAB_002d710e;
      }
      if (local_24 + local_20 + local_1c[0] == 0x8000) {
        *(short *)(param_1 + DAT_002d716c) = (short)local_24;
        *(short *)(param_1 + 0x324) = (short)local_20;
        return;
      }
      iVar2 = DAT_002d7168 + 0x2d7142;
      goto LAB_002d7152;
    }
  }
  iVar2 = DAT_002d7170 + 0x2d7154;
LAB_002d7152:
  png_error(param_1,iVar2);
  return;
}


