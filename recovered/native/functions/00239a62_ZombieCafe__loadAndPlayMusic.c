/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239a62 ZombieCafe::loadAndPlayMusic */

/* ZombieCafe::loadAndPlayMusic(int, int, float, bool) */

void __thiscall
ZombieCafe::loadAndPlayMusic(ZombieCafe *this,int param_1,int param_2,float param_3,bool param_4)

{
  undefined1 in_stack_00000000;
  
  javaLoadAndPlayMusic(param_1,param_2,param_4,in_stack_00000000);
  setMusicVolume(this,(uchar)this[0x3f8]);
  return;
}


