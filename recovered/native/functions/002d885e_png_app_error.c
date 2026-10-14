/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d885e png_app_error */

void png_app_error(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x138) << 9 < 0) {
    png_warning();
    return;
  }
  iVar1 = png_error();
  iVar1 = *(int *)(iVar1 + 0x138) << 10;
  if (iVar1 < 0) {
    png_warning();
    return;
  }
  iVar2 = png_error();
  if (*(int *)(iVar2 + 0x134) << 0x10 < 0) {
    if (iVar1 < 2) {
      png_chunk_warning();
    }
    else {
      png_chunk_benign_error();
    }
  }
  else if (iVar1 < 1) {
    png_app_warning();
  }
  else {
    png_app_error();
  }
  return;
}


