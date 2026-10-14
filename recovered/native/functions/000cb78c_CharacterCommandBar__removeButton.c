/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb78c CharacterCommandBar::removeButton */

/* CharacterCommandBar::removeButton(int) */

void CharacterCommandBar::removeButton(int param_1)

{
  int in_r1;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(in_r1 * 4 + *(int *)(param_1 + 0x7c));
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,0);
    puVar1[4] = 0;
    puVar1[5] = 0;
    layoutButtons((CharacterCommandBar *)param_1);
  }
  return;
}


