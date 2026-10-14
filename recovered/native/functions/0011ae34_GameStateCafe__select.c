/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ae34 GameStateCafe::select */

/* GameStateCafe::select(Stove*) */

void __thiscall GameStateCafe::select(GameStateCafe *this,Stove *param_1)

{
  *(Stove **)(this + 0x4c) = param_1;
  *(undefined4 *)(this + 0x54) = 0;
  Cafe::select(*(Cafe **)(this + 0x14),(CafeObject *)param_1);
  return;
}


