/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e09bc FUN_002e09bc */

undefined4 FUN_002e09bc(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x368) != 0) {
    png_free();
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x35c);
  if (((uVar1 == 0) || (0xfffffffe < uVar1)) || (param_2 <= uVar1)) {
    uVar2 = *(undefined4 *)(param_1 + 0x1dc);
    *(char *)(param_1 + 0x360) = (char)((uint)uVar2 >> 0x18);
    *(char *)(param_1 + DAT_002e0a64) = (char)((uint)uVar2 >> 0x10);
    *(char *)(param_1 + DAT_002e0a68) = (char)((uint)uVar2 >> 8);
    *(char *)(param_1 + DAT_002e0a6c) = (char)uVar2;
    *(undefined1 *)(param_1 + 0x364) = 0;
    *(uint *)(param_1 + 0x36c) = param_2;
    *(char *)(param_1 + 0x370) = (char)*(undefined4 *)(param_1 + 0x134);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x368) = 0;
    }
    else {
      uVar2 = png_malloc_warn(param_1,param_2);
      *(undefined4 *)(param_1 + 0x368) = uVar2;
    }
  }
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x368) == 0) {
      png_crc_finish(param_1,param_2);
      png_chunk_benign_error(param_1,DAT_002e0a70 + 0x2e0a4a);
      return 0;
    }
    png_crc_read(param_1,*(int *)(param_1 + 0x368),param_2);
  }
  png_crc_finish(param_1,0);
  return 1;
}


