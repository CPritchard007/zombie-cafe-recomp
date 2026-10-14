/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00172748 GameStateMeetLocker::fireZombie_debug */

/* GameStateMeetLocker::fireZombie_debug(GameStateMeetLocker*) */

void GameStateMeetLocker::fireZombie_debug(GameStateMeetLocker *param_1)

{
  Character *this;
  GameStateMeetLocker *pGVar1;
  int iVar2;
  
  pGVar1 = param_1 + 0xb8;
  iVar2 = 0;
  do {
    if (*(int *)pGVar1 != 0) {
      Vector<Character*>::removeElement
                ((Vector<Character*> *)(*(int *)(param_1 + 0xc) + 0x5a0),
                 *(Character **)(*(int *)pGVar1 + 0x8c));
      unSelectCharacter(param_1);
      this = *(Character **)(*(int *)pGVar1 + 0x8c);
      if (this != (Character *)0x0) {
        Character::~Character(this);
        operator_delete(this);
      }
      releaseCharacter(param_1,iVar2);
      *(undefined4 *)pGVar1 = 0;
    }
    iVar2 = iVar2 + 1;
    pGVar1 = pGVar1 + 4;
  } while (iVar2 != 0xd2);
  return;
}


