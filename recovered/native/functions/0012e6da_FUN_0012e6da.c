/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012e6da FUN_0012e6da */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012ecc0) */
/* WARNING: Removing unreachable block (ram,0x0012ecc0) */
/* WARNING: Removing unreachable block (ram,0x0012f324) */
/* WARNING: Removing unreachable block (ram,0x0012f32a) */
/* WARNING: Removing unreachable block (ram,0x0012f334) */
/* WARNING: Removing unreachable block (ram,0x0012f36a) */
/* WARNING: Removing unreachable block (ram,0x0012f33c) */
/* WARNING: Removing unreachable block (ram,0x0012f358) */
/* WARNING: Removing unreachable block (ram,0x0012f34e) */
/* WARNING: Removing unreachable block (ram,0x0012f360) */
/* WARNING: Removing unreachable block (ram,0x0012f36e) */

void FUN_0012e6da(void)

{
  Furniture FVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  Furniture *pFVar5;
  undefined4 uVar6;
  CharacterInstance *pCVar7;
  StatusNote *pSVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  TutorialSystem *this;
  LotteryDialog *this_00;
  String *this_01;
  byte bVar18;
  uchar uVar19;
  char cVar20;
  Furniture *pFVar21;
  code *pcVar22;
  undefined4 uVar23;
  NoticeDialog *pNVar24;
  ZombieCafe *unaff_r4;
  GameStateCafe *pGVar25;
  Cafe *pCVar26;
  ZombieCafe *pZVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  char *pcVar30;
  int *piVar31;
  GameStateCafe *unaff_r5;
  int *piVar32;
  CharacterInstance *pCVar33;
  ConfirmDialog *pCVar34;
  int unaff_r7;
  float extraout_s0;
  float fVar35;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float __x;
  float __x_00;
  undefined8 uVar36;
  float extraout_s1;
  undefined1 *in_stack_00000000;
  int in_stack_00000020;
  
  if ((int)**(short **)(unaff_r7 + DAT_0012e7f4) < *(int *)(unaff_r4 + DAT_0012e7f8)) {
    FUN_0012fe14();
  }
  iVar4 = ZombieCafe::touchWasPinch(unaff_r4);
  if (iVar4 != 0) {
    FUN_0012fe14();
  }
  if (*(int *)(unaff_r4 + 0x4d0) <= **(int **)(unaff_r7 + DAT_0012e7fc)) {
    FUN_0012fe14();
  }
  iVar4 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(unaff_r4 + DAT_0012e800),'!');
  if (iVar4 == 0) {
    FUN_0012fe14();
  }
  GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  pFVar5 = (Furniture *)Cafe::pickCafeObject(*(long *)(unaff_r5 + 0x14));
  if (pFVar5 == (Furniture *)0x0) {
    FUN_0012f41e();
  }
  iVar4 = (**(code **)(*(int *)pFVar5 + 0x14))(pFVar5);
  fVar35 = extraout_s0;
  if (iVar4 != 1) {
    fVar35 = (float)FUN_0012fe28();
  }
  FVar1 = pFVar5[0x2e];
  pFVar21 = (Furniture *)(uint)(byte)FVar1;
  if (pFVar21 != (Furniture *)0x0) {
    fVar35 = (float)FUN_0012fe28();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar35);
  iVar9 = DAT_0012e7cc;
  *(Furniture **)(unaff_r5 + 0x40) = pFVar5;
  unaff_r5[iVar9] = SUB41(iVar4,0);
  *(undefined2 *)(unaff_r5 + 0x162) = *(undefined2 *)(pFVar5 + 0x2c);
  *(Furniture *)(unaff_r5 + 0x164) = pFVar5[0x34];
  Cafe::removeFurniture(*(Cafe **)(unaff_r5 + 0x14),pFVar5);
  if (*(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) == *(int *)(unaff_r5 + 0x40)) {
    *(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) = (int)pFVar21;
    pFVar5 = pFVar21;
  }
  for (iVar4 = 0; iVar4 < *(int *)(unaff_r5 + 0x20) + 1; iVar4 = iVar4 + 1) {
    puVar29 = (undefined4 *)(*(int *)(iVar4 * 4 + *(int *)(unaff_r5 + 0x24)) + 0x88);
    pFVar5 = (Furniture *)*puVar29;
    if (pFVar5 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar29 = 0;
    }
  }
  for (iVar4 = 0; iVar9 = DAT_0012ebb0, iVar4 < *(int *)(unaff_r5 + 0x2c) + 1; iVar4 = iVar4 + 1) {
    puVar29 = (undefined4 *)(*(int *)(iVar4 * 4 + *(int *)(unaff_r5 + 0x30)) + 0x88);
    pFVar5 = (Furniture *)*puVar29;
    if (pFVar5 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar29 = 0;
    }
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  unaff_r5[iVar9] = (GameStateCafe)0x2;
  fVar35 = (float)FUN_0012f41e();
  if (*(int *)(pFVar5 + 0x44) == 0) {
    fVar35 = (float)FUN_0012f41e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar35);
  iVar4 = DAT_0012ebb4;
  piVar32 = *(int **)(pFVar5 + 0x44);
  *(int **)(unaff_r5 + 0x40) = piVar32;
  *(Furniture *)(unaff_r5 + iVar4) = FVar1;
  *(Furniture **)(unaff_r5 + 0x48) = pFVar5;
  pcVar22 = *(code **)(*piVar32 + 0xc);
  uVar6 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  (*pcVar22)(piVar32,uVar6);
  *(undefined4 *)(pFVar5 + 0x44) = 0;
  iVar4 = DAT_0012ebb0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  *(Furniture *)(unaff_r5 + iVar4) = FVar1;
  uVar36 = FUN_0012f41e();
  pCVar33 = DAT_0012ebb8;
  if (*(short *)(unaff_r5 + 0x16c) == 0) {
    uVar36 = FUN_0012fe3e();
  }
  iVar4 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x170),*(long *)(pCVar33 + iVar4),(float)uVar36,
                     (float)((ulonglong)uVar36 >> 0x20));
  if (iVar4 == 0) {
    FUN_0012fe3e();
  }
  *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012ebbc);
  pFVar5 = *(Furniture **)(unaff_r5 + 0x44);
  if (*(char *)(*(int *)(pFVar5 + 0x38) + 0x44) == '\x04') {
    bVar18 = (char)pFVar5[0x34] + 1U & 3;
  }
  else {
    bVar18 = (byte)pFVar5[0x34] ^ 1;
  }
  Furniture::setOrientation(pFVar5,bVar18);
  iVar4 = *(int *)(unaff_r5 + 0xc);
  fVar35 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar4,fVar35);
  FUN_0012f41e();
  iVar4 = (**(code **)(*(int *)pCVar33 + 0x14))(pCVar33);
  if (iVar4 == 3) {
    pCVar7 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar7 == pCVar33) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(pCVar33 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar4 = (**(code **)(*(int *)pCVar33 + 0x20))(pCVar33);
    if ((iVar4 == 1) &&
       (iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar33 + 0x8c) + 0x40),0), iVar4 != 0)) {
      FUN_0012fe5e();
    }
    GameStateCafe::select(unaff_r5,pCVar33);
    Store::close(*(Store **)(unaff_r5 + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    pGVar25 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar25);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar25,pCVar33);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    iVar4 = (**(code **)(*(int *)pCVar33 + 0x20))(pCVar33);
    if (iVar4 == 1) {
      iVar4 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar4 != 0) {
        uVar6 = CharacterCommandBar::addInfectButton
                          (*(CharacterCommandBar **)pGVar25,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar6;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'L',true);
      }
      iVar4 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar33 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar35 = (float)CapcomMath::random(8);
      }
      else {
        fVar35 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar4,fVar35);
      iVar4 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\n');
      if (iVar4 != 0) {
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
      }
    }
    else {
      if (iVar4 != 0) {
        if (iVar4 != 2) {
          FUN_0012eca0();
          return;
        }
        CharacterInstance::groan(pCVar33);
        if (*(char *)(*(int *)(pCVar33 + 0x8c) + 0x44) == '\x05') {
          if (*(StatusNote **)(pCVar33 + 0x30) != (StatusNote *)0x0) {
            Cafe::removeStatusNote(*(Cafe **)(unaff_r5 + 0x14),*(StatusNote **)(pCVar33 + 0x30));
            if (*(int **)(pCVar33 + 0x30) != (int *)0x0) {
              (**(code **)(**(int **)(pCVar33 + 0x30) + 4))();
              *(undefined4 *)(pCVar33 + 0x30) = 0;
            }
          }
          CharacterInstance::stopTasks(pCVar33);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'=',true);
          Quest::runQuest(*(int *)(*(int *)(unaff_r5 + 0xc) + 0x40),0x2e,(int *)0xffffffff);
        }
        pGVar25 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar25,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        if (*(char *)(*(int *)(pCVar33 + 0x8c) + 0x44) == '\x06') {
          CharacterCommandBar::addReviveButton
                    (*(CharacterCommandBar **)pGVar25,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
          FUN_0012eaea();
          return;
        }
        uVar6 = CharacterCommandBar::addHealButton
                          (*(CharacterCommandBar **)pGVar25,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x114) = uVar6;
        if (*(char *)(*(int *)(pCVar33 + 0x8c) + 0x44) == '\x03') {
          CharacterCommandBar::addWorkButton
                    (*(CharacterCommandBar **)pGVar25,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5);
        }
        else {
          uVar6 = CharacterCommandBar::addRestButton
                            (*(CharacterCommandBar **)pGVar25,
                             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                             unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x110) = uVar6;
        }
        if (3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) {
          CharacterCommandBar::addPowerupButton
                    (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd8),unaff_r5);
        }
        if (3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) {
          CharacterCommandBar::addLockerButton
                    (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebdc),unaff_r5);
        }
        iVar4 = *(int *)(unaff_r5 + 0xc);
        if (*(int *)(iVar4 + 0x680) < 4) {
          FUN_0012fe72();
        }
        iVar4 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar4 + DAT_0012ebc0),']');
        if (iVar4 != 0) {
          FUN_0012fe72();
        }
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'^',true);
        CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0xac));
        if (pCVar33[0xc6] == (CharacterInstance)0x0) {
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar33[0xc6] = (CharacterInstance)0x0;
        FUN_0012eca0();
        return;
      }
      iVar4 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar33 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar35 = (float)CapcomMath::random(8);
      }
      else {
        fVar35 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar4,fVar35);
      iVar4 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x16');
      if (iVar4 != 0) {
        pGVar25 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar25,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef18),unaff_r5);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar25,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef1c),unaff_r5);
        if (unaff_r5[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar25,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef20),unaff_r5);
        }
      }
      if (pCVar33[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar33[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar4 == 1) {
    uVar14 = *(byte *)(*(int *)(pCVar33 + 0x38) + 0x44) - 1;
    if (uVar14 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar14] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar33 + 0x42) == 0) {
      sVar2 = *(short *)(pCVar33 + 0x44);
      if (0 < sVar2) {
        iVar4 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
        fVar35 = extraout_s0_00;
        if (iVar4 == 0) {
          pCVar26 = *(Cafe **)(unaff_r5 + 0x14);
          String::valueOf((int)&stack0x00000198);
          pSVar8 = (StatusNote *)operator_new(0x30);
          in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f62c);
          StatusNote::StatusNote(pSVar8,pCVar33,1,&stack0x00000198);
          Cafe::addStatusNote(pCVar26,pSVar8);
          String::~String((String *)&stack0x00000198);
          fVar35 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),(int)sVar2);
        }
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar35);
        pCVar33 = pCVar33 + 6;
        goto LAB_0012f310;
      }
    }
    else {
      *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) =
           *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) + (int)*(short *)(pCVar33 + 0x42);
      pCVar26 = *(Cafe **)(unaff_r5 + 0x14);
      String::valueOf((int)&stack0x00000190);
      pSVar8 = (StatusNote *)operator_new(0x30);
      in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f2a4);
      StatusNote::StatusNote(pSVar8,pCVar33,0,&stack0x00000190);
      Cafe::addStatusNote(pCVar26,pSVar8);
      fVar35 = (float)String::~String((String *)&stack0x00000190);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar35);
      pCVar33 = pCVar33 + 4;
