/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e99b0 LotteryFeaturedDialog::tick */

/* LotteryFeaturedDialog::tick(long) */

void __thiscall LotteryFeaturedDialog::tick(LotteryFeaturedDialog *this,long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ZombieCafe *this_00;
  Character *this_01;
  undefined4 *puVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  
  if (this[0x14] != (LotteryFeaturedDialog)0x0) {
    ScreenElement::tick((long)this);
    piVar2 = *(int **)(this + 0xa0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
    }
    iVar1 = DAT_001e9b4c;
    this_00 = *(ZombieCafe **)(this + 0x68);
    iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar3 == 0) {
      if ((this_00[iVar1] == (ZombieCafe)0x0) && (*(int *)(this_00 + 0x4b8) != 0)) {
        if ((int)**(short **)(DAT_001e9b54 + 0x1e9a62) < *(int *)(this_00 + DAT_001e9b58)) {
          *(int *)(this + 0xac) =
               (int)(short)*(int *)(this_00 + 0x4b8) - (int)*(short *)(this_00 + DAT_001e9b50);
          this_00[iVar1] = (ZombieCafe)0x1;
        }
        else {
          *(undefined4 *)(this + 0xac) = 0;
        }
      }
    }
    else {
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x80),*(int *)(this_00 + DAT_001e9b50) >> 0x10,
                         (int)(short)*(int *)(this_00 + DAT_001e9b50),extraout_s0,extraout_s1);
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_00);
        this_01 = *(Character **)(this + 0x9c);
        if (this_01 != (Character *)0x0) {
          Character::~Character(this_01);
          operator_delete(this_01);
          *(undefined4 *)(this + 0x9c) = 0;
        }
        piVar2 = *(int **)(this + 0xa0);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
          *(undefined4 *)(this + 0xa0) = 0;
        }
        this[0x14] = (LotteryFeaturedDialog)0x0;
        *(undefined1 *)(*(int *)(this + 0x68) + iVar1) = 1;
        (**(code **)(**(int **)(this + 0x6c) + 0x58))();
        return;
      }
    }
    piVar2 = *(int **)(this + 0xa8);
    if (piVar2 != (int *)0x0) {
      uVar7 = piVar2[2] + *(int *)(this + 0xac);
      uVar8 = *(int *)(*(int *)(this + 0xa4) + 0x10) - piVar2[4];
      uVar8 = uVar8 & (int)(uVar8 - 1 | uVar8) >> 0x1f;
      if ((int)uVar8 <= (int)uVar7) {
        uVar8 = (int)(uVar7 - 1 | uVar7) >> 0x1f & uVar7;
      }
      (**(code **)(*piVar2 + 0x14))(piVar2,0,uVar8);
      uVar4 = __floatsisf(*(undefined4 *)(this + 0xac));
      puVar9 = *(undefined4 **)(DAT_001e9b5c + 0x1e9ad8);
      uVar5 = __floatsisf(param_1);
      uVar5 = __mulsf3(uVar5,*puVar9);
      iVar3 = __aeabi_fcmplt(uVar5,0x3f800000);
      if (iVar3 == 0) {
        uVar5 = 0x3f800000;
      }
      uVar5 = __subsf3(0x3f800000,uVar5);
      __mulsf3(uVar4,uVar5);
      uVar4 = __fixsfsi();
      *(undefined4 *)(this + 0xac) = uVar4;
      iVar3 = __floatsisf();
      iVar6 = __aeabi_fcmpge(iVar3,0);
      if (iVar6 == 0) {
        iVar3 = iVar3 + -0x80000000;
      }
      iVar3 = __aeabi_fcmplt(iVar3,**(undefined4 **)(DAT_001e9b60 + 0x1e9b2e));
      if (iVar3 != 0) {
        *(undefined4 *)(this + 0xac) = 0;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x68) + iVar1) = 1;
  }
  return;
}


