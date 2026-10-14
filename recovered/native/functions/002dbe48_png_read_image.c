/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dbe48 png_read_image */

void png_read_image(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_24;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x138) << 0x19 < 0) {
      if (*(char *)(param_1 + 0x214) != '\0') {
        if (-1 < *(int *)(param_1 + 0x13c) << 0x1e) {
          png_warning(param_1,DAT_002dbec4 + 0x2dbe86);
          *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
        }
      }
      local_24 = png_set_interlace_handling(param_1);
    }
    else {
      local_24 = png_set_interlace_handling();
      png_start_read_image(param_1);
    }
    iVar2 = *(int *)(param_1 + 0x1c4);
    for (iVar5 = 0; iVar5 < local_24; iVar5 = iVar5 + 1) {
      puVar3 = param_2;
      for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        png_read_row(param_1,uVar1,0);
      }
    }
  }
  return;
}


