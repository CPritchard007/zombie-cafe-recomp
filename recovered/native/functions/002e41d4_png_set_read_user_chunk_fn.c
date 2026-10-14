/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e41d4 png_set_read_user_chunk_fn */

void png_set_read_user_chunk_fn(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x310) = param_3;
    *(undefined4 *)(param_1 + 0x30c) = param_2;
  }
  return;
}


