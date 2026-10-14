/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef144 PrizeMenuDialog::tick */

/* PrizeMenuDialog::tick(long) */

void __thiscall PrizeMenuDialog::tick(PrizeMenuDialog *this,long param_1)

{
  PrizeMenuDialog PVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  ScreenElement *this_00;
  undefined4 *puVar8;
  undefined4 uVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  
  if (this[0x14] == (PrizeMenuDialog)0x0) {
    return;
  }
  this_00 = (ScreenElement *)
            (*(uint *)(this + 0x7c) & -(uint)(*(char *)(*(uint *)(this + 0x7c) + 0x14) != '\0'));
  ScreenElement::tick((long)this);
  iVar5 = *(int *)(this + 0x60);
  if (*(char *)(iVar5 + DAT_001ef3d0) == '\0') {
    if ((*(int *)(iVar5 + DAT_001ef3d4) == 0) || (*(int *)(iVar5 + 0x4b8) != 0)) {
      iVar3 = *(int *)(iVar5 + 0x4b8);
      if ((iVar3 == 0) || (*(int *)(iVar5 + DAT_001ef3d4) != 0)) goto LAB_001ef3bc;
      PVar1 = (PrizeMenuDialog)ScreenElement::contains(this_00,iVar3 >> 0x10,(int)(short)iVar3);
      this[0x9c] = PVar1;
    }
    else {
      this[0x9c] = (PrizeMenuDialog)0x0;
    }
  }
  else {
LAB_001ef3bc:
    if ((((this[0x9c] != (PrizeMenuDialog)0x0) && (*(char *)(iVar5 + DAT_001ef3d0) == '\0')) &&
        (*(int *)(iVar5 + 0x4b8) != 0)) &&
       ((int)**(short **)(DAT_001ef3d8 + 0x1ef1c0) < *(int *)(iVar5 + DAT_001ef3dc))) {
      uVar2 = __floatsisf((int)(short)*(int *)(iVar5 + 0x4b8) -
                          (int)*(short *)(iVar5 + DAT_001ef3d4));
      *(undefined4 *)(this + 0xa0) = uVar2;
    }
  }
  iVar3 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(this + 0x60));
  iVar5 = DAT_001ef3d4;
  if (iVar3 != 0) {
    printf((char *)(DAT_001ef3e0 + 0x1ef1f6));
    iVar3 = *(int *)(*(int *)(this + 0x60) + iVar5);
    uVar2 = 0x3f800000;
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x70),iVar3 >> 0x10,(int)(short)iVar3,extraout_s0,
                       extraout_s1);
    if (iVar3 == 0) {
      iVar5 = *(int *)(*(int *)(this + 0x60) + iVar5);
      uVar2 = 0x3f800000;
      iVar5 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x74),iVar5 >> 0x10,(int)(short)iVar5,
                         extraout_s0_00,extraout_s1_00);
      if (iVar5 == 0) {
        for (; iVar5 < *(int *)(*(int *)(this + 0x94) + 4) + 1; iVar5 = iVar5 + 1) {
          piVar4 = *(int **)(iVar5 * 4 + *(int *)(*(int *)(this + 0x94) + 8));
          pcVar7 = *(code **)(*piVar4 + 8);
          (*pcVar7)(piVar4,param_1,iVar5 * 4,pcVar7,uVar2);
        }
        goto LAB_001ef290;
      }
      iVar5 = CONCAT22(*(undefined2 *)(this_00 + 4),*(undefined2 *)(this_00 + 8));
      uVar6 = iVar5 - (*(int *)(*(int *)(this + 0x78) + 0x10) * 7 >> 3);
    }
    else {
      iVar5 = CONCAT22(*(undefined2 *)(this_00 + 4),*(undefined2 *)(this_00 + 8));
      uVar6 = (*(int *)(*(int *)(this + 0x78) + 0x10) * 7 >> 3) + iVar5;
    }
    (**(code **)(*(int *)this_00 + 0x14))
              (this_00,(int)(uVar6 & 0xffff | (iVar5 >> 0x10) << 0x10) >> 0x10,(int)(short)uVar6,
               *(code **)(*(int *)this_00 + 0x14),uVar2);
  }
LAB_001ef290:
  uVar9 = *(undefined4 *)(this_00 + 4);
  iVar5 = *(int *)this_00;
  uVar2 = __floatsisf(*(undefined4 *)(this_00 + 8));
  __addsf3(uVar2,*(undefined4 *)(this + 0xa0));
  uVar2 = __fixsfsi();
  puVar8 = (undefined4 *)(DAT_001ef3e4 + 0x1ef2b8);
  (**(code **)(iVar5 + 0x14))(this_00,uVar9,uVar2);
  puVar8 = (undefined4 *)*puVar8;
  uVar2 = __floatsisf(param_1);
  uVar2 = __mulsf3(uVar2,*puVar8);
  uVar9 = *(undefined4 *)(this + 0xa0);
  iVar5 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar5 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar5 = __mulsf3(uVar9,uVar2);
  *(int *)(this + 0xa0) = iVar5;
  iVar3 = __aeabi_fcmpge(iVar5,0);
  if (iVar3 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  iVar5 = __aeabi_fcmplt(iVar5,**(undefined4 **)(DAT_001ef3e8 + 0x1ef30c));
  if (iVar5 != 0) {
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int *)(this_00 + 8) < 0) {
    uVar6 = *(int *)(*(int *)(this + 0x78) + 0x10) - *(int *)(this_00 + 0x10);
    if (((int)uVar6 < 1) && ((int)uVar6 <= *(int *)(this_00 + 8))) goto LAB_001ef35a;
    uVar2 = *(undefined4 *)(this_00 + 4);
    uVar6 = (int)(uVar6 - 1 | uVar6) >> 0x1f & uVar6;
    pcVar7 = *(code **)(*(int *)this_00 + 0x14);
  }
  else {
    uVar2 = *(undefined4 *)(this_00 + 4);
    pcVar7 = *(code **)(*(int *)this_00 + 0x14);
    uVar6 = 0;
  }
  (*pcVar7)(this_00,uVar2,uVar6);
  *(undefined4 *)(this + 0xa0) = 0;
LAB_001ef35a:
  (**(code **)(**(int **)(this + 0x70) + 0x20))
            (*(int **)(this + 0x70),*(uint *)(this_00 + 8) >> 0x1f);
  (**(code **)(**(int **)(this + 0x74) + 0x20))
            (*(int **)(this + 0x74),
             *(int *)(*(int *)(this + 0x78) + 0x10) - *(int *)(this_00 + 0x10) <
             *(int *)(this_00 + 8));
  piVar4 = *(int **)(this + 0x70);
  iVar5 = *(int *)(*(int *)(this + 0x60) + DAT_001ef3ec) * piVar4[4];
  uVar6 = iVar5 >> 0x1f;
  uVar6 = (iVar5 >> 0x12) + uVar6 ^ uVar6;
  (**(code **)(*piVar4 + 0x14))
            (piVar4,*(undefined4 *)(*(int *)(this + 0x78) + 4),
             uVar6 + *(int *)(*(int *)(this + 0x78) + 8));
  iVar5 = *(int *)(this + 0x78);
  (**(code **)(**(int **)(this + 0x74) + 0x14))
            (*(int **)(this + 0x74),*(undefined4 *)(iVar5 + 4),
             (*(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x10)) - uVar6);
  return;
}


