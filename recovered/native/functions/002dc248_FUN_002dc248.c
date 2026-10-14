/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc248 FUN_002dc248 */

undefined8 FUN_002dc248(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *__s;
  undefined4 uVar2;
  undefined4 *local_18;
  int local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  puVar1 = (undefined4 *)
           png_create_read_struct
                     (DAT_002dc2d4 + 0x2dc260,param_1,*(undefined4 *)(DAT_002dc2cc + 0x2dc256),
                      *(undefined4 *)(DAT_002dc2d0 + 0x2dc258));
  local_18 = puVar1;
  memset(param_1,0,0x60);
  param_1[1] = 1;
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = png_create_info_struct(puVar1);
    if (local_14 != 0) {
      __s = (int *)png_malloc_warn(local_18,0x18);
      if (__s != (int *)0x0) {
        memset(__s,0,0x18);
        uVar2 = 1;
        *__s = (int)local_18;
        __s[1] = local_14;
        *(undefined1 *)(__s + 5) = 0;
        *param_1 = __s;
        goto LAB_002dc2c8;
      }
      png_destroy_info_struct(local_18,&local_14);
    }
    png_destroy_read_struct(&local_18,0,0);
  }
  uVar2 = png_image_error(param_1,DAT_002dc2d8 + 0x2dc2c6);
LAB_002dc2c8:
  return CONCAT44(local_18,uVar2);
}


