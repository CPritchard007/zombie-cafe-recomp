/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6ea0 FUN_002e6ea0 */

void FUN_002e6ea0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 != 0) {
    iVar1 = param_4;
    if (param_4 < 0) {
      uVar2 = png_error(param_1,DAT_002e6ed0 + 0x2e6eb6);
    }
    FUN_002e6d18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),iVar1);
    png_write_chunk_data(param_1,param_3,param_4);
    png_write_chunk_end(param_1);
  }
  return;
}


