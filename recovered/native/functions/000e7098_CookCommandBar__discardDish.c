/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7098 CookCommandBar::discardDish */

/* CookCommandBar::discardDish(CookCommandBar*) */

void CookCommandBar::discardDish(CookCommandBar *param_1)

{
  *(int *)(*(int *)(param_1 + 0x74) + DAT_000e70c0) =
       *(int *)(*(int *)(param_1 + 0x74) + DAT_000e70c0) + 1;
  if (*(code **)(param_1 + 0xc4) != (code *)0x0) {
    (**(code **)(param_1 + 0xc4))(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x84));
  }
  return;
}


