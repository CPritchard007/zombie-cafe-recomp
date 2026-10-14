/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8098 Character::getAdditionAttack */

/* Character::getAdditionAttack() */

int __thiscall Character::getAdditionAttack(Character *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    if (*(uint *)(this + iVar2 + 0x58) - 1 < 0x27) {
      uVar4 = *(uint *)(this + iVar2 + 0x58) & 0xff;
      iVar5 = DAT_000c80ec + 0xc80a6 + uVar4 * 0x24;
      cVar1 = *(char *)(iVar5 + 0x10);
      if ((cVar1 == '\x06') || (cVar1 == '\x02')) {
        iVar5 = *(int *)(DAT_000c80f0 + uVar4 * 0x24 + 0xc80bc);
      }
      else {
        if ((cVar1 != '\b') && (cVar1 != '\n')) goto LAB_000c80de;
        iVar5 = *(int *)(iVar5 + 0x18);
      }
      uVar3 = uVar3 + iVar5 & 0xffff;
    }
LAB_000c80de:
    iVar2 = iVar2 + 4;
    if (iVar2 == 0x14) {
      return (int)(short)uVar3;
    }
  } while( true );
}


