/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00125f00 GameStateCafe::spawnCustomer */

/* GameStateCafe::spawnCustomer(bool) */

CharacterInstance * __thiscall GameStateCafe::spawnCustomer(GameStateCafe *this,bool param_1)

{
  Character *pCVar1;
  CharacterInstance *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  MoveTask *pMVar7;
  WaitTask *this_01;
  EatTask *this_02;
  int extraout_r1;
  Cafe *pCVar8;
  int iVar9;
  CFPathFinder *pCVar10;
  Cafe *pCVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  float fVar19;
  int local_34;
  
  resetCustomerTimer(this);
  uVar18 = *(undefined4 *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  iVar14 = *(int *)(this + 0x14);
  fVar19 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0xc));
  pCVar1 = (Character *)Cafe::createRandomCustomer(iVar14,fVar19,SUB41(uVar18,0));
  iVar14 = DAT_0012613c;
  pCVar10 = *(CFPathFinder **)(*(int *)(this + 0x14) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  iVar14 = iVar14 + 0x125f3e;
  CharacterInstance::CharacterInstance(this_00,pCVar1,pCVar10);
  iVar2 = CapcomMath::random(2);
  pCVar8 = *(Cafe **)(this + 0x14);
  if (iVar2 == 0) {
    pCVar11 = pCVar8 + 0x9a;
  }
  else {
    pCVar11 = pCVar8 + 0x98;
  }
  CafeObject::setTileIndex((CafeObject *)this_00,*(short *)pCVar11,pCVar8);
  iVar12 = **(int **)(iVar14 + DAT_00126140);
  piVar15 = *(int **)(iVar14 + DAT_00126144);
  iVar9 = *piVar15;
  uVar18 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0xc));
  iVar16 = *piVar15;
  uVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00126148),'\x16');
  if (uVar3 != 0) {
    if (!param_1) {
      iVar4 = CapcomMath::random(0x100);
      uVar5 = __floatsisf(iVar12 - iVar9);
      uVar18 = __mulsf3(uVar5,uVar18);
      uVar5 = __floatsisf(iVar16);
      __addsf3(uVar18,uVar5);
      iVar9 = __fixsfsi();
      uVar3 = 0;
      if (iVar9 < iVar4) goto LAB_00125fde;
    }
    uVar3 = (uint)*(byte *)(*(int *)(this + 0x14) + 100);
    if (uVar3 != 0) {
      uVar3 = 1;
    }
  }
LAB_00125fde:
  this_00[0xc5] = SUB41(uVar3,0);
  if (uVar3 == 0) {
    pMVar7 = (MoveTask *)operator_new(0x48);
    pCVar8 = *(Cafe **)(this + 0x14);
    if (iVar2 == 0) {
      pCVar11 = pCVar8 + 0x98;
    }
    else {
      pCVar11 = pCVar8 + 0x9a;
    }
    MoveTask::MoveTask(pMVar7,this_00,pCVar8,(int)*(short *)pCVar11,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar7);
  }
  else {
    piVar17 = *(int **)(iVar14 + DAT_0012614c);
    piVar15 = *(int **)(iVar14 + DAT_00126150);
    piVar13 = *(int **)(iVar14 + DAT_00126154);
    lVar6 = Cafe::diamondToStaggeredCoords(*piVar17,*piVar15 + 1 + *piVar13);
    iVar2 = Cafe::staggeredCoordsToIndex(lVar6);
    pMVar7 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(pMVar7,this_00,*(Cafe **)(this + 0x14),iVar2,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar7);
    lVar6 = Cafe::diamondToStaggeredCoords(*piVar17 + -1,*piVar15 + 1 + *piVar13);
    iVar2 = Cafe::staggeredCoordsToIndex(lVar6);
    pMVar7 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(pMVar7,this_00,*(Cafe **)(this + 0x14),iVar2,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar7);
    iVar2 = **(int **)(iVar14 + DAT_00126158);
    iVar9 = **(int **)(iVar14 + DAT_0012615c);
    local_34 = -iVar9;
    if (iVar9 != local_34 && iVar9 * 2 < 0 == SBORROW4(iVar9,local_34)) {
      uVar18 = arc4random();
      __aeabi_uidivmod(uVar18,iVar9 << 1);
      local_34 = extraout_r1 + local_34;
    }
    this_01 = (WaitTask *)operator_new(0x2c);
    WaitTask::WaitTask(this_01,this_00,iVar2 + local_34,false);
    CharacterInstance::addTask(this_00,(Task *)this_01);
    this_02 = (EatTask *)operator_new(0x44);
    EatTask::EatTask(this_02,this_00,*(Cafe **)(this + 0x14),false,0);
    CharacterInstance::addTask(this_00,(Task *)this_02);
    Task::addFinishedListener
              ((Task *)this_02,*(_func_void_void_ptr_Task_ptr **)(iVar14 + DAT_00126160),this);
  }
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x28),this_00);
  Cafe::addCafeObject(*(Cafe **)(this + 0x14),(CafeObject *)this_00);
  return this_00;
}


