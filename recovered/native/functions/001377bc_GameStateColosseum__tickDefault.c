/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001377bc GameStateColosseum::tickDefault */

/* GameStateColosseum::tickDefault(long) */

void __thiscall GameStateColosseum::tickDefault(GameStateColosseum *this,long param_1)

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
  GameStateColosseum *pGVar15;
  int iVar16;
  ZombieCafe *this_01;
  CharacterInstance *this_02;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint uVar19;
  ushort uVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  float __x;
  float __x_00;
  int local_30;
  
  this_01 = *(ZombieCafe **)(this + 0xc);
  iVar13 = DAT_00137b08 + 0x1377cc;
  if ((this_01[DAT_00137b0c] == (ZombieCafe)0x0) && (*(int *)(this_01 + 0x4b8) != 0)) {
    uVar8 = *(undefined4 *)(this_01 + DAT_00137b10);
    iVar16 = __aeabi_fcmpgt(uVar8,0);
    if (iVar16 != 0) {
      uVar9 = *(undefined4 *)(this_01 + 0x4c0);
      iVar16 = __aeabi_fcmpgt(uVar9,0);
      if (iVar16 != 0) {
        uVar17 = *(undefined4 *)(this + 0x40);
        uVar9 = __divsf3(uVar8,uVar9);
        uVar10 = __mulsf3(uVar17,uVar9);
        uVar8 = *(undefined4 *)(this + 0x44);
        uVar21 = **(undefined4 **)(iVar13 + DAT_00137b14);
        iVar16 = __aeabi_fcmpgt(uVar8,uVar10);
        if ((iVar16 == 0) && (iVar16 = __aeabi_fcmpgt(uVar10,uVar21), uVar8 = uVar10, iVar16 != 0))
        {
          uVar8 = uVar21;
        }
        *(undefined4 *)(this + 0x40) = uVar8;
        iVar16 = __aeabi_fcmpeq(uVar17,uVar8);
        if (iVar16 == 0) {
          uVar24 = *(uint *)(this + 0x3c) >> 0x10;
          uVar19 = (*(uint *)(this_01 + 0x4b8) >> 0x10) - uVar24;
          uVar14 = *(uint *)(this + 0x3c) & 0xffff;
          uVar22 = *(uint *)(this_01 + 0x4b8) - uVar14;
          uVar8 = __floatsisf((int)(short)uVar19);
          __mulsf3(uVar8,uVar9);
          uVar6 = __fixsfsi();
          uVar8 = __floatsisf((int)(short)uVar22);
          __mulsf3(uVar8,uVar9);
          uVar7 = __fixsfsi();
          *(uint *)(this + 0x3c) =
               (uVar24 - ((uVar6 & 0xffff) - (uVar19 & 0xffff) & 0xffff)) * 0x10000 |
               uVar14 - ((uVar7 & 0xffff) - (uVar22 & 0xffff) & 0xffff) & 0xffff;
        }
        this_01[DAT_00137b0c] = (ZombieCafe)0x1;
      }
    }
    iVar16 = DAT_00137b20;
    iVar12 = *(int *)(this + 0xc);
    if ((int)**(short **)(iVar13 + DAT_00137b18) < *(int *)(iVar12 + DAT_00137b1c)) {
      uVar8 = __floatsisf((*(int *)(iVar12 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar12 + DAT_00137b20) >> 0x10));
      *(undefined4 *)(this + 0x34) = uVar8;
      uVar8 = __floatsisf((int)*(short *)(iVar12 + 0x4b8) - (int)*(short *)(iVar12 + iVar16));
      iVar16 = DAT_00137b0c;
      *(undefined4 *)(this + 0x38) = uVar8;
      *(undefined1 *)(iVar12 + iVar16) = 1;
    }
    else {
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x34) = 0;
    }
  }
  else {
    iVar12 = ZombieCafe::unhandledTouchUpEvent(this_01);
    iVar16 = DAT_00137b20;
    if ((iVar12 != 0) &&
       (*(int *)(this_01 + DAT_00137b1c) <= (int)**(short **)(iVar13 + DAT_00137b18))) {
      lVar23 = *(long *)(this + 0x70);
      screenToWorldCoords(this,*(long *)(this_01 + DAT_00137b20));
      pCVar5 = (CafeObject *)Cafe::pickCafeObject(lVar23);
      if (pCVar5 != (CafeObject *)0x0) {
        iVar12 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5);
        local_30 = 0;
        if (iVar12 != 2) {
          for (; local_30 < *(int *)(this + 0x118) + 1; local_30 = local_30 + 1) {
            if (pCVar5 == *(CafeObject **)(*(int *)(this + 0x11c) + local_30 * 4)) {
              if ((pCVar5 == *(CafeObject **)(this + 0x13c)) ||
                 (iVar16 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                 iVar16 != 0)) {
                Cafe::select(*(Cafe **)(this + 0x70),(CafeObject *)0x0);
                *(undefined4 *)(this + 0x13c) = 0;
                CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x9c));
              }
              else if (this[0x2c] == (GameStateColosseum)0x0) {
                *(CafeObject **)(this + 0x13c) = pCVar5;
                onSelectZombiePressed(this);
                *(undefined1 *)(*(int *)(this + 0xc) + DAT_00137b0c) = 1;
                CharacterInstance::groan(*(CharacterInstance **)(this + 0x13c));
              }
              else if ((this[0x2c] != (GameStateColosseum)0x2) ||
                      (iVar16 = getLaunchNumber(this,local_30), iVar16 != -1)) {
                *(undefined4 *)(this + 0x13c) =
                     *(undefined4 *)(*(int *)(this + 0x11c) + local_30 * 4);
                TutorialSystem::triggerEvent
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00137b24),'\x10',false);
                Cafe::select(*(Cafe **)(this + 0x70),*(CafeObject **)(this + 0x13c));
                pGVar15 = this + 0x9c;
                CharacterCommandBar::setCharacter
                          (*(CharacterCommandBar **)pGVar15,*(CharacterInstance **)(this + 0x13c));
                CharacterCommandBar::open(*(CharacterCommandBar **)pGVar15);
                *(undefined1 *)(*(int *)(this + 0xc) + DAT_00137b0c) = 1;
                CharacterInstance::groan(*(CharacterInstance **)(this + 0x13c));
                if (*(char *)(*(int *)(this + 0x13c) + 0xc6) != '\0') {
                  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)pGVar15,0));
                  *(undefined1 *)(*(int *)(this + 0x13c) + 0xc6) = 0;
                }
              }
            }
          }
          iVar16 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
          if ((iVar16 == 0) || (iVar16 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5), iVar16 != 3))
          {
            iVar16 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
            if (((((iVar16 != 0) &&
                  (iVar16 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5), iVar16 == 1)) &&
                 ((*(char *)(*(int *)(pCVar5 + 0x38) + 0x44) == '\x02' &&
                  ((this[0x2c] == (GameStateColosseum)0x2 && (*(int *)(this + 0x13c) != 0)))))) &&
                (puVar18 = (undefined4 *)(*(int *)(this + 0x13c) + 0x88),
                pCVar5 != (CafeObject *)*puVar18)) && (this[0xd1] == (GameStateColosseum)0x0)) {
              *puVar18 = pCVar5;
              CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x13c));
