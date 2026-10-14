/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7a38 AttackTask::tick */

/* AttackTask::tick(long) */

void __thiscall AttackTask::tick(AttackTask *this,long param_1)

{
  int *piVar1;
  AttackTask *pAVar2;
  int iVar3;
  FollowTask *this_00;
  undefined4 uVar4;
  CharacterInstance *pCVar5;
  uint uVar6;
  undefined4 *puVar7;
  AttackTask AVar8;
  code *pcVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  CharacterInstance *this_01;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_20;
  
  iVar13 = DAT_000b7d2c + 0xb7a44;
  if (this[4] != (AttackTask)0x0) {
    return;
  }
  CafeObject::setTileIndex
            (*(CafeObject **)(this + 0x20),*(short *)(*(CafeObject **)(this + 0x20) + 0x2c),
             *(Cafe **)(this + 0x38));
  if (this[0x29] != (AttackTask)0x0) {
    piVar1 = *(int **)(this + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_1);
      pAVar2 = *(AttackTask **)(this + 0x2c);
      if (pAVar2[4] != (AttackTask)0x0) {
        (**(code **)(*(int *)pAVar2 + 4))();
        *(undefined4 *)(this + 0x2c) = 0;
        return;
      }
      pcVar9 = *(code **)(*(int *)pAVar2 + 0xc);
      this = pAVar2;
LAB_000b7ada:
      (*pcVar9)(this);
      return;
    }
    this[5] = (AttackTask)0x0;
    goto LAB_000b7abe;
  }
  iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x40),0);
  if (iVar3 != 0) {
    CharacterInstance::targetDied(*(CharacterInstance **)(this + 0x20));
    (**(code **)(*(int *)this + 0xc))(this);
  }
  if (*(int *)(*(int *)(this + 0x20) + 0x88) == *(int *)(this + 0x24)) {
    iVar3 = Cafe::isInside(*(Cafe **)(this + 0x38),
                           (int)*(short *)(*(int *)(*(int *)(this + 0x20) + 0x88) + 0x2c));
    if (iVar3 == 0) {
      pcVar9 = *(code **)(*(int *)this + 0xc);
      goto LAB_000b7ada;
    }
    AVar8 = this[0x34];
    if (AVar8 == (AttackTask)0x1) {
      (**(code **)(**(int **)(this + 0x2c) + 0x14))(*(int **)(this + 0x2c),param_1);
      if (*(char *)(*(int *)(this + 0x2c) + 4) == '\0') {
        return;
      }
      AVar8 = *(AttackTask *)(*(int *)(this + 0x2c) + 5);
      if (AVar8 != (AttackTask)0x0) {
        CharacterInstance::turnToward
                  (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x24) + 4));
        *(undefined4 *)(*(int *)(this + 0x20) + 0x88) = *(undefined4 *)(this + 0x24);
        uVar4 = __floatsisf(**(undefined4 **)(iVar13 + DAT_000b7d30));
        uVar12 = Character::getSpeedMultiplier_atk(*(Character **)(*(int *)(this + 0x20) + 0x8c));
        __divsf3(uVar4,uVar12);
        uVar4 = __fixsfsi();
        AVar8 = (AttackTask)0x2;
        *(undefined4 *)(this + 0x30) = uVar4;
      }
      this[0x34] = AVar8;
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x20),'\x01',
                 *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
      if (*(int **)(this + 0x2c) == (int *)0x0) {
        return;
      }
      (**(code **)(**(int **)(this + 0x2c) + 4))();
      *(undefined4 *)(this + 0x2c) = 0;
      return;
    }
    if (AVar8 != (AttackTask)0x0) {
      if (AVar8 != (AttackTask)0x2) {
        return;
      }
      iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x40),0);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = *(int *)(this + 0x30);
      *(int *)(this + 0x30) = iVar3 - param_1;
      if (iVar3 - param_1 < 1) {
        iVar3 = Character::getAttackAction(*(Character **)(*(int *)(this + 0x20) + 0x8c));
        if (iVar3 == 3) {
          CharacterInstance::endZombility(*(CharacterInstance **)(this + 0x20));
          uVar14 = 0x3f800000;
          uVar4 = __floatsisf(**(undefined4 **)(iVar13 + DAT_000b7d30));
          uVar12 = Character::getSpeedMultiplier_atk(*(Character **)(*(int *)(this + 0x20) + 0x8c));
          __divsf3(uVar4,uVar12);
          uVar4 = __fixsfsi();
          *(undefined4 *)(this + 0x30) = uVar4;
          local_20 = 0;
        }
        else {
          uVar11 = iVar3 - 0x1eU & 0xff;
          uVar6 = 0;
          if (uVar11 < 0xc) {
            uVar6 = (uint)*(byte *)(DAT_000b7d34 + uVar11 + 0xb7c2a);
          }
          local_20 = *(undefined4 *)(DAT_000b7d38 + uVar6 * 0x24 + 0xb7c5e);
          uVar6 = 0;
          if (uVar11 < 0xc) {
            uVar6 = (uint)*(byte *)(DAT_000b7d3c + uVar11 + 0xb7c46);
          }
          uVar14 = *(undefined4 *)(DAT_000b7d40 + uVar6 * 0x24 + 0xb7c76);
          CharacterInstance::startZombility(*(CharacterInstance **)(this + 0x20));
          uVar6 = 0;
          if (uVar11 < 0xc) {
            uVar6 = (uint)*(byte *)(DAT_000b7d44 + uVar11 + 0xb7c64);
          }
          *(undefined4 *)(this + 0x30) = *(undefined4 *)(DAT_000b7d48 + uVar6 * 0x24 + 0xb7c90);
        }
        Character::getAttackPower();
        Character::getAdditionAttack(*(Character **)(*(int *)(this + 0x20) + 0x8c));
        if ((uint)*(ushort *)(**(int **)(*(int *)(this + 0x24) + 0x8c) + DAT_000b7d4c) ==
            (int)*(short *)(**(int **)(*(int *)(this + 0x20) + 0x8c) + DAT_000b7d50)) {
          uVar12 = *(undefined4 *)(**(int **)(*(int *)(this + 0x20) + 0x8c) + DAT_000b7d54);
          Character::getAttackPower();
          uVar4 = __floatsisf();
          uVar4 = __mulsf3(uVar12,uVar4);
          local_20 = __addsf3(local_20,uVar4);
        }
        CharacterInstance::setCurrentAnimation
                  (*(CharacterInstance **)(this + 0x20),(uchar)iVar3,
                   *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
        CharacterInstance::turnToward
                  (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x24) + 4));
        pCVar5 = *(CharacterInstance **)(this + 0x20);
        if (pCVar5[0xb8] != (CharacterInstance)0x0) {
          if (*(int *)(pCVar5 + 0xc0) == 1) {
            uVar4 = __floatsisf(**(undefined4 **)(iVar13 + DAT_000b7d58));
            uVar4 = __subsf3(uVar4,0x3f800000);
          }
          else {
            if (*(int *)(pCVar5 + 0xc0) != 3) goto LAB_000b7d86;
            uVar4 = __floatsisf(**(undefined4 **)(iVar13 + DAT_000b7f30));
            uVar4 = __subsf3(uVar4,0x3f800000);
            uVar4 = __mulsf3(uVar4,**(undefined4 **)(iVar13 + DAT_000b7f34));
          }
          uVar14 = __addsf3(uVar14,uVar4);
        }
