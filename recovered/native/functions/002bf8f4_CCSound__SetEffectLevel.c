/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf8f4 CCSound::SetEffectLevel */

/* CCSound::SetEffectLevel(void*, unsigned int, float) */

undefined4 __thiscall
CCSound::SetEffectLevel(CCSound *this,void *param_1,uint param_2,float param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(*(int *)(this + 0x24) + (int)param_1 * 0x118);
  *puVar2 = param_2;
  uVar1 = __mulsf3(param_2,*(undefined4 *)(this + 0x18));
  uVar1 = __mulsf3(uVar1,puVar2[2]);
  javaSetEffectVolume(param_1,uVar1);
  return 1;
}


