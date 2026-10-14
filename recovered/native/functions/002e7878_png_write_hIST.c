/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7878 png_write_hIST */

undefined8 png_write_hIST(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined2 *puStack_1c;
  int iStack_18;
  
  puStack_1c = param_2;
  iStack_18 = param_3;
  if ((int)(uint)*(ushort *)(param_1 + 0x208) < param_3) {
    png_warning(param_1,DAT_002e78c4 + 0x2e7890);
  }
  else {
    FUN_002e6d18(param_1,DAT_002e78c8,param_3 << 1);
    for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
      png_save_uint_16(&puStack_1c,*param_2);
      png_write_chunk_data(param_1,&puStack_1c,2);
      param_2 = param_2 + 1;
    }
    png_write_chunk_end(param_1);
  }
  return CONCAT44(puStack_1c,param_1);
}


