/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7160 png_write_PLTE */

void png_write_PLTE(int param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint local_24;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  
  if (((*(uint *)(param_1 + 0x328) & 1) == 0 && param_3 == 0) || (0x100 < param_3)) {
    if (*(byte *)(param_1 + DAT_002e7200) == 3) {
      png_error(param_1,DAT_002e7204 + 0x2e7198);
    }
    iVar1 = DAT_002e7208 + 0x2e71a0;
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + DAT_002e7200) << 0x1e) < 0) {
      *(short *)(param_1 + 0x208) = (short)param_3;
      FUN_002e6d18(param_1,DAT_002e7210,param_3 * 3);
      for (local_24 = 0; local_24 != param_3; local_24 = local_24 + 1) {
        local_1c = *param_2;
        local_1b = param_2[1];
        local_1a = param_2[2];
        param_2 = param_2 + 3;
        png_write_chunk_data(param_1,&local_1c,3);
      }
      png_write_chunk_end(param_1);
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 2;
      return;
    }
    iVar1 = DAT_002e720c + 0x2e71aa;
  }
  png_warning(param_1,iVar1);
  return;
}


