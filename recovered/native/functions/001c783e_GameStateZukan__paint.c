/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c783e GameStateZukan::paint */

/* GameStateZukan::paint(CapcomGraphics*) */

void GameStateZukan::paint(CapcomGraphics *param_1)

{
  int *piVar1;
  undefined4 in_r1;
  
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
  piVar1 = *(int **)(param_1 + 0xb0);
  if ((piVar1 != (int *)0x0) &&
     (*(char *)(*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0x88)) != '\0')) {
    (**(code **)(*piVar1 + 8))(piVar1,in_r1);
  }
  piVar1 = *(int **)(param_1 + 0xc4);
  if ((char)piVar1[5] != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1,in_r1);
  }
  return;
}


