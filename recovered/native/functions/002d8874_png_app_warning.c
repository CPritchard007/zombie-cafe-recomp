/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8874 png_app_warning */

void png_app_warning(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x138) << 10;
  if (iVar2 < 0) {
    png_warning();
    return;
  }
  iVar1 = png_error();
  if (*(int *)(iVar1 + 0x134) << 0x10 < 0) {
    if (iVar2 < 2) {
      png_chunk_warning();
    }
    else {
      png_chunk_benign_error();
    }
  }
  else if (iVar2 < 1) {
    png_app_warning();
  }
  else {
    png_app_error();
  }
  return;
}


