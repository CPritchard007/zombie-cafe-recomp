/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140f6c GameStateFriendCafe::tickCustomers */

/* GameStateFriendCafe::tickCustomers(long) */

void __thiscall GameStateFriendCafe::tickCustomers(GameStateFriendCafe *this,long param_1)

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
  int local_30;
  int local_28;
  
  local_30 = 0;
  bVar10 = true;
  do {
    if (*(int *)(this + 0x13c) + 1 <= local_30) {
      if (((bVar10) &&
          (iVar9 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00141228),'\x16'),
          iVar9 != 0)) && (*(char *)(*(int *)(this + 0x34) + 100) != '\0')) {
        bVar10 = true;
      }
      else {
        iVar9 = *(int *)(this + 0x184);
        *(int *)(this + 0x184) = iVar9 - param_1;
        if (-1 < iVar9 - param_1) {
          return;
        }
        bVar10 = false;
      }
      spawnCustomer(this,bVar10);
      return;
    }
    this_01 = *(CharacterInstance **)(local_30 * 4 + *(int *)(this + 0x140));
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
        goto LAB_00141174;
      }
      if ((*(short *)(*(int *)(this + 0x34) + 0x98) != *(short *)(this_01 + 0x2c)) &&
         (*(short *)(*(int *)(this + 0x34) + 0x9a) != *(short *)(this_01 + 0x2c))) {
        CVar1 = (CharacterInstance)0x9;
        if ((*(char *)(*(int *)(this_01 + 0x8c) + 0x24) == '\0') &&
           (CVar1 = this_01[0xa9], CVar1 != (CharacterInstance)0x0)) {
          CVar1 = (CharacterInstance)0x9;
        }
        iVar9 = CapcomMath::random(2);
        if (iVar9 == 0) {
          sVar4 = *(short *)(*(int *)(this + 0x34) + 0x9a);
        }
        else {
          sVar4 = *(short *)(*(int *)(this + 0x34) + 0x98);
        }
        local_28 = (int)sVar4;
        pMVar6 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar6,this_01,*(Cafe **)(this + 0x34),local_28,(uchar)CVar1,false);
        CharacterInstance::addTask(this_01,(Task *)pMVar6);
        (**(code **)(*(int *)pMVar6 + 8))(pMVar6);
        iVar9 = (**(code **)(*(int *)pMVar6 + 0x34))(pMVar6);
        if (iVar9 == 0) {
          if (*(char *)(*(int *)(this_01 + 0x8c) + 4) == '\0') {
            uVar2 = **(ushort **)(DAT_00141220 + 0x1410f6);
            iVar9 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x34) + 0xa0));
            uVar3 = **(ushort **)(DAT_00141224 + 0x14110c);
            iVar7 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x34) + 0xa1));
            lVar8 = Cafe::diamondToStaggeredCoords
                              (uVar3 + 1 + iVar7 & 0xffff | ((uVar2 - 1) - iVar9) * 0x10000);
            iVar9 = Cafe::staggeredCoordsToIndex(lVar8);
            pMVar6 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar6,this_01,*(Cafe **)(this + 0x34),iVar9,'\t',false);
            CharacterInstance::addTask(this_01,(Task *)pMVar6);
            CharacterInstance::scream(this_01);
          }
        }
        else {
          this_01[0xa8] = (CharacterInstance)0x0;
          this_01[0xc5] = (CharacterInstance)0x0;
        }
        goto LAB_00141174;
      }
      if (*(CharacterInstance **)(this + 0x1a0) == this_01) {
        CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x1a4));
      }
      Cafe::removeCafeObject(*(Cafe **)(this + 0x34),(CafeObject *)this_01);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(this + 0x138),local_30);
      if (*(CharacterInstance **)(this + 0x1a0) == this_01) {
        deselect(this);
        (**(code **)(**(int **)(this + 0x1a8) + 0x20))(*(int **)(this + 0x1a8),0);
      }
      this_00 = *(Character **)(this_01 + 0x8c);
      if (this_00 != (Character *)0x0) {
        Character::~Character(this_00);
        operator_delete(this_00);
      }
      (**(code **)(*(int *)this_01 + 4))(this_01);
      local_30 = local_30 + -1;
    }
    else {
      iVar9 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_01 + 0x8c) + 0x40),0);
      if ((iVar9 != 0) && (*(CharacterInstance **)(this + 0x1a0) == this_01)) {
        CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x1a4));
      }
LAB_00141174:
      if (this_01 != (CharacterInstance *)0x0) {
        bVar10 = (bool)(bVar10 & this_01[0xc5] == (CharacterInstance)0x0);
        CapcomOrderableList<CafeObject*>::sort
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x34) + 0x20),
                   (CafeObject *)this_01);
      }
    }
    local_30 = local_30 + 1;
  } while( true );
}


