/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d638c CharacterEvolution::tick */

/* CharacterEvolution::tick(long) */

void __thiscall CharacterEvolution::tick(CharacterEvolution *this,long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ZombieCafe *this_00;
  undefined4 *puVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  
  iVar1 = DAT_000d64f8;
  if ((this[0x14] != (CharacterEvolution)0x0) && (*(int *)(this + 0x74) != 0)) {
    this_00 = *(ZombieCafe **)(this + 0x70);
    iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar2 == 0) {
      if ((this_00[iVar1] == (ZombieCafe)0x0) && (*(int *)(this_00 + 0x4b8) != 0)) {
        if ((int)**(short **)(DAT_000d6500 + 0xd6406) < *(int *)(this_00 + DAT_000d6504)) {
          *(int *)(this + 0xec) =
               (int)(short)*(int *)(this_00 + 0x4b8) - (int)*(short *)(this_00 + DAT_000d64fc);
          this_00[iVar1] = (ZombieCafe)0x1;
        }
        else {
          *(undefined4 *)(this + 0xec) = 0;
        }
      }
    }
    else {
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xc4),*(int *)(this_00 + DAT_000d64fc) >> 0x10,
                         (int)(short)*(int *)(this_00 + DAT_000d64fc),extraout_s0,extraout_s1);
      if (iVar2 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_00);
        (**(code **)(*(int *)this + 0x20))(this,0);
        *(undefined4 *)(this + 0x74) = 0;
        *(undefined1 *)(*(int *)(this + 0x70) + iVar1) = 1;
        return;
      }
    }
    piVar3 = *(int **)(this + 0xe4);
    uVar7 = piVar3[2] + *(int *)(this + 0xec);
    uVar8 = *(int *)(*(int *)(this + 0xe0) + 0x10) - piVar3[4];
    uVar8 = uVar8 & (int)(uVar8 - 1 | uVar8) >> 0x1f;
    if ((int)uVar8 <= (int)uVar7) {
      uVar8 = (int)(uVar7 - 1 | uVar7) >> 0x1f & uVar7;
    }
    (**(code **)(*piVar3 + 0x14))(piVar3,0,uVar8);
    uVar4 = __floatsisf(*(undefined4 *)(this + 0xec));
    puVar9 = *(undefined4 **)(DAT_000d6508 + 0xd6478);
    uVar5 = __floatsisf(param_1);
    uVar5 = __mulsf3(uVar5,*puVar9);
    iVar2 = __aeabi_fcmplt(uVar5,0x3f800000);
    if (iVar2 == 0) {
      uVar5 = 0x3f800000;
    }
    uVar5 = __subsf3(0x3f800000,uVar5);
    __mulsf3(uVar4,uVar5);
    uVar4 = __fixsfsi();
    *(undefined4 *)(this + 0xec) = uVar4;
    iVar2 = __floatsisf();
    iVar6 = __aeabi_fcmpge(iVar2,0);
    if (iVar6 == 0) {
      iVar2 = iVar2 + -0x80000000;
    }
    iVar2 = __aeabi_fcmplt(iVar2,**(undefined4 **)(DAT_000d650c + 0xd64ce));
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0xec) = 0;
    }
    *(undefined1 *)(*(int *)(this + 0x70) + iVar1) = 1;
    (**(code **)(**(int **)(this + 0xe8) + 8))(*(int **)(this + 0xe8),param_1);
  }
  return;
}


