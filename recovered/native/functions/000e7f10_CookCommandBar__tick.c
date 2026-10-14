/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7f10 CookCommandBar::tick */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CookCommandBar::tick(long) */

void CookCommandBar::tick(long param_1)

{
  int iVar1;
  uint uVar2;
  String *this;
  undefined4 uVar3;
  undefined4 uVar4;
  Recipe *pRVar5;
  ulong uVar6;
  uint uVar7;
  PackedImage *this_00;
  CImage *pCVar8;
  uchar uVar9;
  long lVar10;
  long lVar11;
  ConfirmDialog *pCVar12;
  int *piVar13;
  int iVar14;
  NoticeDialog *pNVar15;
  FoodStack *pFVar16;
  int iVar17;
  code *pcVar18;
  ImageButton *this_01;
  ZombieCafe *this_02;
  int iVar19;
  float extraout_s0;
  float extraout_s0_00;
  float fVar20;
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
  float fVar21;
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  StringUtil aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  StringUtil aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::tick(param_1);
  piVar13 = *(int **)(param_1 + 0xac);
  iVar19 = DAT_000e829c + 0xe7f28;
  if (piVar13 != (int *)0x0) {
    if (((char)piVar13[1] != '\0') && (iVar1 = (**(code **)(*piVar13 + 0x1c))(piVar13), iVar1 == 0))
    {
      FUN_000e8736();
    }
    iVar14 = *(int *)(param_1 + 0xac);
    lVar11 = *(long *)(iVar14 + 0xc);
    uVar2 = *(uint *)(iVar14 + 0x14);
    lVar10 = *(long *)(iVar14 + 8);
    iVar1 = __aeabi_ldivmod(uVar2 << 0x10,((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10,
                            *(int *)(iVar14 + 0x10),*(int *)(iVar14 + 0x10) >> 0x1f);
    iVar1 = CapcomMath::interpolatePoints(lVar10,lVar11,iVar1,*(int *)(iVar14 + 0x18));
    (**(code **)(*(int *)param_1 + 0x14))(param_1,iVar1 >> 0x10,(int)(short)iVar1);
    iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x1c))();
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        uVar9 = '\x02';
LAB_000e7fa0:
        setState((CookCommandBar *)param_1,uVar9);
      }
      else if (*(char *)(param_1 + 0xb0) == '\x03') {
        uVar9 = '\0';
        goto LAB_000e7fa0;
      }
      if (*(int **)(param_1 + 0xac) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xac) + 4))();
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  if (1 < *(byte *)(param_1 + 0xb0) - 1) {
    FUN_000e879e();
  }
  if (*(char *)(*(int *)(param_1 + 0x84) + 0x2e) == '\0') goto LAB_000e831a;
  this_02 = *(ZombieCafe **)(param_1 + 0x74);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_02);
  if (iVar1 != 0) {
    iVar1 = *(int *)(this_02 + DAT_000e82a0);
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x60),iVar1 >> 0x10,(int)(short)iVar1,
                       extraout_s0,extraout_s1);
    if (iVar1 == 0) {
      fVar20 = extraout_s0_00;
      fVar21 = extraout_s1_00;
      if ((*(ZCImageButton **)(param_1 + 100))[0x86] != (ZCImageButton)0x0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x74) + DAT_000e82a0);
        uVar3 = 0x3f800000;
        iVar1 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 100),iVar1 >> 0x10,(int)(short)iVar1,
                           extraout_s0_00,extraout_s1_00);
        fVar20 = extraout_s0_01;
        fVar21 = extraout_s1_01;
        if (iVar1 != 0) {
          ZombieCafe::playEffect(*(int *)(param_1 + 0x74),extraout_s0_01);
          iVar1 = Stove::isBurned(*(Stove **)(param_1 + 0x84));
          if (iVar1 == 0) {
            pCVar12 = *(ConfirmDialog **)(param_1 + 0x78);
            String::String(aSStack_b8,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + DAT_000e82a8) * 8));
            String::String(aSStack_b0,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + DAT_000e82ac) * 8));
            String::String(aSStack_a8,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + DAT_000e82b0) * 8));
            ConfirmDialog::show(pCVar12,aSStack_b8,aSStack_b0,aSStack_a8,
                                *(undefined4 *)(iVar19 + DAT_000e82b4),param_1);
            String::~String(aSStack_a8);
            String::~String(aSStack_b0);
            String::~String(aSStack_b8);
          }
          else {
            pcVar18 = *(code **)(param_1 + 0xc4);
            if (pcVar18 != (code *)0x0) {
              (*pcVar18)(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x84),
                         (undefined4 *)(param_1 + 200),pcVar18,uVar3);
            }
          }
          goto LAB_000e8322;
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x74) + DAT_000e87a4);
      uVar3 = 0x3f800000;
      iVar14 = ZCImageButton::contains
                         (*(ZCImageButton **)(param_1 + 0x68),iVar1 >> 0x10,(int)(short)iVar1,fVar20
                          ,fVar21);
      iVar1 = DAT_000e82a4;
      if (iVar14 != 0) {
        iVar14 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + DAT_000e82a4),'7');
        if (iVar14 != 0) {
          fVar20 = (float)TutorialSystem::triggerEvent
                                    (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + iVar1),'2',true
                                    );
          iVar1 = 1;
          if (*(char *)(param_1 + 0xb9) == '\0') {
            pFVar16 = *(FoodStack **)(param_1 + 0x88);
            iVar1 = __divsi3(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x70),1000,
                             (undefined4 *)(param_1 + 0x88),*(int *)(param_1 + 0x84),uVar3);
            pRVar5 = (Recipe *)FoodStack::getRecipe(pFVar16);
            iVar1 = Recipe::getFinishToxinCost(pRVar5,(uchar)pFVar16[8],iVar1);
            fVar20 = extraout_s0_02;
          }
          ZombieCafe::playEffect(*(int *)(param_1 + 0x74),fVar20);
          iVar14 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x74));
          if (iVar14 < iVar1) {
            pNVar15 = *(NoticeDialog **)(param_1 + 0x7c);
            String::String(aSStack_68,(char *)(_DAT_000e82c8 + 0xe820e));
            String::String(aSStack_60,(char *)(_DAT_000e82cc + 0xe8218));
            NoticeDialog::show(pNVar15,aSStack_68,aSStack_60,0,0);
            String::~String(aSStack_60);
            this = aSStack_68;
          }
          else {
            pCVar12 = *(ConfirmDialog **)(param_1 + 0x78);
            String::String(aSStack_a0,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + _DAT_000e82b8) * 8));
            String::valueOf((int)aSStack_98);
            String::operator+(aSStack_90,aSStack_a0,aSStack_98);
            String::String(aSStack_88,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + _DAT_000e82bc) * 8));
            String::operator+(aSStack_80,aSStack_90,aSStack_88);
            String::String(aSStack_78,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + _DAT_000e82c0) * 8));
            String::String(aSStack_70,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                           **(int **)(iVar19 + DAT_000e82b0) * 8));
            ConfirmDialog::show(pCVar12,aSStack_80,aSStack_78,aSStack_70,
                                *(undefined4 *)(iVar19 + _DAT_000e82c4),param_1);
            String::~String(aSStack_70);
            String::~String(aSStack_78);
            String::~String(aSStack_80);
            String::~String(aSStack_88);
            String::~String(aSStack_90);
            String::~String(aSStack_98);
            this = aSStack_a0;
          }
          String::~String(this);
        }
        goto LAB_000e832a;
      }
      fVar20 = extraout_s0_05;
      fVar21 = extraout_s1_03;
      if ((*(int *)(param_1 + 0xbc) == 0) ||
         (iVar1 = *(int *)(*(int *)(param_1 + 0x74) + DAT_000e82a0),
         iVar1 = ZCImageButton::contains
                           (*(ZCImageButton **)(param_1 + 0x6c),iVar1 >> 0x10,(int)(short)iVar1,
                            extraout_s0_05,extraout_s1_03), fVar20 = extraout_s0_03,
         fVar21 = extraout_s1_02, iVar1 == 0)) {
        if (*(int *)(param_1 + 0xcc) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x74) + _DAT_000e8664);
          uVar3 = 0x3f800000;
          iVar1 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0x70),iVar1 >> 0x10,(int)(short)iVar1,
                             fVar20,fVar21);
          if (iVar1 != 0) {
            ZombieCafe::playEffect(*(int *)(param_1 + 0x74),extraout_s0_04);
            iVar1 = *(int *)(param_1 + 0x74);
            *(undefined1 *)(iVar1 + DAT_000e8668) = 1;
            pcVar18 = *(code **)(param_1 + 0xcc);
            (*pcVar18)(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x84),iVar1,pcVar18
                       ,uVar3);
            if (*(char *)(*(int *)(param_1 + 0x84) + 0x2e) == '\0') {
LAB_000e831a:
              close((CookCommandBar *)param_1);
              FUN_000e879e();
              return;
            }
            goto LAB_000e832a;
          }
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x74) + DAT_000e87a4);
        iVar1 = ScreenElement::contains((ScreenElement *)param_1,iVar1 >> 0x10,(int)(short)iVar1);
        if (iVar1 == 0) goto LAB_000e832a;
      }
      else {
        ZombieCafe::playEffect(*(int *)(param_1 + 0x74),extraout_s0_03);
        (**(code **)(param_1 + 0xbc))
                  (*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x84));
        iVar1 = DAT_000e82a4;
        *(int *)(*(int *)(param_1 + 0x74) + 0x860) = *(int *)(*(int *)(param_1 + 0x74) + 0x860) + 1;
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + iVar1),'\x04');
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + iVar1),',',true);
      }
    }
    else {
      fVar20 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + DAT_000e82a4),'2',
                                 true);
      ZombieCafe::playEffect(*(int *)(param_1 + 0x74),fVar20);
      close((CookCommandBar *)param_1);
    }
