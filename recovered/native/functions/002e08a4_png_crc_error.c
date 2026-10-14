/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e08a4 png_crc_error */

undefined8 png_crc_error(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint local_14;
  
  if (*(int *)(param_1 + 0x1dc) << 2 < 0) {
    bVar2 = (*(uint *)(param_1 + 0x138) & 0x300) + DAT_002e090c != 0;
  }
  else {
    bVar2 = (*(uint *)(param_1 + 0x138) & 0x800) == 0;
  }
  uVar1 = (uint)bVar2;
  *(undefined4 *)(param_1 + 900) = 0x81;
  local_14 = param_2;
  png_read_data(param_1,&local_14,4);
  if (uVar1 != 0) {
    uVar1 = (uint)(local_14 * 0x1000000 + (local_14 >> 8 & 0xff) * 0x10000 + (local_14 >> 0x18) +
                   (local_14 >> 0x10 & 0xff) * 0x100 != *(int *)(param_1 + 0x200));
  }
  return CONCAT44(param_1,uVar1);
}


