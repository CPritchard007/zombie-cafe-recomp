/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c80f4 Character::getAdditionSpeed */

/* Character::getAdditionSpeed() */

int __thiscall Character::getAdditionSpeed(Character *this)

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
      iVar5 = DAT_000c814c + 0xc8102 + uVar4 * 0x24;
      cVar1 = *(char *)(iVar5 + 0x10);
      if ((cVar1 == '\x06') || (cVar1 == '\x03')) {
        iVar5 = *(int *)(DAT_000c8150 + uVar4 * 0x24 + 0xc8118);
      }
      else if (cVar1 == '\t') {
        iVar5 = *(int *)(iVar5 + 0x18);
      }
      else {
        if (cVar1 != '\n') goto LAB_000c813e;
        iVar5 = *(int *)(iVar5 + 0x1c);
      }
      uVar3 = uVar3 + iVar5 & 0xffff;
    }
LAB_000c813e:
    iVar2 = iVar2 + 4;
    if (iVar2 == 0x14) {
      return (int)(short)uVar3;
    }
  } while( true );
}


