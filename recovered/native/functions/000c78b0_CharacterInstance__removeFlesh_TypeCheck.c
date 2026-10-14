/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c78b0 CharacterInstance::removeFlesh_TypeCheck */

/* CharacterInstance::removeFlesh_TypeCheck() */

bool CharacterInstance::removeFlesh_TypeCheck(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Character::getMaxEnergy();
  iVar2 = __aeabi_fcmpgt(uVar1,DAT_000c78c8);
  return iVar2 != 0;
}


