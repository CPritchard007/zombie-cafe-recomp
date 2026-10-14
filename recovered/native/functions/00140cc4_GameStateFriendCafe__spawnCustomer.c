/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140cc4 GameStateFriendCafe::spawnCustomer */

/* GameStateFriendCafe::spawnCustomer(bool) */

CharacterInstance * __thiscall
GameStateFriendCafe::spawnCustomer(GameStateFriendCafe *this,bool param_1)

{
  Character *pCVar1;
  CharacterInstance *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  Task *pTVar7;
  EatTask *this_01;
  MoveTask *pMVar8;
  int extraout_r1;
  Cafe *pCVar9;
  int iVar10;
  CFPathFinder *pCVar11;
  Cafe *pCVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  undefined4 uVar19;
  float fVar20;
  int local_34;
  
  resetCustomerTimer(this);
  uVar19 = *(undefined4 *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  iVar15 = *(int *)(this + 0x34);
  fVar20 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0xc));
  pCVar1 = (Character *)Cafe::createRandomCustomer(iVar15,fVar20,SUB41(uVar19,0));
  iVar15 = DAT_00140f38;
  pCVar11 = *(CFPathFinder **)(*(int *)(this + 0x34) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  iVar15 = iVar15 + 0x140d02;
  CharacterInstance::CharacterInstance(this_00,pCVar1,pCVar11);
  iVar2 = CapcomMath::random(2);
  pCVar9 = *(Cafe **)(this + 0x34);
  if (iVar2 == 0) {
    pCVar12 = pCVar9 + 0x9a;
  }
  else {
    pCVar12 = pCVar9 + 0x98;
  }
  CafeObject::setTileIndex((CafeObject *)this_00,*(short *)pCVar12,pCVar9);
  iVar13 = **(int **)(iVar15 + DAT_00140f3c);
  piVar16 = *(int **)(iVar15 + DAT_00140f40);
  iVar10 = *piVar16;
  uVar19 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0xc));
  iVar17 = *piVar16;
  uVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00140f44),'\x16');
  if (uVar3 != 0) {
    if (!param_1) {
      iVar4 = CapcomMath::random(0x100);
      uVar5 = __floatsisf(iVar13 - iVar10);
      uVar19 = __mulsf3(uVar5,uVar19);
      uVar5 = __floatsisf(iVar17);
      __addsf3(uVar19,uVar5);
      iVar10 = __fixsfsi();
      uVar3 = 0;
      if (iVar10 < iVar4) goto LAB_00140da2;
    }
    uVar3 = (uint)*(byte *)(*(int *)(this + 0x34) + 100);
    if (uVar3 != 0) {
      uVar3 = 1;
    }
  }
LAB_00140da2:
  this_00[0xc5] = SUB41(uVar3,0);
  if (uVar3 == 0) {
    pMVar8 = (MoveTask *)operator_new(0x48);
    pCVar9 = *(Cafe **)(this + 0x34);
    if (iVar2 == 0) {
      pCVar12 = pCVar9 + 0x98;
    }
    else {
      pCVar12 = pCVar9 + 0x9a;
    }
    MoveTask::MoveTask(pMVar8,this_00,pCVar9,(int)*(short *)pCVar12,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar8);
  }
  else {
    piVar18 = *(int **)(iVar15 + DAT_00140f48);
    piVar16 = *(int **)(iVar15 + DAT_00140f4c);
    piVar14 = *(int **)(iVar15 + DAT_00140f50);
    lVar6 = Cafe::diamondToStaggeredCoords(*piVar18,*piVar16 + 1 + *piVar14);
    iVar2 = Cafe::staggeredCoordsToIndex(lVar6);
    pMVar8 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(pMVar8,this_00,*(Cafe **)(this + 0x34),iVar2,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar8);
    lVar6 = Cafe::diamondToStaggeredCoords(*piVar18 + -1,*piVar16 + 1 + *piVar14);
    iVar2 = Cafe::staggeredCoordsToIndex(lVar6);
    pMVar8 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(pMVar8,this_00,*(Cafe **)(this + 0x34),iVar2,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar8);
    iVar2 = **(int **)(iVar15 + DAT_00140f54);
    iVar10 = **(int **)(iVar15 + DAT_00140f58);
    local_34 = -iVar10;
    if (iVar10 != local_34 && iVar10 * 2 < 0 == SBORROW4(iVar10,local_34)) {
      uVar19 = arc4random();
      __aeabi_uidivmod(uVar19,iVar10 << 1);
      local_34 = extraout_r1 + local_34;
    }
    pTVar7 = (Task *)operator_new(0x2c);
    iVar10 = *(int *)(iVar15 + DAT_00140f5c);
    *(undefined4 *)(pTVar7 + 0xc) = 0;
    *(undefined4 *)(pTVar7 + 0x18) = 0;
    *(int *)pTVar7 = iVar10 + 8;
    *(Task **)(pTVar7 + 0x10) = pTVar7 + 8;
    iVar10 = DAT_00140f60;
    *(undefined4 *)(pTVar7 + 0x14) = 0;
    *(CharacterInstance **)(pTVar7 + 0x20) = this_00;
    pTVar7[4] = (Task)0x0;
    pTVar7[5] = (Task)0x0;
    iVar13 = **(int **)(iVar15 + iVar10) + 1;
    **(int **)(iVar15 + iVar10) = iVar13;
    *(int *)(pTVar7 + 0x1c) = iVar13;
    iVar10 = *(int *)(iVar15 + DAT_00140f64);
    *(int *)(pTVar7 + 0x24) = iVar2 + local_34;
    *(int *)pTVar7 = iVar10 + 8;
    pTVar7[0x28] = (Task)0x0;
    CharacterInstance::addTask(this_00,pTVar7);
    this_01 = (EatTask *)operator_new(0x44);
    EatTask::EatTask(this_01,this_00,*(Cafe **)(this + 0x34),false,0);
    CharacterInstance::addTask(this_00,(Task *)this_01);
    Task::addFinishedListener
              ((Task *)this_01,*(_func_void_void_ptr_Task_ptr **)(iVar15 + DAT_00140f68),this);
  }
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x138),this_00);
  Cafe::addCafeObject(*(Cafe **)(this + 0x34),(CafeObject *)this_00);
  return this_00;
}


