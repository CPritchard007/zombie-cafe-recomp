/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e73d4 png_write_sRGB */

undefined8 png_write_sRGB(undefined4 param_1,int param_2,undefined4 param_3)

{
  int local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  if (3 < param_2) {
    png_warning(param_1,DAT_002e73f8 + 0x2e73e4);
  }
  local_14 = CONCAT31(local_14._1_3_,(char)param_2);
  FUN_002e6ea0(param_1,DAT_002e73fc,&local_14,1);
  return CONCAT44(local_14,param_1);
}


