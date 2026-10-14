/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00180554 GameStateRaid::tickDefault */

/* GameStateRaid::tickDefault(long) */

void __thiscall GameStateRaid::tickDefault(GameStateRaid *this,long param_1)

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
  int extraout_r1;
  int extraout_r1_00;
  int iVar12;
  long lVar13;
  int *piVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  GameStateRaid *pGVar18;
  ZombieCafe *this_01;
  CharacterInstance *this_02;
  undefined4 *puVar19;
  NoticeDialog *pNVar20;
  long lVar21;
  undefined4 uVar22;
  float extraout_s0;
  float __x;
  float __x_00;
  float extraout_s1;
  float extraout_s2;
  int local_40;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar17 = DAT_00180894 + 0x180560;
  if (this[0xa0] == (GameStateRaid)0x0) {
    this_01 = *(ZombieCafe **)(this + 0xc);
    if ((this_01[DAT_001808a4] == (ZombieCafe)0x0) && (*(int *)(this_01 + 0x4b8) != 0)) {
      uVar8 = *(undefined4 *)(this_01 + DAT_001808a8);
      iVar12 = __aeabi_fcmpgt(uVar8,0);
      if (iVar12 != 0) {
        uVar9 = *(undefined4 *)(this_01 + 0x4c0);
        iVar12 = __aeabi_fcmpgt(uVar9,0);
        if (iVar12 != 0) {
          uVar10 = *(undefined4 *)(this + 0x98);
          uVar8 = __divsf3(uVar8,uVar9);
          uVar9 = getZoomParam(this,extraout_s0,extraout_s1,extraout_s2);
          *(undefined4 *)(this + 0x98) = uVar9;
          iVar12 = __aeabi_fcmpeq(uVar10,uVar9);
          if (iVar12 == 0) {
            lVar13 = *(long *)(this + 0x94);
            iVar12 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x4b8),lVar13);
            uVar9 = __floatsisf(iVar12 >> 0x10);
            __mulsf3(uVar9,uVar8);
            iVar16 = __fixsfsi();
            uVar9 = __floatsisf((int)(short)iVar12);
            __mulsf3(uVar9,uVar8);
            uVar6 = __fixsfsi();
            lVar21 = CFPoint::subtract(uVar6 & 0xffff | iVar16 << 0x10,iVar12);
            uVar8 = CFPoint::subtract(lVar13,lVar21);
            *(undefined4 *)(this + 0x94) = uVar8;
          }
          *(undefined1 *)(*(int *)(this + 0xc) + DAT_001808a4) = 1;
        }
      }
      iVar12 = DAT_001808b4;
      iVar16 = *(int *)(this + 0xc);
      if ((int)**(short **)(iVar17 + DAT_001808ac) < *(int *)(iVar16 + DAT_001808b0)) {
        uVar8 = __floatsisf((*(int *)(iVar16 + 0x4b8) >> 0x10) -
                            (*(int *)(iVar16 + DAT_001808b4) >> 0x10));
        *(undefined4 *)(this + 0x8c) = uVar8;
        uVar8 = __floatsisf((int)*(short *)(iVar16 + 0x4b8) - (int)*(short *)(iVar16 + iVar12));
        iVar12 = DAT_001808a4;
        *(undefined4 *)(this + 0x90) = uVar8;
        *(undefined1 *)(iVar16 + iVar12) = 1;
      }
      else {
        *(undefined4 *)(this + 0x90) = 0;
        *(undefined4 *)(this + 0x8c) = 0;
      }
    }
    else {
      iVar16 = ZombieCafe::unhandledTouchUpEvent(this_01);
      iVar12 = DAT_001808b4;
      if ((iVar16 != 0) &&
         (*(int *)(this_01 + DAT_001808b0) <= (int)**(short **)(iVar17 + DAT_001808ac))) {
        lVar21 = *(long *)(this + 0x78);
        screenToWorldCoords(this,*(long *)(this_01 + DAT_001808b4));
        pCVar5 = (CafeObject *)Cafe::pickCafeObject(lVar21);
        if (((*(TutorialArrow **)(this + 0x150))[0x14] != (TutorialArrow)0x0) &&
           ((iVar16 = TutorialArrow::attachedToCafeObject(*(TutorialArrow **)(this + 0x150)),
            iVar16 != 0 &&
            (iVar12 = TutorialArrow::targetContains
                                (*(TutorialArrow **)(this + 0x150),this,
                                 *(long *)(*(int *)(this + 0xc) + iVar12)), iVar12 != 0)))) {
          pCVar5 = *(CafeObject **)(*(int *)(this + 0x150) + 0x60);
        }
        if (pCVar5 != (CafeObject *)0x0) {
          iVar12 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5);
          local_40 = 0;
          if (iVar12 != 2) {
            for (; local_40 < *(int *)(this + 0xb0) + 1; local_40 = local_40 + 1) {
              if (pCVar5 == *(CafeObject **)(local_40 * 4 + *(int *)(this + 0xb4))) {
                if ((pCVar5 == *(CafeObject **)(this + 0x114)) ||
                   (iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                   iVar12 != 0)) {
                  Cafe::select(*(Cafe **)(this + 0x78),(CafeObject *)0x0);
                  *(undefined4 *)(this + 0x114) = 0;
                  CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x13c));
                }
                else {
                  *(CafeObject **)(this + 0x114) = pCVar5;
                  TutorialSystem::triggerEvent
                            (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001808b8),'\x10',false)
                  ;
                  Cafe::select(*(Cafe **)(this + 0x78),*(CafeObject **)(this + 0x114));
                  CharacterCommandBar::setCharacter
                            (*(CharacterCommandBar **)(this + 0x13c),
                             *(CharacterInstance **)(this + 0x114));
                  CharacterCommandBar::open(*(CharacterCommandBar **)(this + 0x13c));
                  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001808a4) = 1;
                  CharacterInstance::groan(*(CharacterInstance **)(this + 0x114));
                  if (*(char *)(*(int *)(this + 0x114) + 0xc6) != '\0') {
                    CharacterCommandBar::setInfoButtonNewIndicator
                              (SUB41(*(undefined4 *)(this + 0x13c),0));
                    *(undefined1 *)(*(int *)(this + 0x114) + 0xc6) = 0;
                  }
                }
              }
            }
            iVar12 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
            if ((iVar12 == 0) ||
               (iVar12 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5), iVar12 != 3)) {
              iVar12 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
              if ((((iVar12 != 0) &&
                   (iVar12 = (**(code **)(*(int *)pCVar5 + 0x14))(pCVar5), iVar12 == 1)) &&
                  ((*(char *)(*(int *)(pCVar5 + 0x38) + 0x44) == '\x02' &&
                   ((*(int *)(this + 0x114) != 0 &&
                    (piVar14 = (int *)(*(int *)(this + 0x114) + 0x88),
                    pCVar5 != (CafeObject *)*piVar14)))))) && (this[0x130] == (GameStateRaid)0x0)) {
                *piVar14 = (int)pCVar5;
                CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x114));
