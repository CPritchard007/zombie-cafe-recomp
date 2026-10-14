/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7f40 FUN_000e7f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7f40(void)

{
  uint uVar1;
  int iVar2;
  String *this;
  undefined4 uVar3;
  Recipe *pRVar4;
  undefined4 uVar5;
  int *piVar6;
  PackedImage *this_00;
  CImage *pCVar7;
  uchar uVar8;
  int iVar9;
  NoticeDialog *pNVar10;
  FoodStack *pFVar11;
  code *pcVar12;
  ImageButton *this_01;
  CookCommandBar *unaff_r5;
  ZombieCafe *this_02;
  ConfirmDialog *pCVar13;
  int unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
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
  float fVar15;
  ulong uStack0000000c;
  ConfirmDialog *pCStack00000010;
  
  iVar9 = *(int *)(unaff_r5 + 0xac);
  uStack0000000c = *(long *)(iVar9 + 0xc);
  uVar1 = *(uint *)(iVar9 + 0x14);
  pCStack00000010 = *(ConfirmDialog **)(iVar9 + 8);
  iVar2 = __aeabi_ldivmod(uVar1 << 0x10,((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10,
                          *(int *)(iVar9 + 0x10),*(int *)(iVar9 + 0x10) >> 0x1f);
  iVar2 = CapcomMath::interpolatePoints
                    ((long)pCStack00000010,uStack0000000c,iVar2,*(int *)(iVar9 + 0x18));
  (**(code **)(*(int *)unaff_r5 + 0x14))(unaff_r5,iVar2 >> 0x10,(int)(short)iVar2);
  iVar2 = (**(code **)(**(int **)(unaff_r5 + 0xac) + 0x1c))();
  if (iVar2 != 0) {
    if (unaff_r5[0xb0] == (CookCommandBar)0x1) {
      uVar8 = '\x02';
LAB_000e7fa0:
      CookCommandBar::setState(unaff_r5,uVar8);
    }
    else if (unaff_r5[0xb0] == (CookCommandBar)0x3) {
      uVar8 = '\0';
      goto LAB_000e7fa0;
    }
    if (*(int **)(unaff_r5 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_r5 + 0xac) + 4))();
    }
    *(undefined4 *)(unaff_r5 + 0xac) = 0;
  }
  if (1 < (byte)unaff_r5[0xb0] - 1) {
    FUN_000e879e();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x84) + 0x2e) == '\0') {
LAB_000e831a:
    CookCommandBar::close(unaff_r5);
    FUN_000e879e();
    return;
  }
  this_02 = *(ZombieCafe **)(unaff_r5 + 0x74);
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_02);
  if (iVar2 == 0) goto LAB_000e832a;
  iVar2 = *(int *)(this_02 + DAT_000e82a0);
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x60),iVar2 >> 0x10,(int)(short)iVar2,
                     extraout_s0,extraout_s1);
  if (iVar2 == 0) {
    fVar14 = extraout_s0_00;
    fVar15 = extraout_s1_00;
    if (((*(ZCImageButton **)(unaff_r5 + 100))[0x86] != (ZCImageButton)0x0) &&
       (iVar2 = *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e82a0),
       iVar2 = ZCImageButton::contains
                         (*(ZCImageButton **)(unaff_r5 + 100),iVar2 >> 0x10,(int)(short)iVar2,
                          extraout_s0_00,extraout_s1_00), fVar14 = extraout_s0_01,
       fVar15 = extraout_s1_01, iVar2 != 0)) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),extraout_s0_01);
      iVar2 = Stove::isBurned(*(Stove **)(unaff_r5 + 0x84));
      if (iVar2 == 0) {
        pCVar13 = *(ConfirmDialog **)(unaff_r5 + 0x78);
        String::String((String *)&stack0x00000018,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + DAT_000e82a8) * 8));
        String::String((String *)&stack0x00000020,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + DAT_000e82ac) * 8));
        String::String((String *)&stack0x00000028,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                       **(int **)(unaff_r7 + DAT_000e82b0) * 8));
        ConfirmDialog::show(pCVar13,&stack0x00000018,&stack0x00000020,&stack0x00000028);
        String::~String((String *)&stack0x00000028);
        String::~String((String *)&stack0x00000020);
        String::~String((String *)&stack0x00000018);
      }
      else if (*(code **)(unaff_r5 + 0xc4) != (code *)0x0) {
        (**(code **)(unaff_r5 + 0xc4))
                  (*(undefined4 *)(unaff_r5 + 200),*(undefined4 *)(unaff_r5 + 0x84));
      }
      goto LAB_000e8322;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x68),
                       *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4) >> 0x10,
                       (int)(short)*(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4),fVar14,fVar15)
    ;
    iVar2 = DAT_000e82a4;
    if (iVar9 == 0) {
      fVar14 = extraout_s0_05;
      fVar15 = extraout_s1_03;
      if ((*(int *)(unaff_r5 + 0xbc) != 0) &&
         (iVar2 = *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e82a0),
         iVar2 = ZCImageButton::contains
                           (*(ZCImageButton **)(unaff_r5 + 0x6c),iVar2 >> 0x10,(int)(short)iVar2,
                            extraout_s0_05,extraout_s1_03), fVar14 = extraout_s0_03,
         fVar15 = extraout_s1_02, iVar2 != 0)) {
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),extraout_s0_03);
        (**(code **)(unaff_r5 + 0xbc))
                  (*(undefined4 *)(unaff_r5 + 0xc0),*(undefined4 *)(unaff_r5 + 0x84));
        iVar2 = DAT_000e82a4;
        *(int *)(*(int *)(unaff_r5 + 0x74) + 0x860) =
             *(int *)(*(int *)(unaff_r5 + 0x74) + 0x860) + 1;
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + iVar2),'\x04');
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + iVar2),',',true);
        goto LAB_000e8322;
      }
      if ((*(int *)(unaff_r5 + 0xcc) == 0) ||
         (iVar2 = ZCImageButton::contains
                            (*(ZCImageButton **)(unaff_r5 + 0x70),
                             *(int *)(*(int *)(unaff_r5 + 0x74) + _DAT_000e8664) >> 0x10,
                             (int)(short)*(int *)(*(int *)(unaff_r5 + 0x74) + _DAT_000e8664),fVar14,
                             fVar15), iVar2 == 0)) {
        iVar2 = ScreenElement::contains
                          ((ScreenElement *)unaff_r5,
                           *(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4) >> 0x10,
                           (int)(short)*(int *)(*(int *)(unaff_r5 + 0x74) + DAT_000e87a4));
        if (iVar2 != 0) goto LAB_000e8322;
      }
      else {
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),extraout_s0_04);
        *(undefined1 *)(*(int *)(unaff_r5 + 0x74) + DAT_000e8668) = 1;
        (**(code **)(unaff_r5 + 0xcc))
                  (*(undefined4 *)(unaff_r5 + 0xd0),*(undefined4 *)(unaff_r5 + 0x84));
        if (*(char *)(*(int *)(unaff_r5 + 0x84) + 0x2e) == '\0') goto LAB_000e831a;
      }
    }
    else {
      iVar9 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e82a4),'7');
      if (iVar9 != 0) {
        fVar14 = (float)TutorialSystem::triggerEvent
                                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + iVar2),'2',true)
        ;
        iVar2 = 1;
        if (unaff_r5[0xb9] == (CookCommandBar)0x0) {
          pFVar11 = *(FoodStack **)(unaff_r5 + 0x88);
          iVar2 = __divsi3(*(undefined4 *)(*(int *)(unaff_r5 + 0x84) + 0x70),1000);
          pRVar4 = (Recipe *)FoodStack::getRecipe(pFVar11);
          iVar2 = Recipe::getFinishToxinCost(pRVar4,(uchar)pFVar11[8],iVar2);
          fVar14 = extraout_s0_02;
        }
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),fVar14);
        iVar9 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x74));
        if (iVar9 < iVar2) {
          pNVar10 = *(NoticeDialog **)(unaff_r5 + 0x7c);
          String::String((String *)&stack0x00000068,(char *)(_DAT_000e82c8 + 0xe820e));
          String::String((String *)&stack0x00000070,(char *)(_DAT_000e82cc + 0xe8218));
          NoticeDialog::show(pNVar10,&stack0x00000068,&stack0x00000070);
          String::~String((String *)&stack0x00000070);
          this = (String *)&stack0x00000068;
        }
        else {
          pCStack00000010 = *(ConfirmDialog **)(unaff_r5 + 0x78);
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
          ConfirmDialog::show(pCStack00000010,&stack0x00000050,&stack0x00000058,&stack0x00000060);
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
  }
  else {
    fVar14 = (float)TutorialSystem::triggerEvent
                              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e82a4),'2',
                               true);
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x74),fVar14);
    CookCommandBar::close(unaff_r5);
