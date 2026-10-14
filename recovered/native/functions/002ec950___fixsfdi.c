/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec950 __fixsfdi */

undefined8 __fixsfdi(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = __aeabi_fcmplt(param_1,0);
  if (iVar1 != 0) {
    uVar2 = __fixunssfdi(param_1 + -0x80000000);
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = __fixunssfdi(param_1);
  return uVar2;
}


