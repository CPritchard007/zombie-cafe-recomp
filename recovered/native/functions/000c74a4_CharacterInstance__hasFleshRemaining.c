/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c74a4 CharacterInstance::hasFleshRemaining */

/* CharacterInstance::hasFleshRemaining() */

uint __thiscall CharacterInstance::hasFleshRemaining(CharacterInstance *this)

{
  return (uint)((*(int *)(this + 0x50) >> 0x1f) - *(int *)(this + 0x50)) >> 0x1f;
}


