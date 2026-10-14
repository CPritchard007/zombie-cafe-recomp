/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a2a8 GameStateEarlyBird::releaseCharacter */

/* GameStateEarlyBird::releaseCharacter(int) */

void __thiscall GameStateEarlyBird::releaseCharacter(GameStateEarlyBird *this,int param_1)

{
  Character *this_00;
  
  if (*(int *)(this + (param_1 + 0x40) * 4 + 4) != 0) {
    this_00 = *(Character **)(*(int *)(this + (param_1 + 0x40) * 4 + 4) + 0x8c);
    if (this_00 != (Character *)0x0) {
      Character::~Character(this_00);
      operator_delete(this_00);
    }
    if (*(int **)(this + (param_1 + 0x40) * 4 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(this + (param_1 + 0x40) * 4 + 4) + 4))();
    }
    *(undefined4 *)(this + (param_1 + 0x40) * 4 + 4) = 0;
  }
  return;
}


