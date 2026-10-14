/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239a1c ZombieCafe::setSoundEnabled */

/* ZombieCafe::setSoundEnabled(bool) */

void __thiscall ZombieCafe::setSoundEnabled(ZombieCafe *this,bool param_1)

{
  int iVar1;
  float extraout_s0;
  
  iVar1 = javaSoundsLoaded();
  if (iVar1 != 0) {
    this[DAT_00239a48] = (ZombieCafe)param_1;
    if (param_1) {
      setSfxVolume(this,(uchar)this[DAT_00239a4c]);
    }
    else {
      CCSound::SetEffectsVolume(extraout_s0);
    }
  }
  return;
}


