/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001498b0 GameStateGatya::resume */

/* GameStateGatya::resume() */

void __thiscall GameStateGatya::resume(GameStateGatya *this)

{
  if (*(char *)(*(int *)(this + 0xc) + DAT_001498c8) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_001498c8) = 0;
    javaAsyncConsume();
  }
  return;
}


