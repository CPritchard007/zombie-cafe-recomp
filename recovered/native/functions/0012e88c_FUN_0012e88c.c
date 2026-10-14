/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012e88c FUN_0012e88c */

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

void FUN_0012e88c(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  Furniture *this;
  CharacterInstance *pCVar4;
  StatusNote *pSVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  TutorialSystem *this_00;
  LotteryDialog *this_01;
  String *this_02;
  byte bVar16;
  uchar uVar17;
  char cVar18;
  undefined4 uVar19;
  int *piVar20;
  NoticeDialog *pNVar21;
  int unaff_r4;
  GameStateCafe *pGVar22;
  Cafe *pCVar23;
  ZombieCafe *pZVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  char *pcVar27;
  int *piVar28;
  GameStateCafe *unaff_r5;
  CharacterInstance *pCVar29;
  ConfirmDialog *pCVar30;
  int unaff_r7;
  float fVar31;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float __x;
  float __x_00;
  undefined8 uVar32;
  float extraout_s1;
  undefined1 *in_stack_00000000;
  int in_stack_00000020;
  
  pCVar29 = DAT_0012ebb8;
  uVar32 = CONCAT44(param_2,param_1);
  if (*(short *)(unaff_r5 + 0x16c) == 0) {
    uVar32 = FUN_0012fe3e();
  }
  iVar3 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x170),*(long *)(pCVar29 + unaff_r4),
                     (float)uVar32,(float)((ulonglong)uVar32 >> 0x20));
  if (iVar3 == 0) {
    FUN_0012fe3e();
  }
  *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012ebbc);
  this = *(Furniture **)(unaff_r5 + 0x44);
  if (*(char *)(*(int *)(this + 0x38) + 0x44) == '\x04') {
    bVar16 = (char)this[0x34] + 1U & 3;
  }
  else {
    bVar16 = (byte)this[0x34] ^ 1;
  }
  Furniture::setOrientation(this,bVar16);
  iVar3 = *(int *)(unaff_r5 + 0xc);
  fVar31 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar3,fVar31);
  FUN_0012f41e();
  iVar3 = (**(code **)(*(int *)pCVar29 + 0x14))(pCVar29);
  if (iVar3 == 3) {
    pCVar4 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar4 == pCVar29) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(pCVar29 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar3 = (**(code **)(*(int *)pCVar29 + 0x20))(pCVar29);
    if ((iVar3 == 1) &&
       (iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar29 + 0x8c) + 0x40),0), iVar3 != 0)) {
      FUN_0012fe5e();
    }
    GameStateCafe::select(unaff_r5,pCVar29);
    Store::close(*(Store **)(unaff_r5 + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    pGVar22 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar22);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar22,pCVar29);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    iVar3 = (**(code **)(*(int *)pCVar29 + 0x20))(pCVar29);
    if (iVar3 == 1) {
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar3 != 0) {
        uVar8 = CharacterCommandBar::addInfectButton
                          (*(CharacterCommandBar **)pGVar22,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar8;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'L',true);
      }
      iVar3 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar29 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar31 = (float)CapcomMath::random(8);
      }
      else {
        fVar31 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar3,fVar31);
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\n');
      if (iVar3 != 0) {
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
      }
    }
    else {
      if (iVar3 != 0) {
        if (iVar3 != 2) {
          FUN_0012eca0();
          return;
        }
        CharacterInstance::groan(pCVar29);
        if (*(char *)(*(int *)(pCVar29 + 0x8c) + 0x44) == '\x05') {
          if (*(StatusNote **)(pCVar29 + 0x30) != (StatusNote *)0x0) {
            Cafe::removeStatusNote(*(Cafe **)(unaff_r5 + 0x14),*(StatusNote **)(pCVar29 + 0x30));
            if (*(int **)(pCVar29 + 0x30) != (int *)0x0) {
              (**(code **)(**(int **)(pCVar29 + 0x30) + 4))();
              *(undefined4 *)(pCVar29 + 0x30) = 0;
            }
          }
          CharacterInstance::stopTasks(pCVar29);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'=',true);
          Quest::runQuest(*(int *)(*(int *)(unaff_r5 + 0xc) + 0x40),0x2e,(int *)0xffffffff);
        }
        pGVar22 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar22,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        if (*(char *)(*(int *)(pCVar29 + 0x8c) + 0x44) == '\x06') {
          CharacterCommandBar::addReviveButton
                    (*(CharacterCommandBar **)pGVar22,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
          FUN_0012eaea();
          return;
        }
        uVar8 = CharacterCommandBar::addHealButton
                          (*(CharacterCommandBar **)pGVar22,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x114) = uVar8;
        if (*(char *)(*(int *)(pCVar29 + 0x8c) + 0x44) == '\x03') {
          CharacterCommandBar::addWorkButton
                    (*(CharacterCommandBar **)pGVar22,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5);
        }
        else {
          uVar8 = CharacterCommandBar::addRestButton
                            (*(CharacterCommandBar **)pGVar22,
                             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                             unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x110) = uVar8;
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
        iVar3 = *(int *)(unaff_r5 + 0xc);
        if (*(int *)(iVar3 + 0x680) < 4) {
          FUN_0012fe72();
        }
        iVar3 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar3 + DAT_0012ebc0),']');
        if (iVar3 != 0) {
          FUN_0012fe72();
        }
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'^',true);
        CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0xac));
        if (pCVar29[0xc6] == (CharacterInstance)0x0) {
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar29[0xc6] = (CharacterInstance)0x0;
        FUN_0012eca0();
        return;
      }
      iVar3 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar29 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar31 = (float)CapcomMath::random(8);
      }
      else {
        fVar31 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar3,fVar31);
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x16');
      if (iVar3 != 0) {
        pGVar22 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar22,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef18),unaff_r5);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar22,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef1c),unaff_r5);
        if (unaff_r5[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar22,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef20),unaff_r5);
        }
      }
      if (pCVar29[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar29[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar3 == 1) {
    uVar12 = *(byte *)(*(int *)(pCVar29 + 0x38) + 0x44) - 1;
    if (uVar12 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar12] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar29 + 0x42) == 0) {
      sVar1 = *(short *)(pCVar29 + 0x44);
      if (0 < sVar1) {
        iVar3 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
        fVar31 = extraout_s0;
        if (iVar3 == 0) {
          pCVar23 = *(Cafe **)(unaff_r5 + 0x14);
          String::valueOf((int)&stack0x00000198);
          pSVar5 = (StatusNote *)operator_new(0x30);
          in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f62c);
          StatusNote::StatusNote(pSVar5,pCVar29,1,&stack0x00000198);
          Cafe::addStatusNote(pCVar23,pSVar5);
          String::~String((String *)&stack0x00000198);
          fVar31 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),(int)sVar1);
        }
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar31);
        pCVar29 = pCVar29 + 6;
        goto LAB_0012f310;
      }
    }
    else {
      *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) =
           *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) + (int)*(short *)(pCVar29 + 0x42);
      pCVar23 = *(Cafe **)(unaff_r5 + 0x14);
      String::valueOf((int)&stack0x00000190);
      pSVar5 = (StatusNote *)operator_new(0x30);
      in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f2a4);
      StatusNote::StatusNote(pSVar5,pCVar29,0,&stack0x00000190);
      Cafe::addStatusNote(pCVar23,pSVar5);
      fVar31 = (float)String::~String((String *)&stack0x00000190);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar31);
      pCVar29 = pCVar29 + 4;
