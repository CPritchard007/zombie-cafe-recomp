/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d63e4 png_colorspace_sync_info */

void png_colorspace_sync_info(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_2 + 0x72);
  uVar2 = *(uint *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    *(uint *)(param_2 + 8) = uVar2 & DAT_002d643c;
    png_free_data(param_1,param_2,0x10,0xffffffff);
  }
  else {
    if ((int)((uint)uVar1 << 0x18) < 0) {
      uVar2 = uVar2 | 0x800;
    }
    else {
      uVar2 = uVar2 & DAT_002d6440;
    }
    *(uint *)(param_2 + 8) = uVar2;
    if ((int)((uint)uVar1 << 0x1e) < 0) {
      uVar2 = *(uint *)(param_2 + 8) | 4;
    }
    else {
      uVar2 = *(uint *)(param_2 + 8) & 0xfffffffb;
    }
    *(uint *)(param_2 + 8) = uVar2;
    if ((uVar1 & 1) == 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
    }
    else {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    }
  }
  return;
}


