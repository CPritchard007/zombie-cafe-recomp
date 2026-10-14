/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e240c png_check_chunk_name */

void png_check_chunk_name(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 4;
  do {
    uVar2 = CONCAT44(param_2,param_1);
    param_2 = param_2 & 0xff;
    if ((param_2 - 0x5b < 6) || (param_2 = param_2 - 0x41, 0x39 < param_2)) {
      uVar2 = png_chunk_error(param_1,DAT_002e243c + 0x2e242e,param_2,iVar1,param_4);
    }
    param_1 = (undefined4)uVar2;
    iVar1 = iVar1 + -1;
    param_2 = (uint)((ulonglong)uVar2 >> 0x28);
  } while (iVar1 != 0);
  return;
}


