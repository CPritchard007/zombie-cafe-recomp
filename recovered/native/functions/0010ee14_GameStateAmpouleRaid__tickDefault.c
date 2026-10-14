/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ee14 GameStateAmpouleRaid::tickDefault */

/* GameStateAmpouleRaid::tickDefault(long) */

void __thiscall GameStateAmpouleRaid::tickDefault(GameStateAmpouleRaid *this,long param_1)

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
  GameStateAmpouleRaid *pGVar15;
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
  iVar13 = DAT_0010f158 + 0x10ee24;
  if ((this_01[DAT_0010f15c] == (ZombieCafe)0x0) && (*(int *)(this_01 + 0x4b8) != 0)) {
    uVar8 = *(undefined4 *)(this_01 + DAT_0010f160);
    iVar16 = __aeabi_fcmpgt(uVar8,0);
    if (iVar16 != 0) {
      uVar9 = *(undefined4 *)(this_01 + 0x4c0);
      iVar16 = __aeabi_fcmpgt(uVar9,0);
      if (iVar16 != 0) {
        uVar17 = *(undefined4 *)(this + 0x34);
        uVar9 = __divsf3(uVar8,uVar9);
        uVar10 = __mulsf3(uVar17,uVar9);
        uVar8 = *(undefined4 *)(this + 0x38);
        uVar21 = **(undefined4 **)(iVar13 + DAT_0010f164);
        iVar16 = __aeabi_fcmpgt(uVar8,uVar10);
        if ((iVar16 == 0) && (iVar16 = __aeabi_fcmpgt(uVar10,uVar21), uVar8 = uVar10, iVar16 != 0))
        {
          uVar8 = uVar21;
        }
        *(undefined4 *)(this + 0x34) = uVar8;
        iVar16 = __aeabi_fcmpeq(uVar17,uVar8);
        if (iVar16 == 0) {
          uVar24 = *(uint *)(this + 0x30) >> 0x10;
          uVar19 = (*(uint *)(this_01 + 0x4b8) >> 0x10) - uVar24;
          uVar14 = *(uint *)(this + 0x30) & 0xffff;
          uVar22 = *(uint *)(this_01 + 0x4b8) - uVar14;
          uVar8 = __floatsisf((int)(short)uVar19);
          __mulsf3(uVar8,uVar9);
          uVar6 = __fixsfsi();
          uVar8 = __floatsisf((int)(short)uVar22);
          __mulsf3(uVar8,uVar9);
          uVar7 = __fixsfsi();
          *(uint *)(this + 0x30) =
               (uVar24 - ((uVar6 & 0xffff) - (uVar19 & 0xffff) & 0xffff)) * 0x10000 |
               uVar14 - ((uVar7 & 0xffff) - (uVar22 & 0xffff) & 0xffff) & 0xffff;
        }
        this_01[DAT_0010f15c] = (ZombieCafe)0x1;
      }
    }
    iVar16 = DAT_0010f170;
    iVar12 = *(int *)(this + 0xc);
    if ((int)**(short **)(iVar13 + DAT_0010f168) < *(int *)(iVar12 + DAT_0010f16c)) {
      uVar8 = __floatsisf((*(int *)(iVar12 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar12 + DAT_0010f170) >> 0x10));
      *(undefined4 *)(this + 0x28) = uVar8;
      uVar8 = __floatsisf((int)*(short *)(iVar12 + 0x4b8) - (int)*(short *)(iVar12 + iVar16));
      iVar16 = DAT_0010f15c;
      *(undefined4 *)(this + 0x2c) = uVar8;
      *(undefined1 *)(iVar12 + iVar16) = 1;
    }
    else {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(this + 0x28) = 0;
    }
  }
  else {
    iVar12 = ZombieCafe::unhandledTouchUpEvent(this_01);
    iVar16 = DAT_0010f170;
    if ((iVar12 != 0) &&
       (*(int *)(this_01 + DAT_0010f16c) <= (int)**(short **)(iVar13 + DAT_0010f168))) {
      lVar23 = *(long *)(this + 100);
      screenToWorldCoords(this,*(long *)(this_01 + DAT_0010f170));
      pCVar5 = (CafeObject *)Cafe::pickCafeObject(lVar23);
      if (pCVar5 != (CafeObject *)0x0) {
        iVar12 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5);
        local_30 = 0;
        if (iVar12 != 2) {
          for (; local_30 < *(int *)(this + 0x104) + 1; local_30 = local_30 + 1) {
            if (pCVar5 == *(CafeObject **)(*(int *)(this + 0x108) + local_30 * 4)) {
              if ((pCVar5 == *(CafeObject **)(this + 0x128)) ||
                 (iVar16 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                 iVar16 != 0)) {
                Cafe::select(*(Cafe **)(this + 100),(CafeObject *)0x0);
                *(undefined4 *)(this + 0x128) = 0;
                CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x90));
              }
              else if (this[0x20] == (GameStateAmpouleRaid)0x0) {
                *(CafeObject **)(this + 0x128) = pCVar5;
                onSelectZombiePressed(this);
                *(undefined1 *)(*(int *)(this + 0xc) + DAT_0010f15c) = 1;
                CharacterInstance::groan(*(CharacterInstance **)(this + 0x128));
              }
              else if ((this[0x20] != (GameStateAmpouleRaid)0x2) ||
                      (iVar16 = getLaunchNumber(this,local_30), iVar16 != -1)) {
                *(undefined4 *)(this + 0x128) =
                     *(undefined4 *)(*(int *)(this + 0x108) + local_30 * 4);
                TutorialSystem::triggerEvent
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0010f174),'\x10',false);
                Cafe::select(*(Cafe **)(this + 100),*(CafeObject **)(this + 0x128));
                pGVar15 = this + 0x90;
                CharacterCommandBar::setCharacter
                          (*(CharacterCommandBar **)pGVar15,*(CharacterInstance **)(this + 0x128));
                CharacterCommandBar::open(*(CharacterCommandBar **)pGVar15);
                *(undefined1 *)(*(int *)(this + 0xc) + DAT_0010f15c) = 1;
                CharacterInstance::groan(*(CharacterInstance **)(this + 0x128));
                if (*(char *)(*(int *)(this + 0x128) + 0xc6) != '\0') {
                  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)pGVar15,0));
                  *(undefined1 *)(*(int *)(this + 0x128) + 0xc6) = 0;
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
                  ((this[0x20] == (GameStateAmpouleRaid)0x2 && (*(int *)(this + 0x128) != 0)))))) &&
                (puVar18 = (undefined4 *)(*(int *)(this + 0x128) + 0x88),
                pCVar5 != (CafeObject *)*puVar18)) && (this[0xbd] == (GameStateAmpouleRaid)0x0)) {
              *puVar18 = pCVar5;
              CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x128));
