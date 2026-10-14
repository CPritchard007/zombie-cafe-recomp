/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012c6c0 GameStateCafe::checkForLevelUp */

/* GameStateCafe::checkForLevelUp() */

void __thiscall GameStateCafe::checkForLevelUp(GameStateCafe *this)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TutorialSystem *this_00;
  int iVar6;
  FoodStack *this_01;
  LevelUpDialog *this_02;
  undefined4 uVar7;
  uchar uVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int *piVar9;
  int iVar10;
  int *piVar11;
  GameStateCafe *pGVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ZombieCafe *pZVar15;
  byte *pbVar16;
  undefined4 uVar17;
  float fVar18;
  float extraout_s0;
  undefined4 uVar19;
  uint local_148;
  uint local_144;
  undefined2 local_130;
  undefined2 local_12c;
  Vector<RecipeAndVariant> aVStack_128 [4];
  int local_124;
  int local_120;
  char acStack_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  iVar6 = DAT_0012c9cc;
  iVar10 = DAT_0012c9c4 + 0x12c6cc;
  piVar11 = *(int **)(iVar10 + DAT_0012c9c8);
  local_1c = *piVar11;
  iVar4 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012c9cc),'\x10');
  if ((iVar4 != 0) &&
     ((iVar4 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'\x11'), iVar4 == 0 ||
      (iVar4 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'\x12'), iVar4 == 0))))
  goto LAB_0012cd42;
  iVar4 = DAT_0012c9cc;
  if ((*(int *)(*(int *)(this + 0xc) + 0x680) == 4) &&
     (iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'I'), iVar5 == 0)) {
    iVar6 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar4),'H');
    if (iVar6 == 0) goto LAB_0012cd42;
    uVar8 = 'I';
    this_00 = *(TutorialSystem **)(*(int *)(this + 0xc) + iVar4);
    if (*(char *)(*(int *)(this_00 + 0x788) + 0x14) != '\0') goto LAB_0012cd42;
