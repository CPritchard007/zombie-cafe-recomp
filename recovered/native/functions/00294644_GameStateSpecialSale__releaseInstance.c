/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00294644 GameStateSpecialSale::releaseInstance */

/* GameStateSpecialSale::releaseInstance(int) */

void __thiscall GameStateSpecialSale::releaseInstance(GameStateSpecialSale *this,int param_1)

{
  Character *this_00;
  int *piVar1;
  
  piVar1 = *(int **)(this + (param_1 + 0x88) * 4);
  if (piVar1 != (int *)0x0) {
    if (this[param_1 + 0x3b0] == (GameStateSpecialSale)0x0) {
      this_00 = (Character *)piVar1[0x23];
      if (this_00 != (Character *)0x0) {
        Character::~Character(this_00);
        operator_delete(this_00);
      }
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(this + (param_1 + 0x88) * 4) = 0;
  }
  return;
}


