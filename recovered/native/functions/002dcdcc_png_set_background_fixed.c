/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dcdcc png_set_background_fixed */

undefined8
png_set_background_fixed(int param_1,void *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_20;
  
  iVar2 = FUN_002dcbd0(param_1,0);
  uVar1 = DAT_002dce50;
  if ((iVar2 != 0) && (param_2 != (void *)0x0)) {
    if (param_3 == 0) {
      png_warning(param_1,DAT_002dce44 + 0x2dcdf2);
    }
    else {
      uVar3 = (DAT_002dce48 | *(uint *)(param_1 + 0x13c)) & DAT_002dce4c;
      *(uint *)(param_1 + 0x13c) = uVar3;
      *(uint *)(param_1 + 0x138) = uVar1 & *(uint *)(param_1 + 0x138);
      memcpy((void *)(param_1 + 0x228),param_2,10);
      *(undefined4 *)(param_1 + 0x224) = param_5;
      local_20 = (undefined1)param_3;
      *(undefined1 *)(param_1 + DAT_002dce54) = local_20;
      if (param_4 == 0) {
        uVar3 = uVar3 & DAT_002dce58;
      }
      else {
        uVar3 = uVar3 | 0x100;
      }
      *(uint *)(param_1 + 0x13c) = uVar3;
    }
  }
  return CONCAT44(param_4,param_3);
}


