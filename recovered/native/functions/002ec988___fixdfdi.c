/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec988 __fixdfdi */

undefined8 __fixdfdi(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = __aeabi_dcmplt(param_1,param_2,0,0);
  if (iVar1 != 0) {
    uVar2 = __fixunsdfdi(param_1,param_2 + -0x80000000);
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = __fixunsdfdi(param_1,param_2);
  return uVar2;
}


