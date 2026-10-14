/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6f48 png_fixed */

void png_fixed(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined8 uVar3;
  
  uVar3 = __muldf3(param_3,param_4,DAT_002d6f98,DAT_002d6f9c);
  uVar1 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_002d6fa0,DAT_002d6fa4);
  floor((double)CONCAT44(unaff_r5,unaff_r4));
  iVar2 = __aeabi_dcmpgt();
  if ((iVar2 != 0) ||
     (iVar2 = __aeabi_dcmplt(uVar1,extraout_r1,DAT_002d6fb0,DAT_002d6fb4), iVar2 != 0)) {
    png_fixed_error(param_1,param_5);
  }
  __fixdfsi(uVar1,extraout_r1);
  return;
}


