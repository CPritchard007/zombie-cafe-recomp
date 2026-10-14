/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239ae0 ZombieCafe::unloadEffect */

/* ZombieCafe::unloadEffect(int) */

void __thiscall ZombieCafe::unloadEffect(ZombieCafe *this,int param_1)

{
  if (-1 < *(int *)(*(int *)(this + 0x400) + param_1 * 4)) {
    CCSound::UnloadEffect(param_1);
    *(undefined4 *)(*(int *)(this + 0x400) + param_1 * 4) = 0xffffffff;
  }
  return;
}


