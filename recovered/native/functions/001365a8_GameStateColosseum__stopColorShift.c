/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001365a8 GameStateColosseum::stopColorShift */

/* GameStateColosseum::stopColorShift() */

void __thiscall GameStateColosseum::stopColorShift(GameStateColosseum *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xac);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(this + 0xac) = 0;
  }
  return;
}


