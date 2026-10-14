/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a0930 GameStateEventRaid::tickDefault */

/* GameStateEventRaid::tickDefault(long) */

void __thiscall GameStateEventRaid::tickDefault(GameStateEventRaid *this,long param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  CafeObject *pCVar5;
  MoveTask *this_00;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ZombieCafe *this_01;
  CharacterInstance *this_02;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  long lVar19;
  ushort uVar20;
  undefined4 uVar21;
  uint uVar22;
  GameStateEventRaid *pGVar23;
  uint uVar24;
  float __x;
  float __x_00;
  int local_30;
  
  this_01 = *(ZombieCafe **)(this + 0xc);
  iVar13 = DAT_001a0c54 + 0x1a0940;
  if ((this_01[DAT_001a0c58] == (ZombieCafe)0x0) && (*(int *)(this_01 + 0x4b8) != 0)) {
    uVar8 = *(undefined4 *)(this_01 + DAT_001a0c5c);
    iVar15 = __aeabi_fcmpgt(uVar8,0);
    if (iVar15 != 0) {
      uVar9 = *(undefined4 *)(this_01 + 0x4c0);
      iVar15 = __aeabi_fcmpgt(uVar9,0);
      if (iVar15 != 0) {
        uVar16 = *(undefined4 *)(this + 0x2c);
        uVar9 = __divsf3(uVar8,uVar9);
        uVar10 = __mulsf3(uVar16,uVar9);
        uVar8 = *(undefined4 *)(this + 0x30);
        uVar21 = **(undefined4 **)(iVar13 + DAT_001a0c60);
        iVar15 = __aeabi_fcmpgt(uVar8,uVar10);
        if ((iVar15 == 0) && (iVar15 = __aeabi_fcmpgt(uVar10,uVar21), uVar8 = uVar10, iVar15 != 0))
        {
          uVar8 = uVar21;
        }
        *(undefined4 *)(this + 0x2c) = uVar8;
        iVar15 = __aeabi_fcmpeq(uVar16,uVar8);
        if (iVar15 == 0) {
          uVar24 = *(uint *)(this + 0x28) >> 0x10;
          uVar18 = (*(uint *)(this_01 + 0x4b8) >> 0x10) - uVar24;
          uVar14 = *(uint *)(this + 0x28) & 0xffff;
          uVar22 = *(uint *)(this_01 + 0x4b8) - uVar14;
          uVar8 = __floatsisf((int)(short)uVar18);
          __mulsf3(uVar8,uVar9);
          uVar6 = __fixsfsi();
          uVar8 = __floatsisf((int)(short)uVar22);
          __mulsf3(uVar8,uVar9);
          uVar7 = __fixsfsi();
          *(uint *)(this + 0x28) =
               (uVar24 - ((uVar6 & 0xffff) - (uVar18 & 0xffff) & 0xffff)) * 0x10000 |
               uVar14 - ((uVar7 & 0xffff) - (uVar22 & 0xffff) & 0xffff) & 0xffff;
        }
        this_01[DAT_001a0c58] = (ZombieCafe)0x1;
      }
    }
    iVar15 = DAT_001a0c6c;
    iVar12 = *(int *)(this + 0xc);
    if ((int)**(short **)(iVar13 + DAT_001a0c64) < *(int *)(iVar12 + DAT_001a0c68)) {
      uVar8 = __floatsisf((*(int *)(iVar12 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar12 + DAT_001a0c6c) >> 0x10));
      *(undefined4 *)(this + 0x20) = uVar8;
      uVar8 = __floatsisf((int)*(short *)(iVar12 + 0x4b8) - (int)*(short *)(iVar12 + iVar15));
      iVar15 = DAT_001a0c58;
      *(undefined4 *)(this + 0x24) = uVar8;
      *(undefined1 *)(iVar12 + iVar15) = 1;
    }
    else {
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  else {
    iVar12 = ZombieCafe::unhandledTouchUpEvent(this_01);
    iVar15 = DAT_001a0c6c;
    if ((iVar12 != 0) &&
       (*(int *)(this_01 + DAT_001a0c68) <= (int)**(short **)(iVar13 + DAT_001a0c64))) {
      lVar19 = *(long *)(this + 0x5c);
      screenToWorldCoords(this,*(long *)(this_01 + DAT_001a0c6c));
      pCVar5 = (CafeObject *)Cafe::pickCafeObject(lVar19);
      if (pCVar5 != (CafeObject *)0x0) {
        iVar12 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5);
        local_30 = 0;
        if (iVar12 != 2) {
          for (; local_30 < *(int *)(this + 0x100) + 1; local_30 = local_30 + 1) {
            if (pCVar5 == *(CafeObject **)(*(int *)(this + 0x104) + local_30 * 4)) {
              if ((pCVar5 == *(CafeObject **)(this + 0x124)) ||
                 (iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                 iVar15 != 0)) {
                Cafe::select(*(Cafe **)(this + 0x5c),(CafeObject *)0x0);
                *(undefined4 *)(this + 0x124) = 0;
                CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x88));
              }
              else if (this[0x18] == (GameStateEventRaid)0x0) {
                *(CafeObject **)(this + 0x124) = pCVar5;
                onSelectZombiePressed(this);
                *(undefined1 *)(*(int *)(this + 0xc) + DAT_001a0c58) = 1;
                CharacterInstance::groan(*(CharacterInstance **)(this + 0x124));
              }
              else if ((this[0x18] != (GameStateEventRaid)0x2) ||
                      (iVar15 = getLaunchNumber(this,local_30), iVar15 != -1)) {
                pGVar23 = this + 0x88;
                *(undefined4 *)(this + 0x124) =
                     *(undefined4 *)(*(int *)(this + 0x104) + local_30 * 4);
                TutorialSystem::triggerEvent
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001a0c70),'\x10',false);
                Cafe::select(*(Cafe **)(this + 0x5c),*(CafeObject **)(this + 0x124));
                CharacterCommandBar::setCharacter
                          (*(CharacterCommandBar **)pGVar23,*(CharacterInstance **)(this + 0x124));
                CharacterCommandBar::open(*(CharacterCommandBar **)pGVar23);
                *(undefined1 *)(*(int *)(this + 0xc) + DAT_001a0c58) = 1;
                CharacterInstance::groan(*(CharacterInstance **)(this + 0x124));
                if (*(char *)(*(int *)(this + 0x124) + 0xc6) != '\0') {
                  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)pGVar23,0));
                  *(undefined1 *)(*(int *)(this + 0x124) + 0xc6) = 0;
                }
              }
            }
          }
          iVar15 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
          if ((iVar15 == 0) || (iVar15 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5), iVar15 != 3))
          {
            iVar15 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
            if (((((iVar15 != 0) &&
                  (iVar15 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5), iVar15 == 1)) &&
                 ((*(char *)(*(int *)(pCVar5 + 0x38) + 0x44) == '\x02' &&
                  ((this[0x18] == (GameStateEventRaid)0x2 && (*(int *)(this + 0x124) != 0)))))) &&
                (puVar17 = (undefined4 *)(*(int *)(this + 0x124) + 0x88),
                pCVar5 != (CafeObject *)*puVar17)) && (this[0xb9] == (GameStateEventRaid)0x0)) {
              *puVar17 = pCVar5;
              CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x124));
