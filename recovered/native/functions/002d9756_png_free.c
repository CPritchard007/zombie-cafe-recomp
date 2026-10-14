/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9756 png_free */

void png_free(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    if (*(code **)(param_1 + 0x338) == (code *)0x0) {
      png_free_default();
    }
    else {
      (**(code **)(param_1 + 0x338))();
    }
  }
  return;
}


