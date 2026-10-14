/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012e8fe FUN_0012e8fe */

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

void FUN_0012e8fe(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  CleanupTask *this;
  StatusNote *pSVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  TutorialSystem *this_00;
  LotteryDialog *this_01;
  String *pSVar15;
  uchar uVar16;
  char cVar17;
  undefined4 uVar18;
  int *piVar19;
  NoticeDialog *pNVar20;
  GameStateCafe *pGVar21;
  TutorialArrow *this_02;
  Cafe *pCVar22;
  ZombieCafe *pZVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  char *pcVar26;
  int *piVar27;
  GameStateCafe *unaff_r5;
  CharacterInstance *unaff_r6;
  CharacterInstance *pCVar28;
  ConfirmDialog *pCVar29;
  int unaff_r7;
  float extraout_s0;
  float fVar30;
  float extraout_s0_00;
  float extraout_s0_01;
  float __x;
  float __x_00;
  float extraout_s1;
  undefined1 *in_stack_00000000;
  int in_stack_00000020;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e4;
  
  iVar3 = (**(code **)(*(int *)unaff_r6 + 0x14))(unaff_r6);
  if (iVar3 == 3) {
    pCVar28 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar28 == unaff_r6) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(unaff_r6 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar3 = (**(code **)(*(int *)unaff_r6 + 0x20))(unaff_r6);
    if ((iVar3 == 1) &&
       (iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0), iVar3 != 0)) {
      FUN_0012fe5e();
    }
    GameStateCafe::select(unaff_r5,unaff_r6);
    Store::close(*(Store **)(unaff_r5 + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    pGVar21 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar21);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar21,unaff_r6);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    iVar3 = (**(code **)(*(int *)unaff_r6 + 0x20))(unaff_r6);
    if (iVar3 == 1) {
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar3 != 0) {
        uVar7 = CharacterCommandBar::addInfectButton
                          (*(CharacterCommandBar **)pGVar21,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar7;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'L',true);
      }
      iVar3 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(unaff_r6 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar30 = (float)CapcomMath::random(8);
      }
      else {
        fVar30 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar3,fVar30);
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
        CharacterInstance::groan(unaff_r6);
        if (*(char *)(*(int *)(unaff_r6 + 0x8c) + 0x44) == '\x05') {
          if (*(StatusNote **)(unaff_r6 + 0x30) != (StatusNote *)0x0) {
            Cafe::removeStatusNote(*(Cafe **)(unaff_r5 + 0x14),*(StatusNote **)(unaff_r6 + 0x30));
            if (*(int **)(unaff_r6 + 0x30) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_r6 + 0x30) + 4))();
              *(undefined4 *)(unaff_r6 + 0x30) = 0;
            }
          }
          CharacterInstance::stopTasks(unaff_r6);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'=',true);
          Quest::runQuest(*(int *)(*(int *)(unaff_r5 + 0xc) + 0x40),0x2e,(int *)0xffffffff);
        }
        pGVar21 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar21,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        if (*(char *)(*(int *)(unaff_r6 + 0x8c) + 0x44) != '\x06') {
          uVar7 = CharacterCommandBar::addHealButton
                            (*(CharacterCommandBar **)pGVar21,
                             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                             unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x114) = uVar7;
          if (*(char *)(*(int *)(unaff_r6 + 0x8c) + 0x44) == '\x03') {
            CharacterCommandBar::addWorkButton
                      (*(CharacterCommandBar **)pGVar21,
                       *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5
                      );
          }
          else {
            uVar7 = CharacterCommandBar::addRestButton
                              (*(CharacterCommandBar **)pGVar21,
                               *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                               unaff_r5);
            *(undefined4 *)(unaff_r5 + 0x110) = uVar7;
          }
          if (3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) {
            CharacterCommandBar::addPowerupButton
                      (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd8),unaff_r5
                      );
          }
          if (3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) {
            CharacterCommandBar::addLockerButton
                      (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebdc),unaff_r5
                      );
          }
          iVar3 = *(int *)(unaff_r5 + 0xc);
          if (*(int *)(iVar3 + 0x680) < 4) {
            FUN_0012fe72();
          }
          iVar3 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(iVar3 + DAT_0012ebc0),']');
          if (iVar3 != 0) {
            FUN_0012fe72();
          }
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'^',true);
          CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0xac));
          if (unaff_r6[0xc6] != (CharacterInstance)0x0) {
            CharacterCommandBar::setInfoButtonNewIndicator
                      (SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
            unaff_r6[0xc6] = (CharacterInstance)0x0;
            FUN_0012eca0();
            return;
          }
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::addReviveButton
                  (*(CharacterCommandBar **)pGVar21,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
        FUN_0012eaea();
        return;
      }
      iVar3 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(unaff_r6 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar30 = (float)CapcomMath::random(8);
      }
      else {
        fVar30 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar3,fVar30);
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x16');
      if (iVar3 != 0) {
        pGVar21 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar21,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef18),unaff_r5);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar21,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef1c),unaff_r5);
        if (unaff_r5[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar21,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef20),unaff_r5);
        }
      }
      if (unaff_r6[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        unaff_r6[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar3 == 1) {
    iVar3 = *(int *)(unaff_r6 + 0x38);
    switch(*(undefined1 *)(iVar3 + 0x44)) {
    case 1:
      *(CharacterInstance **)(unaff_r5 + 0x50) = unaff_r6;
      if (unaff_r6[0x2e] == (CharacterInstance)0x0) {
        iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x05');
        if (iVar3 == 0) {
          FUN_0012fe82();
        }
        iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'!');
        if (iVar3 != 0) {
          FUN_0012fe82();
        }
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef24) = 1;
      }
      else if (((*(int *)(unaff_r5 + 0x54) == 0) ||
               (((iVar3 = Stove::isBurned((Stove *)unaff_r6), iVar3 == 0 &&
                 (iVar3 = Stove::isDoneCooking(*(Stove **)(unaff_r5 + 0x50)), iVar3 == 0)) &&
                ((*(int *)(*(int *)(unaff_r5 + 0x50) + 0x7c) != 0 ||
                 (iVar3 = CharacterInstance::getTaskTarget(*(CharacterInstance **)(unaff_r5 + 0x54))
                 , iVar3 == *(int *)(unaff_r5 + 0x50))))))) &&
              (iVar3 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'6')
              , iVar3 != 0)) {
        GameStateCafe::select(unaff_r5,*(Stove **)(unaff_r5 + 0x50));
        CookCommandBar::setStove(*(CookCommandBar **)(unaff_r5 + 0xb4),*(Stove **)(unaff_r5 + 0x50))
        ;
        CookCommandBar::open(*(CookCommandBar **)(unaff_r5 + 0xb4));
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'1',false);
        TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
        Storage::close(*(Storage **)(unaff_r5 + 0xbc));
        Store::close(*(Store **)(unaff_r5 + 0x84));
        CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r5 + 0xac));
        PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
        Cafe::select(*(Cafe **)(unaff_r5 + 0x14),(CafeObject *)unaff_r6);
      }
      if (*(int *)(*(int *)(unaff_r5 + 0x50) + 0x7c) != 0) {
        FUN_0012ff0e();
      }
      piVar19 = *(int **)(unaff_r5 + 0x54);
      if (piVar19 == (int *)0x0) {
        piVar19 = (int *)FUN_0012ff0e();
      }
      if ((piVar19 != *(int **)(unaff_r5 + 0x18)) &&
         (iVar3 = (**(code **)(*piVar19 + 0x20))(), iVar3 != 2)) {
        FUN_0012ff0e();
      }
      if (0 < *(int *)(*(int *)(*(int *)(unaff_r5 + 0x54) + 0x8c) + 0x50)) {
        FUN_0012ff0e();
      }
      iVar3 = DAT_0012ef14;
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x05');
      if (iVar5 == 0) {
        FUN_0012fec2();
      }
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar3),'!');
      if (iVar3 == 0) {
        FUN_0012f316();
        return;
      }
      FUN_0012fec2();
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x54));
      this = (CleanupTask *)operator_new(0x44);
      pCVar28 = *(CharacterInstance **)(unaff_r5 + 0x54);
      CleanupTask::CleanupTask
                (this,pCVar28,*(Cafe **)(unaff_r5 + 0x14),*(Furniture **)(unaff_r5 + 0x50));
      CharacterInstance::addTask(pCVar28,(Task *)this);
      iVar3 = (**(code **)(**(int **)(unaff_r5 + 0x54) + 0x20))();
      goto LAB_0012f0ec;
    case 2:
    case 3:
    case 0xb:
      goto switchD_0012ecc0_caseD_2;
    default:
      goto switchD_0012ecc0_caseD_4;
    case 8:
      goto switchD_0012ecc0_caseD_8;
    case 0xe:
      goto switchD_0012ecc0_caseD_e;
    case 0xf:
      if (*(int *)(iVar3 + 0x24) == DAT_0012f268) {
        Cafe::allCollectStart(*(Cafe **)(unaff_r5 + 0x14));
        FUN_0012f316();
        return;
      }
      FUN_0012f316();
      return;
    case 0x11:
      iVar3 = ZombieCafe::checkZombieFlowerEventLevel(*(ZombieCafe **)(unaff_r5 + 0xc));
      if (iVar3 != 0) {
        iVar3 = *(int *)(*(int *)(unaff_r6 + 0x38) + 0x24);
        if ((((((1 < (uint)(iVar3 + DAT_0012f274)) && (iVar3 + DAT_0012f278 != 0)) &&
              (iVar3 != 0x20c)) && ((iVar3 != DAT_0012f27c && (iVar3 != 0x228)))) &&
            (iVar3 != DAT_0012f280)) && ((iVar3 != DAT_0012f284 && (iVar3 != DAT_0012f288)))) {
          FUN_0012f316();
          return;
        }
        PlantCommandBar::open(*(PlantCommandBar **)(unaff_r5 + 0xb8));
        TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
        CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
        Store::close(*(Store **)(unaff_r5 + 0x84));
        Storage::close(*(Storage **)(unaff_r5 + 0xbc));
        CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r5 + 0xac));
        goto LAB_0012f086;
      }
      pNVar20 = *(NoticeDialog **)(unaff_r5 + 0xd0);
      String::String((String *)&stack0x00000170,(char *)(DAT_0012f26c + 0x12efd6));
      Vector<String>::elementAt((int)&stack0x00000178);
      iVar3 = 0;
      in_stack_00000000 = (undefined1 *)0x0;
      NoticeDialog::show(pNVar20,&stack0x00000170,&stack0x00000178);
      String::~String((String *)&stack0x00000178);
      pSVar15 = (String *)&stack0x00000170;
      goto LAB_0012f164;
    }
  }
  if ((iVar3 == 2) &&
     (iVar5 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar3 = DAT_0012f634, iVar5 != 0)) {
    iVar5 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar5 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar6 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar3),'Q');
    if (iVar6 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar30 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar3),'\x04',true)
      ;
      in_stack_00000000 = (undefined1 *)iVar5;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,3,fVar30,false);
      FUN_0012f41e();
      return;
    }
  }
  goto code_r0x0012f41e;
