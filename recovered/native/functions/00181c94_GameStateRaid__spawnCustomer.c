/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181c94 GameStateRaid::spawnCustomer */

/* GameStateRaid::spawnCustomer(bool) */

CharacterInstance * __thiscall GameStateRaid::spawnCustomer(GameStateRaid *this,bool param_1)

{
  Character *pCVar1;
  CharacterInstance *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  Task *pTVar7;
  EatTask *this_01;
  MoveTask *pMVar8;
  int extraout_r1;
  Cafe *pCVar9;
  CFPathFinder *pCVar10;
  Cafe *pCVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  int local_24;
  
  fVar15 = (float)resetCustomerTimer(this);
  pCVar1 = (Character *)
           Cafe::createRandomCustomer
                     (*(int *)(this + 0x78),fVar15,SUB41(*(undefined4 *)(this + 0x48),0));
  iVar13 = DAT_00181ec8;
  pCVar10 = *(CFPathFinder **)(*(int *)(this + 0x78) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  iVar13 = iVar13 + 0x181cc4;
  CharacterInstance::CharacterInstance(this_00,pCVar1,pCVar10);
  iVar2 = CapcomMath::random(2);
  pCVar9 = *(Cafe **)(this + 0x78);
  bVar14 = iVar2 == 0;
  if (bVar14) {
    pCVar11 = pCVar9 + 0x9a;
  }
  else {
    pCVar11 = pCVar9 + 0x98;
  }
  CafeObject::setTileIndex((CafeObject *)this_00,*(short *)pCVar11,pCVar9);
  iVar2 = **(int **)(iVar13 + DAT_00181ecc);
  uVar3 = __floatsisf(**(int **)(iVar13 + DAT_00181ed0) - iVar2);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x68));
  uVar4 = __floatsisf(iVar2);
  __addsf3(uVar3,uVar4);
  iVar2 = __fixsfsi();
  iVar5 = CapcomMath::random(0x100);
  if (((iVar2 < iVar5) && (!param_1)) || (this[0x6c] != (GameStateRaid)0x0)) {
    if (this[0x6c] == (GameStateRaid)0x0) {
      pMVar8 = (MoveTask *)operator_new(0x48);
      pCVar9 = *(Cafe **)(this + 0x78);
      if (bVar14) {
        pCVar11 = pCVar9 + 0x98;
      }
      else {
        pCVar11 = pCVar9 + 0x9a;
      }
      MoveTask::MoveTask(pMVar8,this_00,pCVar9,(int)*(short *)pCVar11,'\0',false);
    }
    else {
      pMVar8 = (MoveTask *)operator_new(0x48);
      pCVar9 = *(Cafe **)(this + 0x78);
      if (bVar14) {
        pCVar11 = pCVar9 + 0x98;
      }
      else {
        pCVar11 = pCVar9 + 0x9a;
      }
      MoveTask::MoveTask(pMVar8,this_00,pCVar9,(int)*(short *)pCVar11,'\t',false);
    }
    CharacterInstance::addTask(this_00,(Task *)pMVar8);
  }
  else {
    lVar6 = Cafe::diamondToStaggeredCoords
                      ((**(int **)(iVar13 + DAT_00181ed4) + -1) - **(int **)(iVar13 + DAT_00181ed8),
                       **(int **)(iVar13 + DAT_00181edc) + 1);
    iVar2 = Cafe::staggeredCoordsToIndex(lVar6);
    pMVar8 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(pMVar8,this_00,*(Cafe **)(this + 0x78),iVar2,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)pMVar8);
    iVar2 = **(int **)(iVar13 + DAT_00181ee0);
    iVar5 = **(int **)(iVar13 + DAT_00181ee4);
    local_24 = -iVar5;
    if (iVar5 != local_24 && iVar5 * 2 < 0 == SBORROW4(iVar5,local_24)) {
      uVar3 = arc4random();
      __aeabi_uidivmod(uVar3,iVar5 << 1);
      local_24 = extraout_r1 + local_24;
    }
    pTVar7 = (Task *)operator_new(0x2c);
    iVar5 = *(int *)(iVar13 + DAT_00181ee8);
    *(undefined4 *)(pTVar7 + 0xc) = 0;
    *(undefined4 *)(pTVar7 + 0x18) = 0;
    *(int *)pTVar7 = iVar5 + 8;
    *(Task **)(pTVar7 + 0x10) = pTVar7 + 8;
    iVar5 = DAT_00181eec;
    *(undefined4 *)(pTVar7 + 0x14) = 0;
    *(CharacterInstance **)(pTVar7 + 0x20) = this_00;
    pTVar7[4] = (Task)0x0;
    pTVar7[5] = (Task)0x0;
    iVar12 = **(int **)(iVar13 + iVar5) + 1;
    **(int **)(iVar13 + iVar5) = iVar12;
    *(int *)(pTVar7 + 0x1c) = iVar12;
    iVar5 = *(int *)(iVar13 + DAT_00181ef0);
    *(int *)(pTVar7 + 0x24) = iVar2 + local_24;
    *(int *)pTVar7 = iVar5 + 8;
    pTVar7[0x28] = (Task)0x0;
    CharacterInstance::addTask(this_00,pTVar7);
    this_01 = (EatTask *)operator_new(0x44);
    EatTask::EatTask(this_01,this_00,*(Cafe **)(this + 0x78),false,0);
    CharacterInstance::addTask(this_00,(Task *)this_01);
    Task::addFinishedListener
              ((Task *)this_01,*(_func_void_void_ptr_Task_ptr **)(iVar13 + DAT_00181ef4),this);
  }
  this_00[0x84] = (CharacterInstance)0x1;
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0xb8),this_00);
  Cafe::addCafeObject(*(Cafe **)(this + 0x78),(CafeObject *)this_00);
  return this_00;
}


