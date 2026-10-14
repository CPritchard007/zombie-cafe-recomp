/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00127730 GameStateCafe::tickFiredZombies */

/* GameStateCafe::tickFiredZombies() */

void __thiscall GameStateCafe::tickFiredZombies(GameStateCafe *this)

{
  short sVar1;
  int iVar2;
  MoveTask *this_00;
  short *psVar3;
  CharacterInstance *pCVar4;
  int iVar5;
  int iVar6;
  CharacterInstance *this_01;
  
  for (iVar6 = 0; iVar6 < *(int *)(this + 0x20) + 1; iVar6 = iVar6 + 1) {
    this_01 = *(CharacterInstance **)(iVar6 * 4 + *(int *)(this + 0x24));
    pCVar4 = this_01 + 0x8c;
    if (*(char *)(*(int *)pCVar4 + 4) != '\x01') {
      Vector<CharacterInstance*>::removeElementAt((Vector<CharacterInstance*> *)(this + 0x1c),iVar6)
      ;
      Vector<Character*>::removeElement
                ((Vector<Character*> *)(*(int *)(this + 0xc) + DAT_001277f0),*(Character **)pCVar4);
      Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x28),this_01);
      CharacterInstance::scream(this_01);
      iVar5 = *(int *)pCVar4;
      iVar2 = __aeabi_fcmpeq(*(undefined4 *)(iVar5 + 0x40),0);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar5 + 0x40) = 0x3f800000;
      }
      CharacterInstance::clearTasks();
      iVar2 = CapcomMath::random(2);
      if (iVar2 == 0) {
        psVar3 = (short *)(*(int *)(this + 0x14) + 0x9a);
      }
      else {
        psVar3 = (short *)(*(int *)(this + 0x14) + 0x98);
      }
      sVar1 = *psVar3;
      this_00 = (MoveTask *)operator_new(0x48);
      MoveTask::MoveTask(this_00,this_01,*(Cafe **)(this + 0x14),(int)sVar1,'\t',false);
      CharacterInstance::addTask(this_01,(Task *)this_00);
      iVar6 = iVar6 + -1;
      (**(code **)(*(int *)this_00 + 8))(this_00);
    }
  }
  return;
}


