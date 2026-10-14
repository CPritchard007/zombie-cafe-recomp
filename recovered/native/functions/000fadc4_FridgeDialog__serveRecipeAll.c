/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fadc4 FridgeDialog::serveRecipeAll */

/* FridgeDialog::serveRecipeAll(void*) */

void FridgeDialog::serveRecipeAll(void *param_1)

{
  hide((FridgeDialog *)param_1);
  GameStateCafe::checkForFridgeAddCounterAll(*(GameStateCafe **)(*(int *)((int)param_1 + 0x60) + 8))
  ;
  return;
}


