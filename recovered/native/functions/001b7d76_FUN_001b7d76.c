/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b7d76 FUN_001b7d76 */

void FUN_001b7d76(void)

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
  GameStateEventRaid3 *unaff_r5;
  CharacterInstance *this_02;
  ConfirmDialog *unaff_r6;
  CafeObject *pCVar11;
  int iVar12;
  Character *this_03;
  ConfirmDialog *pCVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  int in_stack_0000001c;
  undefined4 in_stack_00000024;
  int iStack00000028;
  int iStack0000002c;
  int in_stack_000000b4;
  int in_stack_000000b8;
  
  String::operator+((String *)&stack0x00000048,&stack0x00000038,&stack0x00000040);
  String::String((String *)&stack0x00000050,(char *)(DAT_001b7e70 + 0x1b7d88));
  String::operator+((String *)&stack0x00000058,&stack0x00000048,&stack0x00000050);
  Vector<String>::elementAt((int)&stack0x00000060);
  Vector<String>::elementAt((int)&stack0x00000068);
  ConfirmDialog::show(unaff_r6,&stack0x00000058,&stack0x00000060,&stack0x00000068);
  String::~String((String *)&stack0x00000068);
  String::~String((String *)&stack0x00000060);
  String::~String((String *)&stack0x00000058);
  String::~String((String *)&stack0x00000050);
  String::~String((String *)&stack0x00000048);
  String::~String((String *)&stack0x00000040);
  fVar14 = (float)String::~String((String *)&stack0x00000038);
  if ((unaff_r5[0xe5] != (GameStateEventRaid3)0x0) && (unaff_r5[0xe9] == (GameStateEventRaid3)0x0))
  {
    unaff_r5[0xe9] = (GameStateEventRaid3)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,fVar14,false);
    unaff_r5[0x2c] = (GameStateEventRaid3)0x6;
    *(undefined4 *)(unaff_r5 + 0x54) = 0;
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x88),true);
  }
  iStack00000028 = 0;
  do {
    if (*(int *)(unaff_r5 + 300) + 1 <= iStack00000028) {
      fVar14 = (float)__floatsisf(in_stack_00000024);
      GameStateEventRaid3::tickStaffAI(unaff_r5,fVar14);
      fVar14 = (float)Vector<int>::Vector((Vector<int> *)&stack0x000000b0);
      for (iVar9 = 0; iVar9 < *(int *)(unaff_r5 + 0x138) + 1; iVar9 = iVar9 + 1) {
        iVar10 = *(int *)(*(int *)(unaff_r5 + 0x13c) + iVar9 * 4);
        if ((*(char *)(iVar10 + 0x34) == '\x06') &&
           (iVar10 = (**(code **)(**(int **)(iVar10 + 0x90) + 0x1c))(), iVar10 != 0)) {
          fVar14 = (float)Vector<int>::addElement((Vector<int> *)&stack0x000000b0,iVar9);
        }
        else {
          piVar7 = *(int **)(*(int *)(unaff_r5 + 0x13c) + iVar9 * 4);
          fVar14 = (float)(**(code **)(*piVar7 + 0x1c))(piVar7,in_stack_00000024);
        }
      }
      iStack00000028 = in_stack_000000b4 << 2;
      for (iVar9 = in_stack_000000b4; -1 < iVar9; iVar9 = iVar9 + -1) {
        pCVar11 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r5 + 0x134),
                             *(int *)(in_stack_000000b8 + iStack00000028));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x84) + 0x20),pCVar11);
        this_03 = *(Character **)(pCVar11 + 0x8c);
        this_01 = *(CharacterData **)this_03;
        *(undefined4 *)this_03 = 0;
        *(undefined4 *)(pCVar11 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar11 + 4))(pCVar11);
        Character::~Character(this_03);
        operator_delete(this_03);
        fVar14 = extraout_s0;
        if (this_01 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_01);
          operator_delete(this_01);
          fVar14 = extraout_s0_00;
        }
        iStack00000028 = iStack00000028 + -4;
      }
      if (unaff_r5[0xe6] == (GameStateEventRaid3)0x0) {
        unaff_r5[0xe6] = (GameStateEventRaid3)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,7,fVar14,false);
      }
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_001b8874) != '\0') {
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_001b8874) = 0;
        pCVar13 = *(ConfirmDialog **)(unaff_r5 + 0xa0);
        String::String((String *)&stack0x000000a8,(char *)(DAT_001b8878 + 0x1b870c));
        Vector<String>::elementAt((int)&stack0x00000098);
        Vector<String>::elementAt((int)&stack0x000000a0);
        ConfirmDialog::show(pCVar13,&stack0x000000a8,&stack0x00000098,&stack0x000000a0);
        String::~String((String *)&stack0x000000a0);
        String::~String((String *)&stack0x00000098);
        String::~String((String *)&stack0x000000a8);
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x000000b0);
      FUN_001b8862();
      return;
    }
    this_02 = *(CharacterInstance **)(iStack00000028 * 4 + *(int *)(unaff_r5 + 0x130));
    sVar1 = *(short *)(this_02 + 0x2c);
    iVar9 = **(int **)(in_stack_0000001c + DAT_001b8550);
    uVar2 = __divsi3((int)sVar1,iVar9);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar2 & 0xffff | ((int)sVar1 - uVar2 * iVar9) * 0x10000) >> 0x10,
               (int)(short)uVar2);
    iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_02 + 0x8c) + 0x40),0);
    pCVar11 = *(CafeObject **)(this_02 + 0x88);
    if (iVar9 == 0) {
      unaff_r5[0xe8] = (GameStateEventRaid3)0x0;
      if (pCVar11 == (CafeObject *)0x0) goto LAB_001b883e;
      iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),(int)*(short *)(pCVar11 + 0x2c));
      if (iVar9 == 0) {
        *(undefined4 *)(this_02 + 0x88) = 0;
        CharacterInstance::stopTasks(this_02);
      }
      iVar9 = (**(code **)(*(int *)pCVar11 + 0x14))(pCVar11);
      if ((iVar9 == 3) &&
         (iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0), iVar9 != 0)) {
        *(undefined4 *)(this_02 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(this_02 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (this_02 == *(CharacterInstance **)(unaff_r5 + 0x150)) {
        *(undefined4 *)(unaff_r5 + 0x150) = 0;
        Cafe::select(*(Cafe **)(unaff_r5 + 0x84),(CafeObject *)0x0);
      }
      *(undefined4 *)(this_02 + 0x88) = 0;
LAB_001b883e:
      pCVar11 = (CafeObject *)0x0;
    }
    if (*(int *)(this_02 + 0x7c) == 0) {
      iVar10 = *(int *)(this_02 + 0x8c);
      iVar9 = __aeabi_fcmple(*(undefined4 *)(iVar10 + 0x40),0);
      if ((iVar9 == 0) && (unaff_r5[0xe5] == (GameStateEventRaid3)0x0)) {
        if (pCVar11 == (CafeObject *)0x0) {
          if (*(char *)(iVar10 + 0x44) == '\x04') {
            iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),(int)*(short *)(this_02 + 0x2c));
            if (iVar9 == 0) {
              iVar10 = **(int **)(in_stack_0000001c + DAT_001b8558);
              iVar9 = **(int **)(in_stack_0000001c + DAT_001b855c);
              uVar2 = **(int **)(in_stack_0000001c + DAT_001b8560) + 1;
              CharacterInstance::groan(this_02);
              lVar5 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar10 + -1) - iVar9) * 0x10000 | uVar2 & 0xffff) >> 0x10,
                                 (int)(short)uVar2);
              iVar9 = Cafe::staggeredCoordsToIndex(lVar5);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,this_02,*(Cafe **)(unaff_r5 + 0x84),iVar9,'\0',
                                 false);
              goto LAB_001b853e;
            }
            iVar9 = *(int *)(unaff_r5 + 0x120) + 1;
            if (0 < iVar9) {
              iVar10 = CapcomMath::random(iVar9);
              iStack0000002c = 0;
              do {
                if (iVar9 <= iVar10) {
                  iVar10 = 0;
                }
                iVar12 = *(int *)(iVar10 * 4 + *(int *)(unaff_r5 + 0x124));
                if (((iVar12 != 0) &&
                    (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar12 + 0x8c) + 0x40),0),
                    iVar6 == 0)) &&
                   (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),
                                           (int)*(short *)(iVar12 + 0x2c)), iVar6 != 0)) {
                  *(int *)(this_02 + 0x88) = iVar12;
                }
                iVar10 = iVar10 + 1;
                iStack0000002c = iStack0000002c + 1;
              } while (iStack0000002c < iVar9);
            }
          }
        }
        else {
          iVar9 = (**(code **)(*(int *)pCVar11 + 0x14))(pCVar11);
          if (iVar9 == 3) {
            iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0);
            if ((iVar9 == 0) &&
               (iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),(int)*(short *)(pCVar11 + 0x2c)),
               iVar9 != 0)) {
              this_00 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_00,this_02,(CharacterInstance *)pCVar11,*(Cafe **)(unaff_r5 + 0x84));
              CharacterInstance::addTask(this_02,(Task *)this_00);
              puVar3 = (undefined1 *)operator_new(0xc);
              *puVar3 = 1;
              uVar8 = *(undefined4 *)(in_stack_0000001c + DAT_001b8554);
              *(GameStateEventRaid3 **)(puVar3 + 8) = unaff_r5;
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
              *(undefined4 *)(this_02 + 0x88) = 0;
            }
          }
          else {
            iVar9 = (**(code **)(*(int *)pCVar11 + 0x14))(pCVar11);
            if (iVar9 == 1) {
              this = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this,this_02,pCVar11,*(Cafe **)(unaff_r5 + 0x84),'\0',false);
LAB_001b853e:
              CharacterInstance::addTask(this_02,(Task *)this);
            }
          }
        }
      }
    }
    iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_02 + 0x8c) + 0x40),0);
    if (iVar9 == 0) {
      GameStateEventRaid3::checkOverlap(unaff_r5,this_02);
    }
    (**(code **)(*(int *)this_02 + 0x1c))(this_02,in_stack_00000024);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x84) + 0x20),
               (CafeObject *)this_02);
    iStack00000028 = iStack00000028 + 1;
  } while( true );
}


