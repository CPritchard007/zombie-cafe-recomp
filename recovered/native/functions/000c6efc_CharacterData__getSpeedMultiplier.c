/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6efc CharacterData::getSpeedMultiplier */

/* CharacterData::getSpeedMultiplier() const */

void __thiscall CharacterData::getSpeedMultiplier(CharacterData *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = **(undefined4 **)(DAT_000c6f40 + 0xc6f06);
  uVar1 = __subsf3(**(undefined4 **)(DAT_000c6f44 + 0xc6f10),uVar3);
  uVar2 = __floatsisf((int)*(short *)(this + DAT_000c6f48));
  uVar2 = __mulsf3(uVar2,DAT_000c6f4c);
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar1 = __divsf3(uVar1,DAT_000c6f50);
  __addsf3(uVar3,uVar1);
  return;
}


