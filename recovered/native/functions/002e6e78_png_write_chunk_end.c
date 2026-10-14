/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6e78 png_write_chunk_end */

undefined8 png_write_chunk_end(int param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 900) = 0x82;
    png_save_uint_32(&uStack_c,*(undefined4 *)(param_1 + 0x200));
    png_write_data(param_1,&uStack_c,4);
  }
  return CONCAT44(uStack_c,param_1);
}


