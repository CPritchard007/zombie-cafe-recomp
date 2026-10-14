/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c800c Character::rest */

/* Character::rest(long) */

void __thiscall Character::rest(Character *this,long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_000c804c;
  if (this[5] == (Character)0x2) {
    uVar1 = __floatsisf(param_1);
    uVar1 = __mulsf3(uVar1,**(undefined4 **)(iVar3 + 0xc8022));
    uVar2 = __addsf3(uVar1,*(undefined4 *)(this + 0x40));
    uVar1 = getMaxEnergy();
    iVar3 = __aeabi_fcmplt(uVar2,uVar1);
    if (iVar3 != 0) {
      uVar1 = uVar2;
    }
    *(undefined4 *)(this + 0x40) = uVar1;
  }
  return;
}


