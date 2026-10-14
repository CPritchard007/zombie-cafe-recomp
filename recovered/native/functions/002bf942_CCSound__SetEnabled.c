/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf942 CCSound::SetEnabled */

/* CCSound::SetEnabled(void*, unsigned int) */

void CCSound::SetEnabled(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)param_1 = param_2;
  if (param_2 == 0) {
    for (; param_2 < *(uint *)((int)param_1 + 0x1c); param_2 = param_2 + 1) {
      iVar1 = javaIsEffectPlaying(param_2);
      if (iVar1 != 0) {
        javaStopEffect(param_2);
      }
    }
    for (uVar2 = 0; uVar2 < *(uint *)((int)param_1 + 0x28); uVar2 = uVar2 + 1) {
      iVar1 = javaIsMusicPlaying(uVar2);
      if (iVar1 != 0) {
        javaStopMusic(uVar2);
      }
    }
  }
  return;
}


