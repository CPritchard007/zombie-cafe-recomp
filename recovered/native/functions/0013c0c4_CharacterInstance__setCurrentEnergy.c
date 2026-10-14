/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c0c4 CharacterInstance::setCurrentEnergy */

/* CharacterInstance::setCurrentEnergy(float) */

void __thiscall CharacterInstance::setCurrentEnergy(CharacterInstance *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x8c);
  uVar1 = Character::getMaxEnergy();
  iVar2 = __aeabi_fcmplt(in_r1,0);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(in_r1,uVar1);
    if (iVar2 != 0) {
      in_r1 = uVar1;
    }
  }
  else {
    in_r1 = 0;
  }
  *(undefined4 *)(iVar3 + 0x40) = in_r1;
  return;
}


