/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a470 GameStateEarlyBird::updateEarlyBirdConsole */

/* GameStateEarlyBird::updateEarlyBirdConsole() */

void __thiscall GameStateEarlyBird::updateEarlyBirdConsole(GameStateEarlyBird *this)

{
  int *piVar1;
  
  L_PrintLog((char *)(DAT_0019a4cc + 0x19a480),(char *)(DAT_0019a4c8 + 0x19a47e));
  piVar1 = *(int **)(this + 0xec);
  (**(code **)(*piVar1 + 0x20))(piVar1,0);
  piVar1 = *(int **)(this + 0xf4);
  (**(code **)(*piVar1 + 0x20))(piVar1,0);
  if (*(int *)(this + 0x20) != -1) {
    if (*(int *)(this + (*(int *)(this + 0x20) + 0xbe) * 4) == -1) {
      piVar1 = *(int **)(this + 0xec);
    }
    else {
      piVar1 = *(int **)(this + 0xf4);
    }
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
  }
  L_PrintLog((char *)(DAT_0019a4d0 + 0x19a4c2),(char *)(DAT_0019a4d4 + 0x19a4c4));
  return;
}


