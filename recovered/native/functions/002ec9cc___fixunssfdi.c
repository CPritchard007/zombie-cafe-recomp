/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec9cc __fixunssfdi */

undefined8 __fixunssfdi(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = __extendsfdf2();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  __muldf3((int)uVar3,uVar2,0,DAT_002eca34,in_r3);
  uVar1 = __fixunsdfsi();
  uVar4 = __floatunsidf();
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,DAT_002eca38);
  __subdf3((int)uVar3,uVar2,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar2 = __fixunsdfsi();
  return CONCAT44(uVar1,uVar2);
}