LAB_0012f310:
      *(undefined2 *)(pCVar33 + 0x3e) = 0;
    }
    if (*(int *)(unaff_r5 + 0x54) == 0) {
      FUN_0012f41e();
      return;
    }
  }
  else if ((iVar4 == 2) &&
          (iVar9 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar4 = DAT_0012f634, iVar9 != 0))
  {
    iVar9 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar9 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar10 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar4),'Q');
    if (iVar10 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar35 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar4),'\x04',true)
      ;
      in_stack_00000000 = (undefined1 *)iVar9;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,3,fVar35,false);
      FUN_0012f41e();
      return;
    }
  }
  pZVar27 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar4 = ZombieCafe::unhandledTouching(pZVar27);
  if ((iVar4 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar27 + 0x4b8) != 0)))) {
    iVar4 = ZombieCafe::touchWasPinch(pZVar27);
    if (iVar4 != 0) {
      uVar23 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar27 + DAT_0012f63c),*(undefined4 *)(pZVar27 + 0x4c0));
      iVar4 = CapcomApp::getInstance();
      pZVar27 = *(ZombieCafe **)(iVar4 + 4);
      uVar6 = ZombieCafe::getCafeZoomParam(pZVar27,extraout_s0_01,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar6;
      iVar4 = __aeabi_fcmpeq(uVar23,uVar6);
      if (iVar4 == 0) {
        lVar11 = *(long *)(unaff_r5 + 0x1e0);
        lVar12 = CFPoint::subtract(*(long *)(pZVar27 + 0x4b8),lVar11);
        lVar13 = CFPoint::multiplyf(lVar12,extraout_s0_02);
        lVar12 = CFPoint::subtract(lVar13,lVar12);
        uVar6 = CFPoint::subtract(lVar11,lVar12);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar6;
      }
    }
    iVar4 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar4 + DAT_0012f644)) {
      uVar6 = __floatsisf((*(int *)(iVar4 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar4 + DAT_0012f648) >> 0x10));
      iVar9 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar6;
      uVar6 = __floatsisf((int)*(short *)(iVar4 + 0x4b8) - (int)*(short *)(iVar4 + iVar9));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar6;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar11 = *(long *)(unaff_r5 + 0x1e0);
  uVar14 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar4 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar14 = CFPoint::add(lVar11,iVar4 << 0x10 | uVar14 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar14;
  iVar9 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar4 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar28 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar6 = __floatsisf(iVar9 >> 0x10);
  uVar6 = __mulsf3(uVar6,uVar28);
  ceilf(__x);
  uVar23 = __floatsisf((int)(short)iVar9);
  uVar23 = __mulsf3(uVar23,uVar28);
  ceilf(__x_00);
  uVar15 = __floatsisf((int)(short)iVar4);
  __mulsf3(uVar15,uVar28);
  sVar2 = __fixsfsi();
  uVar15 = __floatsisf(iVar4 >> 0x10);
  __mulsf3(uVar15,uVar28);
  uVar16 = __fixsfsi();
  sVar3 = __fixsfsi(uVar23);
  uVar17 = __fixsfsi(uVar6);
  iVar4 = -((int)uVar14 >> 0x10);
  if (iVar4 < (short)uVar16) {
    uVar14 = (uVar16 & 0xffff) * -0x10000 | uVar14 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar14;
  }
  else {
    uVar16 = ((uVar16 & 0xffff) + (uVar17 & 0xffff)) - 1;
    iVar9 = (int)(short)uVar16 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar9 != (int)uVar14 >> 0x10 && iVar9 <= iVar4) {
      uVar14 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar16 & 0xffff)) * 0x10000 |
               uVar14 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar14 = *(uint *)(unaff_r5 + 0x1e0);
  iVar4 = -(int)(short)uVar14;
  if (iVar4 < sVar2) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar2 | uVar14 & 0xffff0000;
  }
  else {
    sVar2 = sVar3 + -1 + sVar2;
    iVar9 = (int)sVar2 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar9 != (int)(short)uVar14 && iVar9 <= iVar4) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar2) | uVar14 & 0xffff0000
      ;
    }
  }
  uVar15 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar29 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar6 = __floatsisf(in_stack_00000020);
  uVar23 = __mulsf3(uVar6,*puVar29);
  iVar4 = __aeabi_fcmplt(uVar23,0x3f800000);
  uVar6 = uVar23;
  if (iVar4 == 0) {
    uVar6 = 0x3f800000;
  }
  uVar6 = __subsf3(0x3f800000,uVar6);
  iVar9 = __mulsf3(uVar15,uVar6);
  *(int *)(unaff_r5 + 0x1d8) = iVar9;
  uVar6 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar4 == 0) {
    uVar23 = 0x3f800000;
  }
  uVar23 = __subsf3(0x3f800000,uVar23);
  iVar4 = __mulsf3(uVar6,uVar23);
  *(int *)(unaff_r5 + 0x1dc) = iVar4;
  iVar10 = __aeabi_fcmpge(iVar9,0);
  if (iVar10 == 0) {
    iVar9 = iVar9 + -0x80000000;
  }
  uVar6 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar9 = __aeabi_fcmplt(iVar9,uVar6);
  if (iVar9 != 0) {
    iVar9 = __aeabi_fcmpge(iVar4,0);
    if (iVar9 == 0) {
      iVar4 = iVar4 + -0x80000000;
    }
    iVar4 = __aeabi_fcmplt(iVar4,uVar6);
    if (iVar4 != 0) {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  GameStateCafe::tickFiredZombies(unaff_r5);
  GameStateCafe::tickStaff(unaff_r5,in_stack_00000020);
  GameStateCafe::tickZombieWorkInterruptions(unaff_r5,in_stack_00000020);
  GameStateCafe::tickCustomers(unaff_r5,in_stack_00000020);
  GameStateCafe::tickLockerZombies(unaff_r5,in_stack_00000020);
  iVar4 = *(int *)(unaff_r5 + 0x54);
  if (iVar4 != 0) {
    iVar9 = *(int *)(unaff_r5 + 0xc);
    if (iVar4 == *(int *)(unaff_r5 + 0x18)) {
      this = *(TutorialSystem **)(iVar9 + DAT_0012f9b8);
      uVar19 = '\x01';
    }
    else if ((iVar4 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar4 + 0x8c) + 4) == '\0')
            ) {
      uVar19 = '\r';
      this = *(TutorialSystem **)(iVar9 + DAT_0012f9b8);
    }
    else {
      uVar19 = '\x10';
      this = *(TutorialSystem **)(iVar9 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this,uVar19,true);
  }
  iVar4 = ZombieCafe::IsMusicPlaying();
  if ((iVar4 == 0) &&
     (in_stack_00000020 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) - in_stack_00000020,
     *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) = in_stack_00000020, iVar4 = DAT_0012f9c0,
     in_stack_00000020 < 1)) {
    if (unaff_r5[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      unaff_r5[iVar4] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
      unaff_r5[iVar4] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) =
         **(undefined4 **)(unaff_r7 + DAT_0012f9cc);
  }
  uVar14 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar14 - 1 < 3) || (uVar14 == 7)) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01' - (uVar14 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar20;
  iVar4 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar30 = (char *)(iVar4 + 0x12f82e);
    L_PrintLog(pcVar30,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar4 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar4 != 0)) {
      L_PrintLog(pcVar30,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_00 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_00 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar34 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar34,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            this_01 = (String *)&stack0x000001b8;
          }
          else {
            if (this_00[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_00);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar34 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar34,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            this_01 = (String *)&stack0x000001a0;
          }
          String::~String(this_01);
        }
      }
      else {
        L_PrintLog(pcVar30,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
      }
    }
  }