LAB_001808f6:
                startColorShift(this,pCVar5);
              }
            }
            else if ((*(int *)(this + 0x114) != 0) &&
                    (((piVar14 = (int *)(*(int *)(this + 0x114) + 0x88),
                      pCVar5 != (CafeObject *)*piVar14 &&
                      (iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar5 + 0x8c) + 0x40),0),
                      iVar12 == 0)) && (this[0x130] == (GameStateRaid)0x0)))) {
              *piVar14 = (int)pCVar5;
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001808b8),' ',false);
              CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x114));
              CharacterInstance::groan(*(CharacterInstance **)(this + 0x114));
              *(undefined1 *)(*(int *)(*(int *)(this + 0x114) + 0x8c) + 0x44) = 4;
              goto LAB_001808f6;
            }
            goto LAB_0018093c;
          }
        }
        iVar12 = screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + DAT_00180be0));
        iVar12 = Cafe::worldToDiamondCoords(iVar12 >> 0x10,(int)(short)iVar12);
        lVar21 = Cafe::diamondToStaggeredCoords(iVar12 >> 0x10,(int)(short)iVar12);
        iVar12 = Cafe::staggeredCoordsToIndex(lVar21);
        iVar16 = Cafe::isInside(*(Cafe **)(this + 0x78),iVar12);
        if ((iVar16 != 0) && (*(CharacterInstance **)(this + 0x114) != (CharacterInstance *)0x0)) {
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x114));
          *(undefined4 *)(*(int *)(this + 0x114) + 0x88) = 0;
          CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x114));
          this_00 = (MoveTask *)operator_new(0x48);
          this_02 = *(CharacterInstance **)(this + 0x114);
          MoveTask::MoveTask(this_00,this_02,*(Cafe **)(this + 0x78),iVar12,'\0',false);
          CharacterInstance::addTask(this_02,(Task *)this_00);
        }
      }
    }
  }
  else {
    pGVar18 = this + 0xa4;
    iVar12 = *(int *)pGVar18;
    *(int *)pGVar18 = iVar12 + -1;
    if (iVar12 + -1 < 1) {
      this[0xa0] = (GameStateRaid)0x0;
      *(undefined4 *)(this + 0x90) = 0;
      *(undefined4 *)(this + 0x8c) = 0;
      if (*(int *)(*(int *)(this + 0xc) + DAT_00180898) < 1) {
        pNVar20 = *(NoticeDialog **)(this + 0x30);
        Vector<String>::elementAt((int)aSStack_28);
        Vector<String>::elementAt((int)aSStack_20);
        NoticeDialog::show(pNVar20,aSStack_28,aSStack_20,0,this);
        String::~String(aSStack_20);
        String::~String(aSStack_28);
      }
    }
    else {
      uVar8 = arc4random();
      __aeabi_uidivmod(uVar8,0x14);
      uVar8 = __floatsisf(extraout_r1 + -10);
      *(undefined4 *)(this + 0x8c) = uVar8;
      uVar8 = arc4random();
      __aeabi_uidivmod(uVar8,0x14);
      uVar8 = __floatsisf(extraout_r1_00 + -10);
      *(undefined4 *)(this + 0x90) = uVar8;
      *(int *)pGVar18 = *(int *)pGVar18 + -1;
    }
  }
