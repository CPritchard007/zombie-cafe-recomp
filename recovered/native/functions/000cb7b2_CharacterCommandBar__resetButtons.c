/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb7b2 CharacterCommandBar::resetButtons */

/* CharacterCommandBar::resetButtons() */

void CharacterCommandBar::resetButtons(void)

{
  CharacterCommandBar *in_r0;
  undefined4 *puVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < *(int *)(in_r0 + 0x78) + 1; iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(iVar2 * 4 + *(int *)(in_r0 + 0x7c));
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,0);
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
  }
  layoutButtons(in_r0);
  return;
}


