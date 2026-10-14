/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd6f8 png_set_rgb_to_gray_fixed */

void png_set_rgb_to_gray_fixed(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_002dcbd0(param_1,1,param_3,param_4,param_4);
  if (iVar2 == 0) {
    return;
  }
  if (param_2 == 2) {
    uVar3 = *(uint *)(param_1 + 0x13c);
    iVar2 = 0x80;
LAB_002dd726:
    uVar4 = iVar2 << 0xf;
LAB_002dd730:
    *(uint *)(param_1 + 0x13c) = uVar4 | uVar3;
    if (*(char *)(param_1 + DAT_002dd7b0) != '\x03') goto LAB_002dd756;
  }
  else {
    if (param_2 == 3) {
      uVar3 = *(uint *)(param_1 + 0x13c);
      uVar4 = 0x200000;
      goto LAB_002dd730;
    }
    if (param_2 == 1) {
      uVar3 = *(uint *)(param_1 + 0x13c);
      iVar2 = 0xc0;
      goto LAB_002dd726;
    }
    png_error(param_1,DAT_002dd7b4 + 0x2dd746);
  }
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x1000;
LAB_002dd756:
  iVar2 = DAT_002dd7b8;
  if ((-1 < param_4) && (-1 < param_3)) {
    if (param_3 + param_4 <= DAT_002dd7b8) {
      uVar1 = __udivsi3(param_3 << 0xf,DAT_002dd7b8);
      *(undefined2 *)(param_1 + DAT_002dd7bc) = uVar1;
      uVar1 = __udivsi3(param_4 << 0xf,iVar2);
      *(undefined2 *)(param_1 + 0x324) = uVar1;
      *(undefined1 *)(param_1 + DAT_002dd7c0) = 1;
      return;
    }
    png_app_warning(param_1,DAT_002dd7c4 + 0x2dd790);
  }
  if ((*(short *)(param_1 + DAT_002dd7bc) == 0) && (*(short *)(param_1 + 0x324) == 0)) {
    *(short *)(param_1 + DAT_002dd7bc) = (short)DAT_002dd7c8;
    *(short *)(param_1 + 0x324) = (short)DAT_002dd7cc;
  }
  return;
}


