/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e396c png_set_sBIT */

void png_set_sBIT(int param_1,int param_2,void *param_3)

{
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (void *)0x0)) {
    memcpy((void *)(param_2 + 0x94),param_3,5);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  return;
}


