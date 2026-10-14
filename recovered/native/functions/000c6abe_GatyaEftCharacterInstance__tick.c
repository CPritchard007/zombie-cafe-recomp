/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6abe GatyaEftCharacterInstance::tick */

/* GatyaEftCharacterInstance::tick(long) */

void GatyaEftCharacterInstance::tick(long param_1)

{
  *(int *)(param_1 + 0x94) = (int)*(short *)(param_1 + 0x2c);
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 8))();
  }
  return;
}


