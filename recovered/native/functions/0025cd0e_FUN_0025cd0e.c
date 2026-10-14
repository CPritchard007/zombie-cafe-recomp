/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cd0e FUN_0025cd0e */

uint FUN_0025cd0e(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0025ccc4();
  if ((uVar1 == 0) || (param_2 == 0)) {
    uVar2 = 0x62;
    if (((uVar1 | param_2) & 0xff) != 0) {
      uVar2 = uVar1 + param_2 & 0xff;
    }
  }
  else {
    uVar2 = 0x62;
    if ((0x62 < uVar1) || (0x62 < param_2)) {
      uVar2 = 99;
    }
  }
  return uVar2;
}


