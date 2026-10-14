/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c84c6 CharacterInstance::isSoundEffectHit */

/* CharacterInstance::isSoundEffectHit() */

bool CharacterInstance::isSoundEffectHit(void)

{
  uint uVar1;
  
  uVar1 = lrand48();
  return (uVar1 & 1) == 0;
}


