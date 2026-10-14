/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb7fa CharacterCommandBar::setInfoButtonNewIndicator */

/* CharacterCommandBar::setInfoButtonNewIndicator(bool) */

void CharacterCommandBar::setInfoButtonNewIndicator(bool param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x1c);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x20))();
  }
  return;
}


