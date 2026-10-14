/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a524c ScreenElement::globalToLocalCoordsBig */

/* ScreenElement::globalToLocalCoordsBig(long long) const */

void ScreenElement::globalToLocalCoordsBig(longlong param_1)

{
  ScreenElement *in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(in_r3,in_r2);
  do {
    uVar1 = parentToLocalCoordsBig(in_r0,(long)((ulonglong)uVar1 >> 0x20),(long)uVar1);
    in_r0 = *(ScreenElement **)(in_r0 + 0x20);
  } while (in_r0 != (ScreenElement *)0x0);
  return;
}


