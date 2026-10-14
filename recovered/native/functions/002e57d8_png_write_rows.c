/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e57d8 png_write_rows */

void png_write_rows(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      png_write_row(param_1,uVar1);
    }
  }
  return;
}


