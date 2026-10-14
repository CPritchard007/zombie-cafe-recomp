/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3cf0 QuestDialog::tick */

/* QuestDialog::tick(long) */

void __thiscall QuestDialog::tick(QuestDialog *this,long param_1)

{
  QuestDialog QVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  ScreenElement *this_00;
  undefined4 *puVar10;
  undefined4 uVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  
  if (this[0x14] == (QuestDialog)0x0) {
    return;
  }
  this_00 = *(ScreenElement **)(this + 0x9c);
  if ((*(ScreenElement **)(this + 0x9c))[0x14] == (ScreenElement)0x0) {
    this_00 = (ScreenElement *)
              (*(uint *)(this + 0x8c) & -(uint)(*(char *)(*(uint *)(this + 0x8c) + 0x14) != '\0'));
  }
  ScreenElement::tick((long)this);
  iVar8 = *(int *)(this + 0x60);
  if (*(char *)(iVar8 + DAT_001d4094) == '\0') {
    if ((*(int *)(iVar8 + DAT_001d4098) == 0) || (*(int *)(iVar8 + 0x4b8) != 0)) {
      iVar3 = *(int *)(iVar8 + 0x4b8);
      if ((iVar3 == 0) || (*(int *)(iVar8 + DAT_001d4098) != 0)) goto LAB_001d40c0;
      QVar1 = (QuestDialog)ScreenElement::contains(this_00,iVar3 >> 0x10,(int)(short)iVar3);
      this[0xb4] = QVar1;
    }
    else {
      this[0xb4] = (QuestDialog)0x0;
    }
  }
  else {
LAB_001d40c0:
    if ((((this[0xb4] != (QuestDialog)0x0) && (*(char *)(iVar8 + DAT_001d4094) == '\0')) &&
        (*(int *)(iVar8 + 0x4b8) != 0)) &&
       ((int)**(short **)(DAT_001d409c + 0x1d3d82) < *(int *)(iVar8 + DAT_001d40a0))) {
      uVar2 = __floatsisf((int)(short)*(int *)(iVar8 + 0x4b8) -
                          (int)*(short *)(iVar8 + DAT_001d4098));
      *(undefined4 *)(this + 0xb8) = uVar2;
    }
  }
  iVar3 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(this + 0x60));
  iVar8 = DAT_001d4098;
  if (iVar3 != 0) {
    printf((char *)(DAT_001d40a4 + 0x1d3dba));
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x6c),
                       *(int *)(*(int *)(this + 0x60) + iVar8) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0x60) + iVar8),extraout_s0,extraout_s1);
    if (iVar3 != 0) goto LAB_001d408c;
    uVar2 = 0x3f800000;
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x80),
                       *(int *)(*(int *)(this + 0x60) + iVar8) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0x60) + iVar8),extraout_s0_00,
                       extraout_s1_00);
    if (iVar3 == 0) {
      uVar2 = 0x3f800000;
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x84),
                         *(int *)(*(int *)(this + 0x60) + iVar8) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0x60) + iVar8),extraout_s0_01,
                         extraout_s1_01);
      if (iVar3 == 0) {
        iVar4 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x70),
                           *(int *)(*(int *)(this + 0x60) + iVar8) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x60) + iVar8),extraout_s0_02,
                           extraout_s1_02);
        iVar3 = DAT_001d4094;
        if (iVar4 == 0) {
          iVar8 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x74),
                             *(int *)(*(int *)(this + 0x60) + iVar8) >> 0x10,
                             (int)(short)*(int *)(*(int *)(this + 0x60) + iVar8),extraout_s0_03,
                             extraout_s1_03);
          if (iVar8 == 0) {
            *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0xa4);
            while (piVar6 = *(int **)(this + 0xac), piVar6 != (int *)0x0) {
              piVar5 = (int *)*piVar6;
              *(int *)(this + 0xac) = piVar6[1];
              if (piVar5 == (int *)0x0) break;
              (**(code **)(*piVar5 + 8))(piVar5,param_1);
            }
          }
          else {
            puts((char *)(DAT_001d40ac + 0x1d3ed2));
            (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
            (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),1);
            buttonCleanUp(this,*(ZCImageButton **)(this + 0x74));
            updateTitle();
            *(undefined1 *)(*(int *)(this + 0x60) + DAT_001d4094) = 1;
          }
        }
        else {
          puts((char *)(DAT_001d40a8 + 0x1d3e80));
          (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),1);
          (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
          buttonCleanUp(this,*(ZCImageButton **)(this + 0x70));
          updateTitle();
          *(undefined1 *)(*(int *)(this + 0x60) + iVar3) = 1;
        }
        goto LAB_001d3f2a;
      }
      iVar8 = CONCAT22(*(undefined2 *)(this_00 + 4),*(undefined2 *)(this_00 + 8));
      uVar7 = iVar8 - (*(int *)(*(int *)(this + 0x88) + 0x10) * 7 >> 3);
    }
    else {
      iVar8 = CONCAT22(*(undefined2 *)(this_00 + 4),*(undefined2 *)(this_00 + 8));
      uVar7 = (*(int *)(*(int *)(this + 0x88) + 0x10) * 7 >> 3) + iVar8;
    }
    (**(code **)(*(int *)this_00 + 0x14))
              (this_00,(int)(uVar7 & 0xffff | (iVar8 >> 0x10) << 0x10) >> 0x10,(int)(short)uVar7,
               *(code **)(*(int *)this_00 + 0x14),uVar2);
  }
