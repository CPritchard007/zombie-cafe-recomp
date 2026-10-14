/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fadfc FridgeDialog::serveRecipe */

/* FridgeDialog::serveRecipe(void*) */

void FridgeDialog::serveRecipe(void *param_1)

{
  *(short *)((int)param_1 + 0xce) = (short)*(undefined4 *)((int)param_1 + 0xe8);
  *(undefined1 *)((int)param_1 + 0xd0) = 0;
  hide((FridgeDialog *)param_1);
  return;
}


