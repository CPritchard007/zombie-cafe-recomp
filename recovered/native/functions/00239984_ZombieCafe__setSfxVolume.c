/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239984 ZombieCafe::setSfxVolume */

/* ZombieCafe::setSfxVolume(unsigned char) */

void __thiscall ZombieCafe::setSfxVolume(ZombieCafe *this,uchar param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  this[DAT_0023999c] = (ZombieCafe)param_1;
  uVar1 = __floatunsisf(param_1);
  fVar2 = (float)__divsf3(uVar1,DAT_002399a0);
  CCSound::SetEffectsVolume(fVar2);
  return;
}


