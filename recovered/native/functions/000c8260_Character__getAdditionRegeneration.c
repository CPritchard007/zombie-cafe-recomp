/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8260 Character::getAdditionRegeneration */

/* Character::getAdditionRegeneration() */

undefined4 __thiscall Character::getAdditionRegeneration(Character *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  iVar4 = DAT_000c82c8 + 0xc826e;
  do {
    if ((*(uint *)(this + iVar5 + 0x58) - 1 < 0x27) &&
       (iVar2 = iVar4 + (*(uint *)(this + iVar5 + 0x58) & 0xff) * 0x24,
       *(char *)(iVar2 + 0x10) == '\a')) {
      uVar1 = __floatsisf(*(undefined4 *)(iVar2 + 0x14));
      uVar1 = __divsf3(uVar1,DAT_000c82cc);
      uVar3 = __addsf3(uVar3,uVar1);
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x14);
  iVar4 = __aeabi_fcmpgt(uVar3,DAT_000c82d0);
  uVar1 = DAT_000c82d0;
  if ((iVar4 == 0) && (iVar4 = __aeabi_fcmplt(uVar3,0), uVar1 = uVar3, iVar4 != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


