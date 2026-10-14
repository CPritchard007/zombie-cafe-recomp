/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ac07e FUN_001ac07e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ac07e(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  FollowTask *this;
  long lVar6;
  int iVar7;
  int *piVar8;
  AttackTask *this_00;
  CharacterData *this_01;
  int in_r3;
  undefined4 uVar9;
  int unaff_r4;
  int iVar10;
  GameStateEventRaid2 *unaff_r5;
  int unaff_r6;
  CafeObject *pCVar11;
  int iVar12;
  Character *this_02;
  ConfirmDialog *pCVar13;
  CharacterInstance *pCVar14;
  float fVar15;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int iStack0000002c;
  int iStack00000030;
  int in_stack_00000094;
  int in_stack_00000098;
  
  if (*(char *)(in_r3 + 0x14) != '\0') {
    FUN_001acafe();
  }
  FUN_001aca82();
  do {
    pCVar14 = *(CharacterInstance **)(unaff_r4 * 4 + *(int *)(unaff_r6 + 8));
    iVar2 = GameStateEventRaid2::getLaunchNumber(unaff_r5,unaff_r4);
    CharacterInstance::setColosseumSelect(pCVar14,iVar2 != -1);
    unaff_r4 = unaff_r4 + 1;
  } while (unaff_r4 < *(int *)(unaff_r6 + 4) + 1);
  (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),1);
  fVar15 = (float)(**(code **)(**(int **)(unaff_r5 + 0xc4) + 0x20))(*(int **)(unaff_r5 + 0xc4),1);
  if ((unaff_r5[0xd9] != (GameStateEventRaid2)0x0) && (unaff_r5[0xdd] == (GameStateEventRaid2)0x0))
  {
    unaff_r5[0xdd] = (GameStateEventRaid2)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,fVar15,false);
    unaff_r5[0x2c] = (GameStateEventRaid2)0x6;
    *(undefined4 *)(unaff_r5 + 0x54) = 0;
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x84),true);
  }
  iStack0000002c = 0;
  do {
    if (*(int *)(unaff_r5 + 0x120) + 1 <= iStack0000002c) {
      fVar15 = (float)__floatsisf(in_stack_00000024);
      GameStateEventRaid2::tickStaffAI(unaff_r5,fVar15);
      fVar15 = (float)Vector<int>::Vector((Vector<int> *)&stack0x00000090);
      for (iVar2 = 0; iVar2 < *(int *)(unaff_r5 + 300) + 1; iVar2 = iVar2 + 1) {
        iVar10 = *(int *)(*(int *)(unaff_r5 + 0x130) + iVar2 * 4);
        if ((*(char *)(iVar10 + 0x34) == '\x06') &&
           (iVar10 = (**(code **)(**(int **)(iVar10 + 0x90) + 0x1c))(), iVar10 != 0)) {
          fVar15 = (float)Vector<int>::addElement((Vector<int> *)&stack0x00000090,iVar2);
        }
        else {
          piVar8 = *(int **)(*(int *)(unaff_r5 + 0x130) + iVar2 * 4);
          fVar15 = (float)(**(code **)(*piVar8 + 0x1c))(piVar8,in_stack_00000024);
        }
      }
      iStack0000002c = in_stack_00000094 << 2;
      for (iVar2 = in_stack_00000094; -1 < iVar2; iVar2 = iVar2 + -1) {
        pCVar11 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r5 + 0x128),
                             *(int *)(in_stack_00000098 + iStack0000002c));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x80) + 0x20),pCVar11);
        this_02 = *(Character **)(pCVar11 + 0x8c);
        this_01 = *(CharacterData **)this_02;
        *(undefined4 *)this_02 = 0;
        *(undefined4 *)(pCVar11 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar11 + 4))(pCVar11);
        Character::~Character(this_02);
        operator_delete(this_02);
        fVar15 = extraout_s0;
        if (this_01 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_01);
          operator_delete(this_01);
          fVar15 = extraout_s0_00;
        }
        iStack0000002c = iStack0000002c + -4;
      }
      if (unaff_r5[0xda] == (GameStateEventRaid2)0x0) {
        unaff_r5[0xda] = (GameStateEventRaid2)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,7,fVar15,false);
      }
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_001aca64) != '\0') {
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_001aca64) = 0;
        iVar2 = HudElement::isButtonAvailability(*(HudElement **)(unaff_r5 + 0x84),8);
        if (iVar2 != 0) {
          pCVar13 = *(ConfirmDialog **)(unaff_r5 + 0x9c);
          String::String((String *)&stack0x00000088,(char *)(DAT_001aca68 + 0x1ac97e));
          Vector<String>::elementAt((int)&stack0x00000078);
          Vector<String>::elementAt((int)&stack0x00000080);
          ConfirmDialog::show(pCVar13,&stack0x00000088,&stack0x00000078,&stack0x00000080);
          String::~String((String *)&stack0x00000080);
          String::~String((String *)&stack0x00000078);
          String::~String((String *)&stack0x00000088);
        }
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x00000090);
      FUN_001acafe();
      return;
    }
    pCVar14 = *(CharacterInstance **)(iStack0000002c * 4 + *(int *)(unaff_r5 + 0x124));
    sVar1 = *(short *)(pCVar14 + 0x2c);
    iVar2 = **(int **)(in_stack_00000028 + DAT_001ac62c);
    uVar3 = __divsi3((int)sVar1,iVar2);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar3 & 0xffff | ((int)sVar1 - uVar3 * iVar2) * 0x10000) >> 0x10,
               (int)(short)uVar3);
    iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar14 + 0x8c) + 0x40),0);
    pCVar11 = *(CafeObject **)(pCVar14 + 0x88);
    if (iVar2 == 0) {
      unaff_r5[0xdc] = (GameStateEventRaid2)0x0;
      if (pCVar11 == (CafeObject *)0x0) goto LAB_001acada;
      iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),(int)*(short *)(pCVar11 + 0x2c));
      if (iVar2 == 0) {
        *(undefined4 *)(pCVar14 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar14);
      }
      iVar2 = (**(code **)(*(int *)pCVar11 + 0x14))(pCVar11);
      if ((iVar2 == 3) &&
         (iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0), iVar2 != 0)) {
        *(undefined4 *)(pCVar14 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar14 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar14 == *(CharacterInstance **)(unaff_r5 + 0x144)) {
        *(undefined4 *)(unaff_r5 + 0x144) = 0;
        Cafe::select(*(Cafe **)(unaff_r5 + 0x80),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar14 + 0x88) = 0;
LAB_001acada:
      pCVar11 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar14 + 0x7c) == 0) {
      iVar10 = *(int *)(pCVar14 + 0x8c);
      iVar2 = __aeabi_fcmple(*(undefined4 *)(iVar10 + 0x40),0);
      if ((iVar2 == 0) && (unaff_r5[0xd9] == (GameStateEventRaid2)0x0)) {
        if (pCVar11 == (CafeObject *)0x0) {
          if (*(char *)(iVar10 + 0x44) == '\x04') {
            iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),(int)*(short *)(pCVar14 + 0x2c));
            if (iVar2 == 0) {
              iVar10 = **(int **)(in_stack_00000028 + DAT_001aca58);
              iVar2 = **(int **)(in_stack_00000028 + DAT_001aca5c);
              uVar3 = **(int **)(in_stack_00000028 + DAT_001aca60) + 1;
              CharacterInstance::groan(pCVar14);
              lVar6 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar10 + -1) - iVar2) * 0x10000 | uVar3 & 0xffff) >> 0x10,
                                 (int)(short)uVar3);
              iVar2 = Cafe::staggeredCoordsToIndex(lVar6);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,pCVar14,*(Cafe **)(unaff_r5 + 0x80),iVar2,'\0',
                                 false);
              goto LAB_001ac7c2;
            }
            iVar2 = *(int *)(unaff_r5 + 0x114) + 1;
            if (0 < iVar2) {
              iVar10 = CapcomMath::random(iVar2);
              iStack00000030 = 0;
              do {
                if (iVar2 <= iVar10) {
                  iVar10 = 0;
                }
                iVar12 = *(int *)(iVar10 * 4 + *(int *)(unaff_r5 + 0x118));
                if (((iVar12 != 0) &&
                    (iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar12 + 0x8c) + 0x40),0),
                    iVar7 == 0)) &&
                   (iVar7 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),
                                           (int)*(short *)(iVar12 + 0x2c)), iVar7 != 0)) {
                  *(int *)(pCVar14 + 0x88) = iVar12;
                }
                iVar10 = iVar10 + 1;
                iStack00000030 = iStack00000030 + 1;
              } while (iStack00000030 < iVar2);
            }
          }
        }
        else {
          iVar2 = (**(code **)(*(int *)pCVar11 + 0x14))(pCVar11);
          if (iVar2 == 3) {
            iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0);
            if ((iVar2 == 0) &&
               (iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),(int)*(short *)(pCVar11 + 0x2c)),
               iVar2 != 0)) {
              this_00 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_00,pCVar14,(CharacterInstance *)pCVar11,*(Cafe **)(unaff_r5 + 0x80));
              CharacterInstance::addTask(pCVar14,(Task *)this_00);
              puVar4 = (undefined1 *)operator_new(0xc);
              *puVar4 = 1;
              uVar9 = *(undefined4 *)(in_stack_00000028 + _DAT_001aca54);
              *(GameStateEventRaid2 **)(puVar4 + 8) = unaff_r5;
              *(undefined4 *)(puVar4 + 4) = uVar9;
              puVar5 = (undefined4 *)operator_new(8);
              puVar5[1] = 0;
              *(undefined4 **)(*(int *)(this_00 + 0x10) + 4) = puVar5;
              *(undefined4 **)(this_00 + 0x10) = puVar5;
              *puVar5 = puVar4;
              *(undefined4 *)(*(int *)(this_00 + 0x10) + 4) = 0;
              *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar14 + 0x88) = 0;
            }
          }
          else {
            iVar2 = (**(code **)(*(int *)pCVar11 + 0x14))(pCVar11);
            if (iVar2 == 1) {
              this = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this,pCVar14,pCVar11,*(Cafe **)(unaff_r5 + 0x80),'\0',false);
LAB_001ac7c2:
              CharacterInstance::addTask(pCVar14,(Task *)this);
            }
          }
        }
      }
    }
    iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar14 + 0x8c) + 0x40),0);
    if (iVar2 == 0) {
      GameStateEventRaid2::checkOverlap(unaff_r5,pCVar14);
    }
    (**(code **)(*(int *)pCVar14 + 0x1c))(pCVar14,in_stack_00000024);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x80) + 0x20),
               (CafeObject *)pCVar14);
    iStack0000002c = iStack0000002c + 1;
  } while( true );
}


