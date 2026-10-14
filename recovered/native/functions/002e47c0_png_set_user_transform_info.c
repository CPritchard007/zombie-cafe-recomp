/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e47c0 png_set_user_transform_info */

void png_set_user_transform_info
               (int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x134) << 0x10 < 0) && (*(int *)(param_1 + 0x138) << 0x19 < 0)) {
      png_app_error(param_1,DAT_002e47f4 + 0x2e47dc);
    }
    else {
      *(undefined4 *)(param_1 + 300) = param_2;
      *(undefined1 *)(param_1 + 0x130) = param_3;
      *(undefined1 *)(param_1 + DAT_002e47f8) = param_4;
    }
  }
  return;
}