switchD_0012ecc0_caseD_e:
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((((1 < (uint)(iVar3 + DAT_0012f25c)) && (iVar3 + DAT_0012f260 != 0)) &&
      (iVar3 != DAT_0012f264)) && (((iVar3 != 0x1cc && (iVar3 != 0x1e4)) && (iVar3 != 0x240)))) {
    FUN_0012f316();
    return;
  }
  TombstoneCommandBar::setTombstone
            (*(TombstoneCommandBar **)(unaff_r5 + 0xc0),(Furniture *)unaff_r6);
  TombstoneCommandBar::open();
  CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
  Store::close(*(Store **)(unaff_r5 + 0x84));
  Storage::close(*(Storage **)(unaff_r5 + 0xbc));
  CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r5 + 0xac));
  PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
LAB_0012f086:
  Cafe::select(*(Cafe **)(unaff_r5 + 0x14),(CafeObject *)unaff_r6);
  FUN_0012ff0e();
switchD_0012ecc0_caseD_2:
  piVar19 = *(int **)(unaff_r5 + 0x54);
  if (piVar19 != (int *)0x0) {
    if ((piVar19 != *(int **)(unaff_r5 + 0x18)) &&
       (iVar3 = (**(code **)(*piVar19 + 0x20))(), iVar3 != 2)) {
      FUN_0012ff0e();
    }
    if (0 < *(int *)(*(int *)(*(int *)(unaff_r5 + 0x54) + 0x8c) + 0x50)) {
      FUN_0012ff0e();
    }
    GameStateCafe::startColorShift(unaff_r5,(CafeObject *)unaff_r6);
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x54));
    iVar3 = DAT_0012f28c;
    *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x54) + 0x8c) + 0x44) = 1;
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar3),'\x03',false);
    iVar3 = (**(code **)(**(int **)(unaff_r5 + 0x54) + 0x20))();
