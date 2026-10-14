/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dbdd8 png_read_rows */

undefined8 png_read_rows(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (param_3 == (undefined4 *)0x0) {
      iVar3 = 0;
      if (param_2 != (undefined4 *)0x0) {
        for (; iVar3 != param_4; iVar3 = iVar3 + 1) {
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          png_read_row(param_1,uVar2,0);
        }
      }
    }
    else if (param_2 != (undefined4 *)0x0) {
      for (iVar3 = 0; iVar3 != param_4; iVar3 = iVar3 + 1) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        png_read_row(param_1,uVar2,uVar1);
      }
    }
    else {
      for (iVar3 = 0; iVar3 != param_4; iVar3 = iVar3 + 1) {
        uVar2 = *param_3;
        param_3 = param_3 + 1;
        png_read_row(param_1,0,uVar2);
      }
    }
  }
  return CONCAT44(param_4,param_1);
}