LAB_001a0c4a:
              startColorShift(this,pCVar5);
            }
          }
          else if ((this[0x18] == (GameStateEventRaid)0x2) &&
                  ((((*(int *)(this + 0x124) != 0 &&
                     (puVar17 = (undefined4 *)(*(int *)(this + 0x124) + 0x88),
                     pCVar5 != (CafeObject *)*puVar17)) &&
                    (iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                    iVar15 == 0)) && (this[0xb9] == (GameStateEventRaid)0x0)))) {
            *puVar17 = pCVar5;
            TutorialSystem::triggerEvent
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001a0c70),' ',false);
            CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x124));
            CharacterInstance::groan(*(CharacterInstance **)(this + 0x124));
            *(undefined1 *)(*(int *)(*(int *)(this + 0x124) + 0x8c) + 0x44) = 4;
            goto LAB_001a0c4a;
          }
          goto LAB_001a0ce4;
        }
      }
      if (this[0x18] == (GameStateEventRaid)0x2) {
        iVar15 = screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + iVar15));
        iVar15 = Cafe::worldToDiamondCoords(iVar15 >> 0x10,(int)(short)iVar15);
        lVar19 = Cafe::diamondToStaggeredCoords(iVar15 >> 0x10,(int)(short)iVar15);
        iVar15 = Cafe::staggeredCoordsToIndex(lVar19);
        iVar12 = Cafe::isInside(*(Cafe **)(this + 0x5c),iVar15);
        if ((iVar12 != 0) && (*(CharacterInstance **)(this + 0x124) != (CharacterInstance *)0x0)) {
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x124));
          *(undefined4 *)(*(int *)(this + 0x124) + 0x88) = 0;
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x124));
          this_00 = (MoveTask *)operator_new(0x48);
          this_02 = *(CharacterInstance **)(this + 0x124);
          MoveTask::MoveTask(this_00,this_02,*(Cafe **)(this + 0x5c),iVar15,'\0',false);
          CharacterInstance::addTask(this_02,(Task *)this_00);
        }
      }
    }
  }