LAB_0012f0ec:
    if (iVar3 == 2) {
      CharacterCommandBar::removeButton(*(int *)(unaff_r5 + 0xac));
      CharacterCommandBar::addRestButton
                (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                 *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012f290),unaff_r5);
      FUN_0012f316();
      return;
    }
    FUN_0012f316();
    return;
  }
  if ((int)(uint)**(byte **)(unaff_r7 + DAT_0012f294) < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680))
  {
    FUN_0012f316();
    return;
  }
  unaff_r6 = *(CharacterInstance **)(unaff_r5 + 0xd0);
  Vector<String>::elementAt((int)&stack0x00000180);
  Vector<String>::elementAt((int)&stack0x00000188);
  iVar3 = 0;
  in_stack_00000000 = (undefined1 *)0x0;
  NoticeDialog::show((NoticeDialog *)unaff_r6,&stack0x00000180,&stack0x00000188);
  String::~String((String *)&stack0x00000188);
  pSVar15 = (String *)&stack0x00000180;
LAB_0012f164:
  String::~String(pSVar15);
  FUN_0012ff0e();
switchD_0012ecc0_caseD_8:
  if ((*(int *)(iVar3 + 0x24) == **(int **)(unaff_r7 + DAT_0012f29c)) ||
     (*(int *)(iVar3 + 0x24) == 0x1fa)) {
    CapcomDate::today((CapcomDate *)&stack0x000001e0);
    iVar3 = CapcomDate::daysBetween
                      (*(undefined4 *)(unaff_r6 + 0x56),*(undefined4 *)(unaff_r6 + 0x5a),
                       in_stack_000001e0,in_stack_000001e4);
    if (iVar3 < 1) goto LAB_0012f1ca;
    memcpy(unaff_r6 + 0x56,&stack0x000001e0,7);
    if (*(int *)(*(int *)(unaff_r6 + 0x38) + 0x24) == 0x1fa) {
      GameStateCafe::giveFreeFood_ex(unaff_r5);
    }
    else {
      GameStateCafe::giveFreeFood(unaff_r5);
    }
  }
  else {
LAB_0012f1ca:
    this_02 = *(TutorialArrow **)(unaff_r5 + 0xc4);
    uVar11 = (uint)(byte)this_02[0x14];
    if ((uVar11 != 0) && (uVar11 = TutorialArrow::attachedToCafeObject(this_02), uVar11 != 0)) {
      uVar11 = (uint)(*(CharacterInstance **)(this_02 + 0x60) == unaff_r6);
    }
    GameStateCafe::onHudButtonPress(unaff_r5,2,SUB41(uVar11,0));
  }
  unaff_r6 = unaff_r6 + 0x46;
  *unaff_r6 = (CharacterInstance)0x0;
  FUN_0012ff0e();
