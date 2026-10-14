/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6298 png_build_grayscale_palette */

void png_build_grayscale_palette(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  
  if (param_2 != (char *)0x0) {
    uVar1 = param_1 - 1;
    if (uVar1 < 8) {
      iVar5 = (int)*(short *)(uVar1 * 2 + DAT_002d62d8 + 0x2d6304);
      cVar4 = *(char *)(DAT_002d62d8 + 0x2d6314 + uVar1);
    }
    else {
      cVar4 = '\0';
      iVar5 = 0;
    }
    cVar3 = '\0';
    for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      *param_2 = cVar3;
      param_2[1] = cVar3;
      param_2[2] = cVar3;
      cVar3 = cVar3 + cVar4;
      param_2 = param_2 + 3;
    }
  }
  return;
}


