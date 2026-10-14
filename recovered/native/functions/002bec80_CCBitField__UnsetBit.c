/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bec80 CCBitField::UnsetBit */

/* CCBitField::UnsetBit(void*, unsigned int) */

void CCBitField::UnsetBit(void *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)param_1 + 8) + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (param_2 + (param_2 >> 5) * -0x20 & 0xff));
  return;
}


