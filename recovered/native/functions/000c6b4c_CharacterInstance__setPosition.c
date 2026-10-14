/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6b4c CharacterInstance::setPosition */

/* CharacterInstance::setPosition(long) */

void __thiscall CharacterInstance::setPosition(CharacterInstance *this,long param_1)

{
  CafeObject::setPosition((CafeObject *)this,param_1);
  *(long *)(*(int *)(this + 0x8c) + 0x48) = param_1;
  return;
}


