/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179354 GameStatePowerup::afterExecPowerup */

/* GameStatePowerup::afterExecPowerup() */

void __thiscall GameStatePowerup::afterExecPowerup(GameStatePowerup *this)

{
  Vector<Character*> *this_00;
  int iVar1;
  int iVar2;
  Character *this_01;
  int iVar3;
  GameStatePowerup *pGVar4;
  GameStatePowerup *pGVar5;
  bool bVar6;
  Vector<int> aVStack_30 [4];
  int local_2c;
  int local_28;
  Vector<int> aVStack_24 [4];
  int local_20;
  int local_1c;
  
  sendSacrificeLog(this);
  Vector<int>::Vector(aVStack_30);
  Vector<int>::Vector(aVStack_24);
  pGVar5 = this;
  do {
    if (*(int *)(pGVar5 + 0x114) != 0) {
      iVar2 = *(int *)(*(int *)(this + 0xc) + DAT_001795f0 + 4);
      for (iVar3 = 0; iVar3 < iVar2 + 1; iVar3 = iVar3 + 1) {
        if (*(int *)(iVar3 * 4 + *(int *)(this + 0x74)) == *(int *)(*(int *)(pGVar5 + 0x114) + 0x8c)
           ) {
          Vector<int>::addElement(aVStack_30,iVar3);
        }
      }
    }
    pGVar5 = pGVar5 + 4;
  } while (pGVar5 != this + 0x28);
  if (-1 < local_2c) {
    iVar2 = *(int *)(*(int *)(this + 0xc) + DAT_001795f0 + 4);
    if (-1 < iVar2) {
      do {
        for (iVar3 = 0; iVar3 < local_2c + 1; iVar3 = iVar3 + 1) {
          if (iVar2 == *(int *)(iVar3 * 4 + local_28)) {
            Vector<int>::addElement(aVStack_24,iVar2);
          }
        }
        bVar6 = iVar2 != 0;
        iVar2 = iVar2 + -1;
      } while (bVar6);
    }
    local_2c = -1;
  }
  iVar2 = 0;
  if (-1 < local_20) {
    for (; iVar2 < local_20 + 1; iVar2 = iVar2 + 1) {
      iVar3 = *(int *)(iVar2 * 4 + local_1c);
      if (-1 < iVar3) {
        if (iVar3 <= *(int *)(this + 0x40)) {
          *(undefined4 *)(iVar3 * 4 + *(int *)(this + 0x44)) = 0;
          Vector<int>::move((Vector<int> *)(this + 0x3c),iVar3 + 1,-1);
          *(int *)(this + 0x40) = *(int *)(this + 0x40) + -1;
        }
        if (iVar3 <= *(int *)(this + 0x4c)) {
          *(undefined4 *)(iVar3 * 4 + *(int *)(this + 0x50)) = 0;
          Vector<long>::move((Vector<long> *)(this + 0x48),iVar3 + 1,-1);
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        }
        if (iVar3 <= *(int *)(this + 0x58)) {
          *(undefined4 *)(iVar3 * 4 + *(int *)(this + 0x5c)) = 0;
          Vector<int>::move((Vector<int> *)(this + 0x54),iVar3 + 1,-1);
          *(int *)(this + 0x58) = *(int *)(this + 0x58) + -1;
        }
        if (iVar3 <= *(int *)(this + 100)) {
          *(undefined4 *)(iVar3 * 4 + *(int *)(this + 0x68)) = 0;
          iVar1 = iVar3 + 1;
          if ((-1 < iVar1) && (iVar1 <= *(int *)(this + 100))) {
            FUN_00177eec(this + 0x60,iVar1,0xffffffff);
          }
          *(int *)(this + 100) = *(int *)(this + 100) + -1;
        }
      }
      Vector<Character*>::removeElementAt((Vector<Character*> *)(this + 0x6c),iVar3);
    }
    local_20 = -1;
  }
  pGVar5 = this + DAT_001795f4;
  pGVar4 = this + 0x114;
  do {
    if (*(int *)pGVar4 != 0) {
      iVar3 = *(int *)(this + 0xc);
      for (iVar2 = 0; iVar2 <= *(int *)(iVar3 + 0x5a4); iVar2 = iVar2 + 1) {
        if (*(int *)(iVar2 * 4 + *(int *)(iVar3 + 0x5a8)) == *(int *)(*(int *)pGVar4 + 0x8c))
        goto LAB_001794ec;
      }
      iVar2 = -1;
LAB_001794ec:
      Vector<Character*>::removeElementAt((Vector<Character*> *)(iVar3 + 0x5a0),iVar2);
      this_00 = (Vector<Character*> *)(*(int *)(this + 0xc) + DAT_001795f0);
      for (iVar2 = 0; iVar2 <= *(int *)(this_00 + 4); iVar2 = iVar2 + 1) {
        if (*(int *)(iVar2 * 4 + *(int *)(this_00 + 8)) == *(int *)(*(int *)pGVar4 + 0x8c))
        goto LAB_0017951e;
      }
      iVar2 = -1;
LAB_0017951e:
      Vector<Character*>::removeElementAt(this_00,iVar2);
      this_01 = *(Character **)(*(int *)pGVar4 + 0x8c);
      if (this_01 != (Character *)0x0) {
        Character::~Character(this_01);
        operator_delete(this_01);
      }
      if (*(int **)pGVar4 != (int *)0x0) {
        (**(code **)(**(int **)pGVar4 + 4))();
      }
      *(undefined4 *)pGVar4 = 0;
    }
    pGVar4 = pGVar4 + 4;
    if (pGVar4 == pGVar5) {
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 0x4d0;
        iVar2 = iVar2 + 4;
        *(undefined4 *)(this + iVar3) = 0;
        iVar3 = DAT_001795f8;
      } while (iVar2 != 0x28);
      if (*(int *)(this + 0x498) != 0) {
        CharacterInstance::stopReplacementInAnimation
                  (*(CharacterInstance **)(this + DAT_001795f8),0);
        if (*(int **)(this + 0x498) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x498) + 4))();
        }
        *(undefined4 *)(this + 0x498) = 0;
      }
      if (*(int **)(this + 0x490) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x490) + 4))();
        *(undefined4 *)(this + 0x490) = 0;
      }
      if (*(int **)(this + iVar3) != (int *)0x0) {
        (**(code **)(**(int **)(this + iVar3) + 4))();
        *(undefined4 *)(this + iVar3) = 0;
      }
      save();
      Vector<int>::~Vector(aVStack_24);
      Vector<int>::~Vector(aVStack_30);
      return;
    }
  } while( true );
}


