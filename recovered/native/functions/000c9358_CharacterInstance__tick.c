/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c9358 CharacterInstance::tick */

/* CharacterInstance::tick(long) */

void __thiscall CharacterInstance::tick(CharacterInstance *this,long param_1)

{
  short sVar1;
  Task *pTVar2;
  int *piVar3;
  int iVar4;
  CharacterInstance *pCVar5;
  Character *this_00;
  CapcomLinkedList<Task*> *this_01;
  float fVar6;
  
  *(int *)(this + 0x94) = (int)*(short *)(this + 0x2c);
  if (*(int *)(this + 0x7c) != 0) {
    this_01 = (CapcomLinkedList<Task*> *)(this + 0x6c);
    pTVar2 = (Task *)CapcomLinkedList<Task*>::get(this_01,0);
    (**(code **)(*(int *)pTVar2 + 0x14))(pTVar2,param_1);
    if (pTVar2[4] != (Task)0x0) {
      piVar3 = (int *)CapcomLinkedList<Task*>::remove(this_01,pTVar2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      if (*(int *)(this + 0x7c) == 0) {
        iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this + 0x8c) + 0x40),0);
        if (iVar4 == 0) {
          setCurrentAnimation(this,'\x01',0xff,false);
        }
      }
      else {
        piVar3 = (int *)CapcomLinkedList<Task*>::get(this_01,0);
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  iVar4 = (**(code **)(*(int *)this + 0x20))(this);
  if (((iVar4 == 2) && (*(char *)(*(int *)(this + 0x8c) + 0x44) != '\x03')) &&
     (*(char *)(*(int *)(this + 0x8c) + 0x44) != '\x06')) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) - param_1;
  }
  pCVar5 = this + 0x8c;
  piVar3 = *(int **)pCVar5;
  if (piVar3[10] < *(int *)(DAT_000c9498 + 0xc940e + (uint)*(byte *)(*piVar3 + 0xb40) * 4 + 0x20)) {
    iVar4 = *(int *)(DAT_000c9498 + 0xc940e + piVar3[10] * 4 + 0x3c);
    if (iVar4 <= piVar3[0xb]) {
      piVar3[0xb] = piVar3[0xb] - iVar4;
      *(int *)(*(int *)pCVar5 + 0x28) = *(int *)(*(int *)pCVar5 + 0x28) + 1;
      *(undefined1 *)(*(int *)pCVar5 + 0x35) = 1;
      this[0xc6] = (CharacterInstance)0x1;
      this_00 = *(Character **)pCVar5;
      fVar6 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(this_00,fVar6);
    }
  }
  else {
    piVar3[0xb] = 0;
  }
  piVar3 = *(int **)(this + 0x90);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3,param_1);
  }
  pCVar5 = this + 0xa0;
  sVar1 = (short)param_1 + *(short *)pCVar5;
  *(short *)pCVar5 = sVar1;
  if (1000 < sVar1) {
    *(short *)pCVar5 = sVar1 + (short)DAT_000c949c;
  }
  if (this[0xd4] != (CharacterInstance)0x0) {
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + param_1;
  }
  return;
}


