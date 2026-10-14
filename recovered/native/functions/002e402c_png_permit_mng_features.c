/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e402c png_permit_mng_features */

void png_permit_mng_features(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x328) = param_2 & 5;
  }
  return;
}


