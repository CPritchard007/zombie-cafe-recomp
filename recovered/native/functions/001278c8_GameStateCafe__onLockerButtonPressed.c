/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001278c8 GameStateCafe::onLockerButtonPressed */

/* GameStateCafe::onLockerButtonPressed(GameStateCafe*, ScreenElement*) */

undefined8 GameStateCafe::onLockerButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  short sVar1;
  MoveTask *this;
  int iVar2;
  CharacterInstance *pCVar3;
  int iVar4;
  CharacterInstance *this_00;
  GameStateCafe *pGVar5;
  
  pGVar5 = param_1;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x5a4) + 1 < *(int *)(*(int *)(param_1 + 0xc) + 0x5b8)) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x44) = 0;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x24) = 1;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x88) != 0) {
      *(int *)(*(int *)(param_1 + 0x54) + 0x88) = 0;
    }
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x20) + 1; iVar2 = iVar2 + 1) {
      this_00 = *(CharacterInstance **)(iVar2 * 4 + *(int *)(param_1 + 0x24));
      if (this_00 == *(CharacterInstance **)(param_1 + 0x54)) {
        Vector<CharacterInstance*>::removeElementAt
                  ((Vector<CharacterInstance*> *)(param_1 + 0x1c),iVar2);
        Vector<CharacterInstance*>::addElement
                  ((Vector<CharacterInstance*> *)(param_1 + 0x28),this_00);
        pCVar3 = this_00 + 0x8c;
        Vector<Character*>::removeElement
                  ((Vector<Character*> *)(*(int *)(param_1 + 0xc) + DAT_001279dc),
                   *(Character **)pCVar3);
        Vector<Character*>::addElement
                  ((Vector<Character*> *)(*(int *)(param_1 + 0xc) + 0x5a0),*(Character **)pCVar3);
        Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),0x26,(int *)0xffffffff);
        CharacterInstance::groan(this_00);
        iVar4 = *(int *)pCVar3;
        iVar2 = __aeabi_fcmpeq(*(undefined4 *)(iVar4 + 0x40),0);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar4 + 0x40) = 0x3f800000;
        }
        CharacterInstance::clearTasks();
        iVar2 = CapcomMath::random(2);
        if (iVar2 == 0) {
          sVar1 = *(short *)(*(int *)(param_1 + 0x14) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(param_1 + 0x14) + 0x98);
        }
        this = (MoveTask *)operator_new(0x48);
        pGVar5 = (GameStateCafe *)&DAT_00000009;
        param_2 = (ScreenElement *)0x0;
        MoveTask::MoveTask(this,this_00,*(Cafe **)(param_1 + 0x14),(int)sVar1,'\t',false);
        CharacterInstance::addTask(this_00,(Task *)this);
        (**(code **)(*(int *)this + 8))(this);
        break;
      }
    }
    CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
  }
  return CONCAT44(param_2,pGVar5);
}