LAB_000b7d86:
        iVar13 = *(int *)(this + 0x24);
        Character::getAttackPower();
        uVar4 = __floatsisf();
        uVar4 = __mulsf3(uVar4,uVar14);
        __addsf3(uVar4,local_20);
        __fixsfsi();
        CharacterInstance::dealtDamage(pCVar5,iVar13);
        pCVar5 = *(CharacterInstance **)(this + 0x20);
        this_01 = *(CharacterInstance **)(this + 0x24);
        Character::getAttackPower();
        uVar4 = __floatsisf();
        uVar4 = __mulsf3(uVar4,uVar14);
        __addsf3(uVar4,local_20);
        iVar13 = __fixsfsi();
        CharacterInstance::tookDamage(this_01,pCVar5,iVar13);
        *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
        while (puVar7 = *(undefined4 **)(this + 0x14), puVar7 != (undefined4 *)0x0) {
          pcVar10 = (char *)*puVar7;
          *(undefined4 *)(this + 0x14) = puVar7[1];
          if (pcVar10 == (char *)0x0) break;
          if (*pcVar10 == '\x02') {
            (**(code **)(pcVar10 + 4))(*(undefined4 *)(pcVar10 + 8),this);
          }
        }
        this[0x28] = (AttackTask)0x1;
      }
      iVar13 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x40),0);
      if (iVar13 == 0) {
        return;
      }
      iVar13 = *(int *)(*(int *)(this + 0x20) + 0x8c);
      if (*(char *)(iVar13 + 4) == '\x01') {
        *(int *)(iVar13 + 0x1c) = *(int *)(iVar13 + 0x1c) + 1;
      }
      iVar13 = CharacterInstance::isSoundEffectVoice();
      if (iVar13 != 0) {
        piVar1 = *(int **)(*(int *)(this + 0x24) + 0x8c);
        if ((char)piVar1[1] == '\x01') {
          if (*(char *)(*piVar1 + DAT_000b7f38) == '\0') {
            iVar13 = CapcomApp::getInstance();
            iVar3 = *(int *)(iVar13 + 4);
            fVar15 = (float)arc4random();
          }
          else {
            iVar13 = CapcomApp::getInstance();
            iVar3 = *(int *)(iVar13 + 4);
            fVar15 = (float)arc4random();
          }
        }
        else {
          if ((char)piVar1[1] != '\0') goto LAB_000b7ec8;
          if (*(char *)(*piVar1 + DAT_000b7f38) == '\0') {
            iVar13 = CapcomApp::getInstance();
            iVar3 = *(int *)(iVar13 + 4);
            iVar13 = arc4random();
            fVar15 = (float)__aeabi_idivmod(iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f,7);
          }
          else {
            iVar13 = CapcomApp::getInstance();
            iVar3 = *(int *)(iVar13 + 4);
            iVar13 = arc4random();
            fVar15 = (float)__aeabi_idivmod(iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f,5);
          }
        }
        ZombieCafe::playEffect(iVar3,fVar15);
      }
