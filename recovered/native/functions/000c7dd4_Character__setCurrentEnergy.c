/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7dd4 Character::setCurrentEnergy */

/* Character::setCurrentEnergy(float) */

void __thiscall Character::setCurrentEnergy(Character *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  
  uVar1 = getMaxEnergy();
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
  *(undefined4 *)(this + 0x40) = in_r1;
  return;
}


