/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d0848 FUN_000d0848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0848(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  GameStatePowerup *this;
  LoadingGameState *this_00;
  CImage *pCVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ScreenElement *this_01;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int in_r3;
  CapcomGame *this_02;
  ImageButton *pIVar12;
  undefined4 *puVar13;
  ProgressBar *pPVar14;
  CharacterDetails *unaff_r5;
  undefined4 uVar15;
  code *pcVar16;
  int unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined8 uVar17;
  float extraout_s1_05;
  undefined4 in_stack_00000010;
  
  uVar17 = CONCAT44(param_2,param_1);
  if (*(int *)(unaff_r5 + 0x88) == *(int *)(in_r3 + 0x590)) {
    uVar17 = FUN_000cfffa();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x16c) + 0x14) != '\0') {
    uVar17 = FUN_000d0040();
  }
  if ((*(ZCImageButton **)(unaff_r5 + 0x17c))[0x14] != (ZCImageButton)0x0) {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x17c),
                       *(long *)(*(int *)(unaff_r5 + 0x78) + DAT_000d0258),(float)uVar17,
                       (float)((ulonglong)uVar17 >> 0x20));
    uVar17 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar1 != 0) {
      if (*(char *)(*(int *)(unaff_r5 + 0x88) + 5) == '\x02') {
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x78),extraout_s0);
        *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x78) + 8) + 0x11) = 1;
        *(int *)(*(int *)(unaff_r5 + 0x78) + _DAT_000d0278) = *(int *)(unaff_r5 + 0x88);
        this_02 = *(CapcomGame **)(unaff_r5 + 0x78);
        this = (GameStatePowerup *)operator_new(0x538);
        GameStatePowerup::GameStatePowerup(this);
        this_00 = (LoadingGameState *)operator_new(0x2c);
        LoadingGameState::LoadingGameState(this_00,(GameState *)this,(CapcomFont *)0x0,0);
        *(int *)this_00 = *(int *)(unaff_r7 + DAT_000d027c) + 8;
        this_00[0x14] = (LoadingGameState)0x0;
        *(undefined4 *)(this_00 + 0x28) = 0;
        CapcomGame::setNextState(this_02,(GameState *)this_00);
      }
      goto LAB_000d03e2;
    }
  }
  if ((*(ZCImageButton **)(unaff_r5 + 0x180))[0x14] != (ZCImageButton)0x0) {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x180),
                       *(long *)(*(int *)(unaff_r5 + 0x78) + DAT_000d0258),(float)uVar17,
                       (float)((ulonglong)uVar17 >> 0x20));
    uVar17 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar1 != 0) {
      if (*(char *)(*(int *)(unaff_r5 + 0x88) + 5) == '\x02') {
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x78),extraout_s0_00);
        pcVar11 = (char *)(*(int *)(unaff_r5 + 0x88) + 0x34);
        if (*pcVar11 == '\0') {
          *pcVar11 = '\x01';
          if (*(int **)(*(int *)(unaff_r5 + 0x180) + 0x60) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x180) + 0x60) + 4))();
            *(undefined4 *)(*(int *)(unaff_r5 + 0x180) + 0x60) = 0;
          }
          pIVar12 = *(ImageButton **)(unaff_r5 + 0x180);
          pCVar2 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(*(int *)(unaff_r5 + 0x78) + _DAT_000d05bc),
                              _DAT_000d05c0,false);
          ImageButton::setImageAndResize(pIVar12,pCVar2);
          (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),0);
          piVar3 = *(int **)(unaff_r5 + 0x170);
          uVar4 = 0;
          pcVar16 = *(code **)(*piVar3 + 0x20);
        }
        else {
          *pcVar11 = '\0';
          if (*(int **)(*(int *)(unaff_r5 + 0x180) + 0x60) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x180) + 0x60) + 4))();
            *(undefined4 *)(*(int *)(unaff_r5 + 0x180) + 0x60) = 0;
          }
          pIVar12 = *(ImageButton **)(unaff_r5 + 0x180);
          pCVar2 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(*(int *)(unaff_r5 + 0x78) + _DAT_000d0280),0x11c,
                              false);
          ImageButton::setImageAndResize(pIVar12,pCVar2);
          iVar1 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x78) + DAT_000d025c),'*');
          if (iVar1 == 0) {
            (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),0);
            piVar3 = *(int **)(unaff_r5 + 0x170);
            pcVar16 = *(code **)(*piVar3 + 0x20);
            uVar4 = 0;
          }
          else {
            (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),1);
            piVar3 = *(int **)(unaff_r5 + 0x170);
            uVar4 = 1;
            pcVar16 = *(code **)(*piVar3 + 0x20);
          }
        }
        (*pcVar16)(piVar3,uVar4);
        iVar1 = _DAT_000d05c4;
        pIVar12 = *(ImageButton **)(unaff_r5 + 0x180);
        iVar7 = SmDev();
        __mulsf3(*(undefined4 *)(iVar1 + 0xd02d8 + iVar7 * 4 + 0x50),*(undefined4 *)(unaff_r5 + 400)
                );
        iVar7 = SmDev();
        uVar17 = __mulsf3(*(undefined4 *)(iVar1 + 0xd02d8 + iVar7 * 4 + 0x50),
                          *(undefined4 *)(unaff_r5 + 400));
        ImageButton::setScale(pIVar12,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
      }
      goto LAB_000d03e2;
    }
  }
  iVar1 = DAT_000d08b4;
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xb4),
                     *(long *)(*(int *)(unaff_r5 + 0x78) + DAT_000d08b4),(float)uVar17,
                     (float)((ulonglong)uVar17 >> 0x20));
  iVar9 = 0;
  if (iVar7 == 0) {
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xb8),
                       *(long *)(*(int *)(unaff_r5 + 0x78) + iVar1),extraout_s0_05,extraout_s1_05);
    if (iVar7 == 0) {
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(unaff_r5 + 0xbc),
                         *(long *)(*(int *)(unaff_r5 + 0x78) + iVar1),extraout_s0_01,extraout_s1_01)
      ;
      iVar9 = 2;
      if (iVar7 == 0) {
        iVar7 = ZCImageButton::contains
                          (*(ZCImageButton **)(unaff_r5 + 0xc0),
                           *(long *)(*(int *)(unaff_r5 + 0x78) + iVar1),extraout_s0_02,
                           extraout_s1_02);
        iVar9 = 3;
        if (iVar7 == 0) {
          iVar7 = ZCImageButton::contains
                            (*(ZCImageButton **)(unaff_r5 + 0xc4),
                             *(long *)(*(int *)(unaff_r5 + 0x78) + iVar1),extraout_s0_03,
                             extraout_s1_03);
          iVar9 = 4;
          if (iVar7 == 0) {
            iVar1 = ZCImageButton::contains
                              (*(ZCImageButton **)(unaff_r5 + 0x178),
                               *(long *)(*(int *)(unaff_r5 + 0x78) + iVar1),extraout_s0_04,
                               extraout_s1_04);
            if (iVar1 != 0) {
              ZombieCafe::postStory
                        (*(ZombieCafe **)(unaff_r5 + 0x78),
                         *(_func_void_void_ptr **)(unaff_r7 + _DAT_000d05cc),
                         *(void **)(unaff_r5 + 0x88));
            }
            goto LAB_000d03e2;
          }
        }
      }
    }
    else {
      iVar9 = 1;
    }
  }
  unaff_r5[_DAT_000d05c8] = SUB41(iVar9,0);
  CharacterDetails::equipButtonPressProc(unaff_r5,iVar9);