LAB_0012c774:
    TutorialSystem::setTutorialCompleted(this_00,uVar8);
  }
  else {
    iVar4 = DAT_0012c9cc;
    if ((*(int *)(*(int *)(this + 0xc) + 0x680) == 6) &&
       (iVar5 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'T'), iVar5 == 0)) {
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar4),'S');
      if ((iVar6 == 0) ||
         (this_00 = *(TutorialSystem **)(*(int *)(this + 0xc) + iVar4),
         *(char *)(*(int *)(this_00 + 0x788) + 0x14) != '\0')) goto LAB_0012cd42;
      uVar8 = 'T';
      goto LAB_0012c774;
    }
    if (-1 < *(int *)(*(int *)(*(int *)(this + 0xc) + iVar6) + DAT_0012cdb0 + 4)) goto LAB_0012cd42;
  }
  iVar6 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(this + 0xc));
  iVar4 = *(int *)(this + 0xc);
  if (iVar6 == 0) {
    iVar6 = *(int *)(*(int *)(iVar4 + 0x680) * 4 + **(int **)(iVar10 + DAT_0012c9d4));
    if (iVar6 <= *(int *)(iVar4 + DAT_0012c9d0)) {
      *(int *)(iVar4 + DAT_0012c9d0) = *(int *)(iVar4 + DAT_0012c9d0) - iVar6;
      *(int *)(*(int *)(this + 0xc) + 0x680) = *(int *)(*(int *)(this + 0xc) + 0x680) + 1;
      snprintf(acStack_11c,0x80,(char *)(DAT_0012c9d8 + 0x12c7ca),
               *(undefined4 *)(*(int *)(this + 0xc) + 0x680));
      CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this + 0xc) + 0x840));
      ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this + 0xc));
      CRAMHoover::endTrackEvent();
      pZVar15 = *(ZombieCafe **)(this + 0xc);
      piVar9 = *(int **)(iVar10 + DAT_0012c9dc);
      local_148 = (uint)*(short *)((*(int *)(pZVar15 + 0x680) + -1) * 2 + *piVar9);
      if (((((int)local_148 < 0) || ((int)(uint)(byte)pZVar15[DAT_0012c9e0] < (int)local_148)) ||
          (iVar6 = ZombieCafe::isRecipeUnlocked(pZVar15,local_148,'\0'), iVar6 != 0)) ||
         (**(byte **)(iVar10 + DAT_0012c9e4) <
          *(byte *)(*(int *)(pZVar15 + 0x4e8) + local_148 * 0x1c + 0x16))) {
        Vector<RecipeAndVariant>::Vector(aVStack_128);
        for (iVar6 = 0; iVar6 < (int)(uint)(byte)(*(ZombieCafe **)(this + 0xc))[DAT_0012c9e0];
            iVar6 = iVar6 + 1) {
          iVar4 = ZombieCafe::isEventRecipe(*(ZombieCafe **)(this + 0xc),iVar6);
          if (iVar4 == 0) {
            iVar4 = 0;
            bVar3 = false;
            do {
              iVar5 = ZombieCafe::isRecipeUnlocked(*(ZombieCafe **)(this + 0xc),iVar6,(uchar)iVar4);
              if (iVar5 != 0) {
                bVar3 = true;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 != 10);
            if (bVar3) {
              local_144 = 0;
              do {
                pZVar15 = *(ZombieCafe **)(this + 0xc);
                iVar4 = ZombieCafe::isRecipeUnlocked(pZVar15,iVar6,(uchar)local_144);
                if ((iVar4 == 0) &&
                   (*(byte *)(*(int *)(pZVar15 + 0x4e8) + iVar6 * 0x1c + 0x16) <=
                    **(byte **)(iVar10 + DAT_0012c9e4))) {
                  local_130 = CONCAT11((uchar)local_144,(char)iVar6);
                  Vector<RecipeAndVariant>::addElement(aVStack_128,local_130);
                }
                local_144 = local_144 + 1;
              } while (local_144 != 10);
            }
          }
        }
        if (local_124 < 0) {
          for (iVar6 = 0; pZVar15 = *(ZombieCafe **)(this + 0xc),
              iVar6 < (int)(uint)(byte)pZVar15[DAT_0012c9e0]; iVar6 = iVar6 + 1) {
            if ((*(byte *)(*(int *)(pZVar15 + 0x4e8) + iVar6 * 0x1c + 0x16) <=
                 **(byte **)(iVar10 + DAT_0012c9e4)) &&
               (iVar4 = ZombieCafe::isEventRecipe(pZVar15,iVar6), iVar4 == 0)) {
              iVar4 = 0;
              do {
                local_12c = CONCAT11((char)iVar4,(char)iVar6);
                Vector<RecipeAndVariant>::addElement(aVStack_128,local_12c);
                iVar4 = iVar4 + 1;
              } while (iVar4 != 10);
            }
          }
          if (local_124 < 0) {
            local_144 = CapcomMath::random(**(int **)(iVar10 + DAT_0012cd54));
            local_148 = 6;
          }
          else {
            iVar6 = CapcomMath::random(local_124 + 1);
            pbVar16 = (byte *)(local_120 + iVar6 * 2);
            local_148 = (uint)*pbVar16;
            local_144 = (uint)pbVar16[1];
          }
          iVar6 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0xc));
          if (iVar6 != 0) {
            iVar6 = *(int *)(this + 0xc);
            this_01 = (FoodStack *)operator_new(0x24);
            FoodStack::FoodStack(this_01,(uchar)local_148,(uchar)local_144);
            Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar6 + DAT_0012cd58),this_01);
          }
        }
        else {
          iVar6 = CapcomMath::random(local_124 + 1);
          pbVar16 = (byte *)(local_120 + iVar6 * 2);
          bVar2 = *pbVar16;
          local_148 = (uint)bVar2;
          bVar1 = pbVar16[1];
          local_144 = (uint)bVar1;
          ZombieCafe::unlockRecipe(*(ZombieCafe **)(this + 0xc),local_148,bVar1);
          RecipeBook::unlockRecipe(*(RecipeBook **)(this + 0x94),bVar2,bVar1);
          uVar19 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_0012c9e8));
          pZVar15 = *(ZombieCafe **)(this + 0xc);
          uVar14 = *(undefined4 *)(pZVar15 + DAT_0012c9d0);
          uVar13 = *(undefined4 *)(pZVar15 + 0x680);
          uVar17 = *(undefined4 *)(pZVar15 + DAT_0012c9ec);
          uVar7 = ZombieCafe::getToxin(pZVar15);
          snprintf(acStack_9c,0x80,(char *)(DAT_0012c9f0 + 0x12c93e),DAT_0012c9f4 + 0x12c940,uVar19,
                   uVar13,uVar14,uVar17,uVar7,1);
          CCMarketing_RecordAnalyticsEvent
                    (*(undefined4 *)(*(int *)(this + 0xc) + DAT_0012c9f8),DAT_0012c9fc + 0x12c954,
                     acStack_9c);
        }
        Vector<RecipeAndVariant>::~Vector(aVStack_128);
      }
      else {
        ZombieCafe::unlockRecipe(pZVar15,local_148,'\0');
        RecipeBook::unlockRecipe
                  (*(RecipeBook **)(this + 0x94),
                   *(uchar *)(*piVar9 + (*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 2),'\0');
        local_144 = 0;
      }
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),1,true);
      PullMenuElement::ifIsCloseNewIndicatorPull();
      HudElement::setButtonNewIndicator(*(HudElement **)(this + 200),4,true);
      HudElement::setButtonNewIndicator(*(HudElement **)(this + 200),1,true);
      Store::close(*(Store **)(this + 0x84));
      Storage::close(*(Storage **)(this + 0xbc));
      iVar6 = *(int *)(this + 0xc);
      for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(iVar6 + DAT_0012cd60); iVar4 = iVar4 + 1) {
        iVar5 = *(int *)(iVar4 * 4 + *(int *)(iVar6 + DAT_0012cd64));
        if ((*(char *)(iVar5 + DAT_0012cd5c) != '\0') &&
           ((uint)*(byte *)(iVar5 + DAT_0012cd68) == *(uint *)(iVar6 + 0x680))) {
          if (*(int *)(this + 0x54) == *(int *)(this + 0x18)) {
            CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(this + 0xac),0));
          }
          else {
            *(undefined1 *)(*(int *)(this + 0x18) + 0xc6) = 1;
          }
          break;
        }
      }
      *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012cd6c) = 0xff;
      *(undefined4 *)(*(int *)(this + 0xc) + 0x720) = 0xff;
      pbVar16 = *(byte **)(iVar10 + DAT_0012cd70);
      __aeabi_idivmod(*(int *)(*(int *)(this + 0xc) + 0x680) + 1,*pbVar16);
      GameStateMap::clearEnemyData(extraout_r1);
      bVar2 = *pbVar16;
      __aeabi_idivmod(*(int *)(*(int *)(this + 0xc) + 0x680) + 1,(uint)bVar2);
      GameStateMap::clearEnemyData(extraout_r1_00 + (uint)bVar2);
      iVar6 = *(int *)(this + 0xc);
      __aeabi_idivmod(*(int *)(iVar6 + 0x680) + 1,*pbVar16);
      *(undefined4 *)(extraout_r1_01 * 4 + *(int *)(iVar6 + DAT_0012cd74)) = 0;
      pZVar15 = *(ZombieCafe **)(this + 0xc);
      __aeabi_idivmod(*(int *)(pZVar15 + 0x680) + 1,*pbVar16);
      fVar18 = (float)ZombieCafe::reopenEnemyCafe(pZVar15,extraout_r1_02);
      for (iVar6 = 0; pZVar15 = *(ZombieCafe **)(this + 0xc), iVar6 < (int)(uint)*pbVar16;
          iVar6 = iVar6 + 1) {
        iVar4 = ZombieCafe::isEventCafeTheme
                          (pZVar15,(uint)*(byte *)(*(int *)(pZVar15 + DAT_0012cd78) + iVar6));
        fVar18 = extraout_s0;
        if (iVar4 != 0) {
          ZombieCafe::reopenEnemyCafe(*(ZombieCafe **)(this + 0xc),iVar6);
          *(undefined4 *)(iVar6 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_0012cd74)) = 0;
          GameStateMap::clearEnemyData(iVar6);
          fVar18 = (float)GameStateMap::clearEnemyData(iVar6 + (uint)*pbVar16);
        }
      }
      if (*(int *)(pZVar15 + 0x6a8) < *(int *)(pZVar15 + 0x680) + -2) {
        *(int *)(pZVar15 + 0x6a8) = *(int *)(pZVar15 + 0x680);
        *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012cd7c) = 0;
      }
      if (*(short *)((*(int *)(*(int *)(this + 0xc) + 0x680) + -2) * 2 +
                    **(int **)(iVar10 + DAT_0012cd80)) <
          *(short *)((*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 2 +
                    **(int **)(iVar10 + DAT_0012cd80))) {
        PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),2,true);
        fVar18 = (float)PullMenuElement::ifIsCloseNewIndicatorPull();
      }
      pGVar12 = this + 0xd8;
      uVar19 = 0;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xe,fVar18,false);
      iVar6 = DAT_0012cd8c;
      if (*(LevelUpDialog **)pGVar12 == (LevelUpDialog *)0x0) {
        checkAndAdjustQuest(this);
        this_02 = (LevelUpDialog *)operator_new(0xac);
        LevelUpDialog::LevelUpDialog
                  (this_02,*(int *)(*(int *)(this + 0xc) + 0x680),local_148,local_144);
        *(LevelUpDialog **)pGVar12 = this_02;
        iVar6 = *(int *)(*(int *)(this + 0xc) + 0x10);
        (**(code **)(*(int *)this_02 + 0x14))
                  (this_02,(iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1,(int)(short)iVar6 / 2,
                   *(code **)(*(int *)this_02 + 0x14),uVar19);
        (**(code **)(**(int **)pGVar12 + 0x1c))(*(int **)pGVar12,0x12);
        ScreenElement::setOrder(*(ScreenElement **)pGVar12,(int)**(char **)(iVar10 + DAT_0012cd84));
        (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar12)
        ;
        uVar19 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_0012cd88));
        pZVar15 = *(ZombieCafe **)(this + 0xc);
        uVar13 = *(undefined4 *)(pZVar15 + 0x680);
        uVar17 = *(undefined4 *)(pZVar15 + DAT_0012cd90);
        uVar14 = *(undefined4 *)(pZVar15 + DAT_0012cd8c);
        uVar7 = ZombieCafe::getToxin(pZVar15);
        snprintf(acStack_9c,0x80,(char *)(DAT_0012cd94 + 0x12cc5e),DAT_0012cd98 + 0x12cc60,uVar19,
                 uVar13,uVar14,uVar17,uVar7);
        uVar19 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012cd9c);
        iVar6 = DAT_0012cda0 + 0x12cc7a;
      }
      else {
        LevelUpDialog::setLevel
                  (*(LevelUpDialog **)pGVar12,*(int *)(*(int *)(this + 0xc) + 0x680),local_148,
                   local_144);
        iVar4 = DAT_0012cd88;
        (**(code **)(**(int **)pGVar12 + 0x20))(*(int **)pGVar12,1);
        uVar19 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + iVar4));
        pZVar15 = *(ZombieCafe **)(this + 0xc);
        uVar13 = *(undefined4 *)(pZVar15 + 0x680);
        uVar14 = *(undefined4 *)(pZVar15 + iVar6);
        uVar17 = *(undefined4 *)(pZVar15 + DAT_0012cd90);
        uVar7 = ZombieCafe::getToxin(pZVar15);
        snprintf(acStack_9c,0x80,(char *)(DAT_0012cda4 + 0x12ccb8),DAT_0012cda8 + 0x12ccba,uVar19,
                 uVar13,uVar14,uVar17,uVar7);
        uVar19 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012cd9c);
        iVar6 = DAT_0012cdac + 0x12ccd4;
      }
      CCMarketing_RecordAnalyticsEvent(uVar19,iVar6,acStack_9c);
    }
  }
  else {
    *(undefined4 *)(iVar4 + DAT_0012c9d0) = 0;
  }
LAB_0012cd42:
  if (local_1c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


