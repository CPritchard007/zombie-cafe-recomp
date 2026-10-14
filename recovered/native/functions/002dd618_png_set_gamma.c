/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd618 png_set_gamma */

void png_set_gamma(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_002dcc20();
  uVar1 = FUN_002dcc20(param_1,(int)((ulonglong)uVar2 >> 0x20),param_5,param_6,param_4);
  png_set_gamma_fixed(param_1,(int)uVar2,uVar1);
  return;
}