LAB_000e8322:
    *(undefined1 *)(*(int *)(param_1 + 0x74) + DAT_000e8668) = 1;
  }
LAB_000e832a:
  uVar2 = Stove::isBurned(*(Stove **)(param_1 + 0x84));
  __mulsf3(*(undefined4 *)(**(int **)(*(int *)(param_1 + 0x74) + 0x590) + 0xb30),DAT_000e866c);
  __fixsfsi();
  uVar3 = __floatsisf();
  uVar3 = __divsf3(uVar3,DAT_000e866c);
  iVar1 = *(int *)(param_1 + 0x84);
  __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 0x38) + 0x60),DAT_000e866c);
  __fixsfsi();
  uVar4 = __floatsisf();
  uVar4 = __divsf3(uVar4,DAT_000e866c);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar3 = __subsf3(uVar3,0x3f800000);
  pFVar16 = *(FoodStack **)(iVar1 + 100);
  pRVar5 = (Recipe *)FoodStack::getRecipe(pFVar16);
  iVar1 = Recipe::getCookTimeSeconds(pRVar5,(uchar)pFVar16[8]);
  iVar17 = *(int *)(param_1 + 0x84);
  iVar14 = __divsi3(*(undefined4 *)(iVar17 + 0x70),DAT_000e8670);
  uVar4 = __floatsisf(iVar1 + iVar14);
  uVar3 = __subsf3(0x40000000,uVar3);
  __mulsf3(uVar4,uVar3);
  uVar6 = __fixsfsi();
  if (((uVar2 == 0) && (*(int *)(iVar17 + 0x7c) == 0)) && (uVar6 != 0)) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(char *)(param_1 + 0xb8) = '\x01';
      piVar13 = *(int **)(param_1 + 0x9c);
      pcVar18 = *(code **)(*piVar13 + 0x44);
      StringUtil::createTimeString(aSStack_58,uVar6,'\x02');
      String::String(aSStack_50,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                     **(int **)(iVar19 + DAT_000e8674) * 8));
      String::operator+(aSStack_48,aSStack_58,aSStack_50);
      (*pcVar18)(piVar13,aSStack_48);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      String::~String((String *)aSStack_58);
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))(*(int **)(param_1 + 0x9c),DAT_000e8678);
    }
