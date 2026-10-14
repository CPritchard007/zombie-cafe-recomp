/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6320 png_chunk_unknown_handling */

void png_chunk_unknown_handling(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uint local_c;
  undefined4 uStack_8;
  
  _local_10 = CONCAT13((char)param_2,
                       CONCAT12((char)(param_2 >> 8),
                                CONCAT11((char)(param_2 >> 0x10),(char)(param_2 >> 0x18))));
  local_c = param_2 & 0xffffff00;
  uStack_8 = param_3;
  png_handle_as_unknown(param_1,&local_10);
  return;
}


