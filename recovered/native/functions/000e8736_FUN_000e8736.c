/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e8736 FUN_000e8736 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e8736(void)

{
  String *this;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Recipe *pRVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  PackedImage *this_00;
  CImage *pCVar9;
  int iVar10;
  ConfirmDialog *pCVar11;
  NoticeDialog *pNVar12;
  FoodStack *pFVar13;
  int iVar14;
  code *pcVar15;
  ImageButton *this_01;
  int *unaff_r4;
  CookCommandBar *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  float fVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  undefined8 uVar17;
  float extraout_s1_00;
  float fVar18;
  
  (**(code **)(*unaff_r4 + 8))(unaff_r4,unaff_r6);
  uVar17 = FUN_000e7f40();
  iVar10 = ZCImageButton::contains
                     (*(ZCImageButton **)(unaff_r5 + 0x68),
                      *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4) >> 0x10,
                      (int)(short)*(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  iVar1 = DAT_000e82a4;
  if (iVar10 == 0) {
    fVar16 = extraout_s0_02;
    fVar18 = extraout_s1_00;
    if ((*(int *)(unaff_r5 + 0xbc) == 0) ||
       (iVar1 = *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e82a0),
       iVar1 = ZCImageButton::contains
                         (*(ZCImageButton **)(unaff_r5 + 0x6c),iVar1 >> 0x10,(int)(short)iVar1,
                          extraout_s0_02,extraout_s1_00), fVar16 = extraout_s0_00,
       fVar18 = extraout_s1, iVar1 == 0)) {
      if ((*(int *)(unaff_r5 + 0xcc) == 0) ||
         (iVar1 = ZCImageButton::contains
                            (*(ZCImageButton **)(unaff_r5 + 0x70),
                             *(int *)(*(int *)(unaff_r5 + 0x74) + _DAT_000e8664) >> 0x10,
                             (int)(short)*(int *)(*(int *)(unaff_r5 + 0x74) + _DAT_000e8664),fVar16,
                             fVar18), iVar1 == 0)) {
        iVar1 = ScreenElement::contains
                          ((ScreenElement *)unaff_r5,
                           *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4) >> 0x10,
                           (int)(short)*(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4));
        if (iVar1 != 0) goto LAB_000e8322;
      }
      else {
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),extraout_s0_01);
        *(undefined1 *)(*(int *)(unaff_r5 + 0x74) + DAT_000e8668) = 1;
        (**(code **)(unaff_r5 + 0xcc))
                  (*(undefined4 *)(unaff_r5 + 0xd0),*(undefined4 *)(unaff_r5 + 0x84));
        if (*(char *)(*(int *)(unaff_r5 + 0x84) + 0x2e) == '\0') {
          CookCommandBar::close(unaff_r5);
          FUN_000e879e();
          return;
        }
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),extraout_s0_00);
      (**(code **)(unaff_r5 + 0xbc))
                (*(undefined4 *)(unaff_r5 + 0xc0),*(undefined4 *)(unaff_r5 + 0x84));
      iVar1 = DAT_000e82a4;
      *(int *)(*(int *)(unaff_r5 + 0x74) + 0x860) = *(int *)(*(int *)(unaff_r5 + 0x74) + 0x860) + 1;
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + iVar1),'\x04');
      TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + iVar1),',',true)
      ;
