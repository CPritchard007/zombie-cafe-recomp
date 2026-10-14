/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c77fc CharacterInstance::isRestless */

/* CharacterInstance::isRestless() */

bool __thiscall CharacterInstance::isRestless(CharacterInstance *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = __floatsisf(0x6e - *(short *)(**(int **)(this + 0x8c) + 0xb00));
  uVar2 = __mulsf3(uVar2,DAT_000c78a0);
  uVar2 = __divsf3(uVar2,DAT_000c78a4);
  uVar2 = __addsf3(uVar2,DAT_000c78a8);
  uVar3 = Character::getMaxEnergy();
  uVar2 = __mulsf3(uVar3,uVar2);
  uVar3 = *(undefined4 *)(*(int *)(this + 0x8c) + 0x40);
  iVar4 = __aeabi_fcmple(uVar3,uVar2);
  if (iVar4 == 0) {
    bVar1 = false;
  }
  else {
    uVar6 = **(undefined4 **)(DAT_000c78ac + 0xc784e);
    iVar4 = CapcomMath::random(100);
    uVar2 = __divsf3(uVar3,uVar2);
    uVar2 = __subsf3(0x3f800000,uVar2);
    uVar3 = __subsf3(0x3f800000,uVar6);
    uVar2 = __mulsf3(uVar2,uVar3);
    uVar2 = __addsf3(uVar2,uVar6);
    __mulsf3(uVar2,DAT_000c78a4);
    iVar5 = __fixsfsi();
    bVar1 = iVar4 < iVar5;
  }
  return bVar1;
}


