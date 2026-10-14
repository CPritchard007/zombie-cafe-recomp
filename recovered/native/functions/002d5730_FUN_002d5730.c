/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5730 FUN_002d5730 */

undefined4
FUN_002d5730(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  uVar3 = *(ushort *)(param_2 + 0x4a);
  if ((short)uVar3 < 0) {
    return 0;
  }
  if ((param_5 < 2) && ((int)((uint)uVar3 << 0x1e) < 0)) {
    iVar1 = FUN_002d55a4(param_3,param_2 + 4,100);
    if (iVar1 == 0) {
      iVar1 = DAT_002d57d0 + 0x2d5774;
      *(ushort *)(param_2 + 0x4a) = uVar3 | (ushort)DAT_002d57cc;
      png_benign_error(param_1,iVar1);
      return 0;
    }
    if (param_5 == 0) {
      return 1;
    }
  }
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  *(undefined4 *)(param_2 + 4) = *param_3;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  uVar2 = param_3[4];
  uVar4 = param_3[5];
  *(undefined4 *)(param_2 + 0x10) = param_3[3];
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  uVar2 = param_3[7];
  *(undefined4 *)(param_2 + 0x1c) = param_3[6];
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  uVar2 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(param_2 + 0x24) = *param_4;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  uVar2 = param_4[4];
  uVar4 = param_4[5];
  *(undefined4 *)(param_2 + 0x30) = param_4[3];
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar4;
  uVar2 = param_4[7];
  uVar4 = param_4[8];
  *(undefined4 *)(param_2 + 0x3c) = param_4[6];
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar4;
  iVar1 = DAT_002d57d4;
  *(ushort *)(param_2 + 0x4a) = uVar3 | 2;
  iVar1 = FUN_002d55a4(param_3,iVar1 + 0x2d57b0,1000,param_2 + 0x48);
  if (iVar1 == 0) {
    uVar3 = uVar3 & 0xffbf | 2;
  }
  else {
    uVar3 = uVar3 | 0x42;
  }
  *(ushort *)(param_2 + 0x4a) = uVar3;
  return 2;
}


