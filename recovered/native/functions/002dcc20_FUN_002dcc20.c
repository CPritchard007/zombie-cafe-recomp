/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dcc20 FUN_002dcc20 */

void FUN_002dcc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined8 uVar3;
  
  iVar1 = __aeabi_dcmpgt(param_3,param_4,DAT_002dcca0,DAT_002dcca4);
  uVar3 = CONCAT44(param_4,param_3);
  if ((iVar1 != 0) &&
     (iVar1 = __aeabi_dcmplt(param_3,param_4,DAT_002dcca8,DAT_002dccac),
     uVar3 = CONCAT44(param_4,param_3), iVar1 != 0)) {
    uVar3 = __muldf3(param_3,param_4,DAT_002dccb0,DAT_002dccb4);
  }
  uVar2 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_002dccb8,DAT_002dccbc);
  floor((double)CONCAT44(unaff_r5,unaff_r4));
  iVar1 = __aeabi_dcmpgt();
  if ((iVar1 != 0) ||
     (iVar1 = __aeabi_dcmplt(uVar2,extraout_r1,DAT_002dccc8,DAT_002dcccc), iVar1 != 0)) {
    png_fixed_error(param_1,DAT_002dccd0 + 0x2dcc90);
  }
  __fixdfsi(uVar2,extraout_r1);
  return;
}


