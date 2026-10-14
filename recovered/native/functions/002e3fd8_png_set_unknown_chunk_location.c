/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3fd8 png_set_unknown_chunk_location */

void png_set_unknown_chunk_location(int param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (-1 < param_3)) && (param_3 < *(int *)(param_2 + 0xf0))
     ) {
    if ((param_4 & 0xb) == 0) {
      png_app_error(param_1,DAT_002e4028 + 0x2e4004,param_3,0xb,param_4);
      uVar2 = param_4 & 4;
      param_4 = 1;
      if (uVar2 != 0) {
        param_4 = 8;
      }
    }
    iVar3 = *(int *)(param_2 + 0xec);
    uVar1 = FUN_002e30b0(param_1,param_4);
    *(undefined1 *)(iVar3 + param_3 * 0x14 + 0x10) = uVar1;
  }
  return;
}


