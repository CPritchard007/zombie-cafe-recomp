/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6024 png_convert_to_rfc1123 */

int png_convert_to_rfc1123(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    iVar2 = param_1 + DAT_002d604c;
    iVar1 = png_convert_to_rfc1123_buffer(iVar2);
    if (iVar1 == 0) {
      png_warning(param_1,DAT_002d6050 + 0x2d6044);
      iVar2 = 0;
    }
  }
  return iVar2;
}


