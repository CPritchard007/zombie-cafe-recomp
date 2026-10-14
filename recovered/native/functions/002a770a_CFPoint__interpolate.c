/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a770a CFPoint::interpolate */

/* CFPoint::interpolate(long, long, float) */

undefined8 CFPoint::interpolate(long param_1,long param_2,float param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_r2;
  
  uVar3 = param_2 - (param_1 & 0xffffU);
  uVar1 = __floatsisf((int)((((uint)param_2 >> 0x10) - ((uint)param_1 >> 0x10)) * 0x10000 |
                           uVar3 & 0xffff) >> 0x10);
  __mulsf3(uVar1,in_r2);
  uVar2 = __fixsfsi();
  uVar1 = __floatsisf((int)(short)uVar3);
  __mulsf3(uVar1,in_r2);
  uVar3 = __fixsfsi();
  return CONCAT44(param_1,(((uint)param_1 >> 0x10) + (uVar2 & 0xffff)) * 0x10000 |
                          (param_1 & 0xffffU) + (uVar3 & 0xffff) & 0xffff);
}


