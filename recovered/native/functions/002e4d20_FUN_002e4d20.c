/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4d20 FUN_002e4d20 */

undefined8 FUN_002e4d20(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = DAT_002e4d94 + 0x2e4d34;
  iVar4 = param_1;
  uVar5 = param_3;
  for (uVar2 = *(uint *)(param_2 + 0xec);
      uVar2 < (uint)(*(int *)(param_2 + 0xec) + *(int *)(param_2 + 0xf0) * 0x14);
      uVar2 = uVar2 + 0x14) {
    if ((((param_3 & *(byte *)(uVar2 + 0x10)) != 0) &&
        (iVar1 = png_handle_as_unknown(param_1,uVar2), iVar1 != 1)) &&
       (((iVar1 == 3 || ((int)((uint)*(byte *)(uVar2 + 3) << 0x1a) < 0)) ||
        ((iVar1 == 0 && (*(int *)(param_1 + 0x314) == 3)))))) {
      if (*(int *)(uVar2 + 0xc) == 0) {
        png_warning(param_1,iVar3);
      }
      png_write_chunk(param_1,uVar2,*(undefined4 *)(uVar2 + 8),*(undefined4 *)(uVar2 + 0xc),iVar4,
                      param_3,uVar5);
    }
  }
  return CONCAT44(param_3,iVar4);
}


