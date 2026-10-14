/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157c14 FUN_00157c14 */

void FUN_00157c14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ZombieCafe *pZVar4;
  Vector<GatyaEftCharacterInstance*> *this;
  GameStateGatya *unaff_r5;
  undefined4 unaff_r6;
  float fVar5;
  float extraout_s0;
  int in_stack_00000018;
  long in_stack_00000020;
  
  iVar3 = DAT_00157f78;
  pZVar4 = *(ZombieCafe **)(param_1 + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(pZVar4);
  if ((iVar1 != 0) &&
     (*(int *)(pZVar4 + DAT_00157f80) <= (int)**(short **)(in_stack_00000018 + DAT_00157f7c))) {
    unaff_r5[iVar3] = (GameStateGatya)0x1;
  }
  uVar2 = __floatsisf(in_stack_00000020);
  fVar5 = (float)__divsf3(uVar2,DAT_00157f84);
  fVar5 = (float)GameStateGatya::PlayEffectKeyAnimation_Back(unaff_r5,in_stack_00000020,fVar5);
  GameStateGatya::PlayEffectKeyAnimation_Birth(unaff_r5,fVar5);
  pZVar4 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar3 = ZombieCafe::touchUpEvent(pZVar4);
  if (iVar3 == 0) {
    FUN_00157ee8();
    return;
  }
  if ((int)**(short **)(in_stack_00000018 + DAT_00157f7c) < *(int *)(pZVar4 + DAT_00157f80)) {
    FUN_00157ee8();
    return;
  }
  if (*(int *)(*(int *)(unaff_r5 + 0x1d8) + 4) == 0) {
    GameStateGatya::SetTickWait(unaff_r5,extraout_s0);
    *(undefined4 *)(unaff_r5 + DAT_00157f88) = unaff_r6;
    FUN_00157ee8();
    return;
  }
  GameStateGatya::SetEffectKeyAnimation_Birth_Erase(unaff_r5);
  *(undefined4 *)(**(int **)(*(int *)(unaff_r5 + 0x1d8) + 8) + 0xe0) = 2;
  fVar5 = (float)Vector<GatyaEftCharacterInstance*>::addElement
                           (*(Vector<GatyaEftCharacterInstance*> **)(unaff_r5 + 0x1dc),
                            (GatyaEftCharacterInstance *)
                            **(undefined4 **)(*(int *)(unaff_r5 + 0x1d8) + 8));
  this = *(Vector<GatyaEftCharacterInstance*> **)(unaff_r5 + 0x1d8);
  if (-1 < *(int *)(this + 4)) {
    **(undefined4 **)(this + 8) = 0;
    fVar5 = (float)Vector<GatyaEftCharacterInstance*>::move(this,1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
  }
  GameStateGatya::SetTickWait(unaff_r5,fVar5);
  *(undefined4 *)(unaff_r5 + DAT_00157c00) = 0x15000;
  FUN_00157ee8();
  return;
}


