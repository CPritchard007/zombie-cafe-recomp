/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029961a CapcomGraphics::peekClip */

/* CapcomGraphics::peekClip() */

undefined4 * CapcomGraphics::peekClip(void)

{
  undefined4 *in_r0;
  int in_r1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined4 **)(in_r1 + 0x10);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = getScreenSize();
    *in_r0 = 0;
    in_r0[1] = 0;
    in_r0[2] = (int)((ulonglong)uVar4 >> 0x20);
    in_r0[3] = (int)uVar4;
  }
  else {
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    *in_r0 = *puVar3;
    in_r0[1] = uVar1;
    in_r0[2] = uVar2;
    in_r0[3] = puVar3[3];
  }
  return in_r0;
}


