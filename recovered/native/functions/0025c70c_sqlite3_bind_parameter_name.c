/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c70c sqlite3_bind_parameter_name */

undefined4 sqlite3_bind_parameter_name(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 1) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_2 <= *(short *)(param_1 + 0x4e)) {
      uVar1 = *(undefined4 *)((param_2 + -1) * 4 + *(int *)(param_1 + 0x48));
    }
  }
  return uVar1;
}