LAB_000b7ec8:
      CharacterInstance::die(*(CharacterInstance **)(this + 0x24));
      CharacterInstance::targetDied(*(CharacterInstance **)(this + 0x20));
      this[5] = (AttackTask)0x1;
      Task::finish((Task *)this);
      pCVar5 = *(CharacterInstance **)(this + 0x20);
      if (pCVar5[0x34] == (CharacterInstance)0x3) {
        iVar13 = CharacterInstance::withinAttackRange(pCVar5,*(CharacterInstance **)(this + 0x24));
        if (iVar13 != 0) {
          iVar13 = CharacterInstance::withinAttackRange
                             (*(CharacterInstance **)(this + 0x20),
                              *(CharacterInstance **)(this + 0x24));
          if (iVar13 != 0) {
            return;
          }
          this[0x34] = (AttackTask)0x0;
          return;
        }
        this[0x34] = (AttackTask)0x0;
        pCVar5 = *(CharacterInstance **)(this + 0x20);
        if (pCVar5[0x34] == (CharacterInstance)0x3) {
          return;
        }
      }
      CharacterInstance::endZombility(pCVar5);
      return;
    }
    this_00 = (FollowTask *)operator_new(0x50);
    FollowTask::FollowTask
              (this_00,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x24),
               *(Cafe **)(this + 0x38),'\0',false);
    *(FollowTask **)(this + 0x2c) = this_00;
    (**(code **)(*(int *)this_00 + 8))(this_00);
    blockCharacterPositions();
    iVar13 = (**(code **)(**(int **)(this + 0x2c) + 0x34))();
    if ((iVar13 == 0) && (*(char *)((int)*(int **)(this + 0x2c) + 5) == '\0')) {
      (**(code **)(**(int **)(this + 0x2c) + 4))();
      *(undefined4 *)(this + 0x2c) = 0;
    }
    unblockCharacterPositions(this);
    iVar13 = *(int *)(this + 0x2c);
    if (iVar13 != 0) {
      *(undefined4 *)(*(int *)(this + 0x20) + 0x88) = *(undefined4 *)(this + 0x24);
      this[0x34] = (AttackTask)0x1;
      return;
    }
  }
  else {
    iVar13 = 0;
  }
  this[5] = SUB41(iVar13,0);
LAB_000b7abe:
  Task::finish((Task *)this);
  return;
}