LAB_0010f14e:
              startColorShift(this,pCVar5);
            }
          }
          else if ((this[0x20] == (GameStateAmpouleRaid)0x2) &&
                  ((((*(int *)(this + 0x128) != 0 &&
                     (puVar18 = (undefined4 *)(*(int *)(this + 0x128) + 0x88),
                     pCVar5 != (CafeObject *)*puVar18)) &&
                    (iVar16 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                    iVar16 == 0)) && (this[0xbd] == (GameStateAmpouleRaid)0x0)))) {
            *puVar18 = pCVar5;
            TutorialSystem::triggerEvent
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0010f174),' ',false);
            CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x128));
            CharacterInstance::groan(*(CharacterInstance **)(this + 0x128));
            *(undefined1 *)(*(int *)(*(int *)(this + 0x128) + 0x8c) + 0x44) = 4;
            goto LAB_0010f14e;
          }
          goto LAB_0010f1f6;
        }
      }
      if (this[0x20] == (GameStateAmpouleRaid)0x2) {
        iVar16 = screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + iVar16));
        iVar16 = Cafe::worldToDiamondCoords(iVar16 >> 0x10,(int)(short)iVar16);
        iVar16 = Cafe::diamondToStaggeredCoords(iVar16 >> 0x10,(int)(short)iVar16);
        iVar16 = (iVar16 >> 0x10) + **(int **)(iVar13 + DAT_0010f414) * (int)(short)iVar16;
        iVar12 = Cafe::isInside(*(Cafe **)(this + 100),iVar16);
        if ((iVar12 != 0) && (*(CharacterInstance **)(this + 0x128) != (CharacterInstance *)0x0)) {
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x128));
          *(undefined4 *)(*(int *)(this + 0x128) + 0x88) = 0;
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x128));
          this_00 = (MoveTask *)operator_new(0x48);
          this_02 = *(CharacterInstance **)(this + 0x128);
          MoveTask::MoveTask(this_00,this_02,*(Cafe **)(this + 100),iVar16,'\0',false);
          CharacterInstance::addTask(this_02,(Task *)this_00);
        }
      }
    }
  }
