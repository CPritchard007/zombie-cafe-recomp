/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc5d0 png_image_finish_read */

int png_image_finish_read(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[1] == 1) {
    if (param_4 == 0) {
      param_4 = 1;
      if (-1 < param_1[4] << 0x1c) {
        param_4 = (param_1[4] & 3U) + 1;
      }
      param_4 = param_1[2] * param_4;
    }
    if ((param_3 != 0) && (*param_1 != 0)) {
      iVar1 = 1;
      uVar2 = param_1[4] & 8;
      if (uVar2 == 0) {
        iVar1 = (param_1[4] & 3U) + 1;
      }
      if ((uint)(param_1[2] * iVar1) <= (uint)(param_4 + (param_4 >> 0x1f) ^ param_4 >> 0x1f)) {
        if ((uVar2 == 0) || ((param_5 != 0 && (param_1[6] != 0)))) {
          memset(&local_44,0,0x2c);
          local_38 = param_5;
          local_44 = param_1;
          local_40 = param_3;
          local_3c = param_4;
          local_34 = param_2;
          if (uVar2 == 0) {
            iVar1 = png_safe_execute(param_1,DAT_002dc6b4 + 0x2dc67e,&local_44);
          }
          else {
            iVar1 = png_safe_execute(param_1,DAT_002dc6ac + 0x2dc65a,&local_44);
            if ((iVar1 != 0) &&
               (iVar1 = png_safe_execute(param_1,DAT_002dc6b0 + 0x2dc66a,&local_44), iVar1 != 0)) {
              iVar1 = 1;
            }
          }
          png_image_free(param_1);
          return iVar1;
        }
        iVar1 = DAT_002dc6b8 + 0x2dc690;
        goto LAB_002dc69e;
      }
    }
    iVar1 = DAT_002dc6bc + 0x2dc696;
  }
  else {
    iVar1 = DAT_002dc6c0 + 0x2dc6a0;
  }
LAB_002dc69e:
  iVar1 = png_image_error(param_1,iVar1);
  return iVar1;
}