switchD_0012ecc0_caseD_4:
  if (*(short *)(unaff_r6 + 0x42) == 0) {
    sVar1 = *(short *)(unaff_r6 + 0x44);
    if (0 < sVar1) {
      iVar3 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
      fVar30 = extraout_s0;
      if (iVar3 == 0) {
        pCVar22 = *(Cafe **)(unaff_r5 + 0x14);
        String::valueOf((int)&stack0x00000198);
        pSVar4 = (StatusNote *)operator_new(0x30);
        in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f62c);
        StatusNote::StatusNote(pSVar4,unaff_r6,1,&stack0x00000198);
        Cafe::addStatusNote(pCVar22,pSVar4);
        String::~String((String *)&stack0x00000198);
        fVar30 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),(int)sVar1);
      }
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar30);
      pCVar28 = unaff_r6 + 6;
      goto LAB_0012f310;
    }
  }
  else {
    *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) =
         *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) + (int)*(short *)(unaff_r6 + 0x42);
    pCVar22 = *(Cafe **)(unaff_r5 + 0x14);
    String::valueOf((int)&stack0x00000190);
    pSVar4 = (StatusNote *)operator_new(0x30);
    in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f2a4);
    StatusNote::StatusNote(pSVar4,unaff_r6,0,&stack0x00000190);
    Cafe::addStatusNote(pCVar22,pSVar4);
    fVar30 = (float)String::~String((String *)&stack0x00000190);
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar30);
    pCVar28 = unaff_r6 + 4;
LAB_0012f310:
    *(undefined2 *)(pCVar28 + 0x3e) = 0;
  }
  if (*(int *)(unaff_r5 + 0x54) == 0) {
    FUN_0012f41e();
    return;
  }
