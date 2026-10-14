/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c84b6 CharacterInstance::isSoundEffectVoice */

/* CharacterInstance::isSoundEffectVoice() */

bool CharacterInstance::isSoundEffectVoice(void)

{
  uint uVar1;
  
  uVar1 = lrand48();
  return (uVar1 & 3) == 0;
}


