/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dde7c FUN_001dde7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dde7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ZCImageButton *this;
  int iVar1;
  int unaff_r4;
  HudElement *unaff_r5;
  int unaff_r6;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s1;
  undefined8 uVar2;
  int in_stack_00000010;
  int in_stack_0000017c;
  
  FUN_001dd4b6(*(int **)(unaff_r5 + 0x110),0,param_3,
               *(undefined4 *)(**(int **)(unaff_r5 + 0x110) + 0x20));
  uVar2 = FUN_001dd50a(*(undefined4 *)(unaff_r5 + 0x114),0);
  do {
    do {
      unaff_r6 = unaff_r6 + 1;
      if (*(int *)(unaff_r5 + 0x70) + 1 <= unaff_r6) goto LAB_001ddea0;
      this = *(ZCImageButton **)(unaff_r6 * 4 + *(int *)(unaff_r5 + 0x74));
    } while (this[0x14] == (ZCImageButton)0x0);
    iVar1 = ZCImageButton::contains
                      (this,*(long *)(*(int *)(unaff_r5 + 0x60) + unaff_r4),(float)uVar2,
                       (float)((ulonglong)uVar2 >> 0x20));
    uVar2 = CONCAT44(extraout_s1,extraout_s0);
  } while (iVar1 == 0);
  iVar1 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),unaff_r6);
  if (iVar1 != 0) {
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_00);
    *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    HudElement::setButtonNewIndicator(unaff_r5,unaff_r6,false);
  }
LAB_001ddea0:
  if (in_stack_0000017c == **(int **)(in_stack_00000010 + _DAT_001ddeb8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


