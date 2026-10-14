/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015310c GameStateGatya::PlayEffectKeyAnimation_Back */

/* GameStateGatya::PlayEffectKeyAnimation_Back(long, float) */

void __thiscall
GameStateGatya::PlayEffectKeyAnimation_Back(GameStateGatya *this,long param_1,float param_2)

{
  int iVar1;
  
  if (*(GatyaEftImageElement **)(this + 0x1ac) != (GatyaEftImageElement *)0x0) {
    param_2 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                               (*(GatyaEftImageElement **)(this + 0x1ac),param_2);
  }
  iVar1 = 0;
  if (*(int *)(this + 0x1e4) != 0) {
    for (; iVar1 < *(int *)(*(int *)(this + 0x1e4) + 4) + 1; iVar1 = iVar1 + 1) {
      GatyaEftImageElement::PlayEffectKeyAnimation
                (*(GatyaEftImageElement **)(*(int *)(*(int *)(this + 0x1e4) + 8) + iVar1 * 4),
                 param_2);
      param_2 = (float)GatyaEftImageElement::TickAngle
                                 (*(GatyaEftImageElement **)
                                   (*(int *)(*(int *)(this + 0x1e4) + 8) + iVar1 * 4),param_1);
    }
  }
  return;
}


