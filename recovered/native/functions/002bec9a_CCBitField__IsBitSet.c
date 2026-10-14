/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bec9a CCBitField::IsBitSet */

/* CCBitField::IsBitSet(void*, unsigned int) */

bool CCBitField::IsBitSet(void *param_1,uint param_2)

{
  return (*(uint *)((param_2 >> 5) * 4 + *(int *)((int)param_1 + 8)) &
         1 << (param_2 + (param_2 >> 5) * -0x20 & 0xff)) != 0;
}