LAB_00137afc:
              startColorShift(this,pCVar5);
            }
          }
          else if ((this[0x2c] == (GameStateColosseum)0x2) &&
                  ((((*(int *)(this + 0x13c) != 0 &&
                     (puVar18 = (undefined4 *)(*(int *)(this + 0x13c) + 0x88),
                     pCVar5 != (CafeObject *)*puVar18)) &&
                    (iVar16 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                    iVar16 == 0)) && (this[0xd1] == (GameStateColosseum)0x0)))) {
            *puVar18 = pCVar5;
            TutorialSystem::triggerEvent
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00137b24),' ',false);
            CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x13c));
            CharacterInstance::groan(*(CharacterInstance **)(this + 0x13c));
            *(undefined1 *)(*(int *)(*(int *)(this + 0x13c) + 0x8c) + 0x44) = 4;
            goto LAB_00137afc;
          }
          goto LAB_00137ba6;
        }
      }
      if (this[0x2c] == (GameStateColosseum)0x2) {
        iVar16 = screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + iVar16));
        iVar16 = Cafe::worldToDiamondCoords(iVar16 >> 0x10,(int)(short)iVar16);
        iVar16 = Cafe::diamondToStaggeredCoords(iVar16 >> 0x10,(int)(short)iVar16);
        iVar16 = (iVar16 >> 0x10) + **(int **)(iVar13 + DAT_00137dc4) * (int)(short)iVar16;
        iVar12 = Cafe::isInside(*(Cafe **)(this + 0x70),iVar16);
        if ((iVar12 != 0) && (*(CharacterInstance **)(this + 0x13c) != (CharacterInstance *)0x0)) {
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x13c));
          *(undefined4 *)(*(int *)(this + 0x13c) + 0x88) = 0;
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x13c));
          this_00 = (MoveTask *)operator_new(0x48);
          this_02 = *(CharacterInstance **)(this + 0x13c);
          MoveTask::MoveTask(this_00,this_02,*(Cafe **)(this + 0x70),iVar16,'\0',false);
          CharacterInstance::addTask(this_02,(Task *)this_00);
        }
      }
    }
  }
