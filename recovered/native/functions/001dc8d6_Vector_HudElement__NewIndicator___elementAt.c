/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dc8d6 Vector<HudElement::NewIndicator>::elementAt */

/* Vector<HudElement::NewIndicator>::elementAt(int) const */

void Vector<HudElement::NewIndicator>::elementAt(int param_1)

{
  int in_r1;
  int in_r2;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(int *)(in_r1 + 8) + in_r2 * 0xc);
  *(undefined4 *)param_1 = *puVar1;
  uVar2 = puVar1[2];
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}


