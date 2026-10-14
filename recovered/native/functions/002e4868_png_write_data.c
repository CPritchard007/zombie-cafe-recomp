/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4868 png_write_data */

void png_write_data(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x118) != (code *)0x0) {
    (**(code **)(param_1 + 0x118))();
    return;
  }
  iVar1 = png_error(param_1,iRam002e4880 + 0x2e487e,param_3,0,param_4);
  if (*(code **)(iVar1 + 0x23c) != (code *)0x0) {
    (**(code **)(iVar1 + 0x23c))();
  }
  return;
}


