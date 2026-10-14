/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cbf44 CharacterCommandBar::changeAttackButton */

/* CharacterCommandBar::changeAttackButton() */

void __thiscall CharacterCommandBar::changeAttackButton(CharacterCommandBar *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(int **)(*(int *)(this + 0x7c) + 0x2c) + 0x86);
  *pbVar1 = *pbVar1 ^ 1;
  return;
}


