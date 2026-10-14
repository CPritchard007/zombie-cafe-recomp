/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153164 GameStateGatya::SetEffectKeyAnimation_Birth_Erase */

/* GameStateGatya::SetEffectKeyAnimation_Birth_Erase() */

void __thiscall GameStateGatya::SetEffectKeyAnimation_Birth_Erase(GameStateGatya *this)

{
  GatyaEftImageElement *pGVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s2_00;
  
  if (*(GatyaEftImageElement **)(this + 0x1ac) != (GatyaEftImageElement *)0x0) {
    fVar3 = (float)GatyaEftImageElement::ClearKey(*(GatyaEftImageElement **)(this + 0x1ac));
    fVar3 = (float)GatyaEftImageElement::SetKeyColor
                             (*(GatyaEftImageElement **)(this + 0x1ac),fVar3,0);
    GatyaEftImageElement::SetKeyColor(*(GatyaEftImageElement **)(this + 0x1ac),fVar3,DAT_0015321c);
  }
  iVar2 = 0;
  if (*(int *)(this + 0x1e4) != 0) {
    for (; iVar2 < *(int *)(*(int *)(this + 0x1e4) + 4) + 1; iVar2 = iVar2 + 1) {
      pGVar1 = *(GatyaEftImageElement **)(iVar2 * 4 + *(int *)(*(int *)(this + 0x1e4) + 8));
      fVar3 = (float)GatyaEftImageElement::ClearKey(pGVar1);
      fVar3 = (float)GatyaEftImageElement::SetKeyColor(pGVar1,fVar3,0);
      GatyaEftImageElement::SetKeyColor(pGVar1,fVar3,DAT_00153224);
      pGVar1[0xa8] = (GatyaEftImageElement)0x0;
    }
  }
  iVar2 = 0;
  if (*(int *)(this + 0x1e0) != 0) {
    for (; iVar2 < *(int *)(*(int *)(this + 0x1e0) + 4) + 1; iVar2 = iVar2 + 1) {
      pGVar1 = *(GatyaEftImageElement **)(iVar2 * 4 + *(int *)(*(int *)(this + 0x1e0) + 8));
      uVar4 = GatyaEftImageElement::ClearKey(pGVar1);
      uVar4 = GatyaEftImageElement::SetKeyScl
                        (pGVar1,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2);
      GatyaEftImageElement::SetKeyScl
                (pGVar1,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2_00);
      pGVar1[0xa8] = (GatyaEftImageElement)0x0;
    }
  }
  return;
}


