/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157aec FUN_00157aec */

void FUN_00157aec(void)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *this;
  GameStateGatya *unaff_r5;
  float fVar3;
  int in_stack_00000018;
  long in_stack_00000020;
  
  this = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(this);
  if ((iVar1 != 0) &&
     (*(int *)(this + DAT_00157c08) <= (int)**(short **)(in_stack_00000018 + DAT_00157c04))) {
    unaff_r5[DAT_00157c0c] = (GameStateGatya)0x1;
  }
  uVar2 = __floatsisf(in_stack_00000020);
  fVar3 = (float)__divsf3(uVar2,DAT_00157c10);
  fVar3 = (float)GameStateGatya::PlayEffectKeyAnimation_Back(unaff_r5,in_stack_00000020,fVar3);
  if (unaff_r5[DAT_00157c0c] != (GameStateGatya)0x0) {
    *(undefined4 *)(**(int **)(*(int *)(unaff_r5 + 0x1d8) + 8) + 0xe8) = 1;
  }
  GameStateGatya::PlayEffectKeyAnimation_Birth(unaff_r5,fVar3);
  if (*(int *)(**(int **)(*(int *)(unaff_r5 + 0x1d8) + 8) + 0xe4) != 1) {
    FUN_00157ee8();
    return;
  }
  *(undefined4 *)(unaff_r5 + DAT_00157c00) = 0x13000;
  FUN_00157ee8();
  return;
}


