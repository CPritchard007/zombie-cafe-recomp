/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ab91c GameStateEventRaid2::tickStaffAI */

/* GameStateEventRaid2::tickStaffAI(float) */

void __thiscall GameStateEventRaid2::tickStaffAI(GameStateEventRaid2 *this,float param_1)

{
  char cVar1;
  int iVar2;
  AttackTask *this_00;
  undefined4 uVar3;
  undefined4 in_r1;
  int iVar4;
  int iVar5;
  Cafe *pCVar6;
  CharacterInstance *pCVar7;
  int *piVar8;
  CharacterInstance *this_01;
  int iVar9;
  int *piVar10;
  int local_34;
  int local_28;
  
  iVar4 = DAT_001abc1c + 0x1ab92c;
  local_28 = 0;
  do {
    if (*(int *)(this + 0x114) + 1 <= local_28) {
      return;
    }
    this_01 = *(CharacterInstance **)(local_28 * 4 + *(int *)(this + 0x118));
    if (this[0x2c] == (GameStateEventRaid2)0x1) {
      param_1 = (float)CharacterInstance::clearTasks();
      *(undefined4 *)(this_01 + 0x88) = 0;
    }
    iVar9 = *(int *)(this_01 + 0x8c);
    iVar2 = __aeabi_fcmple(param_1,*(undefined4 *)(iVar9 + 0x40),0);
    if (iVar2 == 0) {
      pCVar7 = *(CharacterInstance **)(this_01 + 0x88);
      if (*(int *)(this_01 + 0x7c) == 0) {
        if (pCVar7 == (CharacterInstance *)0x0) {
          cVar1 = *(char *)(iVar9 + 0x44);
          if (cVar1 == '\x04') {
            iVar9 = *(int *)(this + 0x120) + 1;
            iVar2 = CapcomMath::random(iVar9);
            for (local_34 = 0; local_34 < iVar9; local_34 = local_34 + 1) {
              iVar5 = iVar2;
              if (iVar9 <= iVar2) {
                iVar5 = 0;
              }
              pCVar7 = *(CharacterInstance **)(iVar5 * 4 + *(int *)(this + 0x124));
              if (((*(char *)(*(int *)(pCVar7 + 0x8c) + 4) == '\x01') &&
                  (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0),
                  iVar5 == 0)) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar7 + 0x2c)),
                 iVar5 != 0)) {
                *(CharacterInstance **)(this_01 + 0x88) = pCVar7;
                goto LAB_001aba6c;
              }
              iVar2 = iVar2 + 1;
            }
          }
          else if (cVar1 == '\0') {
            iVar9 = *(int *)(this + 0x120) + 1;
            iVar2 = CapcomMath::random(iVar9);
            for (local_34 = 0; local_34 < iVar9; local_34 = local_34 + 1) {
              iVar5 = iVar2;
              if (iVar9 <= iVar2) {
                iVar5 = 0;
              }
              pCVar7 = *(CharacterInstance **)(iVar5 * 4 + *(int *)(this + 0x124));
              if (((*(char *)(*(int *)(pCVar7 + 0x8c) + 4) == '\x01') &&
                  (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0),
                  iVar5 == 0)) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar7 + 0x2c)),
                 iVar5 != 0)) {
                *(CharacterInstance **)(this_01 + 0x88) = pCVar7;
                goto LAB_001aba6c;
              }
              iVar2 = iVar2 + 1;
            }
          }
        }
        else {
LAB_001aba6c:
          iVar2 = (**(code **)(*(int *)pCVar7 + 0x14))(pCVar7);
          if (iVar2 == 3) {
            CharacterInstance::stopReplacementInAnimation(this_01,0);
            iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0);
            if ((iVar2 == 0) &&
               (iVar2 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar7 + 0x2c)),
               iVar2 != 0)) {
              this_00 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_00,this_01,pCVar7,*(Cafe **)(this + 0x80));
            }
            else {
              *(undefined4 *)(this_01 + 0x88) = 0;
              CharacterInstance::stopTasks(this_01);
              piVar8 = *(int **)(iVar4 + DAT_001abc20);
              piVar10 = *(int **)(iVar4 + DAT_001abc24);
              do {
                pCVar6 = *(Cafe **)(this + 0x80);
                iVar2 = CapcomMath::random(*piVar8 * *piVar10);
                iVar9 = Cafe::isInside(pCVar6,iVar2);
              } while (iVar9 == 0);
              this_00 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_00,this_01,*(Cafe **)(this + 0x80),iVar2,'\0',
                                 false);
            }
            goto LAB_001abafe;
          }
        }
      }
      else if (((pCVar7 != (CharacterInstance *)0x0) &&
               (iVar2 = (**(code **)(*(int *)pCVar7 + 0x14))(pCVar7), iVar2 == 3)) &&
              ((iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0),
               iVar2 != 0 ||
               (iVar2 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar7 + 0x2c)),
               iVar2 == 0)))) {
        *(undefined4 *)(this_01 + 0x88) = 0;
        CharacterInstance::stopTasks(this_01);
        piVar8 = *(int **)(iVar4 + DAT_001abc20);
        piVar10 = *(int **)(iVar4 + DAT_001abc24);
        do {
          pCVar6 = *(Cafe **)(this + 0x80);
          iVar2 = CapcomMath::random(*piVar8 * *piVar10);
          iVar9 = Cafe::isInside(pCVar6,iVar2);
        } while (iVar9 == 0);
        this_00 = (AttackTask *)operator_new(0x48);
        MoveTask::MoveTask((MoveTask *)this_00,this_01,*(Cafe **)(this + 0x80),iVar2,'\0',false);
LAB_001abafe:
        CharacterInstance::addTask(this_01,(Task *)this_00);
      }
    }
    else {
      this_01[0x84] = (CharacterInstance)0x0;
    }
    iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_01 + 0x8c) + 0x40),0);
    if (iVar2 == 0) {
      checkOverlap(this,this_01);
    }
    uVar3 = __fixsfsi(in_r1);
    (**(code **)(*(int *)this_01 + 0x1c))(this_01,uVar3);
    param_1 = (float)CapcomOrderableList<CafeObject*>::sort
                               ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x80) + 0x20),
                                (CafeObject *)this_01);
    local_28 = local_28 + 1;
  } while( true );
}