LAB_001d3f2a:
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_001d4094) = 1;
  uVar11 = *(undefined4 *)(this_00 + 4);
  iVar8 = *(int *)this_00;
  uVar2 = __floatsisf(*(undefined4 *)(this_00 + 8));
  __addsf3(uVar2,*(undefined4 *)(this + 0xb8));
  uVar2 = __fixsfsi();
  puVar10 = (undefined4 *)(DAT_001d40b0 + 0x1d3f5a);
  (**(code **)(iVar8 + 0x14))(this_00,uVar11,uVar2);
  puVar10 = (undefined4 *)*puVar10;
  uVar2 = __floatsisf(param_1);
  uVar2 = __mulsf3(uVar2,*puVar10);
  uVar11 = *(undefined4 *)(this + 0xb8);
  iVar8 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar8 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar8 = __mulsf3(uVar11,uVar2);
  *(int *)(this + 0xb8) = iVar8;
  iVar3 = __aeabi_fcmpge(iVar8,0);
  if (iVar3 == 0) {
    iVar8 = iVar8 + -0x80000000;
  }
  iVar8 = __aeabi_fcmplt(iVar8,**(undefined4 **)(DAT_001d40b4 + 0x1d3fae));
  if (iVar8 != 0) {
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if (*(int *)(this_00 + 8) < 0) {
    uVar7 = *(int *)(*(int *)(this + 0x88) + 0x10) - *(int *)(this_00 + 0x10);
    if ((0 < (int)uVar7) || (*(int *)(this_00 + 8) < (int)uVar7)) {
      uVar2 = *(undefined4 *)(this_00 + 4);
      uVar7 = (int)(uVar7 - 1 | uVar7) >> 0x1f & uVar7;
      pcVar9 = *(code **)(*(int *)this_00 + 0x14);
      goto LAB_001d3ff6;
    }
  }
  else {
    uVar2 = *(undefined4 *)(this_00 + 4);
    pcVar9 = *(code **)(*(int *)this_00 + 0x14);
    uVar7 = 0;
LAB_001d3ff6:
    (*pcVar9)(this_00,uVar2,uVar7);
    *(undefined4 *)(this + 0xb8) = 0;
  }
  (**(code **)(**(int **)(this + 0x80) + 0x20))
            (*(int **)(this + 0x80),*(uint *)(this_00 + 8) >> 0x1f);
  (**(code **)(**(int **)(this + 0x84) + 0x20))
            (*(int **)(this + 0x84),
             *(int *)(*(int *)(this + 0x88) + 0x10) - *(int *)(this_00 + 0x10) <
             *(int *)(this_00 + 8));
  piVar6 = *(int **)(this + 0x80);
  iVar3 = *(int *)(*(int *)(this + 0x60) + DAT_001d40b8) * piVar6[4];
  iVar8 = *(int *)(this + 0x88);
  uVar7 = iVar3 >> 0x1f;
  uVar7 = (iVar3 >> 0x12) + uVar7 ^ uVar7;
  (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(iVar8 + 4),uVar7 + *(int *)(iVar8 + 8));
  iVar8 = *(int *)(this + 0x88);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(undefined4 *)(iVar8 + 4),
             (*(int *)(iVar8 + 8) + *(int *)(iVar8 + 0x10)) - uVar7);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001d40bc) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_001d40bc) = 0;
  if (this[0x14] == (QuestDialog)0x0) {
    return;
  }
LAB_001d408c:
  CloseMain();
  return;
}


