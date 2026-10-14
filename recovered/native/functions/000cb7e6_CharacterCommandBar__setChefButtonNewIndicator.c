/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb7e6 CharacterCommandBar::setChefButtonNewIndicator */

/* CharacterCommandBar::setChefButtonNewIndicator(bool) */

void CharacterCommandBar::setChefButtonNewIndicator(bool param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x20);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x20))();
  }
  return;
}


