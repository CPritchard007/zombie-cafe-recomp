/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c83c4 Character::getSameZombiePowerupIconIdx_Static */

/* Character::getSameZombiePowerupIconIdx_Static(int) */

int Character::getSameZombiePowerupIconIdx_Static(int param_1)

{
  int iVar1;
  
  if (param_1 - 1U < 4) {
    iVar1 = (int)*(short *)((param_1 - 1U) * 2 + DAT_000c83dc + 0xc844e);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


