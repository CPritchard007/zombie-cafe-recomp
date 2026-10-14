/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf60c CCSound::SetMasterVolume */

/* CCSound::SetMasterVolume(void*, float) */

undefined4 CCSound::SetMasterVolume(void *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r1;
  
  *(undefined4 *)((int)param_1 + 8) = in_r1;
  uVar1 = __mulsf3(in_r1,*(undefined4 *)((int)param_1 + 0xc));
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  uVar1 = __mulsf3(in_r1,*(undefined4 *)((int)param_1 + 0x10));
  *(undefined4 *)((int)param_1 + 0x18) = uVar1;
  L_ResetEffectsVolume((SSoundMgr *)param_1);
  L_ResetMusicVolume((SSoundMgr *)param_1);
  return 1;
}


