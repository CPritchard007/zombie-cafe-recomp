/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e76fc png_write_tRNS */

undefined8 png_write_tRNS(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char local_18;
  undefined1 uStack_17;
  char local_16;
  undefined1 uStack_15;
  char *local_14;
  
  local_18 = (char)param_1;
  uStack_17 = (undefined1)((uint)param_1 >> 8);
  local_16 = (char)((uint)param_1 >> 0x10);
  uStack_15 = (undefined1)((uint)param_1 >> 0x18);
  local_14 = param_2;
  if (param_5 == 3) {
    if ((0 < param_4) && (param_4 <= (int)(uint)*(ushort *)(param_1 + 0x208))) {
LAB_002e7792:
      FUN_002e6ea0(param_1,DAT_002e77a8,param_2,param_4);
      goto LAB_002e77a2;
    }
    iVar1 = DAT_002e77a4 + 0x2e771e;
  }
  else if (param_5 == 0) {
    if ((int)(uint)*(ushort *)(param_3 + 8) < 1 << (uint)*(byte *)(param_1 + 0x218)) {
      png_save_uint_16(&local_18);
      param_4 = 2;
      param_2 = &local_18;
      goto LAB_002e7792;
    }
    iVar1 = DAT_002e77ac + 0x2e773e;
  }
  else if (param_5 == 2) {
    png_save_uint_16(&local_18,*(undefined2 *)(param_3 + 2));
    png_save_uint_16(&local_16,*(undefined2 *)(param_3 + 4));
    png_save_uint_16(&local_14,*(undefined2 *)(param_3 + 6));
    if ((*(char *)(param_1 + 0x218) != '\b') ||
       ((local_18 == '\0' && local_16 == '\0') && (char)local_14 == '\0')) {
      param_4 = 6;
      param_2 = &local_18;
      goto LAB_002e7792;
    }
    iVar1 = DAT_002e77b0 + 0x2e778a;
  }
  else {
    iVar1 = DAT_002e77b4 + 0x2e779e;
  }
  png_app_warning(param_1,iVar1);
LAB_002e77a2:
  return CONCAT44(local_14,CONCAT13(uStack_15,CONCAT12(local_16,CONCAT11(uStack_17,local_18))));
}


