/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262a1c FUN_00262a1c */

bool FUN_00262a1c(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(DAT_00262a44 + 0x262a68 + (uint)*param_1);
  if ((int)(uVar1 << 0x1d) < 0) {
    uVar1 = FUN_0025b90e();
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_002629bc(param_1,1,param_2,uVar1,param_4);
  }
  return uVar1 != 0;
}


