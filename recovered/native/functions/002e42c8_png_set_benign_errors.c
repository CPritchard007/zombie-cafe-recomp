/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e42c8 png_set_benign_errors */

void png_set_benign_errors(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = DAT_002e42e0 & *(uint *)(param_1 + 0x138);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x138) | 0x700000;
  }
  *(uint *)(param_1 + 0x138) = uVar1;
  return;
}


