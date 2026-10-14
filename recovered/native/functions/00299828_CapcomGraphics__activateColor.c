/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299828 CapcomGraphics::activateColor */

/* CapcomGraphics::activateColor() */

void CapcomGraphics::activateColor(void)

{
  uint *in_r0;
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *in_r0;
  puVar2 = *(uint **)(DAT_00299854 + 0x299834);
  if (uVar1 != *puVar2) {
    glColor4ub((int)uVar1 >> 0x10 & 0xff,(int)uVar1 >> 8 & 0xff,uVar1 & 0xff,uVar1 >> 0x18);
    *puVar2 = *in_r0;
  }
  return;
}