LAB_001a0ce4:
  uVar6 = __fixsfsi(*(undefined4 *)(this + 0x24));
  uVar7 = __fixsfsi(*(undefined4 *)(this + 0x20));
  uVar24 = (uVar6 & 0xffff) + *(uint *)(this + 0x28) & 0xffff;
  uVar6 = ((uVar7 & 0xffff) + (*(uint *)(this + 0x28) >> 0x10)) * 0x10000 | uVar24;
  *(uint *)(this + 0x28) = uVar6;
  iVar12 = *(int *)(*(int *)(this + 0x5c) + 0x18);
  uVar16 = *(undefined4 *)(this + 0x2c);
  iVar15 = *(int *)(*(int *)(this + 0x5c) + 0x1c);
  uVar8 = __floatsisf(iVar12 >> 0x10);
  uVar8 = __mulsf3(uVar8,uVar16);
  ceilf(__x);
  uVar9 = __floatsisf((int)(short)iVar12);
  uVar9 = __mulsf3(uVar9,uVar16);
  ceilf(__x_00);
  uVar10 = __floatsisf((int)(short)iVar15);
  __mulsf3(uVar10,uVar16);
  sVar1 = __fixsfsi();
  uVar10 = __floatsisf(iVar15 >> 0x10);
  __mulsf3(uVar10,uVar16);
  sVar2 = __fixsfsi();
  sVar3 = __fixsfsi(uVar9);
  sVar4 = __fixsfsi(uVar8);
  iVar12 = (int)uVar6 >> 0x10;
  iVar15 = -iVar12;
  if (iVar15 < sVar2) {
    uVar20 = -sVar2;
LAB_001a0db4:
    *(uint *)(this + 0x28) = uVar24 | (uint)uVar20 << 0x10;
  }
  else {
    sVar2 = sVar2 + sVar4 + -1;
    iVar11 = (int)sVar2 - (int)*(short *)(*(int *)(this + 0xc) + 0x12);
    if (-iVar11 != iVar12 && iVar11 <= iVar15) {
      uVar20 = *(short *)(*(int *)(this + 0xc) + 0x12) - sVar2;
      goto LAB_001a0db4;
    }
  }
  iVar12 = (int)(short)*(uint *)(this + 0x28);
  iVar15 = -iVar12;
  if (iVar15 < sVar1) {
    uVar20 = -sVar1;
  }
  else {
    sVar1 = sVar3 + -1 + sVar1;
    iVar11 = (int)sVar1 - (int)*(short *)(*(int *)(this + 0xc) + 0x10);
    if (-iVar11 == iVar12 || iVar15 < iVar11) goto LAB_001a0dfe;
    uVar20 = *(short *)(*(int *)(this + 0xc) + 0x10) - sVar1;
  }
  *(uint *)(this + 0x28) = (uint)uVar20 | *(uint *)(this + 0x28) & 0xffff0000;
LAB_001a0dfe:
  uVar10 = *(undefined4 *)(this + 0x20);
  puVar17 = *(undefined4 **)(iVar13 + DAT_001a0efc);
  uVar8 = __floatsisf(param_1);
  uVar9 = __mulsf3(uVar8,*puVar17);
  iVar15 = __aeabi_fcmplt(uVar9,0x3f800000);
  uVar8 = uVar9;
  if (iVar15 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar12 = __mulsf3(uVar10,uVar8);
  uVar8 = *(undefined4 *)(this + 0x24);
  *(int *)(this + 0x20) = iVar12;
  if (iVar15 == 0) {
    uVar9 = 0x3f800000;
  }
  uVar9 = __subsf3(0x3f800000,uVar9);
  iVar15 = __mulsf3(uVar8,uVar9);
  *(int *)(this + 0x24) = iVar15;
  iVar11 = __aeabi_fcmpge(iVar12,0);
  if (iVar11 == 0) {
    iVar12 = iVar12 + -0x80000000;
  }
  uVar8 = **(undefined4 **)(iVar13 + DAT_001a0f00);
  iVar13 = __aeabi_fcmplt(iVar12,uVar8);
  if (iVar13 != 0) {
    iVar13 = __aeabi_fcmpge(iVar15,0);
    if (iVar13 == 0) {
      iVar15 = iVar15 + -0x80000000;
    }
    iVar13 = __aeabi_fcmplt(iVar15,uVar8);
    if (iVar13 != 0) {
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  return;
}


