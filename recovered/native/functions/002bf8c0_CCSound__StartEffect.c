/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf8c0 CCSound::StartEffect */

/* CCSound::StartEffect(void*, unsigned int, float) */

undefined4 __thiscall CCSound::StartEffect(CCSound *this,void *param_1,uint param_2,float param_3)

{
  float in_s1;
  
  if (*(int *)(this + 4) == 0) {
    L_StartEffect((SSoundMgr *)this,(SSoundEffect *)(*(int *)(this + 0x24) + (int)param_1 * 0x118),
                  param_3,in_s1);
  }
  return 1;
}


