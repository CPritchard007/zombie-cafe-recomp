/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d633e png_reset_zstream */

undefined4 png_reset_zstream(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = inflateReset(param_1 + 0x144);
  }
  return uVar1;
}


