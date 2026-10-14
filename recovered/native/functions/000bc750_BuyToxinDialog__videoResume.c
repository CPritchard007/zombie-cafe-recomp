/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc750 BuyToxinDialog::videoResume */

/* BuyToxinDialog::videoResume(void*) */

void BuyToxinDialog::videoResume(void *param_1)

{
  if (*(int **)((int)param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x6c) + 0x1c))();
    GameState::releaseHandle(*(GameState **)((int)param_1 + 0x6c));
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
  }
  return;
}


