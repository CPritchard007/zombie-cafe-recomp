/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bec66 CCBitField::SetBit */

/* CCBitField::SetBit(void*, unsigned int) */

void CCBitField::SetBit(void *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)param_1 + 8) + (param_2 >> 5) * 4);
  *puVar1 = 1 << (param_2 + (param_2 >> 5) * -0x20 & 0xff) | *puVar1;
  return;
}


