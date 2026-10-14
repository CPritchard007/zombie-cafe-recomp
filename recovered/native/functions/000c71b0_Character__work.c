/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c71b0 Character::work */

/* Character::work(long) */

void __thiscall Character::work(Character *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000c71ec;
  if (this[5] == (Character)0x2) {
    uVar1 = __floatsisf(param_1);
    uVar1 = __mulsf3(uVar1,**(undefined4 **)(iVar2 + 0xc71c6));
    uVar1 = __subsf3(*(undefined4 *)(this + 0x40),uVar1);
    iVar2 = __aeabi_fcmpgt(uVar1,0x3f800000);
    if (iVar2 == 0) {
      uVar1 = 0x3f800000;
    }
    *(undefined4 *)(this + 0x40) = uVar1;
  }
  return;
}


