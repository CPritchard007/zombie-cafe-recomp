/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d67c0 png_check_IHDR */

undefined8
png_check_IHDR(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,int param_7
              ,int param_8)

{
  bool bVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    png_warning(param_1,DAT_002d6940 + 0x2d67da);
  }
  if (param_3 == 0) {
    png_warning(param_1,DAT_002d6944 + 0x2d67ec);
  }
  bVar1 = *(uint *)(param_1 + 0x350) < param_2;
  if (bVar1) {
    png_warning(param_1,DAT_002d6948 + 0x2d6804);
  }
  bVar2 = *(uint *)(param_1 + 0x354) < param_3;
  if (bVar2) {
    png_warning(param_1,DAT_002d694c + 0x2d681c);
  }
  if ((int)param_2 < 0) {
    png_warning(param_1,DAT_002d6950 + 0x2d682e);
  }
  if ((int)param_3 < 0) {
    png_warning(param_1,DAT_002d6954 + 0x2d6840);
  }
  bVar1 = (int)param_3 < 0 ||
          ((int)param_2 < 0 || (bVar2 || (bVar1 || (param_3 == 0 || param_2 == 0))));
  if ((((1 < param_4 - 1U) && (param_4 != 4)) && (param_4 != 0x10)) && (param_4 != 8)) {
    bVar1 = true;
    png_warning(param_1,DAT_002d6958 + 0x2d6860);
  }
  if (((param_5 == 1) || (param_5 < 0)) || ((6 < param_5 || (param_5 == 5)))) {
    bVar1 = true;
    png_warning(param_1,DAT_002d695c + 0x2d687c);
  }
  if (((param_5 == 3) && (8 < param_4)) ||
     (((param_5 == 4 || ((param_5 == 2 || (param_5 == 6)))) && (param_4 < 8)))) {
    bVar1 = true;
    png_warning(param_1,DAT_002d6960 + 0x2d68a0);
  }
  if (1 < param_6) {
    bVar1 = true;
    png_warning(param_1,DAT_002d6964 + 0x2d68b2);
  }
  if (param_7 != 0) {
    bVar1 = true;
    png_warning(param_1,DAT_002d6968 + 0x2d68c4);
  }
  if (((*(uint *)(param_1 + 0x134) & 0x1000) != 0) && (*(int *)(param_1 + 0x328) != 0)) {
    png_warning(param_1,DAT_002d696c + 0x2d68e6);
  }
  if (param_8 == 0) {
LAB_002d6930:
    if (!bVar1) goto LAB_002d693e;
  }
  else {
    if ((((param_8 != 0x40) || (-1 < *(int *)(param_1 + 0x328) << 0x1d)) ||
        ((*(uint *)(param_1 + 0x134) & 0x1000) != 0)) || ((param_5 != 6 && (param_5 != 2)))) {
      bVar1 = true;
      png_warning(param_1,DAT_002d6970 + 0x2d6918);
    }
    if ((*(uint *)(param_1 + 0x134) & 0x1000) == 0) goto LAB_002d6930;
    png_warning(param_1,DAT_002d6974 + 0x2d692c);
  }
  png_error(param_1,DAT_002d6978 + 0x2d693c);
LAB_002d693e:
  return CONCAT44(param_3,param_2);
}


