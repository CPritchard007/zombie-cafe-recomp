/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c77ac Character::getAdditionEnergy */

/* Character::getAdditionEnergy() */

undefined4 __thiscall Character::getAdditionEnergy(Character *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar4 = 0;
  iVar5 = DAT_000c77f8 + 0xc77ba;
  do {
    if (*(uint *)(this + iVar6 + 0x58) - 1 < 0x27) {
      iVar3 = iVar5 + (*(uint *)(this + iVar6 + 0x58) & 0xff) * 0x24;
      cVar1 = *(char *)(iVar3 + 0x10);
      if ((((cVar1 == '\x01') || (cVar1 == '\b')) || (cVar1 == '\t')) || (cVar1 == '\n')) {
        uVar2 = __floatsisf(*(undefined4 *)(iVar3 + 0x14));
        uVar4 = __addsf3(uVar4,uVar2);
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x14);
  return uVar4;
}


