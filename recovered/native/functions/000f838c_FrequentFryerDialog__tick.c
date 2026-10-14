/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f838c FrequentFryerDialog::tick */

/* FrequentFryerDialog::tick(long) */

void __thiscall FrequentFryerDialog::tick(FrequentFryerDialog *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ZombieCafe *this_00;
  undefined4 uVar9;
  code *pcVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  
  if (this[0x14] == (FrequentFryerDialog)0x0) {
    return;
  }
  ScreenElement::tick((long)this);
  this_00 = *(ZombieCafe **)(this + 0x60);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  iVar4 = DAT_000f863c;
  if (iVar1 == 0) {
    if ((((this_00[DAT_000f8640] == (ZombieCafe)0x0) &&
         (iVar4 = *(int *)(this_00 + 0x4b8), iVar4 != 0)) &&
        (iVar4 = ScreenElement::contains((ScreenElement *)this,iVar4 >> 0x10,(int)(short)iVar4),
        iVar4 != 0)) &&
       (iVar4 = *(int *)(this + 0x60),
       (int)**(short **)(DAT_000f8658 + 0xf8628) < *(int *)(iVar4 + DAT_000f865c))) {
      uVar2 = __floatsisf((*(int *)(iVar4 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar4 + DAT_000f863c) >> 0x10));
      iVar1 = DAT_000f8640;
      *(undefined4 *)(this + 0x188) = uVar2;
      *(undefined1 *)(iVar4 + iVar1) = 1;
    }
  }
  else {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x184),*(int *)(this_00 + DAT_000f863c) >> 0x10,
                       (int)(short)*(int *)(this_00 + DAT_000f863c),extraout_s0,extraout_s1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(this + 0x60) + iVar4);
      uVar2 = 0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x17c),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0_00,extraout_s1_00);
      if (iVar1 == 0) {
        iVar4 = *(int *)(*(int *)(this + 0x60) + iVar4);
        uVar2 = 0x3f800000;
        iVar4 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x180),iVar4 >> 0x10,(int)(short)iVar4,
                           extraout_s0_01,extraout_s1_01);
        if (iVar4 == 0) goto LAB_000f84ec;
        piVar7 = *(int **)(this + 0x158);
        uVar6 = *(ushort *)(piVar7 + 2);
        uVar3 = ((uint)*(ushort *)(piVar7 + 1) - (*(int *)(*(int *)(this + 0x154) + 0xc) * 7 >> 3))
                * 0x10000 | (uint)uVar6;
        pcVar10 = *(code **)(*piVar7 + 0x14);
      }
      else {
        piVar7 = *(int **)(this + 0x158);
        uVar6 = *(ushort *)(piVar7 + 2);
        uVar3 = ((*(int *)(*(int *)(this + 0x154) + 0xc) * 7 >> 3) + (uint)*(ushort *)(piVar7 + 1))
                * 0x10000 | (uint)uVar6;
        pcVar10 = *(code **)(*piVar7 + 0x14);
      }
      (*pcVar10)(piVar7,(int)uVar3 >> 0x10,(int)(short)uVar6,pcVar10,uVar2);
      iVar1 = *(int *)(this + 0x60);
      iVar4 = DAT_000f8640;
    }
    else {
      ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_00);
      (**(code **)(*(int *)this + 0x20))(this,0);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_000f8640) = 1;
      iVar4 = DAT_000f8644;
      *(int *)(*(int *)(this + 0x60) + DAT_000f8644) =
           *(int *)(*(int *)(this + 0x60) + DAT_000f8644) + 1;
      if (*(int *)(*(int *)(this + 0x60) + iVar4) < 2) goto LAB_000f84ec;
      *(undefined4 *)(*(int *)(this + 0x60) + iVar4) = 0;
      iVar4 = *(int *)(this + 0x60);
      iVar1 = DAT_000f8648;
    }
    *(undefined1 *)(iVar1 + iVar4) = 1;
  }
LAB_000f84ec:
  piVar7 = *(int **)(this + 0x158);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  uVar2 = __floatsisf(piVar7[1]);
  __addsf3(uVar2,*(undefined4 *)(this + 0x188));
  uVar3 = __fixsfsi();
  iVar4 = DAT_000f864c;
  uVar5 = *(int *)(*(int *)(this + 0x154) + 0xc) - piVar7[3];
  if ((int)uVar5 <= (int)uVar3) {
    uVar5 = (int)(uVar3 - 1 | uVar3) >> 0x1f & uVar3;
  }
  (*pcVar10)(piVar7,uVar5,0);
  puVar8 = *(undefined4 **)(iVar4 + 0xf852a);
  uVar9 = *(undefined4 *)(this + 0x188);
  uVar2 = __floatsisf(param_1);
  uVar2 = __mulsf3(uVar2,*puVar8);
  iVar4 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar4 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar4 = __mulsf3(uVar9,uVar2);
  *(int *)(this + 0x188) = iVar4;
  iVar1 = __aeabi_fcmpge(iVar4,0);
  if (iVar1 == 0) {
    iVar4 = iVar4 + -0x80000000;
  }
  iVar4 = __aeabi_fcmplt(iVar4,**(undefined4 **)(DAT_000f8650 + 0xf8580));
  if (iVar4 != 0) {
    *(undefined4 *)(this + 0x188) = 0;
  }
  (**(code **)(**(int **)(this + 0x17c) + 0x20))
            (*(int **)(this + 0x17c),*(uint *)(*(int *)(this + 0x158) + 4) >> 0x1f);
  (**(code **)(**(int **)(this + 0x180) + 0x20))
            (*(int **)(this + 0x180),
             *(int *)(*(int *)(this + 0x154) + 0xc) - *(int *)(*(int *)(this + 0x158) + 0xc) <
             *(int *)(*(int *)(this + 0x158) + 4));
  piVar7 = *(int **)(this + 0x17c);
  iVar4 = *(int *)(*(int *)(this + 0x60) + DAT_000f8654) * piVar7[3];
  uVar3 = iVar4 >> 0x1f;
  uVar3 = (iVar4 >> 0x12) + uVar3 ^ uVar3;
  (**(code **)(*piVar7 + 0x14))
            (piVar7,uVar3,
             (*(int *)(*(int *)(this + 0x154) + 0x10) >> 1) + *(int *)(*(int *)(this + 0x154) + 8));
  (**(code **)(**(int **)(this + 0x180) + 0x14))
            (*(int **)(this + 0x180),*(int *)(this + 0xc) - uVar3,
             (*(int *)(*(int *)(this + 0x154) + 0x10) >> 1) + *(int *)(*(int *)(this + 0x154) + 8));
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_000f8640) = 1;
  return;
}


