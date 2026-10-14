/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6ef2 png_free_buffer_list */

void png_free_buffer_list(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    *param_2 = 0;
    do {
      piVar2 = (int *)*piVar1;
      png_free(param_1,piVar1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


