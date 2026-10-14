/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131b42 GameStateChooseChef::paint */

/* GameStateChooseChef::paint(CapcomGraphics*) */

void GameStateChooseChef::paint(CapcomGraphics *param_1)

{
  int *piVar1;
  undefined4 in_r1;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,in_r1);
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if ((char)piVar1[5] != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1,in_r1);
  }
  piVar1 = *(int **)(param_1 + 0xd4);
  if ((char)piVar1[5] != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1,in_r1);
  }
  piVar1 = *(int **)(param_1 + 0xe4);
  if ((char)piVar1[5] != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1,in_r1);
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if ((char)piVar1[5] != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1,in_r1);
  }
  return;
}


