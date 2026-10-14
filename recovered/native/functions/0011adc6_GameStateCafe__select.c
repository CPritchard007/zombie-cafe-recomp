/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011adc6 GameStateCafe::select */

/* GameStateCafe::select(CharacterInstance*) */

void __thiscall GameStateCafe::select(GameStateCafe *this,CharacterInstance *param_1)

{
  *(CharacterInstance **)(this + 0x54) = param_1;
  *(undefined4 *)(this + 0x4c) = 0;
  Cafe::select(*(Cafe **)(this + 0x14),(CafeObject *)param_1);
  return;
}


