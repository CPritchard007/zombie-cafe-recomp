/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b8814 FUN_001b8814 */

void FUN_001b8814(void)

{
  short sVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  FollowTask *this;
  long lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  AttackTask *this_00;
  CharacterData *this_01;
  undefined4 uVar9;
  int iVar10;
  CharacterInstance *unaff_r5;
  int iVar11;
  Character *this_02;
  ConfirmDialog *pCVar12;
  CafeObject *pCVar13;
  GameStateEventRaid3 *unaff_r7;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  int in_stack_0000001c;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int iStack0000002c;
  int in_stack_00000030;
  int in_stack_000000b4;
  int in_stack_000000b8;
  
  if (*(int *)(unaff_r5 + 0x7c) != 0) {
    FUN_001b7c3a();
  }
  FUN_001b7c4e();
  String::String((String *)&stack0x00000038,(char *)(DAT_001b8888 + 0x1b882c));
  String::valueOf((int)&stack0x00000040);
  FUN_001b7d76();
LAB_001b883e:
  do {
    pCVar13 = (CafeObject *)0x0;
LAB_001b83fc:
    if (*(int *)(unaff_r5 + 0x7c) == 0) {
      iVar10 = *(int *)(unaff_r5 + 0x8c);
      iVar7 = __aeabi_fcmple(*(undefined4 *)(iVar10 + 0x40),0);
      if ((iVar7 == 0) && (unaff_r7[0xe5] == (GameStateEventRaid3)0x0)) {
        if (pCVar13 == (CafeObject *)0x0) {
          if (*(char *)(iVar10 + 0x44) == '\x04') {
            iVar7 = Cafe::isInside(*(Cafe **)(unaff_r7 + 0x84),(int)*(short *)(unaff_r5 + 0x2c));
            if (iVar7 == 0) {
              iVar10 = **(int **)(in_stack_0000001c + DAT_001b8558);
              iVar7 = **(int **)(in_stack_0000001c + DAT_001b855c);
              uVar2 = **(int **)(in_stack_0000001c + DAT_001b8560) + 1;
              CharacterInstance::groan(unaff_r5);
              lVar5 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar10 + -1) - iVar7) * 0x10000 | uVar2 & 0xffff) >> 0x10,
                                 (int)(short)uVar2);
              iVar7 = Cafe::staggeredCoordsToIndex(lVar5);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,unaff_r5,*(Cafe **)(unaff_r7 + 0x84),iVar7,'\0',
                                 false);
              goto LAB_001b853e;
            }
            iVar7 = *(int *)(unaff_r7 + 0x120) + 1;
            if (0 < iVar7) {
              iVar10 = CapcomMath::random(iVar7);
              iStack0000002c = 0;
              do {
                if (iVar7 <= iVar10) {
                  iVar10 = 0;
                }
                iVar11 = *(int *)(iVar10 * 4 + *(int *)(unaff_r7 + 0x124));
                if (((iVar11 != 0) &&
                    (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar11 + 0x8c) + 0x40),0),
                    iVar6 == 0)) &&
                   (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r7 + 0x84),
                                           (int)*(short *)(iVar11 + 0x2c)), iVar6 != 0)) {
                  *(int *)(unaff_r5 + 0x88) = iVar11;
                }
                iVar10 = iVar10 + 1;
                iStack0000002c = iStack0000002c + 1;
              } while (iStack0000002c < iVar7);
            }
          }
        }
        else {
          iVar7 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
          if (iVar7 == 3) {
            iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar13 + 0x8c) + 0x40),0);
            if ((iVar7 == 0) &&
               (iVar7 = Cafe::isInside(*(Cafe **)(unaff_r7 + 0x84),(int)*(short *)(pCVar13 + 0x2c)),
               iVar7 != 0)) {
              this_00 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_00,unaff_r5,(CharacterInstance *)pCVar13,*(Cafe **)(unaff_r7 + 0x84));
              CharacterInstance::addTask(unaff_r5,(Task *)this_00);
              puVar3 = (undefined1 *)operator_new(0xc);
              *puVar3 = 1;
              uVar9 = *(undefined4 *)(in_stack_0000001c + DAT_001b8554);
              *(GameStateEventRaid3 **)(puVar3 + 8) = unaff_r7;
              *(undefined4 *)(puVar3 + 4) = uVar9;
              puVar4 = (undefined4 *)operator_new(8);
              puVar4[1] = 0;
              *(undefined4 **)(*(int *)(this_00 + 0x10) + 4) = puVar4;
              *(undefined4 **)(this_00 + 0x10) = puVar4;
              *puVar4 = puVar3;
              *(undefined4 *)(*(int *)(this_00 + 0x10) + 4) = 0;
              *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(unaff_r5 + 0x88) = 0;
            }
          }
          else {
            iVar7 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
            if (iVar7 == 1) {
              this = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this,unaff_r5,pCVar13,*(Cafe **)(unaff_r7 + 0x84),'\0',false);
LAB_001b853e:
              CharacterInstance::addTask(unaff_r5,(Task *)this);
            }
          }
        }
      }
    }
    iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r5 + 0x8c) + 0x40),0);
    if (iVar7 == 0) {
      GameStateEventRaid3::checkOverlap(unaff_r7,unaff_r5);
    }
    (**(code **)(*(int *)unaff_r5 + 0x1c))(unaff_r5,in_stack_00000024);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r7 + 0x84) + 0x20),
               (CafeObject *)unaff_r5);
    in_stack_00000028 = in_stack_00000028 + 1;
    if (*(int *)(in_stack_00000030 + 4) + 1 <= in_stack_00000028) {
      fVar14 = (float)__floatsisf(in_stack_00000024);
      GameStateEventRaid3::tickStaffAI(unaff_r7,fVar14);
      fVar14 = (float)Vector<int>::Vector((Vector<int> *)&stack0x000000b0);
      for (iVar7 = 0; iVar7 < *(int *)(unaff_r7 + 0x138) + 1; iVar7 = iVar7 + 1) {
        iVar10 = *(int *)(*(int *)(unaff_r7 + 0x13c) + iVar7 * 4);
        if ((*(char *)(iVar10 + 0x34) == '\x06') &&
           (iVar10 = (**(code **)(**(int **)(iVar10 + 0x90) + 0x1c))(), iVar10 != 0)) {
          fVar14 = (float)Vector<int>::addElement((Vector<int> *)&stack0x000000b0,iVar7);
        }
        else {
          piVar8 = *(int **)(*(int *)(unaff_r7 + 0x13c) + iVar7 * 4);
          fVar14 = (float)(**(code **)(*piVar8 + 0x1c))(piVar8,in_stack_00000024);
        }
      }
      in_stack_00000028 = in_stack_000000b4 << 2;
      for (iVar7 = in_stack_000000b4; -1 < iVar7; iVar7 = iVar7 + -1) {
        pCVar13 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r7 + 0x134),
                             *(int *)(in_stack_000000b8 + in_stack_00000028));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r7 + 0x84) + 0x20),pCVar13);
        this_02 = *(Character **)(pCVar13 + 0x8c);
        this_01 = *(CharacterData **)this_02;
        *(undefined4 *)this_02 = 0;
        *(undefined4 *)(pCVar13 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar13 + 4))(pCVar13);
        Character::~Character(this_02);
        operator_delete(this_02);
        fVar14 = extraout_s0;
        if (this_01 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_01);
          operator_delete(this_01);
          fVar14 = extraout_s0_00;
        }
        in_stack_00000028 = in_stack_00000028 + -4;
      }
      if (unaff_r7[0xe6] == (GameStateEventRaid3)0x0) {
        unaff_r7[0xe6] = (GameStateEventRaid3)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r7 + 0xc),0,7,fVar14,false);
      }
      if (*(char *)(*(int *)(unaff_r7 + 0xc) + DAT_001b8874) != '\0') {
        *(undefined1 *)(*(int *)(unaff_r7 + 0xc) + DAT_001b8874) = 0;
        pCVar12 = *(ConfirmDialog **)(unaff_r7 + 0xa0);
        String::String((String *)&stack0x000000a8,(char *)(DAT_001b8878 + 0x1b870c));
        Vector<String>::elementAt((int)&stack0x00000098);
        Vector<String>::elementAt((int)&stack0x000000a0);
        ConfirmDialog::show(pCVar12,&stack0x000000a8,&stack0x00000098,&stack0x000000a0);
        String::~String((String *)&stack0x000000a0);
        String::~String((String *)&stack0x00000098);
        String::~String((String *)&stack0x000000a8);
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x000000b0);
      FUN_001b8862();
      return;
    }
    unaff_r5 = *(CharacterInstance **)(in_stack_00000028 * 4 + *(int *)(in_stack_00000030 + 8));
    sVar1 = *(short *)(unaff_r5 + 0x2c);
    iVar7 = **(int **)(in_stack_0000001c + DAT_001b8550);
    uVar2 = __divsi3((int)sVar1,iVar7);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar2 & 0xffff | ((int)sVar1 - uVar2 * iVar7) * 0x10000) >> 0x10,
               (int)(short)uVar2);
    iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r5 + 0x8c) + 0x40),0);
    pCVar13 = *(CafeObject **)(unaff_r5 + 0x88);
    if (iVar7 == 0) {
      unaff_r7[0xe8] = (GameStateEventRaid3)0x0;
      if (pCVar13 == (CafeObject *)0x0) goto LAB_001b883e;
      iVar7 = Cafe::isInside(*(Cafe **)(unaff_r7 + 0x84),(int)*(short *)(pCVar13 + 0x2c));
      if (iVar7 == 0) {
        *(undefined4 *)(unaff_r5 + 0x88) = 0;
        CharacterInstance::stopTasks(unaff_r5);
      }
      iVar7 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
      if ((iVar7 == 3) &&
         (iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar13 + 0x8c) + 0x40),0), iVar7 != 0)) {
        *(undefined4 *)(unaff_r5 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(unaff_r5 + 0x8c) + 0x44) = 4;
      }
      goto LAB_001b83fc;
    }
    if (unaff_r5 == *(CharacterInstance **)(unaff_r7 + 0x150)) {
      *(undefined4 *)(unaff_r7 + 0x150) = 0;
      Cafe::select(*(Cafe **)(unaff_r7 + 0x84),(CafeObject *)0x0);
    }
    *(undefined4 *)(unaff_r5 + 0x88) = 0;
  } while( true );
}


