/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a2104 FUN_001a2104 */

void FUN_001a2104(void)

{
  short sVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  FollowTask *this;
  long lVar5;
  int iVar6;
  int *piVar7;
  AttackTask *this_00;
  CharacterData *this_01;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  GameStateEventRaid *unaff_r5;
  int unaff_r6;
  CharacterInstance *pCVar11;
  Character *this_02;
  ConfirmDialog *pCVar12;
  CafeObject *pCVar13;
  int iVar14;
  float fVar15;
  float extraout_s0;
  float extraout_s0_00;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000024;
  int iStack0000002c;
  int in_stack_000000a0;
  int in_stack_000000a4;
  
  for (; in_stack_00000024 < *(int *)(unaff_r6 + 4) + 1; in_stack_00000024 = in_stack_00000024 + 1)
  {
    pCVar11 = *(CharacterInstance **)(in_stack_00000024 * 4 + *(int *)(unaff_r6 + 8));
    iVar9 = GameStateEventRaid::getLaunchNumber(unaff_r5,in_stack_00000024);
    CharacterInstance::setColosseumSelect(pCVar11,iVar9 != -1);
  }
  if ((unaff_r5[0xb9] != (GameStateEventRaid)0x0) && (unaff_r5[0xbd] == (GameStateEventRaid)0x0)) {
    unaff_r5[0xbd] = (GameStateEventRaid)0x1;
    ZombieCafe::subEventRaid_attackPoint(*(ZombieCafe **)(unaff_r5 + 0xc));
    unaff_r5[0x18] = (GameStateEventRaid)0x7;
    *(undefined4 *)(unaff_r5 + 0x3c) = 0;
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x60),true);
  }
  in_stack_00000024 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x100) + 1 <= in_stack_00000024) {
      fVar15 = (float)__floatsisf(in_stack_0000001c);
      GameStateEventRaid::tickStaffAI(unaff_r5,fVar15);
      fVar15 = (float)Vector<int>::Vector((Vector<int> *)&stack0x0000009c);
      for (iVar9 = 0; iVar9 < *(int *)(unaff_r5 + 0x10c) + 1; iVar9 = iVar9 + 1) {
        iVar10 = *(int *)(*(int *)(unaff_r5 + 0x110) + iVar9 * 4);
        if ((*(char *)(iVar10 + 0x34) == '\x06') &&
           (iVar10 = (**(code **)(**(int **)(iVar10 + 0x90) + 0x1c))(), iVar10 != 0)) {
          fVar15 = (float)Vector<int>::addElement((Vector<int> *)&stack0x0000009c,iVar9);
        }
        else {
          piVar7 = *(int **)(*(int *)(unaff_r5 + 0x110) + iVar9 * 4);
          fVar15 = (float)(**(code **)(*piVar7 + 0x1c))(piVar7,in_stack_0000001c);
        }
      }
      in_stack_00000024 = in_stack_000000a0 << 2;
      for (iVar9 = in_stack_000000a0; -1 < iVar9; iVar9 = iVar9 + -1) {
        pCVar13 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r5 + 0x108),
                             *(int *)(in_stack_000000a4 + in_stack_00000024));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x5c) + 0x20),pCVar13);
        this_02 = *(Character **)(pCVar13 + 0x8c);
        this_01 = *(CharacterData **)this_02;
        *(undefined4 *)this_02 = 0;
        *(undefined4 *)(pCVar13 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar13 + 4))(pCVar13);
        Character::~Character(this_02);
        operator_delete(this_02);
        fVar15 = extraout_s0;
        if (this_01 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_01);
          operator_delete(this_01);
          fVar15 = extraout_s0_00;
        }
        in_stack_00000024 = in_stack_00000024 + -4;
      }
      if (unaff_r5[0xba] == (GameStateEventRaid)0x0) {
        unaff_r5[0xba] = (GameStateEventRaid)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,7,fVar15,false);
      }
      iVar9 = GameStateEventRaid::isBackKeyEnable(unaff_r5);
      if ((iVar9 != 0) && (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_001a28f8) != '\0')) {
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_001a28f8) = 0;
        pCVar12 = *(ConfirmDialog **)(unaff_r5 + 0x78);
        String::String((String *)&stack0x00000094,(char *)(DAT_001a28fc + 0x1a27c2));
        Vector<String>::elementAt((int)&stack0x00000084);
        Vector<String>::elementAt((int)&stack0x0000008c);
        ConfirmDialog::show(pCVar12,&stack0x00000094,&stack0x00000084,&stack0x0000008c);
        String::~String((String *)&stack0x0000008c);
        String::~String((String *)&stack0x00000084);
        String::~String((String *)&stack0x00000094);
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x0000009c);
      FUN_001a28f4();
      return;
    }
    pCVar11 = *(CharacterInstance **)(in_stack_00000024 * 4 + *(int *)(unaff_r5 + 0x104));
    sVar1 = *(short *)(pCVar11 + 0x2c);
    iVar9 = **(int **)(in_stack_00000018 + DAT_001a2718);
    uVar2 = __divsi3((int)sVar1,iVar9);
    Cafe::staggeredToDiamondCoords
              ((int)(((int)sVar1 - uVar2 * iVar9) * 0x10000 | uVar2 & 0xffff) >> 0x10,
               (int)(short)uVar2);
    iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0);
    pCVar13 = *(CafeObject **)(pCVar11 + 0x88);
    if (iVar9 == 0) {
      unaff_r5[0xbc] = (GameStateEventRaid)0x0;
      if (pCVar13 == (CafeObject *)0x0) goto LAB_001a28d2;
      iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x5c),(int)*(short *)(pCVar13 + 0x2c));
      if (iVar9 == 0) {
        *(undefined4 *)(pCVar11 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar11);
      }
      iVar9 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
      if ((iVar9 == 3) &&
         (iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar13 + 0x8c) + 0x40),0), iVar9 != 0)) {
        *(undefined4 *)(pCVar11 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar11 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar11 == *(CharacterInstance **)(unaff_r5 + 0x124)) {
        *(undefined4 *)(unaff_r5 + 0x124) = 0;
        Cafe::select(*(Cafe **)(unaff_r5 + 0x5c),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar11 + 0x88) = 0;
LAB_001a28d2:
      pCVar13 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar11 + 0x7c) == 0) {
      iVar10 = *(int *)(pCVar11 + 0x8c);
      iVar9 = __aeabi_fcmple(*(undefined4 *)(iVar10 + 0x40),0);
      if ((iVar9 == 0) && (unaff_r5[0xb9] == (GameStateEventRaid)0x0)) {
        if (pCVar13 == (CafeObject *)0x0) {
          if (*(char *)(iVar10 + 0x44) == '\x04') {
            iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x5c),(int)*(short *)(pCVar11 + 0x2c));
            if (iVar9 == 0) {
              iVar10 = **(int **)(in_stack_00000018 + DAT_001a2720);
              iVar9 = **(int **)(in_stack_00000018 + DAT_001a2724);
              uVar2 = **(int **)(in_stack_00000018 + DAT_001a2728) + 1;
              CharacterInstance::groan(pCVar11);
              lVar5 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar10 + -1) - iVar9) * 0x10000 | uVar2 & 0xffff) >> 0x10,
                                 (int)(short)uVar2);
              iVar9 = Cafe::staggeredCoordsToIndex(lVar5);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,pCVar11,*(Cafe **)(unaff_r5 + 0x5c),iVar9,'\0',
                                 false);
              goto LAB_001a2602;
            }
            iVar9 = *(int *)(unaff_r5 + 0xf4) + 1;
            if (0 < iVar9) {
              iVar10 = CapcomMath::random(iVar9);
              iStack0000002c = 0;
              do {
                if (iVar9 <= iVar10) {
                  iVar10 = 0;
                }
                iVar14 = *(int *)(iVar10 * 4 + *(int *)(unaff_r5 + 0xf8));
                if (((iVar14 != 0) &&
                    (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0),
                    iVar6 == 0)) &&
                   (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x5c),
                                           (int)*(short *)(iVar14 + 0x2c)), iVar6 != 0)) {
                  *(int *)(pCVar11 + 0x88) = iVar14;
                }
                iVar10 = iVar10 + 1;
                iStack0000002c = iStack0000002c + 1;
              } while (iStack0000002c < iVar9);
            }
          }
        }
        else {
          iVar9 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
          if (iVar9 == 3) {
            iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar13 + 0x8c) + 0x40),0);
            if ((iVar9 == 0) &&
               (iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x5c),(int)*(short *)(pCVar13 + 0x2c)),
               iVar9 != 0)) {
              this_00 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_00,pCVar11,(CharacterInstance *)pCVar13,*(Cafe **)(unaff_r5 + 0x5c));
              CharacterInstance::addTask(pCVar11,(Task *)this_00);
              puVar3 = (undefined1 *)operator_new(0xc);
              *puVar3 = 1;
              uVar8 = *(undefined4 *)(in_stack_00000018 + DAT_001a271c);
              *(GameStateEventRaid **)(puVar3 + 8) = unaff_r5;
              *(undefined4 *)(puVar3 + 4) = uVar8;
              puVar4 = (undefined4 *)operator_new(8);
              puVar4[1] = 0;
              *(undefined4 **)(*(int *)(this_00 + 0x10) + 4) = puVar4;
              *(undefined4 **)(this_00 + 0x10) = puVar4;
              *puVar4 = puVar3;
              *(undefined4 *)(*(int *)(this_00 + 0x10) + 4) = 0;
              *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar11 + 0x88) = 0;
            }
          }
          else {
            iVar9 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
            if (iVar9 == 1) {
              this = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this,pCVar11,pCVar13,*(Cafe **)(unaff_r5 + 0x5c),'\0',false);
LAB_001a2602:
              CharacterInstance::addTask(pCVar11,(Task *)this);
            }
          }
        }
      }
    }
    iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0);
    if (iVar9 == 0) {
      GameStateEventRaid::checkOverlap(unaff_r5,pCVar11);
    }
    (**(code **)(*(int *)pCVar11 + 0x1c))(pCVar11,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x5c) + 0x20),
               (CafeObject *)pCVar11);
    in_stack_00000024 = in_stack_00000024 + 1;
  } while( true );
}