LAB_000e8322:
      *(undefined1 *)(*(int *)(unaff_r5 + 0x74) + DAT_000e8668) = 1;
    }
  }
  else {
    iVar10 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e82a4),'7');
    if (iVar10 != 0) {
      fVar16 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + iVar1),'2',true);
      iVar1 = 1;
      if (unaff_r5[0xb9] == (CookCommandBar)0x0) {
        pFVar13 = *(FoodStack **)(unaff_r5 + 0x88);
        iVar1 = __divsi3(*(undefined4 *)(*(int *)(unaff_r5 + 0x84) + 0x70),1000);
        pRVar5 = (Recipe *)FoodStack::getRecipe(pFVar13);
        iVar1 = Recipe::getFinishToxinCost(pRVar5,(uchar)pFVar13[8],iVar1);
        fVar16 = extraout_s0;
      }
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),fVar16);
      iVar10 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x74));
      if (iVar10 < iVar1) {
        pNVar12 = *(NoticeDialog **)(unaff_r5 + 0x7c);
        String::String((String *)&stack0x00000068,(char *)(_DAT_000e82c8 + 0xe820e));
        String::String((String *)&stack0x00000070,(char *)(_DAT_000e82cc + 0xe8218));
        NoticeDialog::show(pNVar12,&stack0x00000068,&stack0x00000070);
        String::~String((String *)&stack0x00000070);
        this = (String *)&stack0x00000068;
      }
      else {
        pCVar11 = *(ConfirmDialog **)(unaff_r5 + 0x78);
        String::String((String *)&stack0x00000030,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + _DAT_000e82b8) * 8));
        String::valueOf((int)&stack0x00000038);
        String::operator+((String *)&stack0x00000040,&stack0x00000030,&stack0x00000038);
        String::String((String *)&stack0x00000048,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + _DAT_000e82bc) * 8));
        String::operator+((String *)&stack0x00000050,&stack0x00000040,&stack0x00000048);
        String::String((String *)&stack0x00000058,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + _DAT_000e82c0) * 8));
        String::String((String *)&stack0x00000060,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + DAT_000e82b0) * 8));
        ConfirmDialog::show(pCVar11,&stack0x00000050,&stack0x00000058,&stack0x00000060);
        String::~String((String *)&stack0x00000060);
        String::~String((String *)&stack0x00000058);
        String::~String((String *)&stack0x00000050);
        String::~String((String *)&stack0x00000048);
        String::~String((String *)&stack0x00000040);
        String::~String((String *)&stack0x00000038);
        this = (String *)&stack0x00000030;
      }
      String::~String(this);
    }
  }
  uVar2 = Stove::isBurned(*(Stove **)(unaff_r5 + 0x84));
  __mulsf3(*(undefined4 *)(**(int **)(*(int *)(unaff_r5 + 0x74) + 0x590) + 0xb30),DAT_000e866c);
  __fixsfsi();
  uVar3 = __floatsisf();
  uVar3 = __divsf3(uVar3,DAT_000e866c);
  iVar1 = *(int *)(unaff_r5 + 0x84);
  __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 0x38) + 0x60),DAT_000e866c);
  __fixsfsi();
  uVar4 = __floatsisf();
  uVar4 = __divsf3(uVar4,DAT_000e866c);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar3 = __subsf3(uVar3,0x3f800000);
  pFVar13 = *(FoodStack **)(iVar1 + 100);
  pRVar5 = (Recipe *)FoodStack::getRecipe(pFVar13);
  iVar1 = Recipe::getCookTimeSeconds(pRVar5,(uchar)pFVar13[8]);
  iVar14 = *(int *)(unaff_r5 + 0x84);
  iVar10 = __divsi3(*(undefined4 *)(iVar14 + 0x70),DAT_000e8670);
  uVar4 = __floatsisf(iVar1 + iVar10);
  uVar3 = __subsf3(0x40000000,uVar3);
  __mulsf3(uVar4,uVar3);
  uVar6 = __fixsfsi();
  if (((uVar2 == 0) && (*(int *)(iVar14 + 0x7c) == 0)) && (uVar6 != 0)) {
    if (unaff_r5[0xb8] == (CookCommandBar)0x0) {
      unaff_r5[0xb8] = (CookCommandBar)0x1;
      piVar7 = *(int **)(unaff_r5 + 0x9c);
      pcVar15 = *(code **)(*piVar7 + 0x44);
      StringUtil::createTimeString((StringUtil *)&stack0x00000078,uVar6,'\x02');
      String::String((String *)&stack0x00000080,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                     **(int **)(unaff_r7 + DAT_000e8674) * 8));
      String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
      (*pcVar15)(piVar7,&stack0x00000088);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
      (**(code **)(**(int **)(unaff_r5 + 0x9c) + 0x24))(*(int **)(unaff_r5 + 0x9c),DAT_000e8678);
    }
