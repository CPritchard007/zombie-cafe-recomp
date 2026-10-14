/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8820 png_chunk_error */

void png_chunk_error(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_e4 [216];
  undefined4 local_c;
  
  local_c = **(undefined4 **)(iRam002d8844 + 0x2d882c);
  puVar4 = param_2;
  if (param_1 != 0) {
    FUN_002d8314(param_1,auStack_e4);
    param_2 = auStack_e4;
  }
  uVar1 = png_error(param_1,param_2);
  *(undefined4 *)(puVar4 + 0x10) = uVar1;
  if (*(int *)(param_1 + 0x138) << 0xb < 0) {
    png_chunk_warning();
    return;
  }
  iVar2 = png_chunk_error();
  if (*(int *)(iVar2 + 0x138) << 9 < 0) {
    png_warning();
    return;
  }
  iVar2 = png_error();
  iVar2 = *(int *)(iVar2 + 0x138) << 10;
  if (iVar2 < 0) {
    png_warning();
    return;
  }
  iVar3 = png_error();
  if (*(int *)(iVar3 + 0x134) << 0x10 < 0) {
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


