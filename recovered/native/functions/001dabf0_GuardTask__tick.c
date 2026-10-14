/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dabf0 GuardTask::tick */

/* GuardTask::tick(long) */

void __thiscall GuardTask::tick(GuardTask *this,long param_1)

{
  int *piVar1;
  GuardTask *pGVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  GuardTask GVar8;
  code *pcVar9;
  char *pcVar10;
  CharacterInstance *pCVar11;
  float fVar12;
  
  if (this[4] != (GuardTask)0x0) {
    return;
  }
  CafeObject::setTileIndex
            (*(CafeObject **)(this + 0x20),*(short *)(*(CafeObject **)(this + 0x20) + 0x2c),
             *(Cafe **)(this + 0x38));
  if (this[0x29] != (GuardTask)0x0) {
    piVar1 = *(int **)(this + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_1);
      pGVar2 = *(GuardTask **)(this + 0x2c);
      if (pGVar2[4] != (GuardTask)0x0) {
        (**(code **)(*(int *)pGVar2 + 4))();
        *(undefined4 *)(this + 0x2c) = 0;
        return;
      }
      pcVar9 = *(code **)(*(int *)pGVar2 + 0xc);
      this = pGVar2;
LAB_001dac84:
      (*pcVar9)(this);
      return;
    }
    this[5] = (GuardTask)0x0;
    goto LAB_001daed4;
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
      goto LAB_001dac84;
    }
    pGVar2 = this + 0x34;
    GVar8 = *pGVar2;
    if (GVar8 == (GuardTask)0x1) {
      (**(code **)(**(int **)(this + 0x2c) + 0x14))(*(int **)(this + 0x2c),param_1);
      if (*(char *)(*(int *)(this + 0x2c) + 4) == '\0') {
        return;
      }
      GVar8 = *(GuardTask *)(*(int *)(this + 0x2c) + 5);
      if (GVar8 != (GuardTask)0x0) {
        CharacterInstance::turnToward
                  (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x24) + 4));
        *(undefined4 *)(*(int *)(this + 0x20) + 0x88) = *(undefined4 *)(this + 0x24);
        uVar5 = __floatsisf(**(undefined4 **)(DAT_001daeec + 0x1dacf6));
        uVar6 = Character::getSpeedMultiplier(*(Character **)(*(int *)(this + 0x20) + 0x8c));
        __divsf3(uVar5,uVar6);
        uVar5 = __fixsfsi();
        GVar8 = (GuardTask)0x2;
        *(undefined4 *)(this + 0x30) = uVar5;
      }
      *pGVar2 = GVar8;
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x20),'\x01',
                 *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
      if (*(int **)(this + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x2c) + 4))();
      }
      *(undefined4 *)(this + 0x2c) = 0;
      return;
    }
    if (GVar8 == (GuardTask)0x0) {
      iVar3 = CharacterInstance::withinAttackRange
                        (*(CharacterInstance **)(this + 0x20),*(CharacterInstance **)(this + 0x24));
      if (iVar3 != 0) {
        *pGVar2 = (GuardTask)0x2;
        return;
      }
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x20),'\x01',
                 *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
      return;
    }
    if (GVar8 != (GuardTask)0x2) {
      return;
    }
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x40),0);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)(this + 0x30);
    *(int *)(this + 0x30) = iVar3 - param_1;
    if (iVar3 - param_1 < 1) {
      iVar3 = Character::getAttackPower();
      iVar4 = Character::getAdditionAttack(*(Character **)(*(int *)(this + 0x20) + 0x8c));
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x20),'\x03',
                 *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
      CharacterInstance::turnToward
                (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x24) + 4));
      CharacterInstance::dealtDamage(*(CharacterInstance **)(this + 0x20),*(int *)(this + 0x24));
      CharacterInstance::tookDamage
                (*(CharacterInstance **)(this + 0x24),*(CharacterInstance **)(this + 0x20),
                 (iVar4 + iVar3) * 0x10000 >> 0x10);
      uVar5 = __floatsisf(**(undefined4 **)(DAT_001daef0 + 0x1dadb4));
      uVar6 = Character::getSpeedMultiplier(*(Character **)(*(int *)(this + 0x20) + 0x8c));
      __divsf3(uVar5,uVar6);
      uVar5 = __fixsfsi();
      *(undefined4 *)(this + 0x30) = uVar5;
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
      while (puVar7 = *(undefined4 **)(this + 0x14), puVar7 != (undefined4 *)0x0) {
        pcVar10 = (char *)*puVar7;
        *(undefined4 *)(this + 0x14) = puVar7[1];
        if (pcVar10 == (char *)0x0) break;
        if (*pcVar10 == '\x02') {
          (**(code **)(pcVar10 + 4))(*(undefined4 *)(pcVar10 + 8),this);
        }
      }
      this[0x28] = (GuardTask)0x1;
    }
    pCVar11 = *(CharacterInstance **)(this + 0x24);
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0);
    if (iVar3 == 0) {
      iVar3 = CharacterInstance::withinAttackRange(*(CharacterInstance **)(this + 0x20),pCVar11);
      if (iVar3 != 0) {
        return;
      }
      this[0x34] = (GuardTask)0x0;
      return;
    }
    iVar3 = *(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c);
    if (*(char *)(iVar3 + 4) == '\x01') {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    }
    iVar3 = CharacterInstance::isSoundEffectVoice();
    if (iVar3 != 0) {
      piVar1 = *(int **)(*(int *)(this + 0x24) + 0x8c);
      if ((char)piVar1[1] == '\x01') {
        if (*(char *)(*piVar1 + DAT_001daef4) == '\0') {
          iVar3 = CapcomApp::getInstance();
          iVar4 = *(int *)(iVar3 + 4);
          fVar12 = (float)arc4random();
        }
        else {
          iVar3 = CapcomApp::getInstance();
          iVar4 = *(int *)(iVar3 + 4);
          fVar12 = (float)arc4random();
        }
      }
      else {
        if ((char)piVar1[1] != '\0') goto LAB_001daec0;
        if (*(char *)(*piVar1 + DAT_001daef4) == '\0') {
          iVar3 = CapcomApp::getInstance();
          iVar4 = *(int *)(iVar3 + 4);
          iVar3 = arc4random();
          fVar12 = (float)__aeabi_idivmod(iVar3 + (iVar3 >> 0x1f) ^ iVar3 >> 0x1f,7);
        }
        else {
          iVar3 = CapcomApp::getInstance();
          iVar4 = *(int *)(iVar3 + 4);
          iVar3 = arc4random();
          fVar12 = (float)__aeabi_idivmod(iVar3 + (iVar3 >> 0x1f) ^ iVar3 >> 0x1f,5);
        }
      }
      ZombieCafe::playEffect(iVar4,fVar12);
    }
LAB_001daec0:
    CharacterInstance::die(*(CharacterInstance **)(this + 0x24));
    CharacterInstance::targetDied(*(CharacterInstance **)(this + 0x20));
    GVar8 = (GuardTask)0x1;
  }
  else {
    GVar8 = (GuardTask)0x0;
  }
  this[5] = GVar8;
LAB_001daed4:
  Task::finish((Task *)this);
  return;
}


