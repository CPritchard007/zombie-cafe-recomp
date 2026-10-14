/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d76d0 png_colorspace_set_chromaticities */

undefined4
png_colorspace_set_chromaticities
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [40];
  
  iVar2 = FUN_002d72e8(auStack_3c,param_3);
  if ((iVar2 == 0) && (iVar2 = FUN_002d7174(auStack_5c,auStack_3c), iVar2 == 0)) {
    iVar2 = FUN_002d55a4(param_3,auStack_5c,5);
    if (iVar2 != 0) {
      uVar3 = FUN_002d5730(param_1,param_2,param_3,auStack_3c,param_4);
      return uVar3;
    }
  }
  else {
    iVar1 = DAT_002d7754;
    if (iVar2 != 1) {
      *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | (ushort)DAT_002d774c;
      uVar3 = png_error(param_1,iVar1 + 0x2d7744);
      return uVar3;
    }
  }
  iVar2 = DAT_002d7750;
  *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | (ushort)DAT_002d774c;
  png_benign_error(param_1,iVar2 + 0x2d772c);
  return 0;
}


