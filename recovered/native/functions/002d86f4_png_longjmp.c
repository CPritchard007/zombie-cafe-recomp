/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d86f4 png_longjmp */

void png_longjmp(int param_1)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x100) != (code *)0x0)) &&
     (*(int *)(param_1 + 0x104) != 0)) {
    (**(code **)(param_1 + 0x100))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


