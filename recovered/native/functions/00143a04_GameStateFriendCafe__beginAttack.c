/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00143a04 GameStateFriendCafe::beginAttack */

/* GameStateFriendCafe::beginAttack() */

undefined8 __thiscall GameStateFriendCafe::beginAttack(GameStateFriendCafe *this)

{
  short sVar1;
  CharacterInstance *this_00;
  long lVar2;
  undefined4 uVar3;
  FriendCafeHudElement *pFVar4;
  int iVar5;
  Vector *pVVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  Character *pCVar12;
  code *pcVar13;
  float extraout_s0;
  float extraout_s0_00;
  GameStateFriendCafe *local_20;
  
  local_20 = this + 0x160;
  for (iVar10 = 0; iVar10 < *(int *)(*(int *)(this + 0xc) + DAT_00143d64 + 4) + 1;
      iVar10 = iVar10 + 1) {
    iVar9 = iVar10 * 4;
    Vector<int>::addElement
              ((Vector<int> *)local_20,
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00143d64 + 8) + iVar9) +
                              0x44));
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00143d64 + 8) + iVar9) + 0x48);
    iVar8 = *(int *)(this + 0x170) + 2;
    if (*(int *)(this + 0x16c) < iVar8) {
      iVar5 = *(int *)(this + 0x16c) * 2;
      if (iVar5 < iVar8) {
        iVar5 = iVar8;
      }
      Vector<long>::resize((Vector<long> *)(this + 0x16c),iVar5,-1);
    }
    iVar8 = *(int *)(this + 0x170);
    *(int *)(this + 0x170) = iVar8 + 1;
    *(undefined4 *)((iVar8 + 1) * 4 + *(int *)(this + 0x174)) = uVar3;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0x178),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00143d64 + 8) + iVar9) +
                              0x4c));
  }
  for (iVar10 = 0; pVVar6 = (Vector *)(*(int *)(this + 0xc) + DAT_00143d64),
      iVar10 < *(int *)(pVVar6 + 4) + 1; iVar10 = iVar10 + 1) {
    pCVar12 = *(Character **)(iVar10 * 4 + *(int *)(pVVar6 + 8));
    if (pCVar12[0x44] != (Character)0x6) {
      local_20 = *(GameStateFriendCafe **)(*(int *)(this + 0x34) + 0x5c);
      this_00 = (CharacterInstance *)operator_new(0xdc);
      CharacterInstance::CharacterInstance(this_00,pCVar12,(CFPathFinder *)local_20);
      Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x150),this_00);
      lVar2 = Cafe::diamondToStaggeredCoords
                        ((**(int **)(DAT_00143d6c + 0x143ad8) + 5) * 0x10000 |
                         **(int **)(DAT_00143d68 + 0x143ace) + 4 + iVar10 & 0xffffU);
      sVar1 = Cafe::staggeredCoordsToIndex(lVar2);
      *(short *)(this_00 + 0x2c) = sVar1;
      pcVar13 = *(code **)(*(int *)this_00 + 0xc);
      uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x34),(int)sVar1);
      (*pcVar13)(this_00,uVar3);
      CharacterInstance::setCurrentAnimation(this_00,'\x01','\x01',false);
      Cafe::addCafeObject(*(Cafe **)(this + 0x34),(CafeObject *)this_00);
      this_00[0x84] = (CharacterInstance)0x1;
      *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 0;
      *(int *)(*(int *)(this_00 + 0x8c) + 0x18) = *(int *)(*(int *)(this_00 + 0x8c) + 0x18) + 1;
      uVar11 = *(undefined4 *)(this + 0x11c);
      uVar3 = calculateDifficulty(this,*(Character **)(this_00 + 0x8c));
      uVar3 = __addsf3(uVar11,uVar3);
      *(undefined4 *)(this + 0x11c) = uVar3;
    }
  }
  CharacterDetails::setZombieVector(*(CharacterDetails **)(this + 0x1a8),pVVar6);
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined1 *)(*(int *)(this + 0x128) + 0x84) = 1;
  uVar3 = calculateDifficulty(this,*(Character **)(this + 0xbc));
  *(undefined4 *)(this + 0x108) = uVar3;
  uVar3 = __addsf3(*(undefined4 *)(this + 0x118),uVar3);
  *(undefined4 *)(this + 0x118) = uVar3;
  iVar10 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(this + 0xbc) + 0x40),0);
  if (iVar10 != 0) {
    addDefenderTotalHp(extraout_s0);
  }
  for (iVar10 = 0; iVar10 < *(int *)(this + 0x130) + 1; iVar10 = iVar10 + 1) {
    iVar8 = *(int *)(*(int *)(this + 0x134) + iVar10 * 4);
    *(undefined1 *)(iVar8 + 0x84) = 1;
    *(undefined1 *)(*(int *)(iVar8 + 0x8c) + 5) = 3;
    uVar3 = calculateDifficulty(this,*(Character **)(iVar8 + 0x8c));
    iVar8 = *(int *)(this + 0x110) + 2;
    if (*(int *)(this + 0x10c) < iVar8) {
      iVar9 = *(int *)(this + 0x10c) * 2;
      if (iVar9 < iVar8) {
        iVar9 = iVar8;
      }
      Vector<float>::resize((Vector<float> *)(this + 0x10c),iVar9,-1);
    }
    iVar8 = *(int *)(this + 0x110);
    *(int *)(this + 0x110) = iVar8 + 1;
    *(undefined4 *)((iVar8 + 1) * 4 + *(int *)(this + 0x114)) = uVar3;
    local_20 = this + 0xfc;
    uVar3 = __addsf3(*(undefined4 *)(this + 0x118),
                     *(undefined4 *)(*(int *)(this + 0x114) + iVar10 * 4));
    *(undefined4 *)(this + 0x118) = uVar3;
    iVar8 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(this + 0xbc) + 0x40),0);
    if (iVar8 != 0) {
      addDefenderTotalHp(extraout_s0_00);
    }
  }
  for (iVar10 = 0; iVar10 < *(int *)(this + 0x13c) + 1; iVar10 = iVar10 + 1) {
    *(undefined1 *)(*(int *)(iVar10 * 4 + *(int *)(this + 0x140)) + 0x84) = 1;
  }
  iVar10 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x34));
  if (iVar10 < 1) {
    *(undefined4 *)(this + 0xec) = 0;
  }
  else {
    uVar3 = Cafe::getNewRandomFoodStack(*(Cafe **)(this + 0x34),false);
    *(undefined4 *)(this + 0xec) = uVar3;
  }
  iVar10 = DAT_00143d70;
  (**(code **)(**(int **)(*(int *)(this + 0x19c) + 0x68) + 0x20))
            (*(int **)(*(int *)(this + 0x19c) + 0x68),0);
  (**(code **)(**(int **)(*(int *)(this + 0x19c) + 100) + 0x20))
            (*(int **)(*(int *)(this + 0x19c) + 100),0);
  (**(code **)(**(int **)(*(int *)(this + 0x19c) + 0x60) + 0x20))
            (*(int **)(*(int *)(this + 0x19c) + 0x60),0);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x19c),1,false);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x19c),2,false);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x19c),3,false);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x19c),4,true);
  FriendCafeHudElement::setButtonNewIndicator(*(FriendCafeHudElement **)(this + 0x19c),1,false);
  iVar8 = *(int *)(this + 0xc);
  if (((*(char *)(iVar8 + iVar10) == '\0') || (*(char *)(iVar8 + 0x9e0) != '\0')) &&
     ((*(char *)(iVar8 + DAT_00143d74) == '\0' || (*(char *)(iVar8 + DAT_00143d78) != '\0')))) {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = false;
  }
  else {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = true;
  }
  FriendCafeHudElement::setButtonAvailability(pFVar4,0xb,bVar7);
  iVar8 = DAT_00143d7c;
  iVar9 = *(int *)(this + 0xc);
  if (((*(char *)(iVar9 + DAT_00143d7c) == '\0') || (*(char *)(iVar9 + DAT_00143d80) != '\0')) &&
     ((*(char *)(iVar9 + DAT_00143d84) == '\0' || (*(char *)(iVar9 + DAT_00143d88) != '\0')))) {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = false;
  }
  else {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = true;
  }
  FriendCafeHudElement::setButtonAvailability(pFVar4,0xc,bVar7);
  if ((*(char *)(*(int *)(this + 0xc) + DAT_00143d8c) == '\0') ||
     (*(char *)(*(int *)(this + 0xc) + DAT_00143d90) != '\0')) {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = false;
  }
  else {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = true;
  }
  FriendCafeHudElement::setButtonAvailability(pFVar4,0xe,bVar7);
  iVar9 = *(int *)(this + 0xc);
  if (((((*(char *)(iVar9 + iVar10) == '\0') || (*(char *)(iVar9 + 0x9e0) != '\0')) &&
       ((*(char *)(iVar9 + DAT_00143e0c) == '\0' || (*(char *)(iVar9 + DAT_00143e10) != '\0')))) &&
      ((*(char *)(iVar9 + iVar8) == '\0' || (*(char *)(iVar9 + DAT_00143e14) != '\0')))) &&
     ((*(char *)(iVar9 + DAT_00143e18) == '\0' || (*(char *)(iVar9 + DAT_00143e1c) != '\0')))) {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = false;
  }
  else {
    pFVar4 = *(FriendCafeHudElement **)(this + 0x19c);
    bVar7 = true;
  }
  FriendCafeHudElement::setButtonAvailability(pFVar4,0xd,bVar7);
  FriendCafeHudElement::setButtonNewIndicator(*(FriendCafeHudElement **)(this + 0x19c),1,false);
  this[0xc3] = (GameStateFriendCafe)0x1;
  return CONCAT44((Vector<CharacterInstance*> *)(this + 0x150),local_20);
}


