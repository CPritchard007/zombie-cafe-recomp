/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202728 PendingOrderDialog::tick */

/* PendingOrderDialog::tick(long) */

void __thiscall PendingOrderDialog::tick(PendingOrderDialog *this,long param_1)

{
  PendingOrderDialog PVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  ZCImageButton *pZVar7;
  ScreenElement *pSVar8;
  ZombieCafe *this_00;
  uint uVar9;
  ScreenElement *pSVar10;
  int iVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 *puVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  
  iVar5 = DAT_00202af0;
  if (this[0x14] == (PendingOrderDialog)0x0) {
    return;
  }
  pSVar8 = *(ScreenElement **)(this + 0xb0);
  if ((*(ScreenElement **)(this + 0xb0))[0x14] == (ScreenElement)0x0) {
    pSVar8 = (ScreenElement *)
             (*(uint *)(this + 0x9c) & -(uint)(*(char *)(*(uint *)(this + 0x9c) + 0x14) != '\0'));
  }
  pSVar10 = *(ScreenElement **)(this + 0xb4);
  if ((*(ScreenElement **)(this + 0xb4))[0x14] == (ScreenElement)0x0) {
    pSVar10 = pSVar8;
  }
  pSVar8 = *(ScreenElement **)(this + 0xb8);
  if ((*(ScreenElement **)(this + 0xb8))[0x14] == (ScreenElement)0x0) {
    pSVar8 = pSVar10;
  }
  if (*(int *)(this + 0xdc) == 1) {
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_00202af0) = 1;
  }
  ScreenElement::tick((long)this);
  iVar11 = *(int *)(this + 0x60);
  if (*(char *)(iVar11 + iVar5) == '\0') {
    if ((*(int *)(iVar11 + DAT_00202af4) == 0) || (*(int *)(iVar11 + 0x4b8) != 0)) {
      iVar3 = *(int *)(iVar11 + 0x4b8);
      if ((iVar3 == 0) || (*(int *)(iVar11 + DAT_00202af4) != 0)) goto LAB_00202bc0;
      PVar1 = (PendingOrderDialog)ScreenElement::contains(pSVar8,iVar3 >> 0x10,(int)(short)iVar3);
      this[0xd0] = PVar1;
    }
    else {
      this[0xd0] = (PendingOrderDialog)0x0;
    }
  }
  else {
LAB_00202bc0:
    if ((((this[0xd0] != (PendingOrderDialog)0x0) && (*(char *)(iVar11 + iVar5) == '\0')) &&
        (*(int *)(iVar11 + 0x4b8) != 0)) &&
       ((int)**(short **)(DAT_00202af8 + 0x2027e4) < *(int *)(iVar11 + DAT_00202afc))) {
      uVar2 = __floatsisf((int)(short)*(int *)(iVar11 + 0x4b8) -
                          (int)*(short *)(iVar11 + DAT_00202af4));
      *(undefined4 *)(this + 0xd4) = uVar2;
    }
  }
  if (*(int *)(this + 0xdc) == 1) {
    onSendFoodWait((long)this);
  }
  else {
    this_00 = *(ZombieCafe **)(this + 0x60);
    iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    iVar11 = DAT_00202af4;
    if (iVar3 != 0) {
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x6c),*(long *)(this_00 + DAT_00202af4),
                         extraout_s0,extraout_s1);
      if (iVar3 == 0) {
        iVar3 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x90),
                           *(long *)(*(int *)(this + 0x60) + iVar11),extraout_s0_00,extraout_s1_00);
        if (iVar3 == 0) {
          iVar3 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x94),
                             *(long *)(*(int *)(this + 0x60) + iVar11),extraout_s0_01,extraout_s1_01
                            );
          if (iVar3 == 0) {
            iVar3 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x78),
                               *(long *)(*(int *)(this + 0x60) + iVar11),extraout_s0_02,
                               extraout_s1_02);
            if (iVar3 == 0) {
              iVar3 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0x74),
                                 *(long *)(*(int *)(this + 0x60) + iVar11),extraout_s0_03,
                                 extraout_s1_03);
              if (iVar3 == 0) {
                iVar3 = ZCImageButton::contains
                                  (*(ZCImageButton **)(this + 0x70),
                                   *(long *)(*(int *)(this + 0x60) + iVar11),extraout_s0_04,
                                   extraout_s1_04);
                if (iVar3 == 0) {
                  iVar11 = ZCImageButton::contains
                                     (*(ZCImageButton **)(this + 0x7c),
                                      *(long *)(*(int *)(this + 0x60) + iVar11),extraout_s0_05,
                                      extraout_s1_05);
                  if (iVar11 == 0) {
                    *(undefined4 *)(this + 200) = *(undefined4 *)(this + 0xc0);
                    while (piVar6 = *(int **)(this + 200), piVar6 != (int *)0x0) {
                      piVar4 = (int *)*piVar6;
                      *(int *)(this + 200) = piVar6[1];
                      if (piVar4 == (int *)0x0) break;
                      (**(code **)(*piVar4 + 8))(piVar4,param_1);
                    }
                    goto LAB_00202a4a;
                  }
                  (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
                  (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
                  (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),0);
                  (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),1);
                  pZVar7 = *(ZCImageButton **)(this + 0x7c);
                }
                else {
                  (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),1);
                  (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
                  (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),0);
                  (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
                  pZVar7 = *(ZCImageButton **)(this + 0x70);
                }
              }
              else {
                (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
                (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),1);
                (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),0);
                (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
                pZVar7 = *(ZCImageButton **)(this + 0x74);
              }
            }
            else {
              (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
              (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
              (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),1);
              (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
              pZVar7 = *(ZCImageButton **)(this + 0x78);
            }
            buttonCleanUp(this,pZVar7);
            *(undefined1 *)(*(int *)(this + 0x60) + iVar5) = 1;
            goto LAB_00202a4a;
          }
          iVar11 = CONCAT22(*(undefined2 *)(pSVar8 + 4),*(undefined2 *)(pSVar8 + 8));
          uVar9 = iVar11 - (*(int *)(*(int *)(this + 0x98) + 0x10) * 7 >> 3);
        }
        else {
          iVar11 = CONCAT22(*(undefined2 *)(pSVar8 + 4),*(undefined2 *)(pSVar8 + 8));
          uVar9 = (*(int *)(*(int *)(this + 0x98) + 0x10) * 7 >> 3) + iVar11;
        }
        (**(code **)(*(int *)pSVar8 + 0x14))
                  (pSVar8,(int)(uVar9 & 0xffff | (iVar11 >> 0x10) << 0x10) >> 0x10,(int)(short)uVar9
                  );
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_00);
        (**(code **)(*(int *)this + 0x20))(this,0);
      }
    }
