/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d84c4 png_warning */

void png_warning(int param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*param_2 == '#') {
      iVar1 = 1;
      do {
        if (param_2[iVar1] == ' ') break;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xf);
    }
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
      (**(code **)(param_1 + 0x110))(param_1,param_2 + iVar1);
      return;
    }
  }
  __stream = (FILE *)(*(int *)(DAT_002d8518 + 0x2d84f4) + 0xa8);
  fprintf(__stream,(char *)(DAT_002d851c + 0x2d84f8),param_2 + iVar1);
  fputc(10,__stream);
  return;
}


