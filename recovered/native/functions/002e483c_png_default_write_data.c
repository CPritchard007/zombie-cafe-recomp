/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e483c png_default_write_data */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_default_write_data(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_1 != 0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x120)), sVar1 != param_3)) {
    png_error(param_1,_FUN_002e4864 + 0x2e4860);
  }
  return;
}


