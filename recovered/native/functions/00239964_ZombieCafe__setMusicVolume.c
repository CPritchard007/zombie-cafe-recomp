/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239964 ZombieCafe::setMusicVolume */

/* ZombieCafe::setMusicVolume(unsigned char) */

void __thiscall ZombieCafe::setMusicVolume(ZombieCafe *this,uchar param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  this[0x3f8] = (ZombieCafe)param_1;
  uVar1 = __floatunsisf(param_1);
  fVar2 = (float)__divsf3(uVar1,DAT_00239980);
  CCSound::SetMusicVolume(fVar2);
  return;
}


