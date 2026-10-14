/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf80c CCSound::StartMusic */

/* CCSound::StartMusic(void*, unsigned int, float, unsigned int) */

undefined8 CCSound::StartMusic(void *param_1,uint param_2,float param_3,uint param_4)

{
  SSoundEffect *pSVar1;
  int in_r3;
  SSoundEffect *pSVar2;
  undefined4 in_s1;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(in_s1,param_3);
  if (*(int *)((int)param_1 + 4) == 0) {
    pSVar1 = *(SSoundEffect **)((int)param_1 + 0x34);
    pSVar2 = (SSoundEffect *)(*(int *)((int)param_1 + 0x30) + param_2 * 0x118);
    if (pSVar1 != pSVar2) {
      if (pSVar1 != (SSoundEffect *)0x0) {
        uVar3 = L_StopMusic(pSVar1,param_3);
      }
      L_StartMusic((SSoundMgr *)param_1,pSVar2,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
      javaSetMusicLoop(param_2,in_r3 != 0);
      *(SSoundEffect **)((int)param_1 + 0x34) = pSVar2;
    }
  }
  return CONCAT44(param_1,1);
}