LAB_0012f310:
      *(undefined2 *)(pCVar29 + 0x3e) = 0;
    }
    if (*(int *)(unaff_r5 + 0x54) == 0) {
      FUN_0012f41e();
      return;
    }
  }
  else if ((iVar3 == 2) &&
          (iVar6 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar3 = DAT_0012f634, iVar6 != 0))
  {
    iVar6 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar6 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar7 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar3),'Q');
    if (iVar7 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar31 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar3),'\x04',true)
      ;
      in_stack_00000000 = (undefined1 *)iVar6;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,3,fVar31,false);
      FUN_0012f41e();
      return;
    }
  }
  pZVar24 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar3 = ZombieCafe::unhandledTouching(pZVar24);
  if ((iVar3 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar24 + 0x4b8) != 0)))) {
    iVar3 = ZombieCafe::touchWasPinch(pZVar24);
    if (iVar3 != 0) {
      uVar19 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar24 + DAT_0012f63c),*(undefined4 *)(pZVar24 + 0x4c0));
      iVar3 = CapcomApp::getInstance();
      pZVar24 = *(ZombieCafe **)(iVar3 + 4);
      uVar8 = ZombieCafe::getCafeZoomParam(pZVar24,extraout_s0_00,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar8;
      iVar3 = __aeabi_fcmpeq(uVar19,uVar8);
      if (iVar3 == 0) {
        lVar9 = *(long *)(unaff_r5 + 0x1e0);
        lVar10 = CFPoint::subtract(*(long *)(pZVar24 + 0x4b8),lVar9);
        lVar11 = CFPoint::multiplyf(lVar10,extraout_s0_01);
        lVar10 = CFPoint::subtract(lVar11,lVar10);
        uVar8 = CFPoint::subtract(lVar9,lVar10);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar8;
      }
    }
    iVar3 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar3 + DAT_0012f644)) {
      uVar8 = __floatsisf((*(int *)(iVar3 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar3 + DAT_0012f648) >> 0x10));
      iVar6 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar8;
      uVar8 = __floatsisf((int)*(short *)(iVar3 + 0x4b8) - (int)*(short *)(iVar3 + iVar6));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar8;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar9 = *(long *)(unaff_r5 + 0x1e0);
  uVar12 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar3 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar12 = CFPoint::add(lVar9,iVar3 << 0x10 | uVar12 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar12;
  iVar6 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar3 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar25 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar8 = __floatsisf(iVar6 >> 0x10);
  uVar8 = __mulsf3(uVar8,uVar25);
  ceilf(__x);
  uVar19 = __floatsisf((int)(short)iVar6);
  uVar19 = __mulsf3(uVar19,uVar25);
  ceilf(__x_00);
  uVar13 = __floatsisf((int)(short)iVar3);
  __mulsf3(uVar13,uVar25);
  sVar1 = __fixsfsi();
  uVar13 = __floatsisf(iVar3 >> 0x10);
  __mulsf3(uVar13,uVar25);
  uVar14 = __fixsfsi();
  sVar2 = __fixsfsi(uVar19);
  uVar15 = __fixsfsi(uVar8);
  iVar3 = -((int)uVar12 >> 0x10);
  if (iVar3 < (short)uVar14) {
    uVar12 = (uVar14 & 0xffff) * -0x10000 | uVar12 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar12;
  }
  else {
    uVar14 = ((uVar14 & 0xffff) + (uVar15 & 0xffff)) - 1;
    iVar6 = (int)(short)uVar14 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar6 != (int)uVar12 >> 0x10 && iVar6 <= iVar3) {
      uVar12 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar14 & 0xffff)) * 0x10000 |
               uVar12 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar12 = *(uint *)(unaff_r5 + 0x1e0);
  iVar3 = -(int)(short)uVar12;
  if (iVar3 < sVar1) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar1 | uVar12 & 0xffff0000;
  }
  else {
    sVar1 = sVar2 + -1 + sVar1;
    iVar6 = (int)sVar1 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar6 != (int)(short)uVar12 && iVar6 <= iVar3) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar1) | uVar12 & 0xffff0000
      ;
    }
  }
  uVar13 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar26 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar8 = __floatsisf(in_stack_00000020);
  uVar19 = __mulsf3(uVar8,*puVar26);
  iVar3 = __aeabi_fcmplt(uVar19,0x3f800000);
  uVar8 = uVar19;
  if (iVar3 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar6 = __mulsf3(uVar13,uVar8);
  *(int *)(unaff_r5 + 0x1d8) = iVar6;
  uVar8 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar3 == 0) {
    uVar19 = 0x3f800000;
  }
  uVar19 = __subsf3(0x3f800000,uVar19);
  iVar3 = __mulsf3(uVar8,uVar19);
  *(int *)(unaff_r5 + 0x1dc) = iVar3;
  iVar7 = __aeabi_fcmpge(iVar6,0);
  if (iVar7 == 0) {
    iVar6 = iVar6 + -0x80000000;
  }
  uVar8 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar6 = __aeabi_fcmplt(iVar6,uVar8);
  if (iVar6 != 0) {
    iVar6 = __aeabi_fcmpge(iVar3,0);
    if (iVar6 == 0) {
      iVar3 = iVar3 + -0x80000000;
    }
    iVar3 = __aeabi_fcmplt(iVar3,uVar8);
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  GameStateCafe::tickFiredZombies(unaff_r5);
  GameStateCafe::tickStaff(unaff_r5,in_stack_00000020);
  GameStateCafe::tickZombieWorkInterruptions(unaff_r5,in_stack_00000020);
  GameStateCafe::tickCustomers(unaff_r5,in_stack_00000020);
  GameStateCafe::tickLockerZombies(unaff_r5,in_stack_00000020);
  iVar3 = *(int *)(unaff_r5 + 0x54);
  if (iVar3 != 0) {
    iVar6 = *(int *)(unaff_r5 + 0xc);
    if (iVar3 == *(int *)(unaff_r5 + 0x18)) {
      this_00 = *(TutorialSystem **)(iVar6 + DAT_0012f9b8);
      uVar17 = '\x01';
    }
    else if ((iVar3 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar3 + 0x8c) + 4) == '\0')
            ) {
      uVar17 = '\r';
      this_00 = *(TutorialSystem **)(iVar6 + DAT_0012f9b8);
    }
    else {
      uVar17 = '\x10';
      this_00 = *(TutorialSystem **)(iVar6 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_00,uVar17,true);
  }
  iVar3 = ZombieCafe::IsMusicPlaying();
  if ((iVar3 == 0) &&
     (in_stack_00000020 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) - in_stack_00000020,
     *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) = in_stack_00000020, iVar3 = DAT_0012f9c0,
     in_stack_00000020 < 1)) {
    if (unaff_r5[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      unaff_r5[iVar3] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
      unaff_r5[iVar3] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) =
         **(undefined4 **)(unaff_r7 + DAT_0012f9cc);
  }
  uVar12 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar12 - 1 < 3) || (uVar12 == 7)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01' - (uVar12 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar18;
  iVar3 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar27 = (char *)(iVar3 + 0x12f82e);
    L_PrintLog(pcVar27,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar3 != 0)) {
      L_PrintLog(pcVar27,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_01 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_01 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar30 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar30,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            this_02 = (String *)&stack0x000001b8;
          }
          else {
            if (this_01[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_01);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar30 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar30,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            this_02 = (String *)&stack0x000001a0;
          }
          String::~String(this_02);
        }
      }
      else {
        L_PrintLog(pcVar27,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
      }
    }
  }
