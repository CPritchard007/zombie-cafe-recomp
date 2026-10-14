/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc4ac png_image_begin_read_from_file */

int * png_image_begin_read_from_file(int *param_1,char *param_2)

{
  FILE *__stream;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] == 1) {
      if (param_2 == (char *)0x0) {
        pcVar3 = (char *)(DAT_002dc544 + 0x2dc526);
      }
      else {
        __stream = fopen(param_2,(char *)(DAT_002dc538 + 0x2dc4c6));
        if (__stream != (FILE *)0x0) {
          if (*param_1 == 0) {
            iVar1 = FUN_002dc248(param_1);
          }
          else {
            iVar1 = png_image_error(param_1,DAT_002dc53c + 0x2dc4e4);
          }
          if (iVar1 != 0) {
            *(FILE **)(*(int *)*param_1 + 0x120) = __stream;
            iVar1 = DAT_002dc540;
            *(byte *)(*param_1 + 0x14) = *(byte *)(*param_1 + 0x14) | 2;
            piVar2 = (int *)png_safe_execute(param_1,iVar1 + 0x2dc506,param_1);
            return piVar2;
          }
          fclose(__stream);
          return (int *)0x0;
        }
        piVar2 = (int *)__errno();
        pcVar3 = strerror(*piVar2);
      }
    }
    else {
      pcVar3 = (char *)(DAT_002dc548 + 0x2dc52c);
    }
    param_1 = (int *)png_image_error(param_1,pcVar3);
  }
  return param_1;
}


