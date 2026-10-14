/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118916 CFPoint::multiplyf */

/* CFPoint::multiplyf(long, float) */

uint CFPoint::multiplyf(long param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_r1;
  
  uVar1 = __floatsisf(param_1 >> 0x10);
  __mulsf3(uVar1,in_r1);
  iVar2 = __fixsfsi();
  uVar1 = __floatsisf((int)(short)param_1);
  __mulsf3(uVar1,in_r1);
  uVar3 = __fixsfsi();
  return uVar3 & 0xffff | iVar2 << 0x10;
}


