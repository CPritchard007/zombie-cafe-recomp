/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf854 CCSound::StopMusic */

/* CCSound::StopMusic(void*, float) */

undefined4 CCSound::StopMusic(void *param_1,float param_2)

{
  if (*(SSoundEffect **)((int)param_1 + 0x34) != (SSoundEffect *)0x0) {
    L_StopMusic(*(SSoundEffect **)((int)param_1 + 0x34),param_2);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  return 1;
}


