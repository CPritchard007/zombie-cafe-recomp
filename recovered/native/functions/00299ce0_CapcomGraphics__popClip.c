/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299ce0 CapcomGraphics::popClip */

/* CapcomGraphics::popClip() */

undefined4 * CapcomGraphics::popClip(void)

{
  undefined4 *in_r0;
  undefined4 *puVar1;
  CapcomGraphics *in_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  finishBatch();
  puVar1 = *(undefined4 **)(in_r1 + 0x10);
  *in_r0 = 0;
  in_r0[1] = 0;
  in_r0[2] = 0;
  in_r0[3] = 0;
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = getScreenSize();
    in_r0[2] = (int)((ulonglong)uVar4 >> 0x20);
    in_r0[3] = (int)uVar4;
  }
  else {
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    *in_r0 = *puVar1;
    in_r0[1] = uVar2;
    in_r0[2] = uVar3;
    in_r0[3] = puVar1[3];
    *(undefined4 *)(in_r1 + 0x10) = puVar1[4];
    operator_delete(puVar1);
  }
  if ((CapcomGraphics *)**(undefined4 **)(DAT_00299d34 + 0x299d22) == in_r1) {
    activateClip(in_r1);
  }
  return in_r0;
}


