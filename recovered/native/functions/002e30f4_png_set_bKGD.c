/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e30f4 png_set_bKGD */

void png_set_bKGD(int param_1,int param_2,void *param_3)

{
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (void *)0x0)) {
    memcpy((void *)(param_2 + 0xaa),param_3,10);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}