LAB_000e8322:
    *(undefined1 *)(*(int *)(unaff_r5 + 0x74) + DAT_000e8668) = 1;
  }
LAB_000e832a:
  pCStack00000010 = (ConfirmDialog *)Stove::isBurned(*(Stove **)(unaff_r5 + 0x84));
  __mulsf3(*(undefined4 *)(**(int **)(*(int *)(unaff_r5 + 0x74) + 0x590) + 0xb30),DAT_000e866c);
  __fixsfsi();
  uVar3 = __floatsisf();
  uStack0000000c = __divsf3(uVar3,DAT_000e866c);
  iVar2 = *(int *)(unaff_r5 + 0x84);
  __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 0x38) + 0x60),DAT_000e866c);
  __fixsfsi();
  uVar3 = __floatsisf();
  uVar3 = __divsf3(uVar3,DAT_000e866c);
  uVar3 = __addsf3(uStack0000000c,uVar3);
  uVar3 = __subsf3(uVar3,0x3f800000);
  pFVar11 = *(FoodStack **)(iVar2 + 100);
  pRVar4 = (Recipe *)FoodStack::getRecipe(pFVar11);
  uStack0000000c = Recipe::getCookTimeSeconds(pRVar4,(uchar)pFVar11[8]);
  iVar9 = *(int *)(unaff_r5 + 0x84);
  iVar2 = __divsi3(*(undefined4 *)(iVar9 + 0x70),DAT_000e8670);
  uVar5 = __floatsisf(uStack0000000c + iVar2);
  uVar3 = __subsf3(0x40000000,uVar3);
  __mulsf3(uVar5,uVar3);
  uStack0000000c = __fixsfsi();
  if (((pCStack00000010 == (ConfirmDialog *)0x0) && (*(int *)(iVar9 + 0x7c) == 0)) &&
     (uStack0000000c != 0)) {
    if (unaff_r5[0xb8] == (CookCommandBar)0x0) {
      unaff_r5[0xb8] = (CookCommandBar)0x1;
      piVar6 = *(int **)(unaff_r5 + 0x9c);
      pcVar12 = *(code **)(*piVar6 + 0x44);
      StringUtil::createTimeString((StringUtil *)&stack0x00000078,uStack0000000c,'\x02');
      String::String((String *)&stack0x00000080,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                     **(int **)(unaff_r7 + DAT_000e8674) * 8));
      String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
      (*pcVar12)(piVar6,&stack0x00000088);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
      (**(code **)(**(int **)(unaff_r5 + 0x9c) + 0x24))(*(int **)(unaff_r5 + 0x9c),DAT_000e8678);
    }
