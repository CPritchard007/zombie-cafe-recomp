/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126164 GameStateCafe::tickCustomers */

/* GameStateCafe::tickCustomers(long) */

void __thiscall GameStateCafe::tickCustomers(GameStateCafe *this,long param_1)

{
  CharacterInstance CVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int *piVar5;
  MoveTask *pMVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  Character *this_00;
  CharacterInstance *this_01;
  int local_2c;
  int local_28;
  
  local_2c = 0;
  bVar10 = true;
  do {
    if (*(int *)(this + 0x2c) + 1 <= local_2c) {
      if (((bVar10) &&
          (iVar9 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001264c0),'\x16'),
          iVar9 != 0)) && (*(char *)(*(int *)(this + 0x14) + 100) != '\0')) {
        bVar10 = true;
      }
      else {
        iVar9 = *(int *)(this + 0x1a8);
        *(int *)(this + 0x1a8) = iVar9 - param_1;
        if (-1 < iVar9 - param_1) {
          return;
        }
        bVar10 = false;
      }
      spawnCustomer(this,bVar10);
      return;
    }
    this_01 = *(CharacterInstance **)(local_2c * 4 + *(int *)(this + 0x30));
    (**(code **)(*(int *)this_01 + 0x1c))(this_01,param_1);
    if ((*(int *)(this_01 + 0x7c) == 0) &&
       (iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_01 + 0x8c) + 0x40),0), iVar9 == 0)) {
      piVar5 = *(int **)(this_01 + 0x88);
      if ((piVar5 != (int *)0x0) && (iVar9 = (**(code **)(*piVar5 + 0x14))(), iVar9 == 3)) {
        CharacterInstance::scream(this_01);
        iVar7 = *(int *)(this_01 + 0x88);
        iVar9 = CafeObject::isAdjacentTo((CafeObject *)this_01,(int)*(short *)(iVar7 + 0x2c));
        if ((iVar9 == 0) || (*(CharacterInstance **)(iVar7 + 0x88) != this_01)) {
          *(undefined4 *)(this_01 + 0x88) = 0;
        }
        goto LAB_00126406;
      }
      iVar9 = DAT_001264c0;
      if ((*(short *)(*(int *)(this + 0x14) + 0x98) != *(short *)(this_01 + 0x2c)) &&
         (*(short *)(*(int *)(this + 0x14) + 0x9a) != *(short *)(this_01 + 0x2c))) {
        CVar1 = (CharacterInstance)0x9;
        if ((*(char *)(*(int *)(this_01 + 0x8c) + 0x24) == '\0') &&
           (CVar1 = this_01[0xa9], CVar1 != (CharacterInstance)0x0)) {
          CVar1 = (CharacterInstance)0x9;
        }
        iVar9 = CapcomMath::random(2);
        if (iVar9 == 0) {
          sVar4 = *(short *)(*(int *)(this + 0x14) + 0x9a);
        }
        else {
          sVar4 = *(short *)(*(int *)(this + 0x14) + 0x98);
        }
        local_28 = (int)sVar4;
        pMVar6 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar6,this_01,*(Cafe **)(this + 0x14),local_28,(uchar)CVar1,false);
        CharacterInstance::addTask(this_01,(Task *)pMVar6);
        (**(code **)(*(int *)pMVar6 + 8))(pMVar6);
        iVar9 = (**(code **)(*(int *)pMVar6 + 0x34))(pMVar6);
        if (iVar9 == 0) {
          if (*(char *)(*(int *)(this_01 + 0x8c) + 4) == '\0') {
            uVar2 = **(ushort **)(DAT_001264c4 + 0x126390);
            iVar9 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x14) + 0xa0));
            uVar3 = **(ushort **)(DAT_001264c8 + 0x1263a6);
            iVar7 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x14) + 0xa1));
            lVar8 = Cafe::diamondToStaggeredCoords
                              (uVar3 + 1 + iVar7 & 0xffff | ((uVar2 - 1) - iVar9) * 0x10000);
            iVar9 = Cafe::staggeredCoordsToIndex(lVar8);
            pMVar6 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar6,this_01,*(Cafe **)(this + 0x14),iVar9,'\t',false);
            CharacterInstance::addTask(this_01,(Task *)pMVar6);
            CharacterInstance::scream(this_01);
          }
        }
        else {
          this_01[0xa8] = (CharacterInstance)0x0;
          this_01[0xc5] = (CharacterInstance)0x0;
        }
        goto LAB_00126406;
      }
      if ((((this_01 == *(CharacterInstance **)(*(int *)(this + 0xc4) + 0x60)) ||
           (this_01 == *(CharacterInstance **)(this + 0x54))) &&
          (iVar7 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001264c0),'M'),
          iVar7 != 0)) &&
         (iVar9 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar9),'P'), iVar9 == 0)) {
        if (*(short *)(this_01 + 0x2c) == *(short *)(*(int *)(this + 0x14) + 0x98)) {
          pMVar6 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar6,this_01,*(Cafe **)(this + 0x14),
                             (int)*(short *)(*(Cafe **)(this + 0x14) + 0x9a),'\0',false);
        }
        else {
          pMVar6 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar6,this_01,*(Cafe **)(this + 0x14),
                             (int)*(short *)(*(Cafe **)(this + 0x14) + 0x98),'\0',false);
        }
        CharacterInstance::addTask(this_01,(Task *)pMVar6);
        (**(code **)(*(int *)pMVar6 + 8))(pMVar6);
        goto LAB_00126406;
      }
      if (*(CharacterInstance **)(this + 0x54) == this_01) {
        CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0xac));
      }
      Cafe::removeCafeObject(*(Cafe **)(this + 0x14),(CafeObject *)this_01);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(this + 0x28),local_2c);
      Vector<CharacterInstance*>::removeElement
                ((Vector<CharacterInstance*> *)(*(int *)(this + 0x14) + 0xa4),this_01);
      if (*(CharacterInstance **)(this + 0x54) == this_01) {
        deselect(this);
        (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
      }
      this_00 = *(Character **)(this_01 + 0x8c);
      if (this_00[4] != (Character)0x1) {
        Character::~Character(this_00);
        operator_delete(this_00);
        *(undefined4 *)(this_01 + 0x8c) = 0;
      }
      (**(code **)(*(int *)this_01 + 4))(this_01);
      local_2c = local_2c + -1;
    }
    else {
      iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_01 + 0x8c) + 0x40),0);
      if ((iVar9 != 0) && (*(CharacterInstance **)(this + 0x54) == this_01)) {
        CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0xac));
      }
LAB_00126406:
      if (this_01 != (CharacterInstance *)0x0) {
        bVar10 = (bool)(bVar10 & this_01[0xc5] == (CharacterInstance)0x0);
        CapcomOrderableList<CafeObject*>::sort
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x14) + 0x20),
                   (CafeObject *)this_01);
      }
    }
    local_2c = local_2c + 1;
  } while( true );
}