code_r0x0012f41e:
  pZVar23 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar3 = ZombieCafe::unhandledTouching(pZVar23);
  if ((iVar3 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar23 + 0x4b8) != 0)))) {
    iVar3 = ZombieCafe::touchWasPinch(pZVar23);
    if (iVar3 != 0) {
      uVar18 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar23 + DAT_0012f63c),*(undefined4 *)(pZVar23 + 0x4c0));
      iVar3 = CapcomApp::getInstance();
      pZVar23 = *(ZombieCafe **)(iVar3 + 4);
      uVar7 = ZombieCafe::getCafeZoomParam(pZVar23,extraout_s0_00,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar7;
      iVar3 = __aeabi_fcmpeq(uVar18,uVar7);
      if (iVar3 == 0) {
        lVar8 = *(long *)(unaff_r5 + 0x1e0);
        lVar9 = CFPoint::subtract(*(long *)(pZVar23 + 0x4b8),lVar8);
        lVar10 = CFPoint::multiplyf(lVar9,extraout_s0_01);
        lVar9 = CFPoint::subtract(lVar10,lVar9);
        uVar7 = CFPoint::subtract(lVar8,lVar9);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar7;
      }
    }
    iVar3 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar3 + DAT_0012f644)) {
      uVar7 = __floatsisf((*(int *)(iVar3 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar3 + DAT_0012f648) >> 0x10));
      iVar5 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar7;
      uVar7 = __floatsisf((int)*(short *)(iVar3 + 0x4b8) - (int)*(short *)(iVar3 + iVar5));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar7;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar8 = *(long *)(unaff_r5 + 0x1e0);
  uVar11 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar3 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar11 = CFPoint::add(lVar8,iVar3 << 0x10 | uVar11 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar11;
  iVar5 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar3 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar24 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar7 = __floatsisf(iVar5 >> 0x10);
  uVar7 = __mulsf3(uVar7,uVar24);
  ceilf(__x);
  uVar18 = __floatsisf((int)(short)iVar5);
  uVar18 = __mulsf3(uVar18,uVar24);
  ceilf(__x_00);
  uVar12 = __floatsisf((int)(short)iVar3);
  __mulsf3(uVar12,uVar24);
  sVar1 = __fixsfsi();
  uVar12 = __floatsisf(iVar3 >> 0x10);
  __mulsf3(uVar12,uVar24);
  uVar13 = __fixsfsi();
  sVar2 = __fixsfsi(uVar18);
  uVar14 = __fixsfsi(uVar7);
  iVar3 = -((int)uVar11 >> 0x10);
  if (iVar3 < (short)uVar13) {
    uVar11 = (uVar13 & 0xffff) * -0x10000 | uVar11 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar11;
  }
  else {
    uVar13 = ((uVar13 & 0xffff) + (uVar14 & 0xffff)) - 1;
    iVar5 = (int)(short)uVar13 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar5 != (int)uVar11 >> 0x10 && iVar5 <= iVar3) {
      uVar11 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar13 & 0xffff)) * 0x10000 |
               uVar11 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar11 = *(uint *)(unaff_r5 + 0x1e0);
  iVar3 = -(int)(short)uVar11;
  if (iVar3 < sVar1) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar1 | uVar11 & 0xffff0000;
  }
  else {
    sVar1 = sVar2 + -1 + sVar1;
    iVar5 = (int)sVar1 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar5 != (int)(short)uVar11 && iVar5 <= iVar3) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar1) | uVar11 & 0xffff0000
      ;
    }
  }
  uVar12 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar25 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar7 = __floatsisf(in_stack_00000020);
  uVar18 = __mulsf3(uVar7,*puVar25);
  iVar3 = __aeabi_fcmplt(uVar18,0x3f800000);
  uVar7 = uVar18;
  if (iVar3 == 0) {
    uVar7 = 0x3f800000;
  }
  uVar7 = __subsf3(0x3f800000,uVar7);
  iVar5 = __mulsf3(uVar12,uVar7);
  *(int *)(unaff_r5 + 0x1d8) = iVar5;
  uVar7 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar3 == 0) {
    uVar18 = 0x3f800000;
  }
  uVar18 = __subsf3(0x3f800000,uVar18);
  iVar3 = __mulsf3(uVar7,uVar18);
  *(int *)(unaff_r5 + 0x1dc) = iVar3;
  iVar6 = __aeabi_fcmpge(iVar5,0);
  if (iVar6 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  uVar7 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar5 = __aeabi_fcmplt(iVar5,uVar7);
  if (iVar5 != 0) {
    iVar5 = __aeabi_fcmpge(iVar3,0);
    if (iVar5 == 0) {
      iVar3 = iVar3 + -0x80000000;
    }
    iVar3 = __aeabi_fcmplt(iVar3,uVar7);
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
    iVar5 = *(int *)(unaff_r5 + 0xc);
    if (iVar3 == *(int *)(unaff_r5 + 0x18)) {
      this_00 = *(TutorialSystem **)(iVar5 + DAT_0012f9b8);
      uVar16 = '\x01';
    }
    else if ((iVar3 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar3 + 0x8c) + 4) == '\0')
            ) {
      uVar16 = '\r';
      this_00 = *(TutorialSystem **)(iVar5 + DAT_0012f9b8);
    }
    else {
      uVar16 = '\x10';
      this_00 = *(TutorialSystem **)(iVar5 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_00,uVar16,true);
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
  uVar11 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar11 - 1 < 3) || (uVar11 == 7)) {
    cVar17 = '\0';
  }
  else {
    cVar17 = '\x01' - (uVar11 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar17;
  iVar3 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar26 = (char *)(iVar3 + 0x12f82e);
    L_PrintLog(pcVar26,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar3 != 0)) {
      L_PrintLog(pcVar26,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            ((*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0' &&
             (*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0')))) &&
           (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')) {
          this_01 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_01 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar29,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            pSVar15 = (String *)&stack0x000001b8;
          }
          else {
            if (this_01[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_01);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar29,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            pSVar15 = (String *)&stack0x000001a0;
          }
          String::~String(pSVar15);
        }
      }
      else {
        L_PrintLog(pcVar26,(char *)(DAT_0012f9e4 + 0x12f892));
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
  if (iVar3 != 0) {
    iVar5 = DAT_0012fd60 + 0x12fa4c;
    iVar3 = *(int *)(DAT_0012fd60 + 0x12fac0);
    if (iVar3 != 0) {
      if (iVar3 != 3) {
        if (iVar3 != 2) {
          FUN_0012ff22();
          return;
        }
        puVar25 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
        in_stack_00000020 = 0;
        piVar19 = *(int **)(unaff_r7 + DAT_0012fd6c);
        piVar27 = puVar25 + 4;
        for (; in_stack_00000020 < *piVar19; in_stack_00000020 = in_stack_00000020 + 1) {
          in_stack_00000000 = (undefined1 *)puVar25[2];
          sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar25,puVar25[1]);
          if ((puVar25[1] == 2) && (0 < *piVar27)) {
            in_stack_00000000 = (undefined1 *)*piVar19;
            snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
            strcpy(&stack0x000001fc,(char *)piVar27[1]);
            in_stack_00000000 = &stack0x0000027c;
            snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                     (char *)(DAT_0012fd78 + 0x12faf0),*piVar27);
            ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar27);
            puVar25[1] = 0;
            puVar25[2] = 0;
            *piVar27 = 0;
            ZombieCafe::save();
            pNVar20 = *(NoticeDialog **)(unaff_r5 + 0xd0);
            String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c)
                          );
            Vector<String>::elementAt((int)&stack0x000001d0);
            in_stack_00000000 = (undefined1 *)0x0;
            NoticeDialog::show(pNVar20,&stack0x000001d8,&stack0x000001d0);
            String::~String((String *)&stack0x000001d0);
            String::~String((String *)&stack0x000001d8);
          }
          puVar25 = puVar25 + 6;
          piVar27 = piVar27 + 6;
        }
        if (0 < *piVar19) {
          GameStateCafe::gotEventValue
                    (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
        }
        *piVar19 = 0;
        iVar5 = DAT_0012fd84 + 0x12fb80;
      }
      *(undefined4 *)(iVar5 + 0x74) = 4;
      FUN_0012ff22();
      return;
    }
    if (*(int *)(unaff_r5 + 0x1fc) == 0) {
      GameStateCafe::getEventValue
                (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      uVar7 = 1;
    }
    else {
      if (*(int *)(unaff_r5 + 0x1fc) != 1) {
        FUN_0012ff22();
        return;
      }
      uVar7 = 4;
    }
    *(undefined4 *)(unaff_r5 + 0x1fc) = uVar7;
    FUN_0012ff22();
    return;
  }
  FUN_0012ff22();
  return;
}


