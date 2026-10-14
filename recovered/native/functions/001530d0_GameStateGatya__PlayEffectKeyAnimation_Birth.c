/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001530d0 GameStateGatya::PlayEffectKeyAnimation_Birth */

/* GameStateGatya::PlayEffectKeyAnimation_Birth(float) */

undefined8 __thiscall
GameStateGatya::PlayEffectKeyAnimation_Birth(GameStateGatya *this,float param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float extraout_s0;
  
  uVar3 = 1;
  if (*(int *)(this + 0x1e0) != 0) {
    uVar3 = 1;
    for (iVar2 = 0; iVar2 < *(int *)(*(int *)(this + 0x1e0) + 4) + 1; iVar2 = iVar2 + 1) {
      iVar1 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)
                          (iVar2 * 4 + *(int *)(*(int *)(this + 0x1e0) + 8)),param_1);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      param_1 = extraout_s0;
    }
  }
  return CONCAT44(this,uVar3);
}


