/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e57a0 png_write_image */

undefined8 png_write_image(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int local_20;
  
  local_20 = param_1;
  if (param_1 != 0) {
    local_20 = png_set_interlace_handling();
    for (iVar4 = 0; iVar4 < local_20; iVar4 = iVar4 + 1) {
      puVar2 = param_2;
      for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x1c4); uVar3 = uVar3 + 1) {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        png_write_row(param_1,uVar1);
      }
    }
  }
  return CONCAT44(param_2,local_20);
}


