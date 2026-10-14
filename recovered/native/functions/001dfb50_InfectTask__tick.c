/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfb50 InfectTask::tick */

/* InfectTask::tick(long) */

void __thiscall InfectTask::tick(InfectTask *this,long param_1)

{
  byte bVar1;
  int iVar2;
  CharacterInstance *this_00;
  undefined4 uVar3;
  Character *this_01;
  float extraout_s0;
  float fVar4;
  
  if (this[4] == (InfectTask)0x0) {
    if (*(char *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 4) == '\x01') {
      this[5] = (InfectTask)0x0;
      Task::finish((Task *)this);
    }
    (**(code **)(**(int **)(this + 0x28) + 0x14))(*(int **)(this + 0x28),param_1);
    if (*(char *)(*(int *)(this + 0x28) + 4) == '\0') {
      iVar2 = Cafe::isInside(*(Cafe **)(this + 0x2c),(int)*(short *)(*(int *)(this + 0x24) + 0x2c));
      if (iVar2 != 0) {
        return;
      }
      this[5] = (InfectTask)0x0;
    }
    else if (*(char *)(*(int *)(this + 0x28) + 5) == '\0') {
      this[5] = (InfectTask)0x0;
    }
    else {
      iVar2 = arc4random();
      __aeabi_idivmod(iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f,3);
      iVar2 = CapcomApp::getInstance();
      ZombieCafe::playEffect(*(int *)(iVar2 + 4),extraout_s0);
      *(undefined1 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 5) = 2;
      *(undefined1 *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 4) = 1;
      this_01 = *(Character **)(*(int *)(this + 0x24) + 0x8c);
      fVar4 = (float)__floatsisf((int)**(short **)(DAT_001dfc58 + 0x1dfbf0));
      Character::setCurrentEnergy(this_01,fVar4);
      this_00 = *(CharacterInstance **)(this + 0x24);
      CharacterInstance::setCurrentAnimation
                (this_00,(uchar)this_00[0x34],*(uchar *)(*(int *)(this_00 + 0x8c) + 0x4c),true);
      uVar3 = arc4random();
      bVar1 = (byte)((int)uVar3 >> 0x1f);
      *(byte *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x54) =
           -(((char)uVar3 + bVar1 ^ bVar1) & 1) & 0x13;
      this[5] = (InfectTask)0x1;
    }
    Task::finish((Task *)this);
  }
  return;
}