LAB_00137ba6:
  uVar6 = __fixsfsi(*(undefined4 *)(this + 0x38));
  uVar7 = __fixsfsi(*(undefined4 *)(this + 0x34));
  uVar24 = (uVar6 & 0xffff) + *(uint *)(this + 0x3c) & 0xffff;
  uVar6 = ((uVar7 & 0xffff) + (*(uint *)(this + 0x3c) >> 0x10)) * 0x10000 | uVar24;
  *(uint *)(this + 0x3c) = uVar6;
  iVar12 = *(int *)(*(int *)(this + 0x70) + 0x18);
  uVar17 = *(undefined4 *)(this + 0x40);
  iVar16 = *(int *)(*(int *)(this + 0x70) + 0x1c);
  uVar8 = __floatsisf(iVar12 >> 0x10);
  uVar8 = __mulsf3(uVar8,uVar17);
  ceilf(__x);
  uVar9 = __floatsisf((int)(short)iVar12);
  uVar9 = __mulsf3(uVar9,uVar17);
  ceilf(__x_00);
  uVar10 = __floatsisf((int)(short)iVar16);
  __mulsf3(uVar10,uVar17);
  sVar1 = __fixsfsi();
  uVar10 = __floatsisf(iVar16 >> 0x10);
  __mulsf3(uVar10,uVar17);
  sVar2 = __fixsfsi();
  sVar3 = __fixsfsi(uVar9);
  sVar4 = __fixsfsi(uVar8);
  iVar12 = (int)uVar6 >> 0x10;
  iVar16 = -iVar12;
  if (iVar16 < sVar2) {
    uVar20 = -sVar2;
LAB_00137c76:
    *(uint *)(this + 0x3c) = uVar24 | (uint)uVar20 << 0x10;
  }
  else {
    sVar2 = sVar2 + sVar4 + -1;
    iVar11 = (int)sVar2 - (int)*(short *)(*(int *)(this + 0xc) + 0x12);
    if (-iVar11 != iVar12 && iVar11 <= iVar16) {
      uVar20 = *(short *)(*(int *)(this + 0xc) + 0x12) - sVar2;
      goto LAB_00137c76;
    }
  }
  iVar12 = (int)(short)*(uint *)(this + 0x3c);
  iVar16 = -iVar12;
  if (iVar16 < sVar1) {
    uVar20 = -sVar1;
  }
  else {
    sVar1 = sVar3 + -1 + sVar1;
    iVar11 = (int)sVar1 - (int)*(short *)(*(int *)(this + 0xc) + 0x10);
    if (-iVar11 == iVar12 || iVar16 < iVar11) goto LAB_00137cc0;
    uVar20 = *(short *)(*(int *)(this + 0xc) + 0x10) - sVar1;
  }
  *(uint *)(this + 0x3c) = (uint)uVar20 | *(uint *)(this + 0x3c) & 0xffff0000;
LAB_00137cc0:
  uVar10 = *(undefined4 *)(this + 0x34);
  puVar18 = *(undefined4 **)(iVar13 + DAT_00137dc8);
  uVar8 = __floatsisf(param_1);
  uVar9 = __mulsf3(uVar8,*puVar18);
  iVar16 = __aeabi_fcmplt(uVar9,0x3f800000);
  uVar8 = uVar9;
  if (iVar16 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar12 = __mulsf3(uVar10,uVar8);
  uVar8 = *(undefined4 *)(this + 0x38);
  *(int *)(this + 0x34) = iVar12;
  if (iVar16 == 0) {
    uVar9 = 0x3f800000;
  }
  uVar9 = __subsf3(0x3f800000,uVar9);
  iVar16 = __mulsf3(uVar8,uVar9);
  *(int *)(this + 0x38) = iVar16;
  iVar11 = __aeabi_fcmpge(iVar12,0);
  if (iVar11 == 0) {
    iVar12 = iVar12 + -0x80000000;
  }
  uVar8 = **(undefined4 **)(iVar13 + DAT_00137dcc);
  iVar13 = __aeabi_fcmplt(iVar12,uVar8);
  if (iVar13 != 0) {
    iVar13 = __aeabi_fcmpge(iVar16,0);
    if (iVar13 == 0) {
      iVar16 = iVar16 + -0x80000000;
    }
    iVar13 = __aeabi_fcmplt(iVar16,uVar8);
    if (iVar13 != 0) {
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x34) = 0;
    }
  }
  return;
}


