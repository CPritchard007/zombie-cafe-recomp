/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc6c4 png_default_read_data */

void png_default_read_data(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_1 != 0) &&
     (sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x120)), sVar1 != param_3)) {
    png_error(param_1,DAT_002dc6ec + 0x2dc6e8);
  }
  return;
}


