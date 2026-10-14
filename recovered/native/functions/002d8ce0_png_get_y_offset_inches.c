/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8ce0 png_get_y_offset_inches */

void png_get_y_offset_inches(void)

{
  undefined4 in_r3;
  undefined8 uVar1;
  
  png_get_y_offset_microns();
  uVar1 = __floatsidf();
  __muldf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),DAT_002d8cf8,DAT_002d8cfc,in_r3);
  __truncdfsf2();
  return;
}


