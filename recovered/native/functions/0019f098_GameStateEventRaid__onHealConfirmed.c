/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019f098 GameStateEventRaid::onHealConfirmed */

/* GameStateEventRaid::onHealConfirmed(GameStateEventRaid*) */

void GameStateEventRaid::onHealConfirmed(GameStateEventRaid *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieCafe *this;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  char *__format;
  float fVar13;
  undefined8 uVar14;
  char acStack_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  piVar8 = *(int **)(DAT_0019f22c + 0x19f0a4);
  local_1c = *piVar8;
  if (*(int *)(param_1 + 0x124) != 0) {
    piVar12 = (int *)(*(int *)(param_1 + 0x124) + 0x8c);
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*piVar12 + 0x40),0);
    if (iVar3 == 0) {
      fVar13 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy((Character *)*piVar12,fVar13);
      ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),1);
      iVar6 = DAT_0019f238;
      iVar3 = DAT_0019f234;
      uVar4 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_0019f230));
      this = *(ZombieCafe **)(param_1 + 0xc);
      uVar9 = *(undefined4 *)(this + 0x680);
      uVar10 = *(undefined4 *)(this + DAT_0019f23c);
      uVar11 = *(undefined4 *)(this + DAT_0019f240);
      uVar5 = ZombieCafe::getToxin(this);
      uVar7 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x124) + 0x8c) + DAT_0019f244);
      uVar14 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x124) + 0x8c))[0x10]);
      iVar2 = DAT_0019f248;
      snprintf(acStack_11c,0x80,(char *)(iVar3 + 0x19f0fa),iVar6 + 0x19f0fc,uVar4,uVar9,uVar10,
               uVar11,uVar5,uVar7,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1);
      CCMarketing_RecordAnalyticsEvent
                (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0019f24c),(char *)(iVar2 + 0x19f150),
                 acStack_11c);
      memset(acStack_9c,0,0x80);
      __format = (char *)(DAT_0019f250 + 0x19f170);
      uVar1 = *(ushort *)(**(int **)(*(int *)(param_1 + 0x124) + 0x8c) + DAT_0019f244);
      uVar14 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x124) + 0x8c))[0x10]);
      snprintf(acStack_9c,0x80,__format,(uint)uVar1,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      sendMalta(param_1,(char *)(iVar2 + 0x19f150),acStack_9c);
      iVar3 = *(int *)(param_1 + 0xc);
      if (*(char *)(**(int **)(*(int *)(param_1 + 0x124) + 0x8c) + DAT_0019f254) == '\0') {
        fVar13 = (float)CapcomMath::random(2);
      }
      else {
        fVar13 = (float)CapcomMath::random(2);
      }
      ZombieCafe::playEffect(iVar3,fVar13);
      iVar3 = DAT_0019f258;
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0019f258),'\x1d');
      if ((iVar6 != 0) &&
         (iVar6 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),' '), iVar6 == 0)
         ) {
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1e');
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1f');
      }
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1a',true);
      TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'7',true);
      *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0019f25c) = 1;
    }
  }
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


