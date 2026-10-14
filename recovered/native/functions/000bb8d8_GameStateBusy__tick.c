/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb8d8 GameStateBusy::tick */

/* GameStateBusy::tick(long) */

void GameStateBusy::tick(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x18) = cVar1 + -1, cVar1 == '\x01')) {
    (**(code **)(*(int *)param_1 + 0x1c))();
  }
  return;
}


