/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c71f0 Character::getAttackAction */

/* Character::getAttackAction() */

undefined1 __thiscall Character::getAttackAction(Character *this)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 3;
  if ((this[4] != (Character)0x0) && (this[0x36] != (Character)0x0)) {
    iVar1 = CapcomMath::random(100);
    iVar2 = DAT_000c7228 + 0xc7216 + (uint)(byte)this[0x36] * 0x24;
    if (iVar1 < (int)(uint)*(byte *)(iVar2 + 0x40)) {
      uVar3 = *(undefined1 *)(iVar2 + 0x31);
    }
  }
  return uVar3;
}