LAB_0010f1f6:
  uVar6 = __fixsfsi(*(undefined4 *)(this + 0x2c));
  uVar7 = __fixsfsi(*(undefined4 *)(this + 0x28));
  uVar24 = (uVar6 & 0xffff) + *(uint *)(this + 0x30) & 0xffff;
  uVar6 = ((uVar7 & 0xffff) + (*(uint *)(this + 0x30) >> 0x10)) * 0x10000 | uVar24;
  *(uint *)(this + 0x30) = uVar6;
  iVar12 = *(int *)(*(int *)(this + 100) + 0x18);
  uVar17 = *(undefined4 *)(this + 0x34);
  iVar16 = *(int *)(*(int *)(this + 100) + 0x1c);
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
LAB_0010f2c6:
    *(uint *)(this + 0x30) = uVar24 | (uint)uVar20 << 0x10;
  }
  else {
    sVar2 = sVar2 + sVar4 + -1;
    iVar11 = (int)sVar2 - (int)*(short *)(*(int *)(this + 0xc) + 0x12);
    if (-iVar11 != iVar12 && iVar11 <= iVar16) {
      uVar20 = *(short *)(*(int *)(this + 0xc) + 0x12) - sVar2;
      goto LAB_0010f2c6;
    }
  }
  iVar12 = (int)(short)*(uint *)(this + 0x30);
  iVar16 = -iVar12;
  if (iVar16 < sVar1) {
    uVar20 = -sVar1;
  }
  else {
    sVar1 = sVar3 + -1 + sVar1;
    iVar11 = (int)sVar1 - (int)*(short *)(*(int *)(this + 0xc) + 0x10);
    if (-iVar11 == iVar12 || iVar16 < iVar11) goto LAB_0010f310;
    uVar20 = *(short *)(*(int *)(this + 0xc) + 0x10) - sVar1;
  }
  *(uint *)(this + 0x30) = (uint)uVar20 | *(uint *)(this + 0x30) & 0xffff0000;
LAB_0010f310:
  uVar10 = *(undefined4 *)(this + 0x28);
  puVar18 = *(undefined4 **)(iVar13 + DAT_0010f418);
  uVar8 = __floatsisf(param_1);
  uVar9 = __mulsf3(uVar8,*puVar18);
  iVar16 = __aeabi_fcmplt(uVar9,0x3f800000);
  uVar8 = uVar9;
  if (iVar16 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar12 = __mulsf3(uVar10,uVar8);
  uVar8 = *(undefined4 *)(this + 0x2c);
  *(int *)(this + 0x28) = iVar12;
  if (iVar16 == 0) {
    uVar9 = 0x3f800000;
  }
  uVar9 = __subsf3(0x3f800000,uVar9);
  iVar16 = __mulsf3(uVar8,uVar9);
  *(int *)(this + 0x2c) = iVar16;
  iVar11 = __aeabi_fcmpge(iVar12,0);
  if (iVar11 == 0) {
    iVar12 = iVar12 + -0x80000000;
  }
  uVar8 = **(undefined4 **)(iVar13 + DAT_0010f41c);
  iVar13 = __aeabi_fcmplt(iVar12,uVar8);
  if (iVar13 != 0) {
    iVar13 = __aeabi_fcmpge(iVar16,0);
    if (iVar13 == 0) {
      iVar16 = iVar16 + -0x80000000;
    }
    iVar13 = __aeabi_fcmplt(iVar16,uVar8);
    if (iVar13 != 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(this + 0x28) = 0;
    }
  }
  return;
}


