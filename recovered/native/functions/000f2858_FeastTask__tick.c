/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f2858 FeastTask::tick */

/* FeastTask::tick(long) */

void FeastTask::tick(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BonePile *this;
  CensoredSign *this_00;
  uchar uVar4;
  int in_r1;
  undefined1 uVar5;
  char *pcVar6;
  CharacterInstance *pCVar7;
  int *piVar8;
  Character *this_01;
  undefined4 *puVar9;
  CafeObject *pCVar10;
  int iVar11;
  Cafe *this_02;
  int iVar12;
  CafeObject *this_03;
  float extraout_s0;
  float fVar13;
  
  pCVar7 = *(CharacterInstance **)(param_1 + 0x24);
  iVar11 = DAT_000f2aac + 0xf2864;
  if (((pCVar7 == (CharacterInstance *)0x0) || (*(int *)(pCVar7 + 0x8c) == 0)) ||
     (*(char *)(*(int *)(*(int *)(param_1 + 0x20) + 0x8c) + 4) !=
      *(char *)(*(int *)(pCVar7 + 0x8c) + 4))) {
    iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0);
    uVar5 = 0;
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x38) == 1) {
        iVar1 = CharacterInstance::hasFleshRemaining(pCVar7);
        if (iVar1 == 0) {
          if (*(CensoredSign **)(param_1 + 0x30) != (CensoredSign *)0x0) {
            CensoredSign::finish(*(CensoredSign **)(param_1 + 0x30));
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
          *(undefined1 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x38) = 2;
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - in_r1;
        iVar1 = *(int *)(param_1 + 0x2c) + -0x28;
        *(int *)(param_1 + 0x2c) = iVar1;
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0x2c) = **(undefined4 **)(iVar11 + DAT_000f2ab0);
          iVar1 = CapcomApp::getInstance();
          ZombieCafe::playEffect(*(int *)(iVar1 + 4),extraout_s0);
        }
        if (*(int *)(param_1 + 0x28) < 1) {
          CharacterInstance::removeFlesh(*(CharacterInstance **)(param_1 + 0x24));
          piVar8 = *(int **)(iVar11 + DAT_000f2ab4);
          iVar12 = *piVar8;
          iVar1 = CharacterInstance::removeFlesh_TypeCheck();
          if (iVar1 == 0) {
            iVar12 = iVar12 * 10;
          }
          else {
            iVar12 = *piVar8 * 10 * **(int **)(iVar11 + DAT_000f2ab8);
          }
          this_01 = *(Character **)(*(int *)(param_1 + 0x20) + 0x8c);
          uVar2 = __floatsisf(iVar12);
          fVar13 = (float)__addsf3(uVar2,*(undefined4 *)(this_01 + 0x40));
          Character::setCurrentEnergy(this_01,fVar13);
          puVar9 = *(undefined4 **)(iVar11 + DAT_000f2ab0);
          uVar2 = __floatsisf(*puVar9);
          uVar3 = CharacterData::getSpeedMultiplier
                            ((CharacterData *)**(undefined4 **)(*(int *)(param_1 + 0x20) + 0x8c));
          __divsf3(uVar2,uVar3);
          uVar2 = __fixsfsi();
          *(undefined4 *)(param_1 + 0x28) = uVar2;
          uVar2 = __floatsisf(*puVar9);
          uVar3 = Character::getSpeedMultiplier(*(Character **)(*(int *)(param_1 + 0x20) + 0x8c));
          __divsf3(uVar2,uVar3);
          uVar2 = __fixsfsi();
          *(undefined4 *)(param_1 + 0x28) = uVar2;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
          while (puVar9 = *(undefined4 **)(param_1 + 0x14), puVar9 != (undefined4 *)0x0) {
            pcVar6 = (char *)*puVar9;
            *(undefined4 *)(param_1 + 0x14) = puVar9[1];
            if (pcVar6 == (char *)0x0) break;
            if (*pcVar6 == '\x02') {
              (**(code **)(pcVar6 + 4))(*(undefined4 *)(pcVar6 + 8),param_1);
            }
          }
          iVar11 = CharacterInstance::hasFleshRemaining(*(CharacterInstance **)(param_1 + 0x24));
          if (iVar11 == 0) {
            CapcomOrderableList<CafeObject*>::remove
                      ((CapcomOrderableList<CafeObject*> *)(*(int *)(param_1 + 0x34) + 0x20),
                       *(CafeObject **)(param_1 + 0x24));
            iVar11 = *(int *)(param_1 + 0x34);
            this = (BonePile *)operator_new(0x3c);
            BonePile::BonePile(this);
            this_03 = (CafeObject *)(iVar11 + 0x20);
            pCVar10 = this_03;
            while ((*(int *)((CapcomOrderableListNode *)pCVar10 + 8) != 0 &&
                   (iVar11 = CapcomOrderableList<CafeObject*>::compare(this_03,(CafeObject *)this),
                   0 < iVar11))) {
              pCVar10 = *(CafeObject **)((CapcomOrderableListNode *)pCVar10 + 8);
            }
            CapcomOrderableList<CafeObject*>::insert
                      ((CapcomOrderableList<CafeObject*> *)this_03,(CafeObject *)this,
                       (CapcomOrderableListNode *)pCVar10);
            (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
            CapcomOrderableList<CafeObject*>::sort
                      ((CapcomOrderableList<CafeObject*> *)(*(int *)(param_1 + 0x34) + 0x20),
                       (CafeObject *)this);
            if (*(CensoredSign **)(param_1 + 0x30) != (CensoredSign *)0x0) {
              CensoredSign::finish(*(CensoredSign **)(param_1 + 0x30));
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            *(undefined1 *)(param_1 + 0x3c) = 1;
            *(undefined4 *)(param_1 + 0x38) = 2;
          }
        }
      }
      iVar11 = (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + 0x90) + 0x1c))();
      if ((iVar11 != 0) &&
         (iVar11 = *(int *)(param_1 + 0x38) + 1, *(int *)(param_1 + 0x38) = iVar11, iVar11 == 1)) {
        this_02 = *(Cafe **)(param_1 + 0x34);
        this_00 = (CensoredSign *)operator_new(0x14);
        CensoredSign::CensoredSign(this_00,*(CafeObject **)(param_1 + 0x24));
        *(CensoredSign **)(param_1 + 0x30) = this_00;
        Cafe::addCensoredSign(this_02,this_00);
      }
      iVar11 = *(int *)(param_1 + 0x38);
      pCVar7 = *(CharacterInstance **)(param_1 + 0x20);
      if (iVar11 == 1) {
        uVar4 = '\x17';
      }
      else if (iVar11 == 2) {
        uVar4 = '\x18';
      }
      else {
        uVar4 = '\x16';
        if (iVar11 != 0) {
          *(undefined4 *)(pCVar7 + 0x88) = 0;
          uVar5 = *(undefined1 *)(param_1 + 0x3c);
          goto LAB_000f2a6c;
        }
      }
      CharacterInstance::setCurrentAnimation
                (pCVar7,uVar4,*(uchar *)(*(int *)(pCVar7 + 0x8c) + 0x4c),false);
      if (*(int *)(param_1 + 0x24) == 0) {
        return;
      }
      CharacterInstance::turnToward
                (*(CharacterInstance **)(param_1 + 0x20),*(long *)(*(int *)(param_1 + 0x24) + 4));
      return;
    }
  }
  else {
    uVar5 = 0;
  }
LAB_000f2a6c:
  *(undefined1 *)(param_1 + 5) = uVar5;
  Task::finish((Task *)param_1);
  return;
}


