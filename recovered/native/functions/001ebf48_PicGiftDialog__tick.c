/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ebf48 PicGiftDialog::tick */

/* PicGiftDialog::tick(long) */

void __thiscall PicGiftDialog::tick(PicGiftDialog *this,long param_1)

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
  
  if (this[0x14] != (PicGiftDialog)0x0) {
    ScreenElement::tick((long)this);
    piVar2 = *(int **)(this + 0xbc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
    }
    iVar1 = DAT_001ec0e4;
    this_00 = *(ZombieCafe **)(this + 0x60);
    iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar3 == 0) {
      if ((this_00[iVar1] == (ZombieCafe)0x0) && (*(int *)(this_00 + 0x4b8) != 0)) {
        if ((int)**(short **)(DAT_001ec0ec + 0x1ebffc) < *(int *)(this_00 + DAT_001ec0f0)) {
          *(int *)(this + 0xcc) =
               (int)(short)*(int *)(this_00 + 0x4b8) - (int)*(short *)(this_00 + DAT_001ec0e8);
          this_00[iVar1] = (ZombieCafe)0x1;
        }
        else {
          *(undefined4 *)(this + 0xcc) = 0;
        }
      }
    }
    else {
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x84),*(int *)(this_00 + DAT_001ec0e8) >> 0x10,
                         (int)(short)*(int *)(this_00 + DAT_001ec0e8),extraout_s0,extraout_s1);
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_00);
        this_01 = *(Character **)(this + 0xb8);
        if (this_01 != (Character *)0x0) {
          Character::~Character(this_01);
          operator_delete(this_01);
          *(undefined4 *)(this + 0xb8) = 0;
        }
        piVar2 = *(int **)(this + 0xbc);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
          *(undefined4 *)(this + 0xbc) = 0;
        }
        this[0x14] = (PicGiftDialog)0x0;
        *(undefined1 *)(*(int *)(this + 0x60) + iVar1) = 1;
        (**(code **)(**(int **)(this + 100) + 0x68))();
        return;
      }
    }
    piVar2 = *(int **)(this + 200);
    if (piVar2 != (int *)0x0) {
      uVar7 = piVar2[2] + *(int *)(this + 0xcc);
      uVar8 = *(int *)(*(int *)(this + 0xc4) + 0x10) - piVar2[4];
      uVar8 = uVar8 & (int)(uVar8 - 1 | uVar8) >> 0x1f;
      if ((int)uVar8 <= (int)uVar7) {
        uVar8 = (int)(uVar7 - 1 | uVar7) >> 0x1f & uVar7;
      }
      (**(code **)(*piVar2 + 0x14))(piVar2,0,uVar8);
      uVar4 = __floatsisf(*(undefined4 *)(this + 0xcc));
      puVar9 = *(undefined4 **)(DAT_001ec0f4 + 0x1ec072);
      uVar5 = __floatsisf(param_1);
      uVar5 = __mulsf3(uVar5,*puVar9);
      iVar3 = __aeabi_fcmplt(uVar5,0x3f800000);
      if (iVar3 == 0) {
        uVar5 = 0x3f800000;
      }
      uVar5 = __subsf3(0x3f800000,uVar5);
      __mulsf3(uVar4,uVar5);
      uVar4 = __fixsfsi();
      *(undefined4 *)(this + 0xcc) = uVar4;
      iVar3 = __floatsisf();
      iVar6 = __aeabi_fcmpge(iVar3,0);
      if (iVar6 == 0) {
        iVar3 = iVar3 + -0x80000000;
      }
      iVar3 = __aeabi_fcmplt(iVar3,**(undefined4 **)(DAT_001ec0f8 + 0x1ec0c8));
      if (iVar3 != 0) {
        *(undefined4 *)(this + 0xcc) = 0;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x60) + iVar1) = 1;
  }
  return;
}


