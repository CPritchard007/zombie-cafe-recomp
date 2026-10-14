/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d288 GameStateAmpouleRaid::stopColorShift */

/* GameStateAmpouleRaid::stopColorShift() */

void __thiscall GameStateAmpouleRaid::stopColorShift(GameStateAmpouleRaid *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return;
}