LAB_0018093c:
  uVar6 = __fixsfsi(*(undefined4 *)(this + 0x90));
  uVar7 = __fixsfsi(*(undefined4 *)(this + 0x8c));
  pGVar18 = this + 0x94;
  uVar6 = (uVar6 & 0xffff) + *(uint *)pGVar18 & 0xffff;
  uVar7 = uVar6 | ((uVar7 & 0xffff) + (*(uint *)pGVar18 >> 0x10)) * 0x10000;
  *(uint *)pGVar18 = uVar7;
  iVar12 = *(int *)(*(int *)(this + 0x78) + 0x18);
  iVar16 = *(int *)(*(int *)(this + 0x78) + 0x1c);
  uVar22 = *(undefined4 *)(this + 0x98);
  uVar8 = __floatsisf(iVar12 >> 0x10);
  uVar8 = __mulsf3(uVar8,uVar22);
  ceilf(__x);
  uVar9 = __floatsisf((int)(short)iVar12);
  uVar9 = __mulsf3(uVar9,uVar22);
  ceilf(__x_00);
  uVar10 = __floatsisf((int)(short)iVar16);
  __mulsf3(uVar10,uVar22);
  sVar1 = __fixsfsi();
  uVar10 = __floatsisf(iVar16 >> 0x10);
  __mulsf3(uVar10,uVar22);
  sVar2 = __fixsfsi();
  sVar3 = __fixsfsi(uVar9);
  sVar4 = __fixsfsi(uVar8);
  iVar16 = (int)uVar7 >> 0x10;
  iVar12 = -iVar16;
  if (iVar12 < sVar2) {
    uVar15 = -sVar2;
  }
  else {
    sVar2 = sVar2 + sVar4 + -1;
    iVar11 = (int)sVar2 - (int)*(short *)(*(int *)(this + 0xc) + 0x12);
    if (-iVar11 == iVar16 || iVar12 < iVar11) goto LAB_00180a34;
    uVar15 = *(short *)(*(int *)(this + 0xc) + 0x12) - sVar2;
  }
  *(uint *)pGVar18 = uVar6 | (uint)uVar15 << 0x10;
LAB_00180a34:
  pGVar18 = this + 0x94;
  uVar6 = *(uint *)pGVar18;
  iVar12 = -(int)(short)uVar6;
  if (iVar12 < sVar1) {
    *(uint *)pGVar18 = (uint)(ushort)-sVar1 | uVar6 & 0xffff0000;
  }
  else {
    sVar1 = sVar3 + -1 + sVar1;
    iVar16 = (int)sVar1 - (int)*(short *)(*(int *)(this + 0xc) + 0x10);
    if (-iVar16 != (int)(short)uVar6 && iVar16 <= iVar12) {
      *(uint *)pGVar18 =
           (uint)(ushort)(*(short *)(*(int *)(this + 0xc) + 0x10) - sVar1) | uVar6 & 0xffff0000;
    }
  }
  uVar10 = *(undefined4 *)(this + 0x8c);
  puVar19 = *(undefined4 **)(iVar17 + DAT_00180bd8);
  uVar8 = __floatsisf(param_1);
  uVar9 = __mulsf3(uVar8,*puVar19);
  iVar12 = __aeabi_fcmplt(uVar9,0x3f800000);
  uVar8 = uVar9;
  if (iVar12 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar16 = __mulsf3(uVar10,uVar8);
  *(int *)(this + 0x8c) = iVar16;
  uVar8 = *(undefined4 *)(this + 0x90);
  if (iVar12 == 0) {
    uVar9 = 0x3f800000;
  }
  uVar9 = __subsf3(0x3f800000,uVar9);
  iVar12 = __mulsf3(uVar8,uVar9);
  *(int *)(this + 0x90) = iVar12;
  iVar11 = __aeabi_fcmpge(iVar16,0);
  if (iVar11 == 0) {
    iVar16 = iVar16 + -0x80000000;
  }
  uVar8 = **(undefined4 **)(iVar17 + DAT_00180bdc);
  iVar17 = __aeabi_fcmplt(iVar16,uVar8);
  if (iVar17 != 0) {
    iVar17 = __aeabi_fcmpge(iVar12,0);
    if (iVar17 == 0) {
      iVar12 = iVar12 + -0x80000000;
    }
    iVar17 = __aeabi_fcmplt(iVar12,uVar8);
    if (iVar17 != 0) {
      *(undefined4 *)(this + 0x90) = 0;
      *(undefined4 *)(this + 0x8c) = 0;
    }
  }
  return;
}


