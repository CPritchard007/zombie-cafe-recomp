/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf670 CCSound::LoadMusicTrack */

/* CCSound::LoadMusicTrack(void*, char const*, unsigned int) */

void CCSound::LoadMusicTrack(void *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  SSoundEffect *pSVar2;
  
  uVar1 = param_3 + 1;
  if (param_3 + 1 < *(uint *)((int)param_1 + 0x28)) {
    uVar1 = *(uint *)((int)param_1 + 0x28);
  }
  *(uint *)((int)param_1 + 0x28) = uVar1;
  pSVar2 = (SSoundEffect *)(*(int *)((int)param_1 + 0x30) + param_3 * 0x118);
  *(uint *)(pSVar2 + 0x114) = param_3;
  L_LoadIntoMusic(param_2,pSVar2);
  return;
}