LAB_000e84f8:
    if (((int)uVar6 < 1) || (uVar2 != 0)) {
LAB_000e8504:
      (**(code **)(**(int **)(param_1 + 100) + 0x20))(*(int **)(param_1 + 100),uVar2);
      if (*(short *)(*(int *)(param_1 + 0x84) + 0x84) == 0) {
        piVar13 = *(int **)(param_1 + 0x6c);
        pcVar18 = *(code **)(*piVar13 + 0x20);
        uVar7 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + DAT_000e8688),'\x05');
      }
      else {
        piVar13 = *(int **)(param_1 + 0x70);
        pcVar18 = *(code **)(*piVar13 + 0x20);
        uVar7 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(param_1 + 0x74) + DAT_000e8688),'\x05');
      }
      if (uVar7 != 0) {
        uVar7 = (uVar2 ^ 1) & 0xff;
      }
      (*pcVar18)(piVar13,uVar7);
      if (uVar2 != 0) {
        if (*(char *)(param_1 + 0xb9) != '\0') {
          FUN_000e879e();
          return;
        }
        *(char *)(param_1 + 0xb9) = '\x01';
        *(undefined1 *)(param_1 + 0xa8) = 1;
        piVar13 = *(int **)(param_1 + 0xa4);
        pcVar18 = *(code **)(*piVar13 + 0x44);
        String::String(aSStack_28,(char *)(DAT_000e868c + 0xe8586));
        (*pcVar18)(piVar13,aSStack_28);
        String::~String(aSStack_28);
        (**(code **)(**(int **)(param_1 + 0x68) + 0x20))(*(int **)(param_1 + 0x68),1);
        piVar13 = *(int **)(*(int *)(param_1 + 0x68) + 0x60);
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 4))();
          *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x60) = 0;
        }
        this_01 = *(ImageButton **)(param_1 + 0x68);
        iVar19 = 0x83;
        this_00 = *(PackedImage **)(*(int *)(param_1 + 0x74) + DAT_000e8690);
        goto LAB_000e8654;
      }
    }
  }
  else {
    if ((uVar6 == *(ulong *)(param_1 + 0xb4)) && (*(byte *)(param_1 + 0xb9) == uVar2))
    goto LAB_000e84f8;
    *(undefined1 *)(param_1 + 0xb8) = 0;
    piVar13 = *(int **)(param_1 + 0x9c);
    (**(code **)(*piVar13 + 0x24))(piVar13,_DAT_000e867c);
    *(ulong *)(param_1 + 0xb4) = uVar6;
    piVar13 = *(int **)(param_1 + 0x9c);
    if (uVar2 != 0) {
      pcVar18 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_40,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                     **(int **)(iVar19 + _DAT_000e8680) * 8));
      (*pcVar18)(piVar13,aSStack_40);
      String::~String(aSStack_40);
      goto LAB_000e84f8;
    }
    pcVar18 = *(code **)(*piVar13 + 0x44);
    if ((int)uVar6 < 1) {
      String::String(aSStack_30,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x4b0) + 8) +
                     **(int **)(iVar19 + _DAT_000e8684) * 8));
      (*pcVar18)(piVar13,aSStack_30);
      String::~String(aSStack_30);
      (**(code **)(**(int **)(param_1 + 0x68) + 0x20))(*(int **)(param_1 + 0x68),0);
      goto LAB_000e8504;
    }
    StringUtil::createTimeString(aSStack_38,uVar6,'\x02');
    (*pcVar18)(piVar13,aSStack_38);
    String::~String((String *)aSStack_38);
  }
  pFVar16 = *(FoodStack **)(param_1 + 0x88);
  iVar19 = __divsi3(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x70),1000);
  pRVar5 = (Recipe *)FoodStack::getRecipe(pFVar16);
  uVar2 = Recipe::getFinishToxinCost(pRVar5,(uchar)pFVar16[8],iVar19);
  if ((*(char *)(param_1 + 0xb9) != '\0') || (uVar2 != *(byte *)(param_1 + 0xa8))) {
    *(char *)(param_1 + 0xa8) = (char)uVar2;
    piVar13 = *(int **)(param_1 + 0xa4);
    pcVar18 = *(code **)(*piVar13 + 0x44);
    String::valueOf((int)aSStack_20);
    (*pcVar18)(piVar13,aSStack_20);
    String::~String(aSStack_20);
  }
  if (*(char *)(param_1 + 0xb9) == '\0') {
    FUN_000e879e();
    return;
  }
  *(char *)(param_1 + 0xb9) = '\0';
  (**(code **)(**(int **)(param_1 + 0x68) + 0x20))(*(int **)(param_1 + 0x68),0);
  piVar13 = *(int **)(*(int *)(param_1 + 0x68) + 0x60);
  if (piVar13 != (int *)0x0) {
    (**(code **)(*piVar13 + 4))();
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x60) = 0;
  }
  this_01 = *(ImageButton **)(param_1 + 0x68);
  iVar19 = 0x7a;
  this_00 = *(PackedImage **)(*(int *)(param_1 + 0x74) + DAT_000e8690);
LAB_000e8654:
  pCVar8 = (CImage *)PackedImage::getImage(this_00,iVar19,false);
  ImageButton::setImageAndResize(this_01,pCVar8);
  FUN_000e879e();
  return;
}


