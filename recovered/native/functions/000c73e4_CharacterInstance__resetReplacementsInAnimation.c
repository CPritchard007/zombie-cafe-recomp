/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c73e4 CharacterInstance::resetReplacementsInAnimation */

/* CharacterInstance::resetReplacementsInAnimation() */

void __thiscall CharacterInstance::resetReplacementsInAnimation(CharacterInstance *this)

{
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  if (*(int *)(this + 0x90) != 0) {
    *(undefined4 *)(*(int *)(this + 0x90) + 0x34) = 0xffffffff;
  }
  return;
}


