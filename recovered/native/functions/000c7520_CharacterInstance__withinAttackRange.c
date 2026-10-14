/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7520 CharacterInstance::withinAttackRange */

/* CharacterInstance::withinAttackRange(CharacterInstance*) */

bool __thiscall
CharacterInstance::withinAttackRange(CharacterInstance *this,CharacterInstance *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = CafeObject::isAdjacentTo((CafeObject *)this,(int)*(short *)(param_1 + 0x2c));
  bVar2 = true;
  if (iVar1 == 0) {
    bVar2 = *(short *)(param_1 + 0x2c) == *(short *)(this + 0x2c);
  }
  return bVar2;
}