LAB_0012fa18:
  iVar3 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar3 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar3 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar3 == 0) {
    FUN_0012ff22();
    return;
  }
  iVar6 = DAT_0012fd60 + 0x12fa4c;
  iVar3 = *(int *)(DAT_0012fd60 + 0x12fac0);
  if (iVar3 != 0) {
    if (iVar3 != 3) {
      if (iVar3 != 2) {
        FUN_0012ff22();
        return;
      }
      puVar26 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
      in_stack_00000020 = 0;
      piVar20 = *(int **)(unaff_r7 + DAT_0012fd6c);
      piVar28 = puVar26 + 4;
      for (; in_stack_00000020 < *piVar20; in_stack_00000020 = in_stack_00000020 + 1) {
        in_stack_00000000 = (undefined1 *)puVar26[2];
        sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar26,puVar26[1]);
        if ((puVar26[1] == 2) && (0 < *piVar28)) {
          in_stack_00000000 = (undefined1 *)*piVar20;
          snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
          strcpy(&stack0x000001fc,(char *)piVar28[1]);
          in_stack_00000000 = &stack0x0000027c;
          snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                   (char *)(DAT_0012fd78 + 0x12faf0),*piVar28);
          ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar28);
          puVar26[1] = 0;
          puVar26[2] = 0;
          *piVar28 = 0;
          ZombieCafe::save();
          pNVar21 = *(NoticeDialog **)(unaff_r5 + 0xd0);
          String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c));
          Vector<String>::elementAt((int)&stack0x000001d0);
          in_stack_00000000 = (undefined1 *)0x0;
          NoticeDialog::show(pNVar21,&stack0x000001d8,&stack0x000001d0);
          String::~String((String *)&stack0x000001d0);
          String::~String((String *)&stack0x000001d8);
        }
        puVar26 = puVar26 + 6;
        piVar28 = piVar28 + 6;
      }
      if (0 < *piVar20) {
        GameStateCafe::gotEventValue
                  (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      }
      *piVar20 = 0;
      iVar6 = DAT_0012fd84 + 0x12fb80;
    }
    *(undefined4 *)(iVar6 + 0x74) = 4;
    FUN_0012ff22();
    return;
  }
  if (*(int *)(unaff_r5 + 0x1fc) == 0) {
    GameStateCafe::getEventValue
              (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
    uVar8 = 1;
  }
  else {
    if (*(int *)(unaff_r5 + 0x1fc) != 1) {
      FUN_0012ff22();
      return;
    }
    uVar8 = 4;
  }
  *(undefined4 *)(unaff_r5 + 0x1fc) = uVar8;
  FUN_0012ff22();
  return;
}


