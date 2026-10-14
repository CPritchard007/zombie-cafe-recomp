/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e2440 png_read_chunk_header */

void png_read_chunk_header(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_24 [4];
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  int local_1c;
  
  piVar2 = *(int **)(DAT_002e24b8 + 0x2e244c);
  local_1c = *piVar2;
  *(undefined4 *)(param_1 + 900) = 0x21;
  png_read_data(param_1,auStack_24,8);
  uVar1 = png_get_uint_31(param_1,auStack_24);
  *(uint *)(param_1 + 0x1dc) =
       (uint)local_1f << 0x10 | (uint)local_20 << 0x18 | (uint)local_1d | (uint)local_1e << 8;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_20,4);
  png_check_chunk_name(param_1,*(undefined4 *)(param_1 + 0x1dc));
  *(undefined4 *)(param_1 + 900) = 0x41;
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