LAB_000e84f8:
    if (((int)uVar6 < 1) || (uVar2 != 0)) {
LAB_000e8504:
      (**(code **)(**(int **)(unaff_r5 + 100) + 0x20))(*(int **)(unaff_r5 + 100),uVar2);
      if (*(short *)(*(int *)(unaff_r5 + 0x84) + 0x84) == 0) {
        piVar7 = *(int **)(unaff_r5 + 0x6c);
        pcVar15 = *(code **)(*piVar7 + 0x20);
        uVar8 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8688),'\x05');
      }
      else {
        piVar7 = *(int **)(unaff_r5 + 0x70);
        pcVar15 = *(code **)(*piVar7 + 0x20);
        uVar8 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8688),'\x05');
      }
      if (uVar8 != 0) {
        uVar8 = (uVar2 ^ 1) & 0xff;
      }
      (*pcVar15)(piVar7,uVar8);
      if (uVar2 != 0) {
        if (unaff_r5[0xb9] != (CookCommandBar)0x0) {
          FUN_000e879e();
          return;
        }
        unaff_r5[0xb9] = (CookCommandBar)0x1;
        unaff_r5[0xa8] = (CookCommandBar)0x1;
        piVar7 = *(int **)(unaff_r5 + 0xa4);
        pcVar15 = *(code **)(*piVar7 + 0x44);
        String::String((String *)&stack0x000000a8,(char *)(DAT_000e868c + 0xe8586));
        (*pcVar15)(piVar7,&stack0x000000a8);
        String::~String((String *)&stack0x000000a8);
        (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),1);
        if (*(int **)(*(int *)(unaff_r5 + 0x68) + 0x60) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x68) + 0x60) + 4))();
          *(undefined4 *)(*(int *)(unaff_r5 + 0x68) + 0x60) = 0;
        }
        this_01 = *(ImageButton **)(unaff_r5 + 0x68);
        iVar1 = 0x83;
        this_00 = *(PackedImage **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8690);
        goto LAB_000e8654;
      }
    }
  }
  else {
    if ((uVar6 == *(ulong *)(unaff_r5 + 0xb4)) && ((byte)unaff_r5[0xb9] == uVar2))
    goto LAB_000e84f8;
    unaff_r5[0xb8] = (CookCommandBar)0x0;
    piVar7 = *(int **)(unaff_r5 + 0x9c);
    (**(code **)(*piVar7 + 0x24))(piVar7,_DAT_000e867c);
    *(ulong *)(unaff_r5 + 0xb4) = uVar6;
    piVar7 = *(int **)(unaff_r5 + 0x9c);
    if (uVar2 != 0) {
      pcVar15 = *(code **)(*piVar7 + 0x44);
      String::String((String *)&stack0x00000090,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                     **(int **)(unaff_r7 + _DAT_000e8680) * 8));
      (*pcVar15)(piVar7,&stack0x00000090);
      String::~String((String *)&stack0x00000090);
      goto LAB_000e84f8;
    }
    pcVar15 = *(code **)(*piVar7 + 0x44);
    if ((int)uVar6 < 1) {
      String::String((String *)&stack0x000000a0,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                     **(int **)(unaff_r7 + _DAT_000e8684) * 8));
      (*pcVar15)(piVar7,&stack0x000000a0);
      String::~String((String *)&stack0x000000a0);
      (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),0);
      goto LAB_000e8504;
    }
    StringUtil::createTimeString((StringUtil *)&stack0x00000098,uVar6,'\x02');
    (*pcVar15)(piVar7,&stack0x00000098);
    String::~String((String *)&stack0x00000098);
  }
  pFVar13 = *(FoodStack **)(unaff_r5 + 0x88);
  iVar1 = __divsi3(*(undefined4 *)(*(int *)(unaff_r5 + 0x84) + 0x70),1000);
  pRVar5 = (Recipe *)FoodStack::getRecipe(pFVar13);
  uVar2 = Recipe::getFinishToxinCost(pRVar5,(uchar)pFVar13[8],iVar1);
  if ((unaff_r5[0xb9] != (CookCommandBar)0x0) || (uVar2 != (byte)unaff_r5[0xa8])) {
    unaff_r5[0xa8] = SUB41(uVar2,0);
    piVar7 = *(int **)(unaff_r5 + 0xa4);
    pcVar15 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)&stack0x000000b0);
    (*pcVar15)(piVar7,&stack0x000000b0);
    String::~String((String *)&stack0x000000b0);
  }
  if (unaff_r5[0xb9] == (CookCommandBar)0x0) {
    FUN_000e879e();
    return;
  }
  unaff_r5[0xb9] = (CookCommandBar)0x0;
  (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),0);
  if (*(int **)(*(int *)(unaff_r5 + 0x68) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x68) + 0x60) + 4))();
    *(undefined4 *)(*(int *)(unaff_r5 + 0x68) + 0x60) = 0;
  }
  this_01 = *(ImageButton **)(unaff_r5 + 0x68);
  iVar1 = 0x7a;
  this_00 = *(PackedImage **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8690);
LAB_000e8654:
  pCVar9 = (CImage *)PackedImage::getImage(this_00,iVar1,false);
  ImageButton::setImageAndResize(this_01,pCVar9);
  FUN_000e879e();
  return;
}


