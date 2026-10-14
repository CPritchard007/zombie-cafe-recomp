/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e316a png_set_cHRM_XYZ_fixed */

void png_set_cHRM_XYZ_fixed
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    local_2c = param_5;
    local_28 = param_6;
    local_24 = param_7;
    local_20 = param_8;
    local_1c = param_9;
    local_18 = param_10;
    local_14 = param_11;
    local_34 = param_3;
    local_30 = param_4;
    iVar1 = png_colorspace_set_endpoints(param_1,param_2 + 0x28,&local_34,2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x72) = *(ushort *)(param_2 + 0x72) | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  return;
}