LAB_00202a4a:
    *(undefined1 *)(*(int *)(this + 0x60) + iVar5) = 1;
  }
  uVar12 = *(undefined4 *)(pSVar8 + 4);
  uVar2 = __floatsisf(*(undefined4 *)(pSVar8 + 8));
  __addsf3(uVar2,*(undefined4 *)(this + 0xd4));
  uVar2 = __fixsfsi();
  iVar5 = DAT_00202b00;
  (**(code **)(*(int *)pSVar8 + 0x14))(pSVar8,uVar12,uVar2);
  puVar14 = *(undefined4 **)(iVar5 + 0x202a7a);
  uVar2 = __floatsisf(param_1);
  uVar2 = __mulsf3(uVar2,*puVar14);
  uVar12 = *(undefined4 *)(this + 0xd4);
  iVar5 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar5 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar5 = __mulsf3(uVar12,uVar2);
  *(int *)(this + 0xd4) = iVar5;
  iVar11 = __aeabi_fcmpge(iVar5,0);
  if (iVar11 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  iVar5 = __aeabi_fcmplt(iVar5,**(undefined4 **)(DAT_00202b04 + 0x202acc));
  if (iVar5 != 0) {
    *(undefined4 *)(this + 0xd4) = 0;
  }
  if (*(int *)(pSVar8 + 8) < 0) {
    uVar9 = *(int *)(*(int *)(this + 0x98) + 0x10) - *(int *)(pSVar8 + 0x10);
    if (((int)uVar9 < 1) && ((int)uVar9 <= *(int *)(pSVar8 + 8))) goto LAB_00202b36;
    uVar2 = *(undefined4 *)(pSVar8 + 4);
    uVar9 = (int)(uVar9 - 1 | uVar9) >> 0x1f & uVar9;
    pcVar13 = *(code **)(*(int *)pSVar8 + 0x14);
  }
  else {
    uVar2 = *(undefined4 *)(pSVar8 + 4);
    pcVar13 = *(code **)(*(int *)pSVar8 + 0x14);
    uVar9 = 0;
  }
  (*pcVar13)(pSVar8,uVar2,uVar9);
  *(undefined4 *)(this + 0xd4) = 0;
LAB_00202b36:
  (**(code **)(**(int **)(this + 0x90) + 0x20))
            (*(int **)(this + 0x90),*(uint *)(pSVar8 + 8) >> 0x1f);
  (**(code **)(**(int **)(this + 0x94) + 0x20))
            (*(int **)(this + 0x94),
             *(int *)(*(int *)(this + 0x98) + 0x10) - *(int *)(pSVar8 + 0x10) < *(int *)(pSVar8 + 8)
            );
  piVar6 = *(int **)(this + 0x90);
  iVar11 = *(int *)(*(int *)(this + 0x60) + DAT_00202bd4) * piVar6[4];
  iVar5 = *(int *)(this + 0x98);
  uVar9 = iVar11 >> 0x1f;
  uVar9 = (iVar11 >> 0x12) + uVar9 ^ uVar9;
  (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(iVar5 + 4),uVar9 + *(int *)(iVar5 + 8));
  iVar5 = *(int *)(this + 0x98);
  (**(code **)(**(int **)(this + 0x94) + 0x14))
            (*(int **)(this + 0x94),*(undefined4 *)(iVar5 + 4),
             (*(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x10)) - uVar9);
  if (*(char *)(*(int *)(this + 0x60) + DAT_00202bd8) != '\0') {
    backClose(this);
  }
  return;
}


