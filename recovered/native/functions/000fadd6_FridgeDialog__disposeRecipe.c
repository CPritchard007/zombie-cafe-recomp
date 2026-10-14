/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fadd6 FridgeDialog::disposeRecipe */

/* FridgeDialog::disposeRecipe(void*) */

void FridgeDialog::disposeRecipe(void *param_1)

{
  *(short *)((int)param_1 + 0xce) = (short)*(undefined4 *)((int)param_1 + 0xe8);
  *(undefined1 *)((int)param_1 + 0xd0) = 0;
  *(undefined1 *)((int)param_1 + 0x100) = 1;
  hide((FridgeDialog *)param_1);
  GameStateCafe::checkForFridgeCloseDelete(*(GameStateCafe **)(*(int *)((int)param_1 + 0x60) + 8));
  return;
}


