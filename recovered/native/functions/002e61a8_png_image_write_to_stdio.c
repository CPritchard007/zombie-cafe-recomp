/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e61a8 png_image_write_to_stdio */

undefined4
png_image_write_to_stdio
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  int *__s;
  int iVar1;
  undefined4 uVar2;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1[1] != 1) {
    iVar1 = DAT_002e6294 + 0x2e6270;
LAB_002e626e:
    uVar2 = png_image_error(param_1,iVar1,param_3,param_4,param_3,param_4);
    return uVar2;
  }
  if (param_2 == 0) {
    iVar1 = DAT_002e6290 + 0x2e626a;
    goto LAB_002e626e;
  }
  local_40 = png_create_write_struct
                       (DAT_002e6284 + 0x2e61d0,param_1,*(undefined4 *)(DAT_002e627c + 0x2e61cc),
                        *(undefined4 *)(DAT_002e6280 + 0x2e61ce));
  if (local_40 != 0) {
    local_3c = png_create_info_struct();
    if (local_3c != 0) {
      __s = (int *)png_malloc_warn(local_40,0x18);
      if (__s != (int *)0x0) {
        memset(__s,0,0x18);
        *__s = local_40;
        *(undefined1 *)(__s + 5) = 1;
        __s[1] = local_3c;
        *param_1 = __s;
        goto LAB_002e622a;
      }
      png_destroy_info_struct(local_40,&local_3c);
    }
    png_destroy_write_struct(&local_40,0);
  }
  iVar1 = png_image_error(param_1,DAT_002e6288 + 0x2e6224);
  if (iVar1 == 0) {
    return 0;
  }
LAB_002e622a:
  *(int *)(*(int *)*param_1 + 0x120) = param_2;
  memset(&local_38,0,0x20);
  local_30 = param_5;
  local_2c = param_6;
  local_38 = param_1;
  local_34 = param_4;
  local_28 = param_3;
  uVar2 = png_safe_execute(param_1,DAT_002e628c + 0x2e624a,&local_38);
  png_image_free(param_1);
  return uVar2;
}


