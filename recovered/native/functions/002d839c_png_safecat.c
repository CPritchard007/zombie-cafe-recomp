/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d839c png_safecat */

uint png_safecat(int param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  
  if ((param_3 < param_2) && (param_1 != 0)) {
    if (param_4 != 0) {
      param_4 = param_4 - param_3;
      for (; (cVar1 = *(char *)(param_4 + param_3), cVar1 != '\0' && (param_3 < param_2 - 1));
          param_3 = param_3 + 1) {
        *(char *)(param_1 + param_3) = cVar1;
      }
    }
    *(undefined1 *)(param_1 + param_3) = 0;
  }
  return param_3;
}