LAB_000d03e2:
  piVar3 = *(int **)(unaff_r5 + 0x108);
  uVar8 = piVar3[2] + *(int *)(unaff_r5 + 0x184);
  uVar10 = *(int *)(*(int *)(unaff_r5 + 0x104) + 0x10) - piVar3[4];
  uVar10 = uVar10 & (int)(uVar10 - 1 | uVar10) >> 0x1f;
  if ((int)uVar10 <= (int)uVar8) {
    uVar10 = (int)(uVar8 - 1 | uVar8) >> 0x1f & uVar8;
  }
  (**(code **)(*piVar3 + 0x14))(piVar3,0,uVar10);
  uVar4 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x184));
  puVar13 = *(undefined4 **)(unaff_r7 + DAT_000d05e0);
  uVar5 = __floatsisf(in_stack_00000010);
  uVar5 = __mulsf3(uVar5,*puVar13);
  iVar1 = __aeabi_fcmplt(uVar5,0x3f800000);
  if (iVar1 == 0) {
    uVar5 = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,uVar5);
  __mulsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  *(undefined4 *)(unaff_r5 + 0x184) = uVar4;
  iVar1 = __floatsisf();
  iVar7 = __aeabi_fcmpge(iVar1,0);
  if (iVar7 == 0) {
    iVar1 = iVar1 + -0x80000000;
  }
  iVar1 = __aeabi_fcmplt(iVar1,**(undefined4 **)(unaff_r7 + DAT_000d05e4));
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_r5 + 0x184) = 0;
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0x78) + DAT_000d05d0) = 1;
  piVar3 = (int *)**(int **)(unaff_r5 + 0x138);
  iVar1 = *(int *)(*(int *)(unaff_r5 + 0x78) + DAT_000d05e8) * piVar3[3];
  uVar8 = iVar1 >> 0x1f;
  uVar8 = (iVar1 >> 0x12) + uVar8 ^ uVar8;
  (**(code **)(*piVar3 + 0x14))(piVar3,uVar8,*(int *)(unaff_r5 + 0x10) / 2);
  (**(code **)(*(int *)**(undefined4 **)(unaff_r5 + 0x13c) + 0x14))
            ((int *)**(undefined4 **)(unaff_r5 + 0x13c),*(int *)(unaff_r5 + 0xc) - uVar8,
             *(int *)(unaff_r5 + 0x10) / 2);
  String::String((String *)&stack0x00000050);
  String::String((String *)&stack0x00000058);
  uVar4 = Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
  uVar5 = Character::getMaxEnergy();
  iVar7 = *(int *)(unaff_r5 + 0x88);
  uVar15 = *(undefined4 *)(iVar7 + 0x40);
  uVar6 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x118));
  iVar1 = __aeabi_fcmpeq(uVar6,uVar15);
  if (iVar1 == 0) {
    uVar6 = __fixsfsi(uVar15);
    *(undefined4 *)(unaff_r5 + 0x118) = uVar6;
    iVar1 = __fixsfsi(*(undefined4 *)(iVar7 + 0x40));
    ProgressBar::setValue(*(ProgressBar **)(unaff_r5 + 0x110),iVar1,false);
  }
  iVar1 = __fixsfsi(uVar4);
  uVar4 = __floatsisf();
  __subsf3(uVar5,uVar4);
  iVar7 = __fixsfsi();
  if (*(int *)(unaff_r5 + 0x11c) < iVar7) {
    *(undefined4 *)(*(int *)(unaff_r5 + 0x114) + 0x8c) = DAT_000d05ec;
    String::valueOf((int)&stack0x00000060);
    String::operator=((String *)&stack0x00000050,&stack0x00000060);
    String::~String((String *)&stack0x00000060);
    ProgressBar::setMaximumValue
              (*(ProgressBar **)(unaff_r5 + 0x110),iVar1 + *(int *)(unaff_r5 + 0x11c));
    *(int *)(unaff_r5 + 0x11c) = *(int *)(unaff_r5 + 0x11c) + 10;
  }
  else if (*(int *)(unaff_r5 + 0x11c) == iVar7) {
    *(undefined4 *)(*(int *)(unaff_r5 + 0x114) + 0x8c) = 0xffffffff;
    String::valueOf((int)&stack0x00000068);
    String::operator=((String *)&stack0x00000050,&stack0x00000068);
    String::~String((String *)&stack0x00000068);
    pPVar14 = *(ProgressBar **)(unaff_r5 + 0x110);
    Character::getMaxEnergy();
    iVar1 = __fixsfsi();
    ProgressBar::setMaximumValue(pPVar14,iVar1);
    *(int *)(unaff_r5 + 0x11c) = *(int *)(unaff_r5 + 0x11c) + 10;
  }
  else {
    Character::getMaxEnergy();
    __fixsfsi();
    String::valueOf((int)&stack0x00000070);
    String::operator=((String *)&stack0x00000050,&stack0x00000070);
    String::~String((String *)&stack0x00000070);
    uVar4 = Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
    iVar1 = __aeabi_fcmpeq(uVar4,0);
    if (iVar1 == 0) {
      uVar4 = Character::getMaxEnergy();
      uVar5 = Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
      __subsf3(uVar4,uVar5);
      __fixsfsi();
      String::valueOf((int)&stack0x00000078);
      String::String((String *)&stack0x00000080,(char *)(DAT_000d08ac + 0xd0656));
      String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
      Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
      __fixsfsi();
      String::valueOf((int)&stack0x00000090);
      String::operator+((String *)&stack0x00000098,&stack0x00000088,&stack0x00000090);
      String::operator=((String *)&stack0x00000050,&stack0x00000098);
      String::~String((String *)&stack0x00000098);
      String::~String((String *)&stack0x00000090);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
    }
    pPVar14 = *(ProgressBar **)(unaff_r5 + 0x110);
    Character::getMaxEnergy();
    iVar1 = __fixsfsi();
    ProgressBar::setMaximumValue(pPVar14,iVar1);
    pPVar14 = *(ProgressBar **)(unaff_r5 + 0x110);
    iVar1 = __fixsfsi(*(undefined4 *)(*(int *)(unaff_r5 + 0x88) + 0x40));
    ProgressBar::setValue(pPVar14,iVar1,false);
  }
  piVar3 = *(int **)(unaff_r5 + 0x114);
  pcVar16 = *(code **)(*piVar3 + 0x44);
  __fixsfsi(*(undefined4 *)(*(int *)(unaff_r5 + 0x88) + 0x40));
  String::valueOf((int)&stack0x000000a0);
  String::String((String *)&stack0x000000a8,(char *)(DAT_000d08b0 + 0xd06fe));
  String::operator+((String *)&stack0x000000b0,&stack0x000000a0,&stack0x000000a8);
  String::String((String *)&stack0x000000b8,(String *)&stack0x00000050);
  String::operator+((String *)&stack0x000000c0,&stack0x000000b0,&stack0x000000b8);
  (*pcVar16)(piVar3,&stack0x000000c0);
  String::~String((String *)&stack0x000000c0);
  String::~String((String *)&stack0x000000b8);
  String::~String((String *)&stack0x000000b0);
  String::~String((String *)&stack0x000000a8);
  String::~String((String *)&stack0x000000a0);
  this_01 = *(ScreenElement **)(unaff_r5 + 0x110);
  piVar3 = *(int **)(unaff_r5 + 0x114);
  iVar1 = ScreenElement::localToParentCoords
                    (this_01,*(int *)(this_01 + 0xc),*(int *)(this_01 + 0x10));
  (**(code **)(*piVar3 + 0x14))(piVar3,iVar1 >> 0x10,(int)(short)iVar1);
  (**(code **)(**(int **)(unaff_r5 + 0x110) + 8))(*(int **)(unaff_r5 + 0x110),in_stack_00000010);
  (**(code **)(**(int **)(unaff_r5 + 0x124) + 8))(*(int **)(unaff_r5 + 0x124),in_stack_00000010);
  String::~String((String *)&stack0x00000058);
  String::~String((String *)&stack0x00000050);
  FUN_000d08a8();
  return;
}


