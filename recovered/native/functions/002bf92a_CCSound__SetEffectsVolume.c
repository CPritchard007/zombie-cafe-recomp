/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf92a CCSound::SetEffectsVolume */

/* CCSound::SetEffectsVolume(void*, float) */

undefined4 CCSound::SetEffectsVolume(void *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r1;
  
  *(undefined4 *)((int)param_1 + 0x10) = in_r1;
  uVar1 = __mulsf3(*(undefined4 *)((int)param_1 + 8));
  *(undefined4 *)((int)param_1 + 0x18) = uVar1;
  L_ResetEffectsVolume((SSoundMgr *)param_1);
  return 1;
}


