/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf8de CCSound::StopEffect */

/* CCSound::StopEffect(void*, unsigned int, float) */

undefined4 CCSound::StopEffect(void *param_1,uint param_2,float param_3)

{
  L_StopEffect((SSoundEffect *)(*(int *)((int)param_1 + 0x24) + param_2 * 0x118),param_3);
  return 1;
}


