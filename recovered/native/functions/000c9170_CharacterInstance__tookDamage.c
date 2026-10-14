/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c9170 CharacterInstance::tookDamage */

/* CharacterInstance::tookDamage(CharacterInstance*, int) */

undefined8 __thiscall
CharacterInstance::tookDamage(CharacterInstance *this,CharacterInstance *param_1,int param_2)

{
  char cVar1;
  CapcomApp *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  Character *this_00;
  undefined4 uVar6;
  CharacterInstance *pCVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar8;
  
  pCVar2 = (CapcomApp *)CapcomApp::getInstance();
  iVar3 = CapcomApp::getUptime(pCVar2);
  if (**(int **)(DAT_000c933c + 0xc9188) < iVar3 - *(int *)(this + 0x58)) {
    *(int *)(this + 0x58) = iVar3;
    iVar3 = *(int *)(this + 0x8c);
    cVar1 = *(char *)(iVar3 + 4);
    if (cVar1 == '\x01') {
      uVar6 = *(undefined4 *)(iVar3 + 0x40);
      uVar4 = Character::getMaxEnergy();
      uVar4 = __mulsf3(uVar4,**(undefined4 **)(DAT_000c9340 + 0xc91aa));
      iVar3 = __aeabi_fcmplt(uVar6,uVar4);
      if (iVar3 != 0) {
        this[0xc4] = (CharacterInstance)0x1;
      }
      iVar3 = isSoundEffectVoice();
      if (iVar3 == 0) goto LAB_000c925c;
      if (*(char *)(**(int **)(this + 0x8c) + DAT_000c9344) == '\0') {
        CapcomMath::random(0xe);
        iVar3 = CapcomApp::getInstance();
        iVar3 = *(int *)(iVar3 + 4);
        fVar8 = extraout_s0_00;
      }
      else {
        CapcomMath::random(9);
        iVar3 = CapcomApp::getInstance();
        iVar3 = *(int *)(iVar3 + 4);
        fVar8 = extraout_s0;
      }
    }
    else {
      if ((cVar1 != '\0') || (iVar3 = isSoundEffectVoice(), iVar3 == 0)) goto LAB_000c925c;
      if (*(char *)(**(int **)(this + 0x8c) + DAT_000c9344) == '\0') {
        CapcomMath::random(8);
        iVar3 = CapcomApp::getInstance();
        iVar3 = *(int *)(iVar3 + 4);
        fVar8 = extraout_s0_02;
      }
      else {
        CapcomMath::random(9);
        iVar3 = CapcomApp::getInstance();
        iVar3 = *(int *)(iVar3 + 4);
        fVar8 = extraout_s0_01;
      }
    }
    ZombieCafe::playEffect(iVar3,fVar8);
  }
LAB_000c925c:
  pCVar7 = this + 0x88;
  if ((((*(int **)pCVar7 == (int *)0x0) ||
       (iVar3 = (**(code **)(**(int **)pCVar7 + 0x14))(), iVar3 != 3)) ||
      (iVar3 = withinAttackRange(this,*(CharacterInstance **)pCVar7), iVar3 == 0)) ||
     (((iVar3 = (**(code **)(*(int *)this + 0x20))(this), iVar3 == 1 ||
       (iVar3 = (**(code **)(**(int **)pCVar7 + 0x20))(), iVar3 == 1)) ||
      (*(CharacterInstance **)(*(int *)pCVar7 + 0x88) != this)))) {
    if (*(CharacterInstance **)(this + 0x88) != param_1) {
      *(CharacterInstance **)(this + 0x88) = param_1;
      stopTasks(this);
    }
    if (this[0x34] != (CharacterInstance)0x3) {
      setCurrentAnimation(this,'\f',*(uchar *)(*(int *)(this + 0x8c) + 0x4c),true);
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x20))(this);
  if (iVar3 != 2) {
    iVar3 = Cafe::getNextTile((int)*(short *)(param_1 + 0x2c),
                              (uint)*(byte *)(*(int *)(param_1 + 0x8c) + 0x4c));
    iVar5 = CapcomApp::getInstance();
    iVar5 = Cafe::isInside(*(Cafe **)(*(int *)(iVar5 + 4) + 0x7e8),iVar3);
    if (iVar5 != 0) {
      iVar5 = CapcomApp::getInstance();
      CafeObject::setTileIndex
                ((CafeObject *)this,(short)iVar3,*(Cafe **)(*(int *)(iVar5 + 4) + 0x7e8));
      turnToward(this,*(long *)(param_1 + 4));
    }
  }
  uVar4 = __floatsisf(param_2);
  this_00 = *(Character **)(this + 0x8c);
  fVar8 = (float)__subsf3(*(undefined4 *)(this_00 + 0x40),uVar4);
  Character::setCurrentEnergy(this_00,fVar8);
  return CONCAT44(param_2,this);
}