LAB_000e84f8:
    if (((int)uStack0000000c < 1) || (pCStack00000010 != (ConfirmDialog *)0x0)) {
LAB_000e8504:
      (**(code **)(**(int **)(unaff_r5 + 100) + 0x20))(*(int **)(unaff_r5 + 100),pCStack00000010);
      if (*(short *)(*(int *)(unaff_r5 + 0x84) + 0x84) == 0) {
        piVar6 = *(int **)(unaff_r5 + 0x6c);
        pcVar12 = *(code **)(*piVar6 + 0x20);
        uVar1 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8688),'\x05');
      }
      else {
        piVar6 = *(int **)(unaff_r5 + 0x70);
        pcVar12 = *(code **)(*piVar6 + 0x20);
        uVar1 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8688),'\x05');
      }
      if (uVar1 != 0) {
        uVar1 = ((uint)pCStack00000010 ^ 1) & 0xff;
      }
      (*pcVar12)(piVar6,uVar1);
      if (pCStack00000010 != (ConfirmDialog *)0x0) {
        if (unaff_r5[0xb9] != (CookCommandBar)0x0) {
          FUN_000e879e();
          return;
        }
        unaff_r5[0xb9] = (CookCommandBar)0x1;
        unaff_r5[0xa8] = (CookCommandBar)0x1;
        piVar6 = *(int **)(unaff_r5 + 0xa4);
        pcVar12 = *(code **)(*piVar6 + 0x44);
        String::String((String *)&stack0x000000a8,(char *)(DAT_000e868c + 0xe8586));
        (*pcVar12)(piVar6,&stack0x000000a8);
        String::~String((String *)&stack0x000000a8);
        (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),1);
        if (*(int **)(*(int *)(unaff_r5 + 0x68) + 0x60) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x68) + 0x60) + 4))();
          *(undefined4 *)(*(int *)(unaff_r5 + 0x68) + 0x60) = 0;
        }
        this_01 = *(ImageButton **)(unaff_r5 + 0x68);
        iVar2 = 0x83;
        this_00 = *(PackedImage **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8690);
        goto LAB_000e8654;
      }
    }
  }
  else {
    if ((uStack0000000c == *(ulong *)(unaff_r5 + 0xb4)) &&
       ((ConfirmDialog *)(uint)(byte)unaff_r5[0xb9] == pCStack00000010)) goto LAB_000e84f8;
    unaff_r5[0xb8] = (CookCommandBar)0x0;
    piVar6 = *(int **)(unaff_r5 + 0x9c);
    (**(code **)(*piVar6 + 0x24))(piVar6,_DAT_000e867c);
    *(ulong *)(unaff_r5 + 0xb4) = uStack0000000c;
    piVar6 = *(int **)(unaff_r5 + 0x9c);
    if (pCStack00000010 != (ConfirmDialog *)0x0) {
      pcVar12 = *(code **)(*piVar6 + 0x44);
      String::String((String *)&stack0x00000090,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                     **(int **)(unaff_r7 + _DAT_000e8680) * 8));
      (*pcVar12)(piVar6,&stack0x00000090);
      String::~String((String *)&stack0x00000090);
      goto LAB_000e84f8;
    }
    pcVar12 = *(code **)(*piVar6 + 0x44);
    if ((int)uStack0000000c < 1) {
      String::String((String *)&stack0x000000a0,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x74) + 0x4b0) + 8) +
                     **(int **)(unaff_r7 + _DAT_000e8684) * 8));
      (*pcVar12)(piVar6,&stack0x000000a0);
      String::~String((String *)&stack0x000000a0);
      (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),0);
      goto LAB_000e8504;
    }
    StringUtil::createTimeString((StringUtil *)&stack0x00000098,uStack0000000c,'\x02');
    (*pcVar12)(piVar6,&stack0x00000098);
    String::~String((String *)&stack0x00000098);
  }
  pFVar11 = *(FoodStack **)(unaff_r5 + 0x88);
  iVar2 = __divsi3(*(undefined4 *)(*(int *)(unaff_r5 + 0x84) + 0x70),1000);
  pRVar4 = (Recipe *)FoodStack::getRecipe(pFVar11);
  uVar1 = Recipe::getFinishToxinCost(pRVar4,(uchar)pFVar11[8],iVar2);
  if ((unaff_r5[0xb9] != (CookCommandBar)0x0) || (uVar1 != (byte)unaff_r5[0xa8])) {
    unaff_r5[0xa8] = SUB41(uVar1,0);
    piVar6 = *(int **)(unaff_r5 + 0xa4);
    pcVar12 = *(code **)(*piVar6 + 0x44);
    String::valueOf((int)&stack0x000000b0);
    (*pcVar12)(piVar6,&stack0x000000b0);
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
  iVar2 = 0x7a;
  this_00 = *(PackedImage **)(*(int *)(unaff_r5 + 0x74) + DAT_000e8690);
LAB_000e8654:
  pCVar7 = (CImage *)PackedImage::getImage(this_00,iVar2,false);
  ImageButton::setImageAndResize(this_01,pCVar7);
  FUN_000e879e();
  return;
}