LAB_0012fa18:
  iVar4 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar4 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar4 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar4 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar4 == 0) {
    FUN_0012ff22();
    return;
  }
  iVar9 = DAT_0012fd60 + 0x12fa4c;
  iVar4 = *(int *)(DAT_0012fd60 + 0x12fac0);
  if (iVar4 != 0) {
    if (iVar4 != 3) {
      if (iVar4 != 2) {
        FUN_0012ff22();
        return;
      }
      puVar29 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
      in_stack_00000020 = 0;
      piVar32 = *(int **)(unaff_r7 + DAT_0012fd6c);
      piVar31 = puVar29 + 4;
      for (; in_stack_00000020 < *piVar32; in_stack_00000020 = in_stack_00000020 + 1) {
        in_stack_00000000 = (undefined1 *)puVar29[2];
        sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar29,puVar29[1]);
        if ((puVar29[1] == 2) && (0 < *piVar31)) {
          in_stack_00000000 = (undefined1 *)*piVar32;
          snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
          strcpy(&stack0x000001fc,(char *)piVar31[1]);
          in_stack_00000000 = &stack0x0000027c;
          snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                   (char *)(DAT_0012fd78 + 0x12faf0),*piVar31);
          ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar31);
          puVar29[1] = 0;
          puVar29[2] = 0;
          *piVar31 = 0;
          ZombieCafe::save();
          pNVar24 = *(NoticeDialog **)(unaff_r5 + 0xd0);
          String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c));
          Vector<String>::elementAt((int)&stack0x000001d0);
          in_stack_00000000 = (undefined1 *)0x0;
          NoticeDialog::show(pNVar24,&stack0x000001d8,&stack0x000001d0);
          String::~String((String *)&stack0x000001d0);
          String::~String((String *)&stack0x000001d8);
        }
        puVar29 = puVar29 + 6;
        piVar31 = piVar31 + 6;
      }
      if (0 < *piVar32) {
        GameStateCafe::gotEventValue
                  (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      }
      *piVar32 = 0;
      iVar9 = DAT_0012fd84 + 0x12fb80;
    }
    *(undefined4 *)(iVar9 + 0x74) = 4;
    FUN_0012ff22();
    return;
  }
  if (*(int *)(unaff_r5 + 0x1fc) == 0) {
    GameStateCafe::getEventValue
              (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
    uVar6 = 1;
  }
  else {
    if (*(int *)(unaff_r5 + 0x1fc) != 1) {
      FUN_0012ff22();
      return;
    }
    uVar6 = 4;
  }
  *(undefined4 *)(unaff_r5 + 0x1fc) = uVar6;
  FUN_0012ff22();
  return;
}


