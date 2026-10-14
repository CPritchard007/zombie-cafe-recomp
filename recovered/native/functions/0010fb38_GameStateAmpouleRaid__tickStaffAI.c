/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010fb38 GameStateAmpouleRaid::tickStaffAI */

/* GameStateAmpouleRaid::tickStaffAI(float) */

void __thiscall GameStateAmpouleRaid::tickStaffAI(GameStateAmpouleRaid *this,float param_1)

{
  char cVar1;
  int iVar2;
  AttackTask *this_00;
  undefined4 uVar3;
  undefined4 in_r1;
  int iVar4;
  int iVar5;
  int *piVar6;
  Cafe *pCVar7;
  CharacterInstance *pCVar8;
  int *piVar9;
  CharacterInstance *this_01;
  int iVar10;
  int local_30;
  int local_2c;
  int local_24;
  
  iVar10 = DAT_0010fe28 + 0x10fb4a;
  local_24 = 0;
  do {
    if (*(int *)(this + 0xf8) + 1 <= local_24) {
      return;
    }
    this_01 = *(CharacterInstance **)(local_24 * 4 + *(int *)(this + 0xfc));
    if (this[0x20] == (GameStateAmpouleRaid)0x1) {
      param_1 = (float)CharacterInstance::clearTasks();
      *(undefined4 *)(this_01 + 0x88) = 0;
    }
    iVar4 = *(int *)(this_01 + 0x8c);
    iVar2 = __aeabi_fcmple(param_1,*(undefined4 *)(iVar4 + 0x40),0);
    if (iVar2 == 0) {
      pCVar8 = *(CharacterInstance **)(this_01 + 0x88);
      if (*(int *)(this_01 + 0x7c) == 0) {
        if (pCVar8 == (CharacterInstance *)0x0) {
          cVar1 = *(char *)(iVar4 + 0x44);
          if (cVar1 == '\x04') {
            iVar2 = *(int *)(this + 0x104) + 1;
            local_30 = CapcomMath::random(iVar2);
            for (local_2c = 0; local_2c < iVar2; local_2c = local_2c + 1) {
              iVar4 = local_30;
              if (iVar2 <= local_30) {
                iVar4 = 0;
              }
              pCVar8 = *(CharacterInstance **)(iVar4 * 4 + *(int *)(this + 0x108));
              if (((*(char *)(*(int *)(pCVar8 + 0x8c) + 4) == '\x01') &&
                  (iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar8 + 0x8c) + 0x40),0),
                  iVar4 == 0)) &&
                 (iVar4 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar8 + 0x2c)),
                 iVar4 != 0)) {
                *(CharacterInstance **)(this_01 + 0x88) = pCVar8;
                goto LAB_0010fc80;
              }
              local_30 = local_30 + 1;
            }
          }
          else if (cVar1 == '\0') {
            iVar4 = *(int *)(this + 0x104) + 1;
            iVar2 = CapcomMath::random(iVar4);
            for (local_30 = 0; local_30 < iVar4; local_30 = local_30 + 1) {
              iVar5 = iVar2;
              if (iVar4 <= iVar2) {
                iVar5 = 0;
              }
              pCVar8 = *(CharacterInstance **)(iVar5 * 4 + *(int *)(this + 0x108));
              if (((*(char *)(*(int *)(pCVar8 + 0x8c) + 4) == '\x01') &&
                  (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar8 + 0x8c) + 0x40),0),
                  iVar5 == 0)) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar8 + 0x2c)),
                 iVar5 != 0)) {
                *(CharacterInstance **)(this_01 + 0x88) = pCVar8;
                goto LAB_0010fc80;
              }
              iVar2 = iVar2 + 1;
            }
          }
        }
        else {
LAB_0010fc80:
          iVar2 = (**(code **)(*(int *)pCVar8 + 0x14))(pCVar8);
          if (iVar2 == 3) {
            CharacterInstance::stopReplacementInAnimation(this_01,0);
            iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar8 + 0x8c) + 0x40),0);
            if ((iVar2 == 0) &&
               (iVar2 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar8 + 0x2c)),
               iVar2 != 0)) {
              this_00 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_00,this_01,pCVar8,*(Cafe **)(this + 100));
            }
            else {
              *(undefined4 *)(this_01 + 0x88) = 0;
              CharacterInstance::stopTasks(this_01);
              piVar9 = *(int **)(iVar10 + DAT_0010fe2c);
              piVar6 = *(int **)(iVar10 + DAT_0010fe30);
              do {
                pCVar7 = *(Cafe **)(this + 100);
                iVar2 = CapcomMath::random(*piVar9 * *piVar6);
                iVar4 = Cafe::isInside(pCVar7,iVar2);
              } while (iVar4 == 0);
              this_00 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_00,this_01,*(Cafe **)(this + 100),iVar2,'\0',false
                                );
            }
            goto LAB_0010fd0c;
          }
        }
      }
      else if (((pCVar8 != (CharacterInstance *)0x0) &&
               (iVar2 = (**(code **)(*(int *)pCVar8 + 0x14))(pCVar8), iVar2 == 3)) &&
              ((iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar8 + 0x8c) + 0x40),0),
               iVar2 != 0 ||
               (iVar2 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar8 + 0x2c)),
               iVar2 == 0)))) {
        *(undefined4 *)(this_01 + 0x88) = 0;
        CharacterInstance::stopTasks(this_01);
        piVar9 = *(int **)(iVar10 + DAT_0010fe2c);
        piVar6 = *(int **)(iVar10 + DAT_0010fe30);
        do {
          pCVar7 = *(Cafe **)(this + 100);
          iVar2 = CapcomMath::random(*piVar9 * *piVar6);
          iVar4 = Cafe::isInside(pCVar7,iVar2);
        } while (iVar4 == 0);
        this_00 = (AttackTask *)operator_new(0x48);
        MoveTask::MoveTask((MoveTask *)this_00,this_01,*(Cafe **)(this + 100),iVar2,'\0',false);
LAB_0010fd0c:
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
                               ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 100) + 0x20),
                                (CafeObject *)this_01);
    local_24 = local_24 + 1;
  } while( true );
}


