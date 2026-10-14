/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7278 png_reciprocal */

undefined4 png_reciprocal(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined8 uVar3;
  
  uVar3 = __floatsidf();
  uVar3 = __divdf3(DAT_002d72c8,DAT_002d72cc,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_002d72d0,DAT_002d72d4);
  floor((double)CONCAT44(unaff_r4,in_r3));
  iVar2 = __aeabi_dcmple();
  if ((iVar2 == 0) ||
     (iVar2 = __aeabi_dcmpge(uVar1,extraout_r1,DAT_002d72e0,DAT_002d72e4), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = __fixdfsi(uVar1,extraout_r1);
  }
  return uVar1;
}


