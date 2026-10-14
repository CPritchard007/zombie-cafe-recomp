/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3388 png_set_hIST */

void png_set_hIST(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((ushort)(*(short *)(param_2 + 0x14) - 1U) < 0x100) {
      png_free_data(param_1,param_2,8,0,param_4);
      iVar1 = png_malloc_warn(param_1,0x200);
      *(int *)(param_2 + 0xcc) = iVar1;
      if (iVar1 != 0) {
        *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 8;
        iVar2 = 0;
        for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_2 + 0x14); iVar1 = iVar1 + 1) {
          *(undefined2 *)(*(int *)(param_2 + 0xcc) + iVar2) = *(undefined2 *)(param_3 + iVar2);
          iVar2 = iVar2 + 2;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
        return;
      }
      iVar1 = DAT_002e3404 + 0x2e33d0;
    }
    else {
      iVar1 = DAT_002e3400 + 0x2e33ae;
    }
    png_warning(param_1,iVar1);
  }
  return;
}


