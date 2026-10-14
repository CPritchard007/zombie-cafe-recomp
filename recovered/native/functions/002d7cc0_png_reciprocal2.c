/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7cc0 png_reciprocal2 */

undefined4 png_reciprocal2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = __floatsidf();
  uVar3 = __divdf3(DAT_002d7d28,DAT_002d7d2c,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar4 = __floatsidf(param_2);
  uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20));
  uVar1 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_002d7d30,DAT_002d7d34);
  floor((double)CONCAT44(unaff_r5,unaff_r4));
  iVar2 = __aeabi_dcmple();
  if ((iVar2 == 0) ||
     (iVar2 = __aeabi_dcmpge(uVar1,extraout_r1,DAT_002d7d40,DAT_002d7d44), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = __fixdfsi(uVar1,extraout_r1);
  }
  return uVar1;
}


