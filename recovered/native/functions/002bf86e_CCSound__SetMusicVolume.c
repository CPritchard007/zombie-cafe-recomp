/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf86e CCSound::SetMusicVolume */

/* CCSound::SetMusicVolume(void*, float) */

undefined4 CCSound::SetMusicVolume(void *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r1;
  
  *(undefined4 *)((int)param_1 + 0xc) = in_r1;
  uVar1 = __mulsf3(*(undefined4 *)((int)param_1 + 8));
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  L_ResetMusicVolume((SSoundMgr *)param_1);
  return 1;
}


