/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7df8 png_gamma_16bit_correct */

uint png_gamma_16bit_correct(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_lr;
  undefined8 uVar2;
  
  uVar1 = param_1 & 0xffff;
  if (param_1 - 1 <= DAT_002d7e70) {
    uVar2 = __floatunsidf();
    __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d7e58,DAT_002d7e5c);
    uVar2 = __floatsidf(param_2);
    __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d7e60,DAT_002d7e64);
    pow((double)CONCAT44(unaff_r6,unaff_r4),(double)CONCAT44(in_lr,unaff_r7));
    uVar2 = __muldf3();
    __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d7e68,DAT_002d7e6c);
    floor((double)CONCAT44(unaff_r6,unaff_r4));
    uVar1 = __fixunsdfsi();
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1;
}


