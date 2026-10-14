/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8458 Character::checkLevelUp */

/* Character::checkLevelUp() */

undefined4 __thiscall Character::checkLevelUp(Character *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = DAT_000c84ac + 0xc8464;
  uVar1 = 0;
  while( true ) {
    iVar3 = *(int *)(this + 0x28);
    if (*(int *)(iVar4 + (uint)*(byte *)(*(int *)this + 0xb40) * 4 + 0x20) <= iVar3) {
      *(undefined4 *)(this + 0x2c) = 0;
      return uVar1;
    }
    iVar2 = *(int *)(iVar4 + iVar3 * 4 + 0x3c);
    if (*(int *)(this + 0x2c) < iVar2) break;
    *(int *)(this + 0x28) = iVar3 + 1;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) - iVar2;
    this[0x35] = (Character)0x1;
    fVar5 = (float)getMaxEnergy();
    setCurrentEnergy(this,fVar5);
    uVar1 = 1;
  }
  return uVar1;
}


