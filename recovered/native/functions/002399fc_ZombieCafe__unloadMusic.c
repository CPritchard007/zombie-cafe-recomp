/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002399fc ZombieCafe::unloadMusic */

/* ZombieCafe::unloadMusic(int) */

void __thiscall ZombieCafe::unloadMusic(ZombieCafe *this,int param_1)

{
  if (*(char *)(*(int *)(this + 0x408) + param_1) != '\0') {
    CCSound::UnloadMusicTrack(param_1);
    *(undefined1 *)(*(int *)(this + 0x408) + param_1) = 0;
  }
  return;
}


