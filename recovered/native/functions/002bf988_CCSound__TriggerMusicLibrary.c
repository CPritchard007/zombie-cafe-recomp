/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf988 CCSound::TriggerMusicLibrary */

/* CCSound::TriggerMusicLibrary(void*, unsigned int) */

void CCSound::TriggerMusicLibrary(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 4) = 1;
    for (uVar2 = 0; uVar2 < *(uint *)((int)param_1 + 0x28); uVar2 = uVar2 + 1) {
      iVar1 = javaIsEffectPlaying(uVar2);
      if (iVar1 != 0) {
        javaStopEffect(uVar2);
      }
    }
    for (uVar2 = 0; uVar2 < *(uint *)((int)param_1 + 0x1c); uVar2 = uVar2 + 1) {
      iVar1 = javaIsMusicPlaying(uVar2);
      if (iVar1 != 0) {
        javaStopMusic(uVar2);
      }
    }
  }
  return;
}


